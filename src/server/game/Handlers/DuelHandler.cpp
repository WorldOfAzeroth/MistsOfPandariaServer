/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Common.h"
#include "GameTime.h"
#include "WorldPacket.h"
#include "WorldSession.h"
#include "Log.h"
#include "Player.h"
#include "ObjectAccessor.h"

#define SPELL_DUEL         7266
#define SPELL_MOUNTED_DUEL 62875

void WorldSession::HandleDuelProposedOpcode(WorldPacket &recvPacket) {
    TC_LOG_DEBUG("network", "WORLD: Received CMSG_DUEL_PROPOSED");
    ObjectGuid guid;
    recvPacket >> guid;
    if (Player *player = ObjectAccessor::FindPlayer(guid)) {
        if (_player->IsMounted())
            _player->CastSpell(player, SPELL_MOUNTED_DUEL, false);
        else
            _player->CastSpell(player, SPELL_DUEL, false);
    }

}

void WorldSession::HandleDuelResponseOpcode(WorldPacket &recvPacket) {
    TC_LOG_DEBUG("network", "WORLD: Received CMSG_DUEL_PROPOSED");
    ObjectGuid guid;
    Player *player;
    Player *plTarget;

    recvPacket >> guid;
    bool accepted = recvPacket.ReadBit();

    if (!GetPlayer()->duel)                                  // ignore accept from duel-sender
        return;
    if (accepted) {
        player = GetPlayer();
        plTarget = player->duel->opponent;

        if (player == player->duel->initiator || !plTarget || player == plTarget || player->duel->startTime != 0 ||
            plTarget->duel->startTime != 0)
            return;

            //TC_LOG_DEBUG("network", "WORLD: Received CMSG_DUEL_ACCEPTED");
        TC_LOG_DEBUG("network", "Player 1 is: %u (%s)", player->GetGUID().GetCounter(), player->GetName().c_str());
        TC_LOG_DEBUG("network", "Player 2 is: %u (%s)", plTarget->GetGUID().GetCounter(), plTarget->GetName().c_str());

        time_t now = GameTime::GetGameTime();
        player->duel->startTimer = now;
        plTarget->duel->startTimer = now;

        player->SendDuelCountdown(3000);
        plTarget->SendDuelCountdown(3000);
    } else {
        // player surrendered in a duel using /forfeit
        if (GetPlayer()->duel->startTime != 0) {
            GetPlayer()->CombatStopWithPets(true);
            if (GetPlayer()->duel->opponent)
                GetPlayer()->duel->opponent->CombatStopWithPets(true);

            GetPlayer()->CastSpell(GetPlayer(), 7267, true);    // beg
            GetPlayer()->DuelComplete(DUEL_WON);
            return;
        }

        GetPlayer()->DuelComplete(DUEL_INTERRUPTED);
    }
}
