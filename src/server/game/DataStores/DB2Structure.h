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

#ifndef TRINITY_DB2STRUCTURE_H
#define TRINITY_DB2STRUCTURE_H

#include "Common.h"
#include "DBCEnums.h"

#pragma pack(push, 1)

#define MAX_BROADCAST_TEXT_EMOTES 3
#define MAX_HOLIDAY_DURATIONS 10
#define MAX_HOLIDAY_DATES 16
#define MAX_HOLIDAY_FLAGS 10
#define MAX_ITEM_PROTO_FLAGS 3
#define MAX_ITEM_PROTO_SOCKETS 3
#define MAX_ITEM_PROTO_SPELLS  5
#define MAX_ITEM_PROTO_STATS  10

struct BroadcastTextEntry
{
    uint32 ID;
    int32 Language;
    LocalizedString* MaleText;
    LocalizedString* FemaleText;
    uint32 EmoteID[MAX_BROADCAST_TEXT_EMOTES];
    uint32 EmoteDelay[MAX_BROADCAST_TEXT_EMOTES];
    uint32 SoundID;
    uint32 UnkEmoteID;
    uint32 Type;
};



struct ItemEntry
{
    uint32   ID;                                             // 0
    uint32   ClassID;                                        // 1
    uint32   SubclassID;                                     // 2
    int32    SoundOverrideSubclassID;                        // 3
    int32    Material;                                       // 4
    uint32   DisplayInfoID;                                  // 5
    uint32   InventoryType;                                  // 6
    uint32   SheatheType;                                    // 7
};

struct ItemCurrencyCostEntry
{
    uint32  ID;
    uint32  ItemID;
};

struct ItemSparseEntry
{
    uint32     ID;                                                  // 0
    uint32     Quality;                                             // 1
    uint32     Flags;                                               // 2
    uint32     Flags2;                                              // 3
    uint32     Flags3;                                              // 4
    float      PriceRandomValue;                                    // 5
    float      PriceVariance;                                       // 6
    uint32     BuyCount;                                            // 7
    uint32     BuyPrice;                                            // 7
    uint32     SellPrice;                                           // 8
    uint32     InventoryType;                                       // 9
    int32      AllowableClass;                                      // 10
    int32      AllowableRace;                                       // 11
    uint32     ItemLevel;                                           // 12
    uint32     RequiredLevel;                                       // 13
    uint32     RequiredSkill;                                       // 14
    uint32     RequiredSkillRank;                                   // 15
    int32      RequiredSpell;                                       // 16
    uint32     RequiredHonorRank;                                   // 17
    uint32     RequiredCityRank;                                    // 18
    uint32     RequiredReputationFaction;                           // 19
    uint32     RequiredReputationRank;                              // 20
    int32      MaxCount;                                            // 21
    int32      Stackable;                                           // 22
    uint32     ContainerSlots;                                      // 23
    int32      ItemStatType[MAX_ITEM_PROTO_STATS];                  // 24 - 33
    int32      ItemStatValue[MAX_ITEM_PROTO_STATS];                 // 34 - 43
    int32      ItemStatAllocation[MAX_ITEM_PROTO_STATS];            // 44 - 53
    int32      ItemStatSocketCostMultiplier[MAX_ITEM_PROTO_STATS];  // 54 - 63
    int32      ScalingStatDistribution;                             // 64
    int32      DamageType;                                          // 65
    uint32     Delay;                                               // 66
    float      RangedModRange;                                      // 67
    int32      SpellID[MAX_ITEM_PROTO_SPELLS];                      // 68 - 72
    int32      SpellTrigger[MAX_ITEM_PROTO_SPELLS];                 // 73 - 77
    int32      SpellCharges[MAX_ITEM_PROTO_SPELLS];                 // 78 - 82
    int32      SpellCooldown[MAX_ITEM_PROTO_SPELLS];                // 83 - 87
    int32      SpellCategory[MAX_ITEM_PROTO_SPELLS];                // 88 - 92
    int32      SpellCategoryCooldown[MAX_ITEM_PROTO_SPELLS];        // 93 - 94
    int32      Bonding;                                             // 95
    LocalizedString* Display;                                       // 96
    LocalizedString* Display1;                                      // 97
    LocalizedString* Display2;                                      // 98
    LocalizedString* Display3;                                      // 99
    LocalizedString* Description;                                   // 100
    uint32     PageText;                                            // 101
    int32      LanguageID;                                          // 102
    int32      PageMaterial;                                        // 103
    int32      StartQuest;                                          // 104
    uint32     LockID;                                              // 105
    int32      Material;                                            // 106
    int32      SheatheType;                                         // 107
    int32      RandomProperty;                                      // 108
    uint32     RandomSuffix;                                        // 109
    uint32     ItemSet;                                             // 110
    uint32     AreaID;                                              // 112
    int32      MapID;                                               // 113
    int32      BagFamily;                                           // 114
    int32      TotemCategory;                                       // 115
    int32      SocketColor[MAX_ITEM_PROTO_SOCKETS];                 // 116 - 118
    uint32     Content[MAX_ITEM_PROTO_SOCKETS];                     // 119 - 121
    int32      SocketBonus;                                         // 122
    int32      GemProperties;                                       // 123
    float      ArmorDamageModifier;                                 // 124
    int32      Duration;                                            // 125
    uint32     ItemLimitCategory;                                   // 126
    int32      HolidayID;                                           // 127
    float      StatScalingFactor;                                   // 128
    int32      CurrencySubstitutionID;                              // 129
    int32      CurrencySubstitutionCount;                           // 130
};

struct ItemUpgradeEntry
{
    uint32     UpgradeID;                                    // 0
    uint32     UpgradeGroupId;                               // 1 groupid from ItemUpgradePath.dbc
    uint32     IlvlStep;                                     // 2
    uint32     ItemLvl;                                      // 3 required ilvl
    uint32     CurrencyType;                                 // 4 CurrencyType cost
    uint32     CurrencyCost;                                 // 5 CurrencyCost amount
};

#define MAX_ITEM_EXT_COST_ITEMS         5
#define MAX_ITEM_EXT_COST_CURRENCIES    5

struct ItemExtendedCostEntry
{
    uint32      ID;                                                 // 0 extended-cost entry id
    uint32      RequiredHonorPoints;                                // 1 required honor points
    uint32      RequiredArenaPoints;                                // 2 required arena points
    uint32      RequiredArenaSlot;                                  // 3 arena slot restrictions (min slot value)
    uint32      RequiredItem[MAX_ITEM_EXT_COST_ITEMS];              // 4-8 required item id
    uint32      RequiredItemCount[MAX_ITEM_EXT_COST_ITEMS];         // 9-13 required count of 1st item
    uint32      RequiredPersonalArenaRating;                        // 14 required personal arena rating
    uint32      ItemPurchaseGroup;                                  // 15
    uint32      RequiredCurrency[MAX_ITEM_EXT_COST_CURRENCIES];     // 16-20 required curency id
    uint32      RequiredCurrencyCount[MAX_ITEM_EXT_COST_CURRENCIES];// 21-25 required curency count
    uint32      RequiredFactionId;
    uint32      RequiredFactionStanding;
    uint32      RequirementFlags;
    uint32      RequiredGuildLevel;
    uint32      RequiredAchievement;
};

#define KEYCHAIN_SIZE   32

struct KeyChainEntry
{
    uint32      ID;
    uint8       Key[KEYCHAIN_SIZE];
};

struct QuestPackageItemEntry
{
    uint32 ID;                                                      // 0
    uint32 QuestPackageID;                                          // 1
    uint32 ItemID;                                                  // 2
    uint32 ItemCount;                                               // 3
    uint32 FilterType;                                              // 4
};


// SpellReagents.db2
struct SpellReagentsEntry
{
    //uint32  Id;                                            // 0         m_ID
    int32     Reagent[MAX_SPELL_REAGENTS];                   // 1  - 10   m_reagent
    uint32    ReagentCount[MAX_SPELL_REAGENTS];              // 11 - 20   m_reagentCount
};

// SpellVisual.db2
struct SpellVisualEntry
{
    //uint32  ID;
    //uint32  PrecastKit;
    //uint32  CastKit;
    //uint32  ImpactKit;
    //uint32  StateKit;
    //uint32  StateDoneKit;
    //uint32  ChannelKit;
    uint32  HasMissile;
    int32   MissileModel;
    //uint32  MissilePathType;
    //uint32  MissileDestinationAttachment;
    //uint32  MissileSound;
    //uint32  AnimEventSoundID;
    //uint32  Flags;
    //uint32  CasterImpactKit;
    //uint32  TargetImpactKit;
    //int32   MissileAttachment;
    //uint32  MissileFollowGroundHeight;
    //uint32  MissileFollowGroundDropSpeed;
    //uint32  MissileFollowGroundApprach;
    //uint32  MissileFollowGroundFlags;
    //uint32  MissileMotionId;
    //uint32  MissileTargetingKit;
    //uint32  InstantAreaKit;
    //uint32  ImpactAreaKit;
    //uint32  PersistentAreaKit;
    //DBCPosition3D MissileCastOffset;
    //DBCPosition3D MissileImpactOffset;
    uint32 AlternativeVisualID;
};

// SpellVisualKit.db2
struct SpellVisualKitEntry
{
    uint32 ID;
    uint32 StartAnimID;
    uint32 AnimID;
    uint32 AnimKitID;
    uint32 HeadEffect;
    uint32 ChestEffect;
    uint32 BaseEffect;
    uint32 LeftHandEffect;
    uint32 RightHandEffect;
    uint32 BreathEffect;
    uint32 LeftWeaponEffect;
    uint32 RightWeaponEffect;
    uint32 SpecialEffect[3];
    uint32 WorldEffect;
    uint32 SoundID;
    uint32 ShakeID;
    uint32 CharProc[4];
    uint32 CharParamZero[4];
    uint32 CharParamOne[4];
    uint32 CharParamTwo[4];
    uint32 CharParamThree[4];
    uint32 Flags;
};


#pragma pack(pop)

#endif
