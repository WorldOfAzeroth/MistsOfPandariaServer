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

/// \addtogroup u2w
/// @{
/// \file

#ifndef _OPCODES_H
#define _OPCODES_H

#include "Define.h"
#include <string>

enum OpcodeClient : uint16
{
    CMSG_ACCEPT_LEVEL_GRANT                            = 0x02FB, // 5.4.8 18414
    CMSG_ACCEPT_TRADE                                  = 0x144D, // 5.4.8 18414
    CMSG_ACTIVATE_TAXI                                 = 0x03C9, // 5.4.8 18414
    CMSG_ACTIVATE_TAXI_EXPRESS                         = 0x06FB, // 5.4.8 18414
    CMSG_ADDON_REGISTERED_PREFIXES                     = 0x040E, // 5.4.8 18414
    CMSG_ADD_FRIEND                                    = 0x09A6, // 5.4.8 18414
    CMSG_ADD_IGNORE                                    = 0x0D20, // 5.4.8 18414
    CMSG_ALTER_APPEARANCE                              = 0x07F0, // 5.4.8 18414
    CMSG_AREATRIGGER                                   = 0x1C44, // 5.4.8 18414
    CMSG_AREA_SPIRIT_HEALER_QUEUE                      = 0x12D8, // 5.4.8 18414
    CMSG_ATTACK_STOP                                   = 0x0345, // 5.4.8 18414
    CMSG_ATTACK_SWING                                  = 0x02E7, // 5.4.8 18414
    CMSG_AUCTION_HELLO_REQUEST                         = 0x0379, // 5.4.8 18414
    CMSG_AUCTION_LIST_BIDDER_ITEMS                     = 0x12D0, // 5.4.8 18414
    CMSG_AUCTION_LIST_ITEMS                            = 0x02EA, // 5.4.8 18414
    CMSG_AUCTION_LIST_OWNER_ITEMS                      = 0x0361, // 5.4.8 18414
    CMSG_AUCTION_PLACE_BID                             = 0x03C8, // 5.4.8 18414
    CMSG_AUCTION_REMOVE_ITEM                           = 0x0259, // 5.4.8 18414
    CMSG_AUCTION_SELL_ITEM                             = 0x02EB, // 5.4.8 18414
    CMSG_AUTH_SESSION                                  = 0x00B2, // 5.4.8 18414
    CMSG_AUTH_CONTINUED_SESSION                        = 0x0F49, // 5.4.8 18414
    CMSG_AUTOBANK_ITEM                                 = 0x066D, // 5.4.8 18414
    CMSG_AUTOEQUIP_ITEM                                = 0x025F, // 5.4.8 18414
    CMSG_AUTOSTORE_BAG_ITEM                            = 0x067C, // 5.4.8 18414
    CMSG_AUTOSTORE_BANK_ITEM                           = 0x02CF, // 5.4.8 18414
    CMSG_AUTOSTORE_LOOT_ITEM                           = 0x0354, // 5.4.8 18414
    CMSG_AUTO_DECLINE_GUILD_INVITES                    = 0x06CB, // 5.4.8 18414
    CMSG_BANKER_ACTIVATE                               = 0x02E9, // 5.4.8 18414
    CMSG_BATTLEFIELD_LEAVE                             = 0x0257, // 5.4.8 18414
    CMSG_BATTLEFIELD_LIST                              = 0x1C41, // 5.4.8 18414
    CMSG_BATTLEFIELD_MGR_ENTRY_INVITE_RESPONSE         = 0x1806, // 5.4.8 18414
    CMSG_BATTLEFIELD_MGR_EXIT_REQUEST                  = 0x08B3, // 5.4.8 18414
    CMSG_BATTLEFIELD_MGR_QUEUE_INVITE_RESPONSE         = 0x0A97, // 5.4.8 18414
    CMSG_BATTLEFIELD_PORT                              = 0x1379, // 5.4.8 18414
    CMSG_BATTLEFIELD_RATED_INFO_REQUEST                = 0x0826, // 5.4.8 18414
    CMSG_BATTLEMASTER_JOIN                             = 0x0769, // 5.4.8 18414
    CMSG_BATTLEMASTER_JOIN_ARENA                       = 0x02D2, // 5.4.8 18414
    CMSG_BATTLE_CHAR_BOOST                             = 0x08E3, // 5.4.8 18414
    CMSG_PET_BATTLE_START_PVP_MATCHMAKING              = 0x06D4, // 5.4.8 18414
    CMSG_PET_BATTLE_STOP_PVP_MATCHMAKING               = 0x08C1, // 5.4.8 18414
    CMSG_BATTLE_PET_DELETE_PET                         = 0x18B6, // 5.4.8 18414
    CMSG_BATTLE_PET_MODIFY_NAME                        = 0x1887, // 5.4.8 18414
    CMSG_BATTLE_PET_QUERY_NAME                         = 0x1CE0, // 5.4.8 18414
    CMSG_BATTLE_PET_SET_BATTLE_SLOT                    = 0x0163, // 5.4.8 18414
    CMSG_BATTLE_PET_SET_FLAGS                          = 0x17AC, // 5.4.8 18414
    CMSG_BATTLE_PET_SUMMON_COMPANION                   = 0x1896, // 5.4.8 18414
    CMSG_BEGIN_TRADE                                   = 0x1CE3, // 5.4.8 18414
    CMSG_BINDER_ACTIVATE                               = 0x1248, // 5.4.8 18414
    CMSG_BLACKMARKET_BID                               = 0x12C8, // 5.4.8 18414
    CMSG_BLACKMARKET_HELLO                             = 0x075A, // 5.4.8 18414
    CMSG_BLACKMARKET_REQUEST_ITEMS                     = 0x127A, // 5.4.8 18414
    CMSG_BUYBACK_ITEM                                  = 0x0661, // 5.4.8 18414
    CMSG_BUY_BANK_SLOT                                 = 0x12F2, // 5.4.8 18414
    CMSG_BUY_ITEM                                      = 0x02E2, // 5.4.8 18414
    CMSG_CALENDAR_ADD_EVENT                            = 0x0A37, // 5.4.8 18414
    CMSG_CALENDAR_COMPLAIN                             = 0x1F8F, // 5.4.8 18414
    CMSG_CALENDAR_COPY_EVENT                           = 0x1A97, // 5.4.8 18414
    CMSG_CALENDAR_EVENT_INVITE                         = 0x1D8E, // 5.4.8 18414
    CMSG_CALENDAR_EVENT_MODERATOR_STATUS               = 0x0708, // 5.4.8 18414
    CMSG_CALENDAR_EVENT_REMOVE_INVITE                  = 0x0962, // 5.4.8 18414
    CMSG_CALENDAR_EVENT_RSVP                           = 0x1FB8, // 5.4.8 18414
    CMSG_CALENDAR_EVENT_SIGNUP                         = 0x01E3, // 5.4.8 18414
    CMSG_CALENDAR_EVENT_STATUS                         = 0x1AB3, // 5.4.8 18414
    CMSG_CALENDAR_GET_CALENDAR                         = 0x1F9F, // 5.4.8 18414
    CMSG_CALENDAR_GET_EVENT                            = 0x030C, // 5.4.8 18414
    CMSG_CALENDAR_REMOVE_EVENT                         = 0x0C61, // 5.4.8 18414
    CMSG_CALENDAR_UPDATE_EVENT                         = 0x1F8D, // 5.4.8 18414
    CMSG_CANCEL_AURA                                   = 0x1861, // 5.4.8 18414
    CMSG_CANCEL_AUTO_REPEAT_SPELL                      = 0x1272, // 5.4.8 18414
    CMSG_CANCEL_CAST                                   = 0x18C0, // 5.4.8 18414
    CMSG_CANCEL_CHANNELLING                            = 0x08C0, // 5.4.8 18414
    CMSG_CANCEL_MOUNT_AURA                             = 0x10E3, // 5.4.8 18414
    CMSG_CANCEL_TEMP_ENCHANTMENT                       = 0x024B, // 5.4.8 18414
    CMSG_CANCEL_TRADE                                  = 0x1941, // 5.4.8 18414
    CMSG_CAST_SPELL                                    = 0x0206, // 5.4.8 18414
    CMSG_CHANGE_SEATS_ON_CONTROLLED_VEHICLE            = 0x08F8, // 5.4.8 18414
    CMSG_GROUP_CHANGE_SUB_GROUP                        = 0x1799, // 5.4.8 18414
    CMSG_CHAT_CHANNEL_ANNOUNCEMENTS                    = 0x06AF, // 5.4.8 18414
    CMSG_CHAT_CHANNEL_BAN                              = 0x08BF, // 5.4.8 18414
    CMSG_CHAT_CHANNEL_INVITE                           = 0x10AB, // 5.4.8 18414
    CMSG_CHAT_CHANNEL_KICK                             = 0x0E0B, // 5.4.8 18414
    CMSG_CHAT_CHANNEL_LIST                             = 0x0C1B, // 5.4.8 18414
    CMSG_CHAT_CHANNEL_MODERATOR                        = 0x00AE, // 5.4.8 18414
    CMSG_CHAT_CHANNEL_MUTE                             = 0x000A, // 5.4.8 18414
    CMSG_CHAT_CHANNEL_OWNER                            = 0x00AF, // 5.4.8 18414
    CMSG_CHAT_CHANNEL_PASSWORD                         = 0x0A1E, // 5.4.8 18414
    CMSG_CHAT_CHANNEL_UNBAN                            = 0x081F, // 5.4.8 18414
    CMSG_CHAT_CHANNEL_UNMODERATOR                      = 0x041E, // 5.4.8 18414
    CMSG_CHAT_CHANNEL_UNMUTE                           = 0x022A, // 5.4.8 18414
    CMSG_CHAR_CREATE                                   = 0x0F1D, // 5.4.8 18414
    CMSG_CHAR_CUSTOMIZE                                = 0x0A13, // 5.4.8 18414
    CMSG_CHAR_DELETE                                   = 0x04E2, // 5.4.8 18414
    CMSG_ENUM_CHARACTERS                               = 0x00E0, // 5.4.8 18414
    CMSG_EJECT_PASSENGER                               = 0x06E7, // 5.4.8 18414
    CMSG_CHAR_FACTION_OR_RACE_CHANGE                   = 0x0329, // 5.4.8 18414
    CMSG_CHAR_RENAME                                   = 0x0963, // 5.4.8 18414
    CMSG_CHAT_IGNORED                                  = 0x048A, // 5.4.8 18414
    CMSG_JOIN_CHANNEL                                  = 0x148E, // 5.4.8 18414
    CMSG_CLEAR_TRADE_ITEM                              = 0x00A7, // 5.4.8 18414
    CMSG_CONFIRM_RESPEC_WIPE                           = 0x0275, // 5.4.8 18414
    CMSG_CONTACT_LIST                                  = 0x0BB4, // 5.4.8 18414
    CMSG_CORPSE_MAP_POSITION_QUERY                     = 0x0000,
    CMSG_CREATURE_QUERY                                = 0x0842, // 5.4.8 18414
    CMSG_DEL_FRIEND                                    = 0x1103, // 5.4.8 18414
    CMSG_DEL_IGNORE                                    = 0x0737, // 5.4.8 18414
    CMSG_DESTROY_ITEM                                  = 0x0026, // 5.4.8 18414
    CMSG_DISMISS_CRITTER                               = 0x12DB, // 5.4.8 18414
    CMSG_DUEL_PROPOSED                                 = 0x1A26, // 5.4.8 18414
    CMSG_DUEL_RESPONSE                                 = 0x03E2, // 5.4.8 18414
    CMSG_EMOTE                                         = 0x1924, // 5.4.8 18414
    CMSG_ENABLE_TAXI                                   = 0x0741, // 5.4.8 18414
    CMSG_EQUIPMENT_SET_DELETE                          = 0x02E8, // 5.4.8 18414
    CMSG_EQUIPMENT_SET_SAVE                            = 0x0669, // 5.4.8 18414
    CMSG_EQUIPMENT_SET_USE                             = 0x036E, // 5.4.8 18414
    CMSG_FAR_SIGHT                                     = 0x1341, // 5.4.8 18414
    CMSG_FORCE_MOVE_ROOT_ACK                           = 0x107A, // 5.4.8 18414
    CMSG_FORCE_MOVE_UNROOT_ACK                         = 0x1051, // 5.4.8 18414
    CMSG_GAMEOBJECT_QUERY                              = 0x1461, // 5.4.8 18414
    CMSG_GAME_OBJ_USE                                  = 0x06D9, // 5.4.8 18414
    CMSG_GAME_OBJ_REPORT_USE                           = 0x06D8, // 5.4.8 18414
    CMSG_GET_MAIL_LIST                                 = 0x077A, // 5.4.8 18414
    CMSG_GET_MIRROR_IMAGE_DATA                         = 0x02A3, // 5.4.8 18414
    CMSG_GM_TICKET_CREATE                              = 0x1A86, // 5.4.8 18414
    CMSG_GM_TICKET_DELETE_TICKET                       = 0x1A23, // 5.4.8 18414
    CMSG_GM_TICKET_GET_TICKET                          = 0x1F89, // 5.4.8 18414
    CMSG_GM_TICKET_SYSTEM_STATUS                       = 0x0A82, // 5.4.8 18414
    CMSG_GM_TICKET_CASE_STATUS                         = 0x15A8, // 5.4.8 18414
    CMSG_GM_TICKET_UPDATE_TEXT                         = 0x0A26, // 5.4.8 18414
    CMSG_GOSSIP_HELLO                                  = 0x12F3, // 5.4.8 18414
    CMSG_GOSSIP_SELECT_OPTION                          = 0x0748, // 5.4.8 18414
    CMSG_GRANT_LEVEL                                   = 0x0662, // 5.4.8 18414
    CMSG_GROUP_ASSISTANT_LEADER                        = 0x1897, // 5.4.8 18414
    CMSG_GROUP_DISBAND                                 = 0x1798, // 5.4.8 18414
    CMSG_GROUP_INITIATE_ROLE_POLL                      = 0x1882, // 5.4.8 18414
    CMSG_PARTY_INVITE                                  = 0x072D, // 5.4.8 18414
    CMSG_PARTY_INVITE_RESPONSE                         = 0x0D61, // 5.4.8 18414
    CMSG_GROUP_RAID_CONVERT                            = 0x032C, // 5.4.8 18414
    CMSG_GROUP_SET_LEADER                              = 0x15BB, // 5.4.8 18414
    CMSG_GROUP_SET_ROLES                               = 0x1A92, // 5.4.8 18414
    CMSG_GROUP_UNINVITE_GUID                           = 0x0CE1, // 5.4.8 18414
    CMSG_GUILD_ACCEPT                                  = 0x18A2, // 5.4.8 18414
    CMSG_GUILD_ACHIEVEMENT_PROGRESS_QUERY              = 0x1552, // 5.4.8 18414
    CMSG_GUILD_ADD_RANK                                = 0x047A, // 5.4.8 18414
    CMSG_GUILD_ASSIGN_MEMBER_RANK                      = 0x05D0, // 5.4.8 18414
    CMSG_GUILD_BANK_ACTIVATE                           = 0x0372, // 5.4.8 18414
    CMSG_GUILD_BANK_BUY_TAB                            = 0x0251, // 5.4.8 18414
    CMSG_GUILD_BANK_DEPOSIT_MONEY                      = 0x0770, // 5.4.8 18414
    CMSG_GUILD_BANK_LOG_QUERY                          = 0x0CD3, // 5.4.8 18414
    CMSG_GUILD_BANK_MONEY_WITHDRAWN_QUERY              = 0x14DB, // 5.4.8 18414
    CMSG_GUILD_BANK_NOTE                               = 0x04D9, // 5.4.8 18414
    CMSG_GUILD_BANK_QUERY_TAB                          = 0x1372, // 5.4.8 18414
    CMSG_GUILD_BANK_TEXT_QUERY                         = 0x0550, // 5.4.8 18414
    CMSG_GUILD_BANK_SWAP_ITEMS                         = 0x136A, // 5.4.8 18414
    CMSG_GUILD_BANK_UPDATE_TAB                         = 0x07C2, // 5.4.8 18414
    CMSG_GUILD_BANK_WITHDRAW_MONEY                     = 0x07EA, // 5.4.8 18414
    CMSG_GUILD_DECLINE                                 = 0x147B, // 5.4.8 18414
    CMSG_GUILD_DEL_RANK                                = 0x0D79, // 5.4.8 18414
    CMSG_GUILD_DEMOTE                                  = 0x1553, // 5.4.8 18414
    CMSG_GUILD_DISBAND                                 = 0x0D73, // 5.4.8 18414
    CMSG_GUILD_EVENT_LOG_QUERY                         = 0x15D9, // 5.4.8 18414
    CMSG_GUILD_INFO_TEXT                               = 0x0C70, // 5.4.8 18414
    CMSG_GUILD_INVITE                                  = 0x0869, // 5.4.8 18414
    CMSG_GUILD_LEAVE                                   = 0x04D8, // 5.4.8 18414
    CMSG_GUILD_MOTD                                    = 0x1473, // 5.4.8 18414
    CMSG_GUILD_NEWS_UPDATE_STICKY                      = 0x04D1, // 5.4.8 18414
    CMSG_GUILD_PERMISSIONS_QUERY                       = 0x145A, // 5.4.8 18414
    CMSG_GUILD_PROMOTE                                 = 0x0571, // 5.4.8 18414
    CMSG_GUILD_QUERY                                   = 0x1AB6, // 5.4.8 18414
    CMSG_GUILD_QUERY_NEWS                              = 0x1C58, // 5.4.8 18414
    CMSG_GUILD_QUERY_RANKS                             = 0x0D50, // 5.4.8 18414
    CMSG_GUILD_REMOVE                                  = 0x0CD8, // 5.4.8 18414
    CMSG_GUILD_REPLACE_GUILD_MASTER                    = 0x0CD0, // 5.4.8 18414
    CMSG_GUILD_REQUEST_CHALLENGE_UPDATE                = 0x147A, // 5.4.8 18414
    CMSG_GUILD_REQUEST_PARTY_STATE                     = 0x10C3, // 5.4.8 18414
    CMSG_GUILD_GET_ROSTER                              = 0x1459, // 5.4.8 18414
    CMSG_GUILD_SET_GUILD_MASTER                        = 0x1A83, // 5.4.8 18414
    CMSG_GUILD_SET_NOTE                                = 0x05DA, // 5.4.8 18414
    CMSG_GUILD_SET_RANK_PERMISSIONS                    = 0x0C7A, // 5.4.8 18414
    CMSG_IGNORE_TRADE                                  = 0x0276, // 5.4.8 18414
    CMSG_INITIATE_TRADE                                = 0x0267, // 5.4.8 18414
    CMSG_INSPECT                                       = 0x1259, // 5.4.8 18414
    CMSG_INSPECT_HONOR_STATS                           = 0x19C3, // 5.4.8 18414
    CMSG_INSTANCE_LOCK_WARNING_RESPONSE                = 0x12C0, // 5.4.8 18414
    CMSG_ITEM_TEXT_QUERY                               = 0x0123, // 5.4.8 18414 // LEGACY CMSG sub_600632
    CMSG_ITEM_REFUND_INFO                              = 0x1258, // 5.4.8 18414
    CMSG_KEEP_ALIVE                                    = 0x1A87, // 5.4.8 18414
    CMSG_LEARN_TALENT                                  = 0x02A7, // 5.4.8 18414
    CMSG_LEAVE_CHANNEL                                 = 0x042A, // 5.4.8 18414
    CMSG_LFG_JOIN                                      = 0x046B, // 5.4.8 18414
    CMSG_LFG_PROPOSAL_RESULT                           = 0x1D9D, // 5.4.8 18414
    CMSG_LFG_LEAVE                                     = 0x01E0, // 5.4.8 18414
    CMSG_LFG_LOCK_INFO_REQUEST                         = 0x006B, // 5.4.8 18414
    CMSG_LFG_TELEPORT                                  = 0x1AA6, // 5.4.8 18414
    CMSG_LFG_SET_BOOT_VOTE                             = 0x17BE, // 5.4.8 18414
    CMSG_LF_GUILD_ADD_RECRUIT                          = 0x0C63, // 5.4.8 18414
    CMSG_LF_GUILD_BROWSE                               = 0x159A, // 5.4.8 18414
    CMSG_LF_GUILD_DECLINE_RECRUIT                      = 0x14F3, // 5.4.8 18414
    CMSG_LF_GUILD_GET_APPLICATIONS                     = 0x0558, // 5.4.8 18414
    CMSG_LF_GUILD_GET_RECRUITS                         = 0x057A, // 5.4.8 18414
    CMSG_LF_GUILD_REMOVE_RECRUIT                       = 0x1C53, // 5.4.8 18414
    CMSG_LF_GUILD_SET_GUILD_POST                       = 0x1D9F, // 5.4.8 18414
    CMSG_LIST_INVENTORY                                = 0x02D8, // 5.4.8 18414
    CMSG_LOADING_SCREEN_NOTIFY                         = 0x1DBD, // 5.4.8 18414
    CMSG_LOGOUT_CANCEL                                 = 0x06C1, // 5.4.8 18414
    CMSG_LOGOUT_REQUEST                                = 0x1349, // 5.4.8 18414
    CMSG_LOOT                                          = 0x1CE2, // 5.4.8 18414
    CMSG_LOOT_METHOD                                   = 0x0DE1, // 5.4.8 18414
    CMSG_LOOT_MONEY                                    = 0x02F6, // 5.4.8 18414
    CMSG_LOOT_RELEASE                                  = 0x0840, // 5.4.8 18414
    CMSG_LOOT_ROLL                                     = 0x15C2, // 5.4.8 18414
    CMSG_MAIL_CREATE_TEXT_ITEM                         = 0x1270, // 5.4.8 18414
    CMSG_MAIL_DELETE                                   = 0x14E2, // 5.4.8 18414
    CMSG_MAIL_MARK_AS_READ                             = 0x0241, // 5.4.8 18414
    CMSG_MAIL_QUERY_NEXT_TIME                          = 0x077B, // 5.4.8 18414
    CMSG_MAIL_RETURN_TO_SENDER                         = 0x1FA8, // 5.4.8 18414
    CMSG_MAIL_TAKE_ITEM                                = 0x1371, // 5.4.8 18414
    CMSG_MAIL_TAKE_MONEY                               = 0x06FA, // 5.4.8 18414
    CMSG_MESSAGECHAT_ADDON_WHISPER                     = 0x0EBB, // 5.4.8 18414
    CMSG_MESSAGECHAT_AFK                               = 0x0EAB, // 5.4.8 18414
    CMSG_MESSAGECHAT_CHANNEL                           = 0x00BB, // 5.4.8 18414
    CMSG_MESSAGECHAT_DND                               = 0x002E, // 5.4.8 18414
    CMSG_MESSAGECHAT_EMOTE                             = 0x103E, // 5.4.8 18414
    CMSG_MESSAGECHAT_GUILD                             = 0x0CAE, // 5.4.8 18414
    CMSG_MESSAGECHAT_OFFICER                           = 0x0ABF, // 5.4.8 18414
    CMSG_MESSAGECHAT_PARTY                             = 0x109A, // 5.4.8 18414
    CMSG_MESSAGECHAT_RAID                              = 0x083E, // 5.4.8 18414
    CMSG_MESSAGECHAT_RAID_WARNING                      = 0x16AB, // 5.4.8 18414
    CMSG_MESSAGECHAT_SAY                               = 0x0A9A, // 5.4.8 18414
    CMSG_MESSAGECHAT_WHISPER                           = 0x123E, // 5.4.8 18414
    CMSG_MESSAGECHAT_YELL                              = 0x04AA, // 5.4.8 18414
    CMSG_MINIMAP_PING                                  = 0x0837, // 5.4.8 18414
    CMSG_MOUNTSPECIAL_ANIM                             = 0x0082, // 5.4.8 18414
    CMSG_MOVE_CHNG_TRANSPORT                           = 0x09DB, // 5.4.8 18414
    CMSG_MOVE_KNOCK_BACK_ACK                           = 0x00F2, // 5.4.8 18414
    CMSG_MOVE_SPLINE_DONE                              = 0x11D9, // 5.4.8 18414
    CMSG_MOVE_TELEPORT_ACK                             = 0x0078, // 5.4.8 18414
    CMSG_MOVE_TIME_SKIPPED                             = 0x0150, // 5.4.8 18414
    CMSG_NAME_QUERY                                    = 0x0328, // 5.4.8 18414
    CMSG_REALM_NAME_QUERY                              = 0x1A16, // 5.4.8 18414
    CMSG_NPC_TEXT_QUERY                                = 0x0287, // 5.4.8 18414
    CMSG_OBJECT_UPDATE_FAILED                          = 0x1061, // 5.4.8 18414
    CMSG_OFFER_PETITION                                = 0x15BE, // 5.4.8 18414
    CMSG_OPENING_CINEMATIC                             = 0x0130, // 5.4.8 18414
    CMSG_OPEN_ITEM                                     = 0x1D10, // 5.4.8 18414
    CMSG_PAGE_TEXT_QUERY                               = 0x1022, // 5.4.8 18414
    CMSG_PETITION_BUY                                  = 0x12D9, // 5.4.8 18414
    CMSG_PETITION_DECLINE                              = 0x1279, // 5.4.8 18414
    CMSG_PETITION_RENAME                               = 0x1F9A, // 5.4.8 18414
    CMSG_PETITION_QUERY                                = 0x0255, // 5.4.8 18414
    CMSG_PETITION_SHOWLIST                             = 0x037B, // 5.4.8 18414
    CMSG_PETITION_SHOW_SIGNATURES                      = 0x136B, // 5.4.8 18414
    CMSG_PETITION_SIGN                                 = 0x06DA, // 5.4.8 18414
    CMSG_PET_ABANDON                                   = 0x07D0, // 5.4.8 18414
    CMSG_PET_ACTION                                    = 0x025B, // 5.4.8 18414
    CMSG_PET_NAME_QUERY                                = 0x1C62, // 5.4.8 18414
    CMSG_PET_RENAME                                    = 0x0A32, // 5.4.8 18414
    CMSG_PET_SET_ACTION                                = 0x12E9, // 5.4.8 18414
    CMSG_PET_SPELL_AUTOCAST                            = 0x06F0, // 5.4.8 18414
    CMSG_PET_STOP_ATTACK                               = 0x065B, // 5.4.8 18414
    CMSG_REQUEST_PLAYED_TIME                           = 0x03F6, // 5.4.8 18414
    CMSG_REQUEST_RAID_INFO                             = 0x0A87, // 5.4.8 18414
    CMSG_REQUEST_VEHICLE_EXIT                          = 0x1DC3, // 5.4.8 18414
    CMSG_REQUEST_VEHICLE_NEXT_SEAT                     = 0x0141, // 5.4.8 18414
    CMSG_REQUEST_VEHICLE_PREV_SEAT                     = 0x03C4, // 5.4.8 18414
    CMSG_REQUEST_VEHICLE_SWITCH_SEAT                   = 0x1143, // 5.4.8 18414
    CMSG_PLAYER_LOGIN                                  = 0x158F, // 5.4.8 18414
    CMSG_PUSHQUESTTOPARTY                              = 0x03D2, // 5.4.8 18414
    CMSG_PVP_LOG_DATA                                  = 0x14C2, // 5.4.8 18414
    CMSG_REQUEST_GUILD_REWARDS_LIST                    = 0x06C4, // 5.4.8 18414
    CMSG_GUILD_XP_QUERY                                = 0x05F8, // 5.4.8 18414
    CMSG_QUERY_INSPECT_ACHIEVEMENTS                    = 0x0373, // 5.4.8 18414
    CMSG_QUERY_TIME                                    = 0x0640, // 5.4.8 18414
    CMSG_QUEST_GIVER_ACCEPT_QUEST                      = 0x06D1, // 5.4.8 18414
    CMSG_QUEST_GIVER_CHOOSE_REWARD                     = 0x07CB, // 5.4.8 18414
    CMSG_QUEST_GIVER_COMPLETE_QUEST                    = 0x0659, // 5.4.8 18414
    CMSG_QUEST_GIVER_HELLO                             = 0x02DB, // 5.4.8 18414
    CMSG_QUEST_GIVER_QUERY_QUEST                       = 0x12F0, // 5.4.8 18414
    CMSG_QUEST_GIVER_REQUEST_REWARD                    = 0x0378, // 5.4.8 18414
    CMSG_QUEST_GIVER_STATUS_MULTIPLE_QUERY             = 0x02F1, // 5.4.8 18414
    CMSG_QUEST_GIVER_STATUS_QUERY                      = 0x036A, // 5.4.8 18414
    CMSG_QUEST_LOG_REMOVE_QUEST                        = 0x0779, // 5.4.8 18414
    CMSG_QUEST_CONFIRM_ACCEPT                          = 0x124B, // 5.4.8 18414
    CMSG_QUEST_POI_QUERY                               = 0x10C2, // 5.4.8 18414
    CMSG_QUEST_QUERY                                   = 0x02D5, // 5.4.8 18414
    CMSG_RAID_READY_CHECK                              = 0x0817, // 5.4.8 18414
    CMSG_RAID_READY_CHECK_CONFIRM                      = 0x158B, // 5.4.8 18414
    CMSG_RAID_TARGET_UPDATE                            = 0x0886, // 5.4.8 18414
    CMSG_RANDOM_ROLL                                   = 0x08A3, // 5.4.8 18414
    CMSG_RANDOMIZE_CHAR_NAME                           = 0x0B1C, // 5.4.8 18414
    CMSG_READY_FOR_ACCOUNT_DATA_TIMES                  = 0x031C, // 5.4.8 18414
    CMSG_READ_ITEM                                     = 0x0D00, // 5.4.8 18414
    CMSG_RECLAIM_CORPSE                                = 0x03D3, // 5.4.8 18414
    CMSG_REFORGE_ITEM                                  = 0x0C4F, // 5.4.8 18414
    CMSG_REORDER_CHARACTERS                            = 0x08A7, // 5.4.8 18414
    CMSG_REPAIR_ITEM                                   = 0x02C1, // 5.4.8 18414
    CMSG_REPOP_REQUEST                                 = 0x134A, // 5.4.8 18414
    CMSG_REPORT_PVP_AFK                                = 0x06F9, // 5.4.8 18414
    CMSG_REQUEST_ACCOUNT_DATA                          = 0x1D8A, // 5.4.8 18414
    CMSG_REQUEST_CEMETERY_LIST                         = 0x06E4, // 5.4.8 18414
    CMSG_REQUEST_HOTFIX                                = 0x158D, // 5.4.8 18414
    CMSG_REQUEST_PARTY_MEMBER_STATS                    = 0x0806, // 5.4.8 18414
    CMSG_REQUEST_PVP_OPTIONS_ENABLED                   = 0x0A22, // 5.4.8 18414
    CMSG_REQUEST_PVP_REWARDS                           = 0x0375, // 5.4.8 18414
    CMSG_RESET_INSTANCES                               = 0x0C69, // 5.4.8 18414
    CMSG_RESURRECT_RESPONSE                            = 0x0B0C, // 5.4.8 18414
    CMSG_RETURN_TO_GRAVEYARD                           = 0x12EA, // 5.4.8 18414
    CMSG_RIDE_VEHICLE_INTERACT                         = 0x0277, // 5.4.8 18414
    CMSG_SCENE_COMPLETED                               = 0x0087, // 5.4.8 18414
    CMSG_SELF_RES                                      = 0x0360, // 5.4.8 18414
    CMSG_SELL_ITEM                                     = 0x1358, // 5.4.8 18414
    CMSG_SELECT_FACTION                                = 0x0027, // 5.4.8 18414
    CMSG_SEND_MAIL                                     = 0x1DBA, // 5.4.8 18414
    CMSG_SET_SHEATHED                                  = 0x0249, // 5.4.8 18414
    CMSG_SET_ACTIONBAR_TOGGLES                         = 0x0672, // 5.4.8 18414
    CMSG_SET_ACTION_BUTTON                             = 0x1F8C, // 5.4.8 18414
    CMSG_SET_ACTIVE_MOVER                              = 0x09F0, // 5.4.8 18414
    CMSG_SET_CONTACT_NOTES                             = 0x0937, // 5.4.8 18414
    CMSG_SET_DUNGEON_DIFFICULTY                        = 0x1A36, // 5.4.8 18414
    CMSG_SET_EVERYONE_IS_ASSISTANT                     = 0x01E1, // 5.4.8 18414
    CMSG_SET_FACTION_ATWAR                             = 0x027B, // 5.4.8 18414
    CMSG_SET_FACTION_INACTIVE                          = 0x0778, // 5.4.8 18414
    CMSG_SET_FACTION_NOTATWAR                          = 0x064B, // 5.4.8 18414
    CMSG_SET_LFG_BONUS_FACTION_ID                      = 0x0247, // 5.4.8 18414
    CMSG_SET_PARTY_ASSIGNMENT                          = 0x1802, // 5.4.8 18414
    CMSG_SET_PLAYER_DECLINED_NAMES                     = 0x09E2, // 5.4.8 18414
    CMSG_SET_PRIMARY_TALENT_TREE                       = 0x06C6, // 5.4.8 18414
    CMSG_SET_PET_TALENT_TREE                           = 0x1463, // 5.4.8 18414
    CMSG_SET_PVP                                       = 0x02C5, // 5.4.8 18414
    CMSG_SET_RAID_DIFFICULTY                           = 0x0591, // 5.4.8 18414
    CMSG_SET_SELECTION                                 = 0x0740, // 5.4.8 18414
    CMSG_SET_TAXI_BENCHMARK_MODE                       = 0x0762, // 5.4.8 18414
    CMSG_SET_TITLE                                     = 0x03C7, // 5.4.8 18414
    CMSG_SET_TRADE_GOLD                                = 0x14E3, // 5.4.8 18414
    CMSG_SET_TRADE_ITEM                                = 0x03D5, // 5.4.8 18414
    CMSG_SET_WATCHED_FACTION                           = 0x06C9, // 5.4.8 18414
    CMSG_SHOWING_CLOAK                                 = 0x02F2, // 5.4.8 18414
    CMSG_SHOWING_HELM                                  = 0x126B, // 5.4.8 18414
    CMSG_SOCKET_GEMS                                   = 0x02CB, // 5.4.8 18414
    CMSG_SPELLCLICK                                    = 0x067A, // 5.4.8 18414
    CMSG_SPIRIT_HEALER_ACTIVATE                        = 0x0340, // 5.4.8 18414
    CMSG_SPLIT_ITEM                                    = 0x02EC, // 5.4.8 18414
    CMSG_REQUEST_STABLED_PETS                          = 0x02CA, // 5.4.8 18414
    CMSG_STAND_STATE_CHANGE                            = 0x03E6, // 5.4.8 18414
    CMSG_SUBMIT_BUG                                    = 0x0861, // 5.4.8 18414
    CMSG_SUGGESTION_SUBMIT                             = 0x0A12, // 5.4.8 18414
    CMSG_SUMMON_RESPONSE                               = 0x0A33, // 5.4.8 18414
    CMSG_SWAP_INV_ITEM                                 = 0x03DF, // 5.4.8 18414
    CMSG_SWAP_ITEM                                     = 0x035D, // 5.4.8 18414
    CMSG_TAXI_NODE_STATUS_QUERY                        = 0x02E1, // 5.4.8 18414
    CMSG_TAXI_QUERY_AVAILABLE_NODES                    = 0x02E3, // 5.4.8 18414
    CMSG_SEND_TEXT_EMOTE                               = 0x07E9, // 5.4.8 18414
    CMSG_TIME_SYNC_RESPONSE                            = 0x01DB, // 5.4.8 18414
    CMSG_TOGGLE_PVP                                    = 0x0644, // 5.4.8 18414
    CMSG_TOTEM_DESTROYED                               = 0x1263, // 5.4.8 18414
    CMSG_TRAINER_BUY_SPELL                             = 0x0352, // 5.4.8 18414
    CMSG_TRAINER_LIST                                  = 0x034B, // 5.4.8 18414
    CMSG_TRANSMOGRIFY_ITEMS                            = 0x06D7, // 5.4.8 18414
    CMSG_TURN_IN_PETITION                              = 0x0673, // 5.4.8 18414
    CMSG_TUTORIAL_CLEAR                                = 0x0F23, // 5.4.8 18414
    CMSG_TUTORIAL_FLAG                                 = 0x1D36, // 5.4.8 18414
    CMSG_TUTORIAL_RESET                                = 0x0307, // 5.4.8 18414
    CMSG_UNACCEPT_TRADE                                = 0x0023, // 5.4.8 18414
    CMSG_UNLEARN_SKILL                                 = 0x0268, // 5.4.8 18414
    CMSG_UNREGISTER_ALL_ADDON_PREFIXES                 = 0x029F, // 5.4.8 18414
    CMSG_UPDATE_ACCOUNT_DATA                           = 0x0068, // 5.4.8 18414
    CMSG_USE_ITEM                                      = 0x1CC1, // 5.4.8 18414
    CMSG_VIOLENCE_LEVEL                                = 0x0040, // 5.4.8 18414
    CMSG_VOID_STORAGE_QUERY                            = 0x0140, // 5.4.8 18414
    CMSG_VOID_STORAGE_TRANSFER                         = 0x1440, // 5.4.8 18414
    CMSG_VOID_STORAGE_UNLOCK                           = 0x0444, // 5.4.8 18414
    CMSG_VOID_SWAP_ITEM                                = 0x0655, // 5.4.8 18414
    CMSG_WHO                                           = 0x18A3, // 5.4.8 18414
    CMSG_WORLD_STATE_UI_TIMER_UPDATE                   = 0x15AB, // 5.4.8 18414
    CMSG_CORPSE_QUERY                                  = 0x1FBE, // 5.4.8 18414
    CMSG_ADD_VOICE_IGNORE                              = 0x0000,
    CMSG_AREA_SPIRIT_HEALER_QUERY                      = 0x03F1,
    CMSG_AUCTION_LIST_PENDING_SALES                    = 0x0000,
    CMSG_AUTOEQUIP_ITEM_SLOT                           = 0x0000,
    CMSG_BATTLEFIELD_MGR_QUEUE_REQUEST                 = 0x0000,
    CMSG_BATTLEFIELD_STATUS                            = 0x0000,
    CMSG_BATTLEGROUND_PLAYER_POSITIONS                 = 0x0000,
    CMSG_BATTLEMASTER_JOIN_RATED                       = 0x0000,
    CMSG_BATTLE_PAY_GET_PRODUCT_LIST                   = 0x0DE0,   //5.4.8 18414 - not implemented
    CMSG_BATTLE_PAY_ACK_FAILED_RESPONSE                = 0x0B38,   //5.4.8 18414 - not implemented
    CMSG_BATTLE_PAY_CONFIRM_PURCHASE_RESPONSE          = 0x0812,   //5.4.8 18414 - not implemented
    CMSG_BATTLE_PAY_DISTRIBUTION_ASSIGN_TO_TARGET      = 0x0000,
    CMSG_BATTLE_PAY_DISTRIBUTION_SELECT_CHOICE         = 0x0000,
    CMSG_BATTLE_PAY_GET_PURCHASE_LIST                  = 0x0000,
    CMSG_BATTLE_PAY_START_PURCHASE                     = 0x1886, //5.4.8 18414 - not implemented
    CMSG_BUG                                           = 0x0000,
    CMSG_BUSY_TRADE                                    = 0x0000,
    CMSG_CALENDAR_ARENA_TEAM                           = 0x0000,
    CMSG_CALENDAR_GET_NUM_PENDING                      = 0x0000,
    CMSG_CALENDAR_GUILD_FILTER                         = 0x0000,
    CMSG_CANCEL_QUEUED_SPELL                           = 0x0000,
    CMSG_CHANGEPLAYER_DIFFICULTY                       = 0x0000,
    CMSG_CHAT_CHANNEL_DISPLAY_LIST                     = 0x0000,
    CMSG_CHAT_CHANNEL_MODERATE                         = 0x0000,
    CMSG_CHAT_CHANNEL_ROSTER_INFO                      = 0x0000,
    CMSG_CHAT_CHANNEL_SET_OWNER                        = 0x0000,
    CMSG_CHAT_CHANNEL_SILENCE_ALL                      = 0x0000,
    CMSG_CHAT_CHANNEL_SILENCE_VOICE                    = 0x0000,
    CMSG_CHAT_CHANNEL_UNSILENCE_ALL                    = 0x0000,
    CMSG_CHAT_CHANNEL_UNSILENCE_VOICE                  = 0x0000,
    CMSG_CHAT_CHANNEL_VOICE_OFF                        = 0x0000,
    CMSG_CHAT_CHANNEL_VOICE_ON                         = 0x0000,
    CMSG_CHAT_FILTERED                                 = 0x0000,
    CMSG_CLEAR_CHANNEL_WATCH                           = 0x0000,
    CMSG_CLEAR_RAID_MARKER                             = 0x0000,
    CMSG_COMMENTATOR_ENABLE                            = 0x0000,
    CMSG_COMMENTATOR_ENTER_INSTANCE                    = 0x0000,
    CMSG_COMMENTATOR_EXIT_INSTANCE                     = 0x0000,
    CMSG_COMMENTATOR_GET_MAP_INFO                      = 0x0000,
    CMSG_COMMENTATOR_GET_PARTY_INFO                    = 0x0000,
    CMSG_COMMENTATOR_GET_PLAYER_INFO                   = 0x0000,
    CMSG_COMMENTATOR_INSTANCE_COMMAND                  = 0x0000,
    CMSG_COMMENTATOR_SKIRMISH_QUEUE_COMMAND            = 0x0000,
    CMSG_COMMENTATOR_START_WARGAME                     = 0x0000,
    CMSG_COMPLAINT                                     = 0x0000,
    CMSG_COMPLETE_CINEMATIC                            = 0x1F34,
    CMSG_COMPLETE_MOVIE                                = 0x0000,
    CMSG_CONNECT_TO_FAILED                             = 0x0000,
    CMSG_DANCE_QUERY                                   = 0x0000,
    CMSG_DB_QUERY_BULK                                 = 0x0000,
    CMSG_DEL_VOICE_IGNORE                              = 0x0000,
    CMSG_DISMISS_CONTROLLED_VEHICLE                    = 0x0000,
    CMSG_ENABLE_NAGLE                                  = 0x0000,
    //CMSG_GM_TICKET_ACKNOWLEDGE_SURVEY                  = 0x1093,
    CMSG_GMRESPONSE_RESOLVE                            = 0x0000,
    CMSG_GMSURVEY_SUBMIT                               = 0x0000,
    CMSG_GM_REPORT_LAG                                 = 0x0000,
    CMSG_GROUP_REQUEST_JOIN_UPDATES                    = 0x0000,
    CMSG_GROUP_SWAP_SUB_GROUP                          = 0x0000,
    CMSG_GUILD_ACHIEVEMENT_MEMBERS                     = 0x0000,
    CMSG_GUILD_CHANGE_NAME_REQUEST                     = 0x0000,
    CMSG_GUILD_MEMBER_SEND_SOR_REQUEST                 = 0x0000,
    CMSG_GUILD_REQUEST_MAX_DAILY_XP                    = 0x0000,
    CMSG_GUILD_SET_ACHIEVEMENT_TRACKING                = 0x0CF0,
    CMSG_GUILD_SWITCH_RANK                             = 0x0CD1,
    CMSG_HEARTH_AND_RESURRECT                          = 0x0000,
    CMSG_ITEM_REFUND                                   = 0x0000,
    CMSG_ITEM_UPGRADE                                  = 0x1042,
    CMSG_LEARN_PREVIEW_TALENTS                         = 0x0000,
    CMSG_LEARN_PREVIEW_TALENTS_PET                     = 0x0000,
    CMSG_LFG_GET_STATUS                                = 0x0000,
    CMSG_LFG_LFR_JOIN                                  = 0x0000,
    CMSG_LFG_LFR_LEAVE                                 = 0x0000,
    CMSG_LFG_SET_COMMENT                               = 0x0000,
    CMSG_LFG_SET_ROLES                                 = 0x0000,
    CMSG_LF_GUILD_POST_REQUEST                         = 0x0000,
    CMSG_LOG_DISCONNECT                                = 0x10B3,
    CMSG_LOOT_CURRENCY                                 = 0x0000,
    CMSG_LOOT_MASTER_GIVE                              = 0x0000,
    CMSG_MESSAGECHAT_ADDON_BATTLEGROUND                = 0x0000,
    CMSG_MESSAGECHAT_ADDON_GUILD                       = 0x0000,
    CMSG_MESSAGECHAT_ADDON_OFFICER                     = 0x0000,
    CMSG_MESSAGECHAT_ADDON_PARTY                       = 0x0000,
    CMSG_MESSAGECHAT_ADDON_RAID                        = 0x0000,
    CMSG_MESSAGECHAT_BATTLEGROUND                      = 0x0000,
    CMSG_MINIGAME_MOVE                                 = 0x0000,
    CMSG_MOVE_FALL_RESET                               = 0x0000,
    CMSG_MOVE_FEATHER_FALL_ACK                         = 0x08D0,
    CMSG_MOVE_FORCE_FLIGHT_BACK_SPEED_CHANGE_ACK       = 0x0000,
    CMSG_MOVE_FORCE_FLIGHT_SPEED_CHANGE_ACK            = 0x09DA,
    CMSG_MOVE_FORCE_PITCH_RATE_CHANGE_ACK              = 0x0000,
    CMSG_MOVE_FORCE_RUN_BACK_SPEED_CHANGE_ACK          = 0x0158,
    CMSG_MOVE_FORCE_RUN_SPEED_CHANGE_ACK               = 0x10F3,
    CMSG_MOVE_FORCE_SWIM_BACK_SPEED_CHANGE_ACK         = 0x0000,
    CMSG_MOVE_FORCE_SWIM_SPEED_CHANGE_ACK              = 0x1853,
    CMSG_MOVE_FORCE_TURN_RATE_CHANGE_ACK               = 0x0000,
    CMSG_MOVE_FORCE_WALK_SPEED_CHANGE_ACK              = 0x00DB,
    CMSG_MOVE_GRAVITY_DISABLE_ACK                      = 0x09D3,
    CMSG_MOVE_GRAVITY_ENABLE_ACK                       = 0x11D8,
    CMSG_MOVE_HOVER_ACK                                = 0x0000,
    CMSG_MOVE_NOT_ACTIVE_MOVER                         = 0x0000,
    CMSG_MOVE_SET_CAN_FLY                              = 0x0000,
    CMSG_MOVE_SET_CAN_FLY_ACK                          = 0x1052,
    CMSG_MOVE_SET_CAN_TRANSITION_BETWEEN_SWIM_AND_FLY_ACK = 0x11DB,
    CMSG_MOVE_SET_COLLISION_HEIGHT_ACK                 = 0x09FB,
    CMSG_MOVE_WATER_WALK_ACK                           = 0x10F2,
    CMSG_NEXT_CINEMATIC_CAMERA                         = 0x1124,
    CMSG_OBJECT_UPDATE_RESCUED                         = 0x0000,
    CMSG_OPT_OUT_OF_LOOT                               = 0x06E0,
    CMSG_PARTY_SILENCE                                 = 0x0000,
    CMSG_PARTY_UNSILENCE                               = 0x0000,
    CMSG_PET_CANCEL_AURA                               = 0x0000,
    CMSG_PET_CAST_SPELL                                = 0x044D,
    CMSG_PET_LEARN_TALENT                              = 0x0000,
    CMSG_PING                                          = 0x0012,
    CMSG_PLAY_DANCE                                    = 0x0000,
    CMSG_QUERY_BATTLEFIELD_STATE                       = 0x0000,
    CMSG_GUILD_QUERY_MEMBERS_FOR_RECIPE                = 0x0000,
    CMSG_GUILD_QUERY_MEMBER_RECIPES                    = 0x0000,
    CMSG_GUILD_QUERY_RECIPES                           = 0x0000,
    CMSG_QUERY_QUESTS_COMPLETED                        = 0x0000,
    CMSG_QUEST_NPC_QUERY                               = 0x1DAE,
    CMSG_QUEST_PUSH_RESULT                             = 0x0000,
    CMSG_REALM_SPLIT                                   = 0x18B2,
    CMSG_REDIRECTION_AUTH_PROOF                        = 0x0000,
    CMSG_REQUEST_CATEGORY_COOLDOWNS                    = 0x0000,
    CMSG_REQUEST_INSPECT_RATED_BG_STATS                = 0x0882,
    CMSG_REQUEST_PET_INFO                              = 0x0000,
    CMSG_REQUEST_RESEARCH_HISTORY                      = 0x15E2,
    CMSG_RESET_FACTION_CHEAT                           = 0x10B6,
    CMSG_SAVE_CUF_PROFILES                             = 0x06E6,
    CMSG_SEND_SOR_REQUEST_VIA_ADDRESS                  = 0x0000,
    CMSG_SEND_SOR_REQUEST_VIA_BNET_ACCOUNT_ID          = 0x0000,
    CMSG_SET_ACTIVE_VOICE_CHANNEL                      = 0x0000,
    CMSG_SET_ALLOW_LOW_LEVEL_RAID1                     = 0x0000,
    CMSG_SET_ALLOW_LOW_LEVEL_RAID2                     = 0x0000,
    CMSG_SET_CHANNEL_WATCH                             = 0x0000,
    CMSG_SET_CURRENCY_FLAGS                            = 0x03E4,
    CMSG_GUILD_BANK_SET_TAB_TEXT                       = 0x0000,
    CMSG_SET_HIDE_ACHIEVEMENTS                         = 0x0002,
    CMSG_SET_LOOT_SPECIALIZATION                       = 0x1260,
    CMSG_SET_PET_SLOT                                  = 0x0000,
    CMSG_SET_PREFERED_CEMETERY                         = 0x0000,
    CMSG_SET_RELATIVE_POSITION                         = 0x0000,
    CMSG_SET_SAVED_INSTANCE_EXTEND                     = 0x0000,
    CMSG_SET_TRADE_CURRENCY                            = 0x0C44,
    CMSG_SET_VEHICLE_REC_ID_ACK                        = 0x0000,
    CMSG_STOP_DANCE                                    = 0x0000,
    CMSG_SUBMIT_COMPLAIN                               = 0x030D,
    CMSG_SUSPEND_TOKEN                                 = 0x0000,
    CMSG_SYNC_DANCE                                    = 0x0000,
    CMSG_TELEPORT_TO_UNIT                              = 0x0000,
    CMSG_TIME_ADJUSTMENT_RESPONSE                      = 0x0000,
    CMSG_TIME_SYNC_RESPONSE_FAILED                     = 0x0058,
    CMSG_UNLEARN_SPECIALIZATION                        = 0x0000,
    CMSG_UPDATE_MISSILE_TRAJECTORY                     = 0x0000,
    CMSG_UPDATE_PROJECTILE_POSITION                    = 0x0000,
    CMSG_USED_FOLLOW                                   = 0x0374,
    CMSG_VOICE_SESSION_ENABLE                          = 0x15A9,
    CMSG_WARDEN_DATA                                   = 0x1816,
    CMSG_WARGAME_ACCEPT                                = 0x0000,
    CMSG_WARGAME_START                                 = 0x0000,
    CMSG_WHOIS                                         = 0x0000,
    CMSG_WORLD_TELEPORT                                = 0x0000,
    CMSG_WRAP_ITEM                                     = 0x02DF,
    CMSG_ZONEUPDATE                                    = 0x0000
};

enum OpcodeServer
{
    SMSG_ACCOUNT_DATA_TIMES                            = 0x162B, // 5.4.8 18414
    SMSG_ACHIEVEMENT_DELETED                           = 0x1A2F, // 5.4.8 18414
    SMSG_ACHIEVEMENT_EARNED                            = 0x080B, // 5.4.8 18414
    SMSG_UPDATE_ACTION_BUTTONS                         = 0x081A, // 5.4.8 18414
    SMSG_ACTIVATE_TAXI_REPLY                           = 0x02A7, // 5.4.8 18414
    SMSG_ADDON_INFO                                    = 0x160A, // 5.4.8 18414
    SMSG_ADD_RUNE_POWER                                = 0x1860, // 5.4.8 18414
    SMSG_AI_REACTION                                   = 0x06AF, // 5.4.8 18414
    SMSG_ALL_ACHIEVEMENT_DATA                          = 0x180A, // 5.4.8 18414
    SMSG_ARCHAEOLOGY_SURVERY_CAST                      = 0x1160, // 5.4.8 18414
    SMSG_AREA_SPIRIT_HEALER_TIME                       = 0x188E, // 5.4.8 18414
    SMSG_ATTACKER_STATE_UPDATE                         = 0x06AA, // 5.4.8 18414
    SMSG_ATTACK_START                                  = 0x1A9E, // 5.4.8 18414
    SMSG_ATTACK_STOP                                   = 0x12AF, // 5.4.8 18414
    SMSG_ATTACKSWING_ERROR                             = 0x11E1, // 5.4.8 18414
    SMSG_AUCTION_BIDDER_LIST_RESULT                    = 0x0B24, // 5.4.8 18414
    SMSG_AUCTION_BIDDER_NOTIFICATION                   = 0x11C1, // 5.4.8 18414
    SMSG_AUCTION_COMMAND_RESULT                        = 0x1002, // 5.4.8 18414
    SMSG_AUCTION_HELLO                                 = 0x10A7, // 5.4.8 18414
    SMSG_AUCTION_LIST_RESULT                           = 0x0982, // 5.4.8 18414
    SMSG_AUCTION_OWNER_LIST_RESULT                     = 0x1785, // 5.4.8 18414
    SMSG_AUCTION_OWNER_NOTIFICATION                    = 0x1A8E, // 5.4.8 18414
    SMSG_AURA_UPDATE                                   = 0x0072, // 5.4.8 18414
    SMSG_AUTH_CHALLENGE                                = 0x0949, // 5.4.8 18414
    SMSG_AUTH_RESPONSE                                 = 0x0ABA, // 5.4.8 18414
    SMSG_BARBER_SHOP_RESULT                            = 0x0C3F, // 5.4.8 18414
    SMSG_BATTLEFIELD_LIST                              = 0x160E, // 5.4.8 18414
    SMSG_BATTLEFIELD_MGR_EJECTED                       = 0x18C2, // 5.4.8 18414
    SMSG_BATTLEFIELD_MGR_ENTERED                       = 0x081B, // 5.4.8 18414
    SMSG_BATTLEFIELD_RATED_INFO                        = 0x0EBA, // 5.4.8 18414
    SMSG_BATTLEFIELD_STATUS                            = 0x0433, // 5.4.8 18414
    SMSG_BATTLEFIELD_STATUS_QUEUED                     = 0x122E, // 5.4.8 18414
    SMSG_BATTLEFIELD_STATUS_ACTIVE                     = 0x1AAF, // 5.4.8 18414
    SMSG_BATTLEFIELD_STATUS_NEEDCONFIRMATION           = 0x1EAF, // 5.4.8 18414
    SMSG_BATTLEFIELD_STATUS_FAILED                     = 0x1140, // 5.4.8 18414
    SMSG_BATTLEGROUND_PLAYER_JOINED                    = 0x1E2F, // 5.4.8 18414
    SMSG_BATTLEGROUND_PLAYER_LEFT                      = 0x0206, // 5.4.8 18414
    SMSG_PET_BATTLE_QUEUE_STATUS                       = 0x00A6, // 5.4.8 18414
    SMSG_BATTLE_PAY_DISTRIBUTION_UPDATE                = 0x1E1B, // 5.4.8 18414
    SMSG_BATTLE_PAY_BOOST_ITEMS                        = 0x083B, // 5.4.8 18414
    SMSG_BATTLE_PET_DELETED                            = 0x18AB, // 5.4.8 18414
    SMSG_BATTLE_PET_JOURNAL                            = 0x1542, // 5.4.8 18414
    SMSG_BATTLE_PET_JOURNAL_LOCK_ACQUIRED              = 0x1A0F, // 5.4.8 18414
    SMSG_BATTLE_PET_JOURNAL_LOCK_DENINED               = 0x0203, // 5.4.8 18414
    SMSG_BATTLE_PET_QUERY_NAME_RESPONSE                = 0x1540, // 5.4.8 18414
    SMSG_BATTLE_PET_SLOT_UPDATE                        = 0x16AF, // 5.4.8 18414
    SMSG_BATTLE_PET_PET_UPDATES                        = 0x041A, // 5.4.8 18414
    SMSG_BINDER_CONFIRM                                = 0x1287, // 5.4.8 18414
    SMSG_BIND_POINT_UPDATE                             = 0x0E3B, // 5.4.8 18414
    SMSG_BLACKMARKET_HELLO                             = 0x00AE, // 5.4.8 18414
    SMSG_BLACKMARKET_REQUEST_ITEMS_RESULT              = 0x128B, // 5.4.8 18414
    SMSG_BLACKMARKET_BID_RESULT                        = 0x148A, // 5.4.8 18414
    SMSG_BLACKMARKET_OUT_BID                           = 0x1040, // 5.4.8 18414
    SMSG_BLACKMARKET_BID_WON                           = 0x1060, // 5.4.8 18414
    SMSG_BREAK_TARGET                                  = 0x021A, // 5.4.8 18414
    SMSG_BUY_FAILED                                    = 0x1563, // 5.4.8 18414
    SMSG_BUY_ITEM                                      = 0x101A, // 5.4.8 18414
    SMSG_CALENDAR_CLEAR_PENDING_ACTION                 = 0x1E3A, // 5.4.8 18414
    SMSG_CALENDAR_COMMAND_RESULT                       = 0x142A, // 5.4.8 18414
    SMSG_CALENDAR_EVENT_INITIAL_INVITE                 = 0x16AE, // 5.4.8 18414
    SMSG_CALENDAR_EVENT_INVITE                         = 0x15C3, // 5.4.8 18414
    SMSG_CALENDAR_EVENT_INVITE_ALERT                   = 0x0A9F, // 5.4.8 18414
    SMSG_CALENDAR_EVENT_INVITE_REMOVED                 = 0x00A2, // 5.4.8 18414
    SMSG_CALENDAR_EVENT_INVITE_REMOVED_ALERT           = 0x122B, // 5.4.8 18414
    SMSG_CALENDAR_EVENT_INVITE_STATUS                  = 0x1C9B, // 5.4.8 18414
    SMSG_CALENDAR_EVENT_INVITE_STATUS_ALERT            = 0x0412, // 5.4.8 18414
    SMSG_CALENDAR_EVENT_MODERATOR_STATUS               = 0x048F, // 5.4.8 18414
    SMSG_CALENDAR_EVENT_REMOVED_ALERT                  = 0x049B, // 5.4.8 18414
    SMSG_CALENDAR_EVENT_UPDATED_ALERT                  = 0x0A0E, // 5.4.8 18414
    SMSG_CALENDAR_RAID_LOCKOUT_ADDED                   = 0x0CAB, // 5.4.8 18414
    SMSG_CALENDAR_RAID_LOCKOUT_REMOVED                 = 0x11E0, // 5.4.8 18414
    SMSG_CALENDAR_RAID_LOCKOUT_UPDATED                 = 0x0E1F, // 5.4.8 18414
    SMSG_CALENDAR_SEND_CALENDAR                        = 0x1A0A, // 5.4.8 18414
    SMSG_CALENDAR_SEND_EVENT                           = 0x12AE, // 5.4.8 18414
    SMSG_CALENDAR_SEND_NUM_PENDING                     = 0x0A3F, // 5.4.8 18414
    SMSG_CANCEL_AUTO_REPEAT                            = 0x1E0F, // 5.4.8 18414
    SMSG_CANCEL_COMBAT                                 = 0x0534, // 5.4.8 18414
    SMSG_CANCEL_SCENE                                  = 0x120E, // 5.4.8 18414
    SMSG_CAST_FAILED                                   = 0x143A, // 5.4.8 18414
    SMSG_CHANNEL_LIST                                  = 0x0B22, // 5.4.8 18414
    SMSG_CHANNEL_NOTIFY                                = 0x0F06, // 5.4.8 18414
    SMSG_CHARACTER_UPGRADE_STARTED                     = 0x188A, // 5.4.8 18414
    SMSG_CHAR_CREATE                                   = 0x1CAA, // 5.4.8 18414
    SMSG_CHAR_CUSTOMIZE                                = 0x1432, // 5.4.8 18414
    SMSG_CHAR_DELETE                                   = 0x0C9F, // 5.4.8 18414
    SMSG_ENCHANTMENT_LOG                               = 0x12A3, // 5.4.8 18414
    SMSG_ENUM_CHARACTERS_RESULT                        = 0x11C3, // 5.4.8 18414
    SMSG_CHAR_RENAME                                   = 0x0CBF, // 5.4.8 18414
    SMSG_CHAT_PLAYER_AMBIGUOUS                         = 0x061A, // 5.4.8 18414
    SMSG_CHAT_PLAYER_NOT_FOUND                         = 0x1082, // 5.4.8 18414
    SMSG_CHAT_RESTRICTED                               = 0x1A3B, // 5.4.8 18414
    SMSG_CLEAR_COOLDOWN                                = 0x162A, // 5.4.8 18414
    SMSG_CLEAR_COOLDOWNS                               = 0x1458, // 5.4.8 18414
    SMSG_CLEAR_TARGET                                  = 0x1061, // 5.4.8 18414
    SMSG_CLIENTCACHE_VERSION                           = 0x002A, // 5.4.8 18414
    SMSG_CLIENT_CONTROL_UPDATE                         = 0x1043, // 5.4.8 18414
    SMSG_CONTACT_LIST                                  = 0x1F22, // 5.4.8 18414
    SMSG_CONVERT_RUNE                                  = 0x1A1B, // 5.4.8 18414
    SMSG_COOLDOWN_EVENT                                = 0x1163, // 5.4.8 18414
    SMSG_CORPSE_MAP_POSITION_QUERY_RESPONSE            = 0x1A3A, // 5.4.8 18414
    SMSG_CORPSE_NOT_IN_INSTANCE                        = 0x089E, // 5.4.8 18414
    SMSG_CORPSE_QUERY                                  = 0x0E0B, // 5.4.8 18414
    SMSG_CORPSE_RECLAIM_DELAY                          = 0x022A, // 5.4.8 18414
    SMSG_CREATURE_QUERY_RESPONSE                       = 0x048B, // 5.4.8 18414
    SMSG_CRITERIA_DELETED                              = 0x1C33, // 5.4.8 18414
    SMSG_CRITERIA_UPDATE                               = 0x0E9B, // 5.4.8 18414
    SMSG_CROSSED_INEBRIATION_THRESHOLD                 = 0x1E9E, // 5.4.8 18414
    SMSG_DB_REPLY                                      = 0x103B, // 5.4.8 18414
    SMSG_DEATH_RELEASE_LOC                             = 0x1063, // 5.4.8 18414
    SMSG_DEFENSE_MESSAGE                               = 0x0A1F, // 5.4.8 18414
    SMSG_DESTROY_OBJECT                                = 0x14C2, // 5.4.8 18414
    SMSG_DISMOUNT                                      = 0x0E3A, // 5.4.8 18414
    SMSG_DUEL_COMPLETE                                 = 0x1C0A, // 5.4.8 18414
    SMSG_DUEL_COUNTDOWN                                = 0x129F, // 5.4.8 18414
    SMSG_DUEL_INBOUNDS                                 = 0x163A, // 5.4.8 18414
    SMSG_DUEL_OUTOFBOUNDS                              = 0x001A, // 5.4.8 18414
    SMSG_DUEL_REQUESTED                                = 0x0022, // 5.4.8 18414
    SMSG_DUEL_WINNER                                   = 0x10E1, // 5.4.8 18414
    SMSG_DURABILITY_DAMAGE_DEATH                       = 0x1E3E, // 5.4.8 18414
    SMSG_EMOTE                                         = 0x0987, // 5.4.8 18414
    SMSG_ENABLE_BARBER_SHOP                            = 0x1222, // 5.4.8 18414
    SMSG_ENVIRONMENTAL_DAMAGE_LOG                      = 0x0DF1, // 5.4.8 18414
    SMSG_EQUIPMENT_SET_ID                              = 0x0006, // 5.4.8 18414
    SMSG_EXPLORATION_EXPERIENCE                        = 0x189A, // 5.4.8 18414
    SMSG_FEATURE_SYSTEM_STATUS                         = 0x16BB, // 5.4.8 18414
    SMSG_FISH_ESCAPED                                  = 0x0227, // 5.4.8 18414
    SMSG_FISH_NOT_HOOKED                               = 0x10BE, // 5.4.8 18414
    SMSG_FRIEND_STATUS                                 = 0x0532, // 5.4.8 18414
    SMSG_GAMEOBJECT_CUSTOM_ANIM                        = 0x001F, // 5.4.8 18414
    SMSG_GAMEOBJECT_DESPAWN_ANIM                       = 0x108B, // 5.4.8 18414
    SMSG_GAMEOBJECT_QUERY_RESPONSE                     = 0x06BF, // 5.4.8 18414
    SMSG_GM_TICKET_RESPONSE                            = 0x0207, // 5.4.8 18414
    SMSG_GM_TICKET_UPDATE                              = 0x02A6, // 5.4.8 18414
    SMSG_GM_TICKET_GET_TICKET                          = 0x129B, // 5.4.8 18414
    SMSG_GM_TICKET_SYSTEM_STATUS                       = 0x163B, // 5.4.8 18414
    SMSG_GM_TICKET_CASE_STATUS                         = 0x148E, // 5.4.8 18414
    SMSG_GOSSIP_COMPLETE                               = 0x034E, // 5.4.8 18414
    SMSG_GOSSIP_MESSAGE                                = 0x0244, // 5.4.8 18414
    SMSG_GOSSIP_POI                                    = 0x0785, // 5.4.8 18414
    SMSG_GROUP_DECLINE                                 = 0x17A3, // 5.4.8 18414
    SMSG_GROUP_DESTROYED                               = 0x1B27, // 5.4.8 18414
    SMSG_PARTY_INVITE                                  = 0x0A8F, // 5.4.8 18414
    SMSG_PARTY_UPDATE                                  = 0x0CBB, // 5.4.8 18414
    SMSG_GROUP_ROLE_POLL_INFORM                        = 0x1007, // 5.4.8 18414
    SMSG_GROUP_SET_LEADER                              = 0x18BF, // 5.4.8 18414
    SMSG_GROUP_SET_ROLE                                = 0x1E1F, // 5.4.8 18414
    SMSG_GROUP_UNINVITE                                = 0x1313, // 5.4.8 18414
    SMSG_GUILD_ACHIEVEMENT_EARNED                      = 0x1BF1, // 5.4.8 18414
    SMSG_GUILD_BANK_QUERY_RESULTS                      = 0x0B79, // 5.4.8 18414
    SMSG_GUILD_BANK_LOG_QUERY_RESULTS                  = 0x0FF0, // 5.4.8 18414
    SMSG_GUILD_BANK_MONEY_WITHDRAWN                    = 0x0B78, // 5.4.8 18414
    SMSG_GUILD_BANK_TEXT_QUERY_RESULT                  = 0x1AE0, // 5.4.8 18414
    SMSG_GUILD_CHALLENGE_UPDATE                        = 0x0AE9, // 5.4.8 18414
    SMSG_GUILD_COMMAND_RESULT                          = 0x0EF1, // 5.4.8 18414
    SMSG_GUILD_CRITERIA_DELETED                        = 0x1B60, // 5.4.8 18414
    SMSG_GUILD_DECLINE                                 = 0x1AF9, // 5.4.8 18414
    SMSG_GUILD_EVENT_BANK_MONEY_CHANGED                = 0x0F68, // 5.4.8 18414
    SMSG_GUILD_EVENT_BANK_TAB_ADDED                    = 0x1BE9, // 5.4.8 18414
    SMSG_GUILD_EVENT_BANK_TAB_TEXT_CHANGED             = 0x0A70, // 5.4.8 18414
    SMSG_GUILD_EVENT_BANK_TAB_MODIFIED                 = 0x0BF1, // 5.4.8 18414
    SMSG_GUILD_EVENT_LOG_QUERY_RESULTS                 = 0x1AF1, // 5.4.8 18414
    SMSG_GUILD_EVENT_PLAYER_LEFT                       = 0x0BF8, // 5.4.8 18414
    SMSG_GUILD_INVITE                                  = 0x0F71, // 5.4.8 18414
    SMSG_GUILD_INVITE_CANCEL                           = 0x0FE1, // 5.4.8 18414
    SMSG_GUILD_MAX_DAILY_XP                            = 0x1BE1, // 5.4.8 18414
    SMSG_GUILD_MEMBER_DAILY_RESET                      = 0x1BE8, // 5.4.8 18414
    SMSG_GUILD_MEMBER_UPDATE_NOTE                      = 0x0BE1, // 5.4.8 18414
    SMSG_GUILD_NEWS                                    = 0x0AE8, // 5.4.8 18414
    SMSG_GUILD_PARTY_STATE_RESPONSE                    = 0x0A78, // 5.4.8 18414
    SMSG_GUILD_PERMISSIONS_QUERY_RESULTS               = 0x0FF9, // 5.4.8 18414
    SMSG_GUILD_QUERY_RESPONSE                          = 0x1B79, // 5.4.8 18414
    SMSG_GUILD_RANKS                                   = 0x0A79, // 5.4.8 18414
    SMSG_GUILD_RANKS_UPDATE                            = 0x0A60, // 5.4.8 18414
    SMSG_GUILD_NAME_CHANGED                            = 0x0E70, // 5.4.8 18414
    SMSG_GUILD_REPUTATION_WEEKLY_CAP                   = 0x1A71, // 5.4.8 18414
    SMSG_GUILD_REWARDS_LIST                            = 0x1A69, // 5.4.8 18414
    SMSG_GUILD_ROSTER                                  = 0x0BE0, // 5.4.8 18414
    SMSG_GUILD_SET_GUILD_MASTER                        = 0x0E69, // 5.4.8 18414
    SMSG_GUILD_XP                                      = 0x0AF0, // 5.4.8 18414
    SMSG_GUILD_XP_GAIN                                 = 0x0FE0, // 5.4.8 18414
    SMSG_HEALTH_UPDATE                                 = 0x148B, // 5.4.8 18414
    SMSG_HIGHEST_THREAT_UPDATE                         = 0x14AE, // 5.4.8 18414
    SMSG_HOTFIX_NOTIFY_BLOB                            = 0x1EBA, // 5.4.8 18414
    SMSG_INITIALIZE_FACTIONS                           = 0x0AAA, // 5.4.8 18414
    SMSG_SEND_KNOWN_SPELLS                             = 0x045A, // 5.4.8 18414
    SMSG_SETUP_CURRENCY                                = 0x1A8B, // 5.4.8 18414
    SMSG_INIT_WORLD_STATES                             = 0x1560, // 5.4.8 18414
    SMSG_INSPECT_HONOR_STATS                           = 0x1A1E, // 5.4.8 18414
    SMSG_INSPECT_RESULTS                               = 0x1842, // 5.4.8 18414
    SMSG_PENDING_RAID_LOCK                             = 0x00A7, // 5.4.8 18414
    SMSG_INSTANCE_SAVE_CREATED                         = 0x1EAE, // 5.4.8 18414
    SMSG_INSTANCE_RESET                                = 0x160F, // 5.4.8 18414
    SMSG_INSTANCE_RESET_FAILED                         = 0x0026, // 5.4.8 18414
    SMSG_INVENTORY_CHANGE_FAILURE                      = 0x0C1E, // 5.4.8 18414
    SMSG_ITEM_COOLDOWN                                 = 0x1904, // 5.4.8 18414 // LEGACY!
    SMSG_ITEM_ENCHANT_TIME_UPDATE                      = 0x10A2, // 5.4.8 18414
    SMSG_ITEM_EXPIRE_PURCHASE_REFUND                   = 0x0E33, // 5.4.8 18414
    SMSG_ITEM_REFUND_RESULT                            = 0x049E, // 5.4.8 18414
    SMSG_ITEM_PUSH_RESULT                              = 0x0E0A, // 5.4.8 18414
    SMSG_ITEM_TIME_UPDATE                              = 0x18C1, // 5.4.8 18414
    SMSG_LEARNED_SPELL                                 = 0x129A, // 5.4.8 18414
    SMSG_LEVELUP_INFO                                  = 0x1961, // 5.4.8 18414
    SMSG_LFG_BOOT_PROPOSAL_UPDATE                      = 0x183A, // 5.4.8 18414
    SMSG_LFG_PROPOSAL_UPDATE                           = 0x1E3B, // 5.4.8 18414
    SMSG_LFG_DISABLED                                  = 0x008E, // 5.4.8 18414
    SMSG_LFG_ROLE_CHECK_UPDATE                         = 0x12BB, // 5.4.8 18414
    SMSG_LFG_JOIN_RESULT                               = 0x18E3, // 5.4.8 18414
    SMSG_LFG_OFFER_CONTINUE                            = 0x1EAB, // 5.4.8 18414
    SMSG_LFG_PARTY_INFO                                = 0x168E, // 5.4.8 18414
    SMSG_LFG_PLAYER_INFO                               = 0x1861, // 5.4.8 18414
    SMSG_LFG_QUEUE_STATUS                              = 0x1006, // 5.4.8 18414
    SMSG_LFG_TELEPORT_DENIED                           = 0x063B, // 5.4.8 18414
    SMSG_LFG_UPDATE_STATUS                             = 0x0C2E, // 5.4.8 18414
    SMSG_LF_GUILD_APPLICANT_LIST_UPDATED               = 0x0B71, // 5.4.8 18414
    SMSG_LF_GUILD_APPLICATIONS_LIST_CHANGED            = 0x1A70, // 5.4.8 18414
    SMSG_LF_GUILD_BROWSE_UPDATED                       = 0x0F69, // 5.4.8 18414
    SMSG_LF_GUILD_MEMBERSHIP_LIST_UPDATED              = 0x0AE0, // 5.4.8 18414
    SMSG_LF_GUILD_POST_UPDATED                         = 0x1B71, // 5.4.8 18414
    SMSG_LFG_ROLE_CHOSEN                               = 0x1A1F, // 5.4.8 18414
    SMSG_VENDOR_INVENTORY                              = 0x1AAE, // 5.4.8 18414
    SMSG_LOAD_CUF_PROFILES                             = 0x0E32, // 5.4.8 18414
    SMSG_EQUIPMENT_SET_LIST                            = 0x18E2, // 5.4.8 18414
    SMSG_LOGIN_SET_TIME_SPEED                          = 0x082B, // 5.4.8 18414
    SMSG_LOGIN_VERIFY_WORLD                            = 0x1C0F, // 5.4.8 18414
    SMSG_LOGOUT_CANCEL_ACK                             = 0x0AAF, // 5.4.8 18414
    SMSG_LOGOUT_COMPLETE                               = 0x142F, // 5.4.8 18414
    SMSG_LOGOUT_RESPONSE                               = 0x008F, // 5.4.8 18414
    SMSG_LOG_XP_GAIN                                   = 0x1E9A, // 5.4.8 18414
    SMSG_COIN_REMOVED                                  = 0x1632, // 5.4.8 18414
    SMSG_LOOT_LIST                                     = 0x1C3F, // 5.4.8 18414
    SMSG_LOOT_MASTER_LIST                              = 0x02BF, // 5.4.8 18414
    SMSG_LOOT_MONEY_NOTIFY                             = 0x14C0, // 5.4.8 18414
    SMSG_LOOT_RELEASE                                  = 0x123F, // 5.4.8 18414
    SMSG_LOOT_REMOVED                                  = 0x0C3E, // 5.4.8 18414
    SMSG_LOOT_RESPONSE                                 = 0x128A, // 5.4.8 18414
    SMSG_MAIL_LIST_RESULT                              = 0x1C0B, // 5.4.8 18414
    SMSG_MESSAGECHAT                                   = 0x1A9A, // 5.4.8 18414
    SMSG_MINIMAP_PING                                  = 0x168F, // 5.4.8 18414
    SMSG_MIRROR_IMAGE_COMPONENTED_DATA                 = 0x04D9, // 5.4.8 18414
    SMSG_MIRROR_IMAGE_CREATURE_DATA                    = 0x04D0, // 5.4.8 18414
    SMSG_MODIFY_COOLDOWN                               = 0x1E2E, // 5.4.8 18414
    SMSG_ON_MONSTER_MOVE                               = 0x1A07, // 5.4.8 18414
    SMSG_MOTD                                          = 0x183B, // 5.4.8 18414
    SMSG_MOUNTSPECIAL_ANIM                             = 0x003A, // 5.4.8 18414
    SMSG_MOVE_FEATHER_FALL                             = 0x0C60, // 5.4.8 18414
    SMSG_MOVE_GRAVITY_DISABLE                          = 0x159F, // 5.4.8 18414
    SMSG_MOVE_GRAVITY_ENABLE                           = 0x0A27, // 5.4.8 18414
    SMSG_MOVE_KNOCK_BACK                               = 0x0562, // 5.4.8 18414
    SMSG_MOVE_LAND_WALK                                = 0x086A, // 5.4.8 18414
    SMSG_MOVE_NORMAL_FALL                              = 0x08E0, // 5.4.8 18414
    SMSG_MOVE_ROOT                                     = 0x15AE, // 5.4.8 18414
    SMSG_MOVE_SET_ACTIVE_MOVER                         = 0x0C6D, // 5.4.8 18414
    SMSG_MOVE_SET_CAN_FLY                              = 0x178D, // 5.4.8 18414
    SMSG_MOVE_SET_COLLISION_HEIGHT                     = 0x0250, // 5.4.8 18414
    SMSG_MOVE_SET_FLIGHT_BACK_SPEED                    = 0x0319, // 5.4.8 18414
    SMSG_MOVE_SET_FLIGHT_SPEED                         = 0x006E, // 5.4.8 18414
    SMSG_MOVE_SET_HOVER                                = 0x1802, // 5.4.8 18414
    SMSG_MOVE_SET_PITCH_RATE                           = 0x17AB, // 5.4.8 18414
    SMSG_MOVE_SET_RUN_BACK_SPEED                       = 0x0A83, // 5.4.8 18414
    SMSG_MOVE_SET_RUN_SPEED                            = 0x184C, // 5.4.8 18414
    SMSG_MOVE_SET_SWIM_BACK_SPEED                      = 0x0962, // 5.4.8 18414
    SMSG_MOVE_SET_SWIM_SPEED                           = 0x0817, // 5.4.8 18414
    SMSG_MOVE_SET_TURN_RATE                            = 0x0069, // 5.4.8 18414
    SMSG_MOVE_SET_VEHICLE_REC_ID                       = 0x0861, // 5.4.8 18414
    SMSG_MOVE_SET_WALK_SPEED                           = 0x0469, // 5.4.8 18414
    SMSG_MOVE_TELEPORT                                 = 0x0B39, // 5.4.8 18414
    SMSG_MOVE_UNROOT                                   = 0x1FAE, // 5.4.8 18414
    SMSG_MOVE_UNSET_CAN_FLY                            = 0x0162, // 5.4.8 18414
    SMSG_MOVE_UNSET_HOVER                              = 0x02D3, // 5.4.8 18414
    SMSG_MOVE_UPDATE_FLIGHT_SPEED                      = 0x00E1, // 5.4.8 18414
    SMSG_MOVE_UPDATE_KNOCK_BACK                        = 0x0251, // 5.4.8 18414
    SMSG_MOVE_UPDATE_RUN_SPEED                         = 0x158E, // 5.4.8 18414
    SMSG_MOVE_WATER_WALK                               = 0x1F9A, // 5.4.8 18414
    SMSG_QUERY_PLAYER_NAME_RESPONSE                    = 0x169B, // 5.4.8 18414
    SMSG_REALM_NAME_QUERY_RESPONSE                     = 0x063E, // 5.4.8 18414
    SMSG_RESYNC_RUNES                                  = 0x15E3, // 5.4.8 18414
    SMSG_RESET_FAILED_NOTIFY                           = 0x10AE, // 5.4.8 18414
    SMSG_NEW_TAXI_PATH                                 = 0x141B, // 5.4.8 18414
    SMSG_NEW_WORLD                                     = 0x1C3B, // 5.4.8 18414
    SMSG_NOTIFICATION                                  = 0x0C2A, // 5.4.8 18414
    SMSG_NPC_TEXT_UPDATE                               = 0x140A, // 5.4.8 18414
    SMSG_ON_CANCEL_EXPECTED_RIDE_VEHICLE_AURA          = 0x1A2A, // 5.4.8 18414
    SMSG_GAMEOBJECT_PAGETEXT                           = 0x14AF, // 5.4.8 18414
    SMSG_PARTYKILLLOG                                  = 0x048A, // 5.4.8 18414
    SMSG_PARTY_COMMAND_RESULT                          = 0x0F86, // 5.4.8 18414
    SMSG_PARTY_MEMBER_STATE                            = 0x0A9A, // 5.4.8 18414
    SMSG_PETITION_ALREADY_SIGNED                       = 0x0286, // 5.4.8 18414
    SMSG_PETITION_QUERY_RESPONSE                       = 0x1083, // 5.4.8 18414
    SMSG_PETITION_RENAME_RESULT                        = 0x082A, // 5.4.8 18414
    SMSG_PETITION_SHOWLIST                             = 0x10A3, // 5.4.8 18414
    SMSG_PETITION_SHOW_SIGNATURES                      = 0x00AA, // 5.4.8 18414
    SMSG_PETITION_SIGN_RESULTS                         = 0x06AE, // 5.4.8 18414
    SMSG_PET_ACTION_SOUND                              = 0x15E2, // 5.4.8 18414
    SMSG_PET_NAME_INVALID                              = 0x028E, // 5.4.8 18414
    SMSG_PET_NAME_QUERY_RESPONSE                       = 0x0ABE, // 5.4.8 18414
    SMSG_PET_SPELLS                                    = 0x095A, // 5.4.8 18414
    SMSG_PET_STABLE_LIST                               = 0x1613, // 5.4.8 18414
    SMSG_PLAYED_TIME                                   = 0x11E2, // 5.4.8 18414
    SMSG_PLAYERBOUND                                   = 0x088E, // 5.4.8 18414
    SMSG_MOVE_UPDATE                                   = 0x1A32, // 5.4.8 18414
    SMSG_PLAY_OBJECT_SOUND                             = 0x1443, // 5.4.8 18414
    SMSG_PLAY_ONE_SHOT_ANIM_KIT                        = 0x043E, // 5.4.8 18414
    SMSG_PLAY_SCENE                                    = 0x1C3A, // 5.4.8 18414
    SMSG_PLAY_SOUND                                    = 0x102A, // 5.4.8 18414
    SMSG_PLAY_MUSIC                                    = 0x0023, // 5.4.8 18414
    SMSG_PLAY_SPELL_VISUAL                             = 0x061E, // 5.4.8 18414
    SMSG_PLAY_SPELL_VISUAL_KIT                         = 0x11E3, // 5.4.8 18414
    SMSG_PONG                                          = 0x1969, // 5.4.8 18414
    SMSG_POWER_UPDATE                                  = 0x109F, // 5.4.8 18414
    SMSG_PRE_RESURRECT                                 = 0x19C0, // 5.4.8 18414
    SMSG_PROPOSE_LEVEL_GRANT                           = 0x109A, // 5.4.8 18414
    SMSG_PVP_LOG_DATA                                  = 0x1E8F, // 5.4.8 18414
    SMSG_PVP_OPTIONS_ENABLED                           = 0x080A, // 5.4.8 18414
    SMSG_PVP_SEASON                                    = 0x069B, // 5.4.8 18414
    SMSG_QUERY_TIME_RESPONSE                           = 0x100F, // 5.4.8 18414
    SMSG_QUEST_GIVER_OFFER_REWARD                      = 0x074F, // 5.4.8 18414
    SMSG_QUEST_GIVER_QUEST_COMPLETE                    = 0x0346, // 5.4.8 18414
    SMSG_QUEST_GIVER_QUEST_DETAILS                     = 0x134C, // 5.4.8 18414
    SMSG_QUEST_GIVER_QUEST_INVALID                     = 0x027D, // 5.4.8 18414
    SMSG_QUEST_GIVER_QUEST_LIST                        = 0x02D4, // 5.4.8 18414
    SMSG_QUEST_GIVER_REQUEST_ITEMS                     = 0x0277, // 5.4.8 18414
    SMSG_QUEST_GIVER_STATUS                            = 0x1275, // 5.4.8 18414
    SMSG_QUEST_GIVER_STATUS_MULTIPLE                   = 0x06CE, // 5.4.8 18414
    SMSG_QUEST_LOG_FULL                                = 0x07FD, // 5.4.8 18414
    SMSG_QUEST_UPDATE_ADD_CREDIT                       = 0x1645, // 5.4.8 18414
    SMSG_QUEST_UPDATE_ADD_PVP_KILL                     = 0x0256, // 5.4.8 18414
    SMSG_QUEST_UPDATE_COMPLETE                         = 0x0776, // 5.4.8 18414
    SMSG_QUEST_CONFIRM_ACCEPT                          = 0x13C7, // 5.4.8 18414
    SMSG_QUEST_POI_QUERY_RESPONSE                      = 0x067F, // 5.4.8 18414
    SMSG_QUEST_PUSH_RESULT                             = 0x074D, // 5.4.8 18414
    SMSG_QUEST_QUERY_RESPONSE                          = 0x0276, // 5.4.8 18414
    SMSG_RAID_INSTANCE_INFO                            = 0x16BF, // 5.4.8 18414
    SMSG_RAID_READY_CHECK                              = 0x1C8E, // 5.4.8 18414
    SMSG_RAID_READY_CHECK_COMPLETED                    = 0x15C2, // 5.4.8 18414
    SMSG_RAID_READY_CHECK_CONFIRM                      = 0x02AF, // 5.4.8 18414
    SMSG_RAID_TARGET_UPDATE_ALL                        = 0x0283, // 5.4.8 18414
    SMSG_RAID_TARGET_UPDATE_SINGLE                     = 0x160B, // 5.4.8 18414
    SMSG_RANDOM_ROLL                                   = 0x141A, // 5.4.8 18414
    SMSG_RANDOMIZE_CHAR_NAME                           = 0x169F, // 5.4.8 18414
    SMSG_READ_ITEM_RESULT_FAILED                       = 0x0E8B, // 5.4.8 18414
    SMSG_READ_ITEM_RESULT_OK                           = 0x0305, // 5.4.8 18414
    SMSG_RECEIVED_MAIL                                 = 0x182B, // 5.4.8 18414
    SMSG_REFER_A_FRIEND_FAILURE                        = 0x021E, // 5.4.8 18414
    SMSG_REFORGE_RESULT                                = 0x141E, // 5.4.8 18414
    SMSG_REMOVED_SPELL                                 = 0x14C3, // 5.4.8 18414
    SMSG_REQUEST_CEMETERY_LIST_RESPONSE                = 0x042A, // 5.4.8 18414
    SMSG_REQUEST_PVP_REWARDS_RESPONSE                  = 0x08AA, // 5.4.8 18414
    SMSG_RESPEC_WIPE_CONFIRM                           = 0x02AB, // 5.4.8 18414
    SMSG_RESPOND_INSPECT_ACHIEVEMENTS                  = 0x009E, // 5.4.8 18414
    SMSG_RESURRECT_REQUEST                             = 0x1062, // 5.4.8 18414
    SMSG_SELL_RESPONSE                                 = 0x048E, // 5.4.8 18414
    SMSG_SEND_MAIL_RESULT                              = 0x1A9B, // 5.4.8 18414
    SMSG_SEND_UNLEARN_SPELLS                           = 0x10F1, // 5.4.8 18414
    SMSG_SERVER_FIRST_ACHIEVEMENT                      = 0x028B, // 5.4.8 18414
    SMSG_SERVER_MESSAGE                                = 0x0302, // 5.4.8 18414
    SMSG_SET_DUNGEON_DIFFICULTY                        = 0x1283, // 5.4.8 18414
    SMSG_SET_FACTION_STANDING                          = 0x10AA, // 5.4.8 18414
    SMSG_SET_FACTION_VISIBLE                           = 0x1E8E, // 5.4.8 18414
    SMSG_SET_FLAT_SPELL_MODIFIER                       = 0x10F2, // 5.4.8 18414
    SMSG_SET_FORCED_REACTIONS                          = 0x068F, // 5.4.8 18414
    SMSG_ITEM_REFUND_INFO_RESPONSE                     = 0x1C9A, // 5.4.8 18414
    SMSG_SET_PCT_SPELL_MODIFIER                        = 0x09D3, // 5.4.8 18414
    SMSG_PHASE_SHIFT_CHANGE                            = 0x02A2, // 5.4.8 18414
    SMSG_SET_PET_SPEC                                  = 0x060F, // 5.4.8 18414
    SMSG_SET_PLAYER_DECLINED_NAMES_RESULT              = 0x180E, // 5.4.8 18414
    SMSG_SET_PROFICIENCY                               = 0x1440, // 5.4.8 18414
    SMSG_SET_RAID_DIFFICULTY                           = 0x0591, // 5.4.8 18414
    SMSG_SET_TIME_ZONE_INFORMATION                     = 0x19C1, // 5.4.8 18414
    SMSG_SET_VEHICLE_REC_ID                            = 0x149F, // 5.4.8 18414
    SMSG_SHOW_TAXI_NODES                               = 0x1E1A, // 5.4.8 18414
    SMSG_SHOW_BANK                                     = 0x0007, // 5.4.8 18414
    SMSG_SHOW_NEURTRAL_PLAYER_FACTION_SELECT_UI        = 0x15E0, // 5.4.8 18414
    SMSG_SOCKET_GEMS_RESULT                            = 0x12A6, // 5.4.8 18414
    SMSG_SPELLORDAMAGE_IMMUNE                          = 0x08FB, // 5.4.8 18414
    SMSG_SPELL_DAMAGE_SHIELD                           = 0x05F3, // 5.4.8 18414
    SMSG_SPELLDISPELLOG                                = 0x0DF9, // 5.4.8 18414
    SMSG_SPELL_ENERGIZE_LOG                            = 0x0D79, // 5.4.8 18414
    SMSG_SPELL_HEAL_LOG                                = 0x09FB, // 5.4.8 18414
    SMSG_SPELLINSTAKILLLOG                             = 0x09F8, // 5.4.8 18414
    SMSG_SPELLINTERRUPTLOG                             = 0x1851, // 5.4.8 18414
    SMSG_SPELL_MISS_LOG                                = 0x1570, // 5.4.8 18414
    SMSG_SPELL_EXECUTE_LOG                             = 0x00D8, // 5.4.8 18414
    SMSG_SPELL_NON_MELEE_DAMAGE_LOG                    = 0x1450, // 5.4.8 18414
    SMSG_CATEGORY_COOLDOWN                             = 0x01DB, // 5.4.8 18414
    SMSG_SPELL_CHANNEL_START                           = 0x10F9, // 5.4.8 18414
    SMSG_SPELL_CHANNEL_UPDATE                          = 0x11D9, // 5.4.8 18414
    SMSG_SPELL_COOLDOWN                                = 0x0452, // 5.4.8 18414
    SMSG_SPELL_DELAYED                                 = 0x087A, // 5.4.8 18414
    SMSG_SPELL_FAILED_OTHER                            = 0x040B, // 5.4.8 18414
    SMSG_SPELL_FAILURE                                 = 0x04AF, // 5.4.8 18414
    SMSG_SPELL_GO                                      = 0x09D8, // 5.4.8 18414
    SMSG_SPELL_PERIODIC_AURA_LOG                       = 0x0CF2, // 5.4.8 18414
    SMSG_SPELL_START                                   = 0x107A, // 5.4.8 18414
    SMSG_SPIRIT_HEALER_CONFIRM                         = 0x1EAA, // 5.4.8 18414
    SMSG_SPLINE_MOVE_GRAVITY_DISABLE                   = 0x0845, // 5.4.8 18414
    SMSG_SPLINE_MOVE_GRAVITY_ENABLE                    = 0x0865, // 5.4.8 18414
    SMSG_SPLINE_MOVE_ROOT                              = 0x0728, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_FEATHER_FALL                  = 0x1893, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_FLIGHT_BACK_SPEED             = 0x0B28, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_FLIGHT_SPEED                  = 0x1DAB, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_FLYING                        = 0x1046, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_HOVER                         = 0x0258, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_LAND_WALK                     = 0x18B6, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_NORMAL_FALL                   = 0x0B08, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_PITCH_RATE                    = 0x0AB3, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_RUN_BACK_SPEED                = 0x1F9F, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_RUN_MODE                      = 0x0B18, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_RUN_SPEED                     = 0x02F1, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_SWIM_BACK_SPEED               = 0x0046, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_SWIM_SPEED                    = 0x1D8E, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_TURN_RATE                     = 0x0832, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_WALK_MODE                     = 0x1865, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_WALK_SPEED                    = 0x08B2, // 5.4.8 18414
    SMSG_SPLINE_MOVE_SET_WATER_WALK                    = 0x1823, // 5.4.8 18414
    SMSG_SPLINE_MOVE_START_SWIM                        = 0x0F29, // 5.4.8 18414
    SMSG_SPLINE_MOVE_STOP_SWIM                         = 0x1798, // 5.4.8 18414
    SMSG_SPLINE_MOVE_UNROOT                            = 0x01E1, // 5.4.8 18414
    SMSG_SPLINE_MOVE_UNSET_FLYING                      = 0x0DE2, // 5.4.8 18414
    SMSG_SPLINE_MOVE_UNSET_HOVER                       = 0x0CE1, // 5.4.8 18414
    SMSG_STANDSTATE_UPDATE                             = 0x1C12, // 5.4.8 18414
    SMSG_START_MIRROR_TIMER                            = 0x0E12, // 5.4.8 18414
    SMSG_START_TIMER                                   = 0x0E3F, // 5.4.8 18414
    SMSG_STOP_MIRROR_TIMER                             = 0x1026, // 5.4.8 18414
    SMSG_SUMMON_REQUEST                                = 0x081F, // 5.4.8 18414
    SMSG_TABARD_VENDOR_ACTIVATE                        = 0x0A3E, // 5.4.8 18414
    SMSG_UPDATE_TALENT_DATA                            = 0x0A9B, // 5.4.8 18414
    SMSG_TAXI_NODE_STATUS                              = 0x169E, // 5.4.8 18414
    SMSG_TEXT_EMOTE                                    = 0x002E, // 5.4.8 18414
    SMSG_THREAT_CLEAR                                  = 0x180B, // 5.4.8 18414
    SMSG_THREAT_REMOVE                                 = 0x1960, // 5.4.8 18414
    SMSG_THREAT_UPDATE                                 = 0x0632, // 5.4.8 18414
    SMSG_TIME_SYNC_REQ                                 = 0x1A8F, // 5.4.8 18414
    SMSG_TITLE_EARNED                                  = 0x068E, // 5.4.8 18414
    SMSG_TITLE_LOST                                    = 0x12BF, // 5.4.8 18414
    SMSG_TOTEM_CREATED                                 = 0x1C8F, // 5.4.8 18414
    SMSG_TRADE_STATUS                                  = 0x1963, // 5.4.8 18414
    SMSG_TRADE_UPDATED                                 = 0x181E, // 5.4.8 18414
    SMSG_TRAINER_BUY_FAILED                            = 0x042E, // 5.4.8 18414
    SMSG_TRAINER_LIST                                  = 0x189F, // 5.4.8 18414
    SMSG_TRANSFER_ABORTED                              = 0x0C8F, // 5.4.8 18414
    SMSG_TRANSFER_PENDING                              = 0x061B, // 5.4.8 18414
    SMSG_TRIGGER_CINEMATIC                             = 0x0B01, // 5.4.8 18414
    SMSG_TRIGGER_MOVIE                                 = 0x1C2E, // 5.4.8 18414
    SMSG_TURN_IN_PETITION_RESULTS                      = 0x0E13, // 5.4.8 18414
    SMSG_TUTORIAL_FLAGS                                = 0x1B90, // 5.4.8 18414
    SMSG_UPDATE_ACCOUNT_DATA                           = 0x0AAE, // 5.4.8 18414
    SMSG_UPDATE_COMBO_POINTS                           = 0x082F, // 5.4.8 18414
    SMSG_UPDATE_INSTANCE_OWNERSHIP                     = 0x10E0, // 5.4.8 18414
    SMSG_UPDATE_LAST_INSTANCE                          = 0x189B, // 5.4.8 18414
    SMSG_UPDATE_OBJECT                                 = 0x1792, // 5.4.8 18414
    SMSG_UPDATE_WORLD_STATE                            = 0x121B, // 5.4.8 18414
    SMSG_EQUIPMENT_SET_USE_RESULT                      = 0x0A2B, // 5.4.8 18414
    SMSG_USERLIST_ADD                                  = 0x1462, // 5.4.8 18414
    SMSG_USERLIST_REMOVE                               = 0x0AAB, // 5.4.8 18414
    SMSG_USERLIST_UPDATE                               = 0x063A, // 5.4.8 18414
    SMSG_VOID_STORAGE_CONTENTS                         = 0x008B, // 5.4.8 18414
    SMSG_VOID_STORAGE_TRANSFER_CHANGES                 = 0x14BA, // 5.4.8 18414
    SMSG_VOID_TRANSFER_RESULT                          = 0x1C9E, // 5.4.8 18414
    SMSG_WEATHER                                       = 0x06AB, // 5.4.8 18414
    SMSG_WEEKLY_RESET_CURRENCY                         = 0x023E, // 5.4.8 18414
    SMSG_WHO                                           = 0x161B, // 5.4.8 18414
    SMSG_WORLD_SERVER_INFO                             = 0x0082, // 5.4.8 18414
    SMSG_WORLD_STATE_UI_TIMER_UPDATE                   = 0x0027, // 5.4.8 18414
    SMSG_ZONE_UNDER_ATTACK                             = 0x10C2, // 5.4.8 18414
    SMSG_MOVE_UPDATE_SWIM_BACK_SPEED                   = 0x025A,
    SMSG_MOVE_UPDATE_SWIM_SPEED                        = 0x01E2,
    SMSG_MOVE_UPDATE_TELEPORT                          = 0x15A9,
    SMSG_MOVE_UPDATE_TURN_RATE                         = 0x0D62,
    SMSG_MOVE_UPDATE_WALK_SPEED                        = 0x0047,
    SMSG_ARENA_ERROR                                   = 0x0000,
    SMSG_ARENA_UNIT_DESTROYED                          = 0x0000,
    SMSG_ARENA_TEAM_EVENT                              = 0x0000,
    SMSG_ARENA_TEAM_STATS                              = 0x0000,
    SMSG_AUCTION_LIST_PENDING_SALES                    = 0x0000,
    SMSG_AUCTION_REMOVED_NOTIFICATION                  = 0x0000,
    SMSG_BATTLEFIELD_MGR_ENTRY_INVITE                  = 0x1226,
    SMSG_BATTLEFIELD_MGR_QUEUE_INVITE                  = 0x142E,
    SMSG_BATTLEFIELD_MGR_QUEUE_REQUEST_RESPONSE        = 0x08BE,
    SMSG_BATTLEFIELD_PLAYER_POSITIONS                  = 0x0000,
    SMSG_CALENDAR_ARENA_TEAM                           = 0x0000,
    SMSG_CHANNEL_MEMBER_COUNT                          = 0x0000,
    SMSG_CHAR_FACTION_CHANGE                           = 0x0000,
    SMSG_CHAT_WRONG_FACTION                            = 0x0000,
    SMSG_COMPLAINT_RESULT                              = 0x128F,
    SMSG_DESTRUCTIBLE_BUILDING_DAMAGE                  = 0x14BF,
    SMSG_DISPEL_FAILED                                 = 0x085B,
    SMSG_GM_RESPONSE_STATUS_UPDATE                     = 0x0000,
    SMSG_GM_TICKET_UPDATE_TEXT                         = 0x0000,
    SMSG_GUILD_ACHIEVEMENT_DATA                        = 0x0EF8,
    SMSG_GUILD_ACHIEVEMENT_DELETED                     = 0x1E61,
    SMSG_GUILD_CRITERIA_DATA                           = 0x1BF0,
    SMSG_GUILD_EVENT                                   = 0x0000,//obsolete
    SMSG_ITEM_TEXT_QUERY_RESPONSE                      = 0x0000,
    SMSG_LFG_PLAYER_REWARD                             = 0x121A,
    SMSG_LFG_UPDATE_SEARCH                             = 0x1161,
    SMSG_LF_GUILD_RECRUIT_LIST_UPDATED                 = 0x0E68,
    SMSG_LOOT_ALL_PASSED                               = 0x0EBB,
    SMSG_LOOT_ROLL                                     = 0x1840,
    SMSG_LOOT_ROLL_WON                                 = 0x0A3A,
    SMSG_LOOT_START_ROLL                               = 0x0EAA,
    SMSG_MOVE_SET_CAN_TRANSITION_BETWEEN_SWIM_AND_FLY  = 0x11DB,
    SMSG_MOVE_UNSET_CAN_TRANSITION_BETWEEN_SWIM_AND_FLY= 0x0868,
    SMSG_MOVE_UPDATE_COLLISION_HEIGHT                  = 0x1812,
    SMSG_MOVE_UPDATE_FLIGHT_BACK_SPEED                 = 0x036A,
    SMSG_MOVE_UPDATE_PITCH_RATE                        = 0x09E2,
    SMSG_MOVE_UPDATE_RUN_BACK_SPEED                    = 0x08A3,
    SMSG_OVERRIDE_LIGHT                                = 0x068A,
    SMSG_PAGE_TEXT_QUERY_RESPONSE                      = 0x081E,
    SMSG_PET_ACTION_FEEDBACK                           = 0x080E,
    SMSG_PET_CAST_FAILED                               = 0x149B,
    SMSG_PET_LEARNED_SPELL                             = 0x0282,
    SMSG_PET_REMOVED_SPELL                             = 0x1CAE,
    SMSG_PET_UPDATE_COMBO_POINTS                       = 0x1206,
    SMSG_PROCRESIST                                    = 0x12BE,
    SMSG_PVP_CREDIT                                    = 0x100A,
    SMSG_QUERY_QUESTS_COMPLETED_RESPONSE               = 0x0000,
    SMSG_QUESTGIVER_QUEST_FAILED                       = 0x12DE,
    SMSG_QUESTUPDATE_FAILEDTIMER                       = 0x06FF,
    SMSG_RAID_GROUP_ONLY                               = 0x0000,
    SMSG_RAID_INSTANCE_MESSAGE                         = 0x0CAF,
    SMSG_REALM_SPLIT                                   = 0x1A2E,
    SMSG_SET_PROJECTILE_POSITION                       = 0x0000,
    SMSG_SPELLSTEALLOG                                 = 0x0000,
    SMSG_STABLE_RESULT                                 = 0x14BE,
    SMSG_SUPERCEDED_SPELL                              = 0x1943,
    SMSG_UPDATE_ACCOUNT_DATA_COMPLETE                  = 0x0000,
    SMSG_UPDATE_CURRENCY                               = 0x129E,
    SMSG_UPDATE_CURRENCY_WEEK_LIMIT                    = 0x0E2A,
    SMSG_UPDATE_INSTANCE_ENCOUNTER_UNIT                = 0x0000,
    SMSG_VOID_ITEM_SWAP_RESPONSE                       = 0x1EBF,
    SMSG_WARDEN_DATA                                   = 0x0C0A,
    SMSG_WHOIS                                         = 0x12BA,
    SMSG_MULTIPLE_PACKETS                              = 0x0000,//NYI
    SMSG_NEW_WORLD_ABORT                               = 0x0C1B,//NYI
    SMSG_NOTIFY_DANCE                                  = 0x0000,//NYI
    SMSG_NOTIFY_DEST_LOC_SPELL_CAST                    = 0x1E0E,//NYI
    SMSG_OFFER_PETITION_ERROR                          = 0x161E,//NYI
    SMSG_ACCOUNT_CRITERIA_UPDATE                       = 0x189E,//NYI
    SMSG_ACCOUNT_RESTRICTED_WARNING                    = 0x0000,//NYI
    SMSG_ALL_ACCOUNT_CRITERIA                          = 0x0A9E,//NYI
    SMSG_AREA_TRIGGER_MOVEMENT_UPDATE                  = 0x0000,//NYI
    SMSG_ARENA_TEAM_INVITE                             = 0x0000,//NYI
    SMSG_AURA_POINTS_DEPLETED                          = 0x1553,//NYI
    SMSG_AVAILABLE_VOICE_CHANNEL                       = 0x029A,//NYI
    SMSG_AVERAGE_ITEM_LEVEL_INFORM                     = 0x0000,//NYI
    SMSG_BATTLEFIELD_MGR_EJECT_PENDING                 = 0x003E,//NYI
    SMSG_BATTLEFIELD_MGR_EXIT_REQUEST                  = 0x0000,//NYI
    SMSG_BATTLEFIELD_MGR_STATE_CHANGE                  = 0x083A,//NYI
    SMSG_BATTLEFIELD_PORT_DENIED                       = 0x149A,//NYI
    SMSG_BATTLEFIELD_STATUS_WAITFORGROUPS              = 0x10A6,//NYI
    SMSG_BATTLEGROUND_INFO_THROTTLED                   = 0x1E1E,//NYI
    SMSG_BATTLE_PAY_ACK_FAILED                         = 0x103E,//NYI
    SMSG_BATTLE_PAY_CONFIRM_PURCHASE                   = 0x14E3,//NYI
    SMSG_BATTLE_PAY_DELIVERY_ENDED                     = 0x020B,//NYI
    SMSG_BATTLE_PAY_DELIVERY_STARTED                   = 0x1E32,//NYI
    SMSG_BATTLE_PAY_GET_DISTRIBUTION_LIST_RESPONSE     = 0x043F,//NYI
    SMSG_BATTLE_PAY_GET_PRODUCT_LIST_RESPONSE          = 0x1ABF,//NYI
    SMSG_BATTLE_PAY_GET_PURCHASE_LIST_RESPONSE         = 0x023A,//NYI
    SMSG_BATTLE_PAY_PURCHASE_UPDATE                    = 0x14E2,//NYI
    SMSG_BATTLE_PAY_START_DISTRIBUTION_ASSIGN_TO_TARGET_RESPONSE = 0x08AF,//NYI
    SMSG_BATTLE_PAY_START_DISTRIBUTION_MAKE_PRODUCT_CHOICE_RESPONSE = 0x0000,//NYI
    SMSG_BATTLE_PAY_START_PURCHASE_RESPONSE            = 0x0612,//NYI
    SMSG_CALENDAR_EVENT_INVITE_NOTES                   = 0x11C0,//NYI
    SMSG_CALENDAR_EVENT_INVITE_NOTES_ALERT             = 0x1286,//NYI
    SMSG_CAMERA_SHAKE                                  = 0x0C3A,//NYI
    SMSG_CHARACTER_LOGIN_FAILED                        = 0x1A0B,//NYI
    SMSG_CHAT_IGNORED_ACCOUNT_MUTED                    = 0x0C3B,//NYI
    SMSG_CHAT_NOT_IN_PARTY                             = 0x0A8A,//NYI
    SMSG_CHAT_SERVER_DISCONNECTED                      = 0x0000,//NYI
    SMSG_CHAT_SERVER_RECONNECTED                       = 0x0A2E,//NYI
    SMSG_CLEAR_BOSS_EMOTES                             = 0x062B,//NYI
    SMSG_CLEAR_FAR_SIGHT_IMMEDIATE                     = 0x0000,//NYI
    SMSG_COMBAT_EVENT_FAILED                           = 0x18C3,//NYI
    SMSG_COMMENTATOR_PARTY_INFO                        = 0x0000,//NYI
    SMSG_COMMENTATOR_PLAYER_INFO                       = 0x0000,//NYI
    SMSG_COMMENTATOR_SKIRMISH_QUEUE_RESULT1            = 0x0000,//NYI
    SMSG_COMMENTATOR_SKIRMISH_QUEUE_RESULT2            = 0x0000,//NYI
    SMSG_COMMENTATOR_STATE_CHANGED                     = 0x0000,//NYI
    SMSG_COMPRESSED_MOVES                              = 0x0000,//NYI
    SMSG_COMSAT_CONNECT_FAIL                           = 0x0000,//NYI
    SMSG_COMSAT_DISCONNECT                             = 0x0000,//NYI
    SMSG_COMSAT_RECONNECT_TRY                          = 0x0000,//NYI
    SMSG_COOLDOWN_CHEAT                                = 0x0432,//NYI
    SMSG_CURRENCY_LOOT_REMOVED                         = 0x0000,//NYI
    SMSG_CURRENCY_LOOT_RESTORED                        = 0x0000,//NYI
    SMSG_CUSTOM_LOAD_SCREEN                            = 0x1CAF,//NYI
    SMSG_DANCE_QUERY_RESPONSE                          = 0x0000,//NYI
    SMSG_DEBUG_RUNE_REGEN                              = 0x12A7,//NYI
    SMSG_DIFFERENT_INSTANCE_FROM_PARTY                 = 0x120B,//NYI
    SMSG_DISENCHANT_CREDIT                             = 0x10BB,//NYI
    SMSG_DISMOUNTRESULT                                = 0x062F,//NYI
    SMSG_DISPLAY_GAME_ERROR                            = 0x181F,//NYI
    SMSG_DONT_AUTO_PUSH_SPELLS_TO_ACTION_BAR           = 0x1C8B,//NYI
    SMSG_DROP_NEW_CONNECTION                           = 0x0000,//NYI
    SMSG_DUMP_RIDE_TICKETS_RESPONSE                    = 0x0000,//NYI
    SMSG_ECHO_PARTY_SQUELCH                            = 0x0000,//NYI
    SMSG_FAILED_PLAYER_CONDITION                       = 0x1223,//NYI
    SMSG_FEIGN_DEATH_RESISTED                          = 0x029E,//NYI
    SMSG_FLIGHT_SPLINE_SYNC                            = 0x0063,//NYI
    SMSG_FLOOD_DETECTED                                = 0x0000,//NYI
    SMSG_FORCED_DEATH_UPDATE                           = 0x0E8F,//NYI
    SMSG_RESUME_COMMS                                  = 0x0969,//NYI
    SMSG_FORGE_MASTER_SET                              = 0x0000,//NYI
    SMSG_GAMEOBJECT_RESET_STATE                        = 0x100E,//NYI
    SMSG_GAMESPEED_SET                                 = 0x0000,//NYI
    SMSG_GAMETIME_SET                                  = 0x0A0F,//NYI
    SMSG_GAMETIME_UPDATE                               = 0x0E1B,//NYI
    SMSG_GAME_EVENT_DEBUG_LOG                          = 0x0000,//NYI
    SMSG_GAME_OBJECT_ACTIVATE_ANIM_KIT                 = 0x0C8A,//NYI
    SMSG_GMRESPONSE_DB_ERROR                           = 0x0000,//NYI
    SMSG_GM_TICKET_STATUS_UPDATE                       = 0x000B,//NYI
    SMSG_GM_MESSAGECHAT                                = 0x0000,//NYI
    SMSG_GM_PLAYER_INFO                                = 0x102B,//NYI
    SMSG_GODMODE                                       = 0x1862,//NYI
    SMSG_GROUPACTION_THROTTLED                         = 0x0287,//NYI
    SMSG_GROUP_CANCEL                                  = 0x0000,//NYI
    SMSG_GUILD_ACHIEVEMENT_MEMBERS                     = 0x1B70,//NYI
    SMSG_GUILD_CHALLENGE_COMPLETED                     = 0x1AF8,//NYI
    SMSG_GUILD_CHANGE_NAME_RESULT                      = 0x0BE9,//NYI
    SMSG_GUILD_COMMAND_RESULT_2                        = 0x0000,//NYI
    SMSG_GUILD_FLAGGED_FOR_RENAME                      = 0x0FE9,//NYI
    SMSG_GUILD_MEMBERS_FOR_RECIPE                      = 0x0BF0,//NYI
    SMSG_GUILD_MEMBER_RECIPES                          = 0x0EE1,//NYI
    SMSG_GUILD_MOVE_COMPLETE                           = 0x0BE8,//NYI
    SMSG_GUILD_MOVE_STARTING                           = 0x0AE1,//NYI
    SMSG_GUILD_NEWS_DELETED                            = 0x0F70,//NYI
    SMSG_GUILD_RECIPES                                 = 0x0FF1,//NYI
    SMSG_GUILD_REPUTATION_REACTION_CHANGED             = 0x0E71,//NYI
    SMSG_GUILD_RESET                                   = 0x1AF0,//NYI
    SMSG_GUILD_ROSTER_UPDATE                           = 0x0AF1,//NYI
    SMSG_HOTFIX_NOTIFY                                 = 0x0EBF,//NYI
    SMSG_INSPECT_PVP                                   = 0x0000,//NYI
    SMSG_INVALIDATE_DANCE                              = 0x0000,//NYI
    SMSG_INVALIDATE_PLAYER                             = 0x102E,//NYI
    SMSG_INVALID_PROMOTION_CODE                        = 0x1A0E,//NYI
    SMSG_ITEM_ADD_PASSIVE                              = 0x161A,//NYI
    SMSG_ITEM_REMOVE_PASSIVE                           = 0x0A2F,//NYI
    SMSG_ITEM_SEND_PASSIVE                             = 0x122F,//NYI
    SMSG_KICK_REASON                                   = 0x0A1E,//NYI
    SMSG_LEARNED_DANCE_MOVES                           = 0x0000,//NYI
    SMSG_LFG_SLOT_INVALID                              = 0x0C12,//NYI
    SMSG_LFG_UPDATE_STATUS_NONE                        = 0x0000,//NYI
    SMSG_LF_GUILD_COMMAND_RESULT                       = 0x1A79,//NYI
    SMSG_LOOT_CONTENTS                                 = 0x121F,//NYI
    SMSG_LOOT_ITEM_NOTIFY                              = 0x080F,//NYI
    SMSG_LOOT_SLOT_CHANGED                             = 0x0000,//NYI
    SMSG_MAP_OBJ_EVENTS                                = 0x00BB,//NYI
    SMSG_MEETINGSTONE_COMPLETE                         = 0x0000,//NYI
    SMSG_MEETINGSTONE_IN_PROGRESS                      = 0x0000,//NYI
    SMSG_MESSAGE_BOX                                   = 0x02AE,//NYI
    SMSG_MINIGAME_SETUP                                = 0x0000,//NYI
    SMSG_MINIGAME_STATE                                = 0x0000,//NYI
    SMSG_MISSILE_CANCEL                                = 0x1203,//NYI
    SMSG_MONEY_NOTIFY                                  = 0x0C0F,//NYI
    SMSG_ON_MONSTER_MOVE_TRANSPORT                     = 0x0000,//NYI
    SMSG_MOUNT_RESULT                                  = 0x0E0F,//NYI
    SMSG_MOVE_COLLISION_DISABLE                        = 0x15B8,//NYI
    SMSG_MOVE_COLLISION_ENABLE                         = 0x1826,//NYI
    SMSG_MOVE_SET_COMPOUND_STATE                       = 0x0061,//NYI
    SMSG_OPEN_CONTAINER                                = 0x14BB,//NYI
    SMSG_OPEN_LFG_DUNGEON_FINDER                       = 0x0E8A,//NYI
    SMSG_PAUSE_MIRROR_TIMER                            = 0x162E,//NYI
    SMSG_PETGODMODE                                    = 0x1940,//NYI
    SMSG_PET_ADDED                                     = 0x123A,//NYI
    SMSG_PET_BROKEN                                    = 0x0000,//NYI
    SMSG_PET_DISMISS_SOUND                             = 0x1ABB,//NYI
    SMSG_PET_GUIDS                                     = 0x1227,//NYI
    SMSG_PET_MODE                                      = 0x163F,//NYI
    SMSG_PET_RENAMEABLE                                = 0x0000,//NYI
    SMSG_PET_SLOT_UPDATED                              = 0x069A,//NYI
    SMSG_PET_TAME_FAILURE                              = 0x040E,//NYI
    SMSG_PLAYERBINDERROR                               = 0x0000,//NYI
    SMSG_PLAYER_DIFFICULTY_CHANGE                      = 0x128E,//NYI
    SMSG_PLAYER_SKINNED                                = 0x1463,//NYI
    SMSG_PLAY_DANCE                                    = 0x0000,//NYI
    SMSG_PLAY_TIME_WARNING                             = 0x062A,//NYI
    SMSG_QUESTUPDATE_FAILED                            = 0x07DD,//NYI
    SMSG_QUEST_FORCE_REMOVE                            = 0x07C5,//NYI
    SMSG_QUEST_NPC_QUERY_RESPONSE                      = 0x036D,//NYI
    SMSG_RAID_MARKERS_CHANGED                          = 0x008A,//NYI
    SMSG_RAID_READY_CHECK_THROTTLED_ERROR              = 0x0000,//NYI
    SMSG_RAID_SUMMON_FAILED                            = 0x108A,//NYI
    SMSG_REAL_GROUP_UPDATE                             = 0x0000,//NYI
    SMSG_CONNECT_TO                                    = 0x1149,//NYI
    SMSG_REFER_A_FRIEND_EXPIRED                        = 0x1143,//NYI
    SMSG_REPORT_PVP_AFK_RESULT                         = 0x18BE,//NYI
    SMSG_RESEARCH_COMPLETE                             = 0x0C0E,//NYI
    SMSG_RESEARCH_SETUP_HISTORY                        = 0x08AB,//NYI
    SMSG_RESET_COMPRESSION_CONTEXT                     = 0x0000,//NYI
    SMSG_RWHOIS                                        = 0x0000,//NYI
    SMSG_SERVERTIME                                    = 0x1C3E,//NYI
    SMSG_SERVER_PERF                                   = 0x0000,//NYI
    SMSG_SET_DF_FAST_LAUNCH_RESULT                     = 0x1041,//NYI
    SMSG_SET_FACTION_ATWAR                             = 0x0C9B,//NYI
    SMSG_SET_FORGE_MASTER                              = 0x1E33,//NYI
    SMSG_SET_PLAY_HOVER_ANIM                           = 0x069F,//NYI
    SMSG_SHOW_RATINGS                                  = 0x0000,//NYI
    SMSG_SOR_START_EXPERIENCE_INCOMPLETE               = 0x0083,//NYI
    SMSG_SPELLBREAKLOG                                 = 0x0000,//NYI
    SMSG_SPELL_UPDATE_CHAIN_TARGETS                    = 0x0D52,//NYI
    SMSG_SPLINE_MOVE_COLLISION_DISABLE                 = 0x15B8,//NYI
    SMSG_SPLINE_MOVE_COLLISION_ENABLE                  = 0x1826,//NYI
    SMSG_SPLINE_MOVE_SET_ANIM                          = 0x0000,//NYI
    SMSG_STOP_DANCE                                    = 0x0000,//NYI
    SMSG_STREAMING_MOVIE                               = 0x1843,//NYI
    SMSG_SUMMON_CANCEL                                 = 0x000A,//NYI
    SMSG_SUPPRESS_NPC_GREETINGS                        = 0x100B,//NYI
    SMSG_SUSPEND_COMMS                                 = 0x1D48,//NYI
    SMSG_SUSPEND_TOKEN_RESPONSE                        = 0x18BA,//NYI
    SMSG_TALENTS_ERROR                                 = 0x0000,//NYI
    SMSG_TALENTS_INVOLUNTARILY_RESET                   = 0x088A,//NYI
    SMSG_TEST_DROP_RATE_RESULT                         = 0x0000,//NYI
    SMSG_TIME_ADJUSTMENT                               = 0x04AA,//NYI
    SMSG_TOGGLE_XP_GAIN                                = 0x0000,//NYI
    SMSG_UNIT_HEALTH_FREQUENT                          = 0x0000,//NYI
    SMSG_UNIT_SPELLCAST_START                          = 0x0000,//NYI
    SMSG_UPDATE_DUNGEON_ENCOUNTER_FOR_LOOT             = 0x1863,//NYI
    SMSG_UPDATE_SERVER_PLAYER_POSITION                 = 0x0000,//NYI
    SMSG_VOICESESSION_FULL                             = 0x0000,//NYI
    SMSG_VOICE_CHAT_STATUS                             = 0x10E2,//NYI
    SMSG_VOICE_PARENTAL_CONTROLS                       = 0x04BF,//NYI
    SMSG_VOICE_SESSION_LEAVE                           = 0x15C0,//NYI
    SMSG_VOICE_SET_TALKER_MUTED                        = 0x0000,//NYI
    SMSG_VOID_STORAGE_FAILED                           = 0x19C2,//NYI
    SMSG_WAIT_QUEUE_FINISH                             = 0x060E,//NYI
    SMSG_WAIT_QUEUE_UPDATE                             = 0x0C2F,//NYI
    SMSG_WARGAME_CHECK_ENTRY                           = 0x0000,//NYI
    SMSG_WARGAME_REQUEST_SENT                          = 0x0CAE,//NYI
    SMSG_WEEKLY_LAST_RESET                             = 0x0000,//NYI
    SMSG_WEEKLY_SPELL_USAGE                            = 0x00F9,//NYI
    SMSG_WEEKLY_SPELL_USAGE_UPDATE                     = 0x117A,//NYI
    SMSG_XP_GAIN_ABORTED                               = 0x1A2B,//NYI
    SMSG_COMMENTATOR_MAP_INFO                          = 0x1CBE,//NYI5.4.818414
    SMSG_SERVER_BUCK_DATA                              = 0x1142,//NYI5.4.818414
    SMSG_VOICE_SESSION_ROSTER_UPDATE                   = 0x000E,//NYI5.4.818414
    SMSG_EXPECTED_SPAM_RECORDS                         = 0x18C0,//NYI5.4.818414
    SMSG_ACCOUNT_INFO_RESPONSE                         = 0x042F,//NYI5.4.818414
    SMSG_SERVER_INFO_RESPONSE                          = 0x103A,//NYI5.4.818414
    SMSG_DEBUG_AI_STATE                                = 0x0A2A,//NYI5.4.818414
    SMSG_GM_CHARACTER_RESTORE_RESPONSE                 = 0x14E1 //NYI5.4.818414
};

enum OpcodeServerClient
{
    MSG_MOVE_CHARM_TELEPORT_CHEAT                      = 0x0000,
    MSG_MOVE_FALL_LAND                                 = 0x08FA,
    MSG_MOVE_HEARTBEAT                                 = 0x01F2,
    MSG_MOVE_JUMP                                      = 0x1153,
    MSG_MOVE_SET_FACING                                = 0x1050,
    MSG_MOVE_SET_PITCH                                 = 0x017A,
    MSG_MOVE_SET_RUN_MODE                              = 0x0979,
    MSG_MOVE_SET_WALK_MODE                             = 0x08D1,
    MSG_MOVE_START_ASCEND                              = 0x11FA,
    MSG_MOVE_START_BACKWARD                            = 0x09D8,
    MSG_MOVE_START_DESCEND                             = 0x01D1,
    MSG_MOVE_START_FORWARD                             = 0x095A,
    MSG_MOVE_START_PITCH_DOWN                          = 0x08D8,
    MSG_MOVE_START_PITCH_UP                            = 0x00D8,
    MSG_MOVE_START_STRAFE_LEFT                         = 0x01F8,
    MSG_MOVE_START_STRAFE_RIGHT                        = 0x1058,
    MSG_MOVE_START_SWIM                                = 0x1858,
    MSG_MOVE_START_TURN_LEFT                           = 0x01D0,
    MSG_MOVE_START_TURN_RIGHT                          = 0x107B,
    MSG_MOVE_STOP                                      = 0x08F1,
    MSG_MOVE_STOP_ASCEND                               = 0x115A,
    MSG_MOVE_STOP_PITCH                                = 0x007A,
    MSG_MOVE_STOP_STRAFE                               = 0x0171,
    MSG_MOVE_STOP_SWIM                                 = 0x0950,
    MSG_MOVE_STOP_TURN                                 = 0x1170,
    MSG_MOVE_WORLDPORT_ACK                             = 0x1FAD,
    MSG_MOVE_TELEPORT_CHEAT                            = 0x0000,
    MSG_MOVE_TIME_SKIPPED                              = 0x0000,
    MSG_MOVE_TOGGLE_COLLISION_CHEAT                    = 0x0000,
    MSG_NOTIFY_PARTY_SQUELCH                           = 0x0000,
    MSG_QUERY_NEXT_MAIL_TIME                           = 0x089B,
    MSG_RAID_READY_CHECK_FINISHED                      = 0x0000,
    MSG_SAVE_GUILD_EMBLEM                              = 0x0000,
    MSG_VERIFY_CONNECTIVITY                            = 0x4F57, // Not an opcode

};

inline bool IsInstanceOnlyOpcode(uint32 opcode)
{
    switch (opcode)
    {
        case SMSG_ATTACK_STOP:
        case SMSG_DUEL_INBOUNDS:
        case SMSG_DUEL_OUTOFBOUNDS:
        case SMSG_ITEM_PUSH_RESULT:
        case SMSG_QUEST_GIVER_STATUS:
        case SMSG_QUERY_TIME_RESPONSE:
        case SMSG_MOUNT_RESULT:
        case SMSG_DUEL_COMPLETE:
        case SMSG_LOOT_MONEY_NOTIFY:
        case SMSG_COIN_REMOVED:
        case SMSG_ATTACK_START:
        case SMSG_DUEL_WINNER:
        case SMSG_DUEL_REQUESTED:
        case SMSG_LOOT_RESPONSE:
        case SMSG_LOOT_REMOVED:
        case SMSG_LOOT_ITEM_NOTIFY:
        case SMSG_LOOT_RELEASE:
            return true;
        default:
            return false;
    }
}

enum ConnectionType
{
    CONNECTION_TYPE_REALM       = 0,
    CONNECTION_TYPE_INSTANCE    = 1,
    MAX_CONNECTION_TYPES,

    CONNECTION_TYPE_DEFAULT     = -1
};

enum OpcodeMisc : uint16
{
    MAX_OPCODE                                        = 0x7FFF,
    NUM_OPCODE_HANDLERS                               = (MAX_OPCODE + 1),
    UNKNOWN_OPCODE                                    = 0xFFFF,
    NULL_OPCODE                                       = 0,
    COMPRESSED_OPCODE_MASK                            = 0x8000
};

/// Player state
enum SessionStatus
{
    STATUS_AUTHED = 0,                                      // Player authenticated (_player == nullptr, m_playerRecentlyLogout = false or will be reset before handler call, m_GUID have garbage)
    STATUS_LOGGEDIN,                                        // Player in game (_player != nullptr, m_GUID == _player->GetGUID(), inWorld())
    STATUS_TRANSFER,                                        // Player transferring to another map (_player != nullptr, m_GUID == _player->GetGUID(), !inWorld())
    STATUS_LOGGEDIN_OR_RECENTLY_LOGGOUT,                    // _player != nullptr or _player == nullptr && m_playerRecentlyLogout && m_playerLogout, m_GUID store last _player guid)
    STATUS_NEVER,                                           // Opcode not accepted from client (deprecated or server side only)
    STATUS_UNHANDLED                                        // Opcode not handled yet
};

enum PacketProcessing
{
    PROCESS_INPLACE = 0,                                    //process packet whenever we receive it - mostly for non-handled or non-implemented packets
    PROCESS_THREADUNSAFE,                                   //packet is not thread-safe - process it in World::UpdateSessions()
    PROCESS_THREADSAFE                                      //packet is thread-safe - process it in Map::Update()
};

class WorldPacket;
class WorldSession;

class OpcodeHandler
{
public:
    OpcodeHandler(char const* name, SessionStatus status) : Name(name), Status(status) { }
    virtual ~OpcodeHandler() { }

    char const* Name;
    SessionStatus Status;
};

class ClientOpcodeHandler : public OpcodeHandler
{
public:
    ClientOpcodeHandler(char const* name, SessionStatus status, PacketProcessing processing)
        : OpcodeHandler(name, status), ProcessingPlace(processing) { }

    virtual void Call(WorldSession* session, WorldPacket& packet) const = 0;

    PacketProcessing ProcessingPlace;
};

class ServerOpcodeHandler : public OpcodeHandler
{
public:
    ServerOpcodeHandler(char const* name, SessionStatus status, ConnectionType conIdx)
        : OpcodeHandler(name, status), ConnectionIndex(conIdx) { }

    ConnectionType ConnectionIndex;
};

class OpcodeTable
{
public:
    OpcodeTable();

    OpcodeTable(OpcodeTable const&) = delete;
    OpcodeTable& operator=(OpcodeTable const&) = delete;

    ~OpcodeTable();

    void Initialize();

    ClientOpcodeHandler const* operator[](OpcodeClient index) const
    {
        return _internalTableClient[index];
    }

    ServerOpcodeHandler const* operator[](OpcodeServer index) const
    {
        return _internalTableServer[index];
    }

private:
    template<typename Handler, Handler HandlerFunction>
    void ValidateAndSetClientOpcode(OpcodeClient opcode, char const* name, SessionStatus status, PacketProcessing processing);
    void ValidateAndSetServerOpcode(OpcodeServer opcode, char const* name, SessionStatus status, ConnectionType conIdx);

    ClientOpcodeHandler* _internalTableClient[NUM_OPCODE_HANDLERS];
    ServerOpcodeHandler* _internalTableServer[NUM_OPCODE_HANDLERS];
};

TC_GAME_API extern OpcodeTable opcodeTable;

/// Lookup opcode name for human understandable logging
std::string GetOpcodeNameForLogging(OpcodeClient opcode);
std::string GetOpcodeNameForLogging(OpcodeServer opcode);

#endif
/// @}
