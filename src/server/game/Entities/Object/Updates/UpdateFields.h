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

#ifndef _UPDATEFIELDS_H
#define _UPDATEFIELDS_H

// Auto generated for version 5.4.7.18019

enum EObjectFields
{
    OBJECT_FIELD_GUID                                   = 0x000, // Size: 2, Flags: PUBLIC
    OBJECT_FIELD_DATA                                   = 0x002, // Size: 2, Flags: PUBLIC
    OBJECT_FIELD_TYPE                                   = 0x004, // Size: 1, Flags: PUBLIC
    OBJECT_FIELD_ENTRY                                  = 0x005, // Size: 1, Flags: DYNAMIC
    OBJECT_DYNAMIC_FLAGS                                = 0x006, // Size: 1, Flags: DYNAMIC, 0x100
    OBJECT_FIELD_SCALE_X                                = 0x007, // Size: 1, Flags: PUBLIC
    OBJECT_END                                          = 0x008
};

enum EItemFields
{
    ITEM_FIELD_OWNER                                    = OBJECT_END + 0x000, // Size: 2, Flags: PUBLIC
    ITEM_FIELD_CONTAINED                                = OBJECT_END + 0x002, // Size: 2, Flags: PUBLIC
    ITEM_FIELD_CREATOR                                  = OBJECT_END + 0x004, // Size: 2, Flags: PUBLIC
    ITEM_FIELD_GIFTCREATOR                              = OBJECT_END + 0x006, // Size: 2, Flags: PUBLIC
    ITEM_FIELD_STACK_COUNT                              = OBJECT_END + 0x008, // Size: 1, Flags: OWNER
    ITEM_FIELD_DURATION                                 = OBJECT_END + 0x009, // Size: 1, Flags: OWNER
    ITEM_FIELD_SPELL_CHARGES                            = OBJECT_END + 0x00A, // Size: 5, Flags: OWNER
    ITEM_FIELD_FLAGS                                    = OBJECT_END + 0x00F, // Size: 1, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_1_1                          = OBJECT_END + 0x0010, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_1_3                          = OBJECT_END + 0x0012, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_2_1                          = OBJECT_END + 0x0013, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_2_3                          = OBJECT_END + 0x0015, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_3_1                          = OBJECT_END + 0x0016, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_3_3                          = OBJECT_END + 0x0018, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_4_1                          = OBJECT_END + 0x0019, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_4_3                          = OBJECT_END + 0x001B, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_5_1                          = OBJECT_END + 0x001C, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_5_3                          = OBJECT_END + 0x001E, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_6_1                          = OBJECT_END + 0x001F, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_6_3                          = OBJECT_END + 0x0021, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_7_1                          = OBJECT_END + 0x0022, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_7_3                          = OBJECT_END + 0x0024, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_8_1                          = OBJECT_END + 0x0025, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_8_3                          = OBJECT_END + 0x0027, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_9_1                          = OBJECT_END + 0x0028, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_9_3                          = OBJECT_END + 0x002A, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_10_1                         = OBJECT_END + 0x002B, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_10_3                         = OBJECT_END + 0x002D, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_11_1                         = OBJECT_END + 0x002E, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_11_3                         = OBJECT_END + 0x0030, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_12_1                         = OBJECT_END + 0x0031, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_12_3                         = OBJECT_END + 0x0033, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_13_1                         = OBJECT_END + 0x0034, // Size: 2, Type: INT, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT_13_3                         = OBJECT_END + 0x0036, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    ITEM_FIELD_PROPERTY_SEED                            = OBJECT_END + 0x037, // Size: 1, Flags: PUBLIC
    ITEM_FIELD_RANDOM_PROPERTIES_ID                     = OBJECT_END + 0x038, // Size: 1, Flags: PUBLIC
    ITEM_FIELD_DURABILITY                               = OBJECT_END + 0x039, // Size: 1, Flags: OWNER
    ITEM_FIELD_MAXDURABILITY                            = OBJECT_END + 0x03A, // Size: 1, Flags: OWNER
    ITEM_FIELD_CREATE_PLAYED_TIME                       = OBJECT_END + 0x03B, // Size: 1, Flags: PUBLIC
    ITEM_FIELD_MODIFIERS_MASK                           = OBJECT_END + 0x03C, // Size: 1, Flags: OWNER
    ITEM_END                                            = OBJECT_END + 0x03D
};

enum ItemDynamicFields
{
    ITEM_DYNAMIC_FIELD_MODIFIERS                        = 0x000, //  Flags: OWNER
    ITEM_DYNAMIC_END                                    = 0x001
};

enum EContainerFields
{
    CONTAINER_FIELD_SLOT_1                              = ITEM_END + 0x000, // Size: 72, Flags: PUBLIC
    CONTAINER_FIELD_NUM_SLOTS                           = ITEM_END + 0x048, // Size: 1, Flags: PUBLIC
    CONTAINER_END                                       = ITEM_END + 0x049
};

enum EUnitFields
{
    UNIT_FIELD_CHARM                                    = OBJECT_END + 0x000, // Size: 2, Flags: PUBLIC
    UNIT_FIELD_SUMMON                                   = OBJECT_END + 0x002, // Size: 2, Flags: PUBLIC
    UNIT_FIELD_CRITTER                                  = OBJECT_END + 0x004, // Size: 2, Flags: PRIVATE
    UNIT_FIELD_CHARMEDBY                                = OBJECT_END + 0x006, // Size: 2, Flags: PUBLIC
    UNIT_FIELD_SUMMONEDBY                               = OBJECT_END + 0x008, // Size: 2, Flags: PUBLIC
    UNIT_FIELD_CREATEDBY                                = OBJECT_END + 0x00A, // Size: 2, Flags: PUBLIC
    UNIT_FIELD_DEMON_CREATOR                            = OBJECT_END + 0x00C, // Size: 2, Flags: PUBLIC
    UNIT_FIELD_TARGET                                   = OBJECT_END + 0x00E, // Size: 2, Flags: PUBLIC
    UNIT_FIELD_BATTLE_PET_COMPANION_GUID                = OBJECT_END + 0x010, // Size: 2, Flags: PUBLIC
    UNIT_FIELD_CHANNEL_OBJECT                           = OBJECT_END + 0x012, // Size: 2, Flags: PUBLIC, 0x100
    UNIT_CHANNEL_SPELL                                  = OBJECT_END + 0x014, // Size: 1, Flags: PUBLIC, 0x100
    UNIT_FIELD_SUMMONED_BY_HOME_REALM                   = OBJECT_END + 0x015, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_BYTES_0                                  = OBJECT_END + 0x016, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_DISPLAY_POWER                            = OBJECT_END + 0x017, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_OVERRIDE_DISPLAY_POWER_ID                = OBJECT_END + 0x018, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_HEALTH                                   = OBJECT_END + 0x019, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_POWER1                                   = OBJECT_END + 0x01A, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_POWER2                                   = OBJECT_END + 0x01B, // Size: 1, Type: INT, Flags: PUBLIC
    UNIT_FIELD_POWER3                                   = OBJECT_END + 0x01C, // Size: 1, Type: INT, Flags: PUBLIC
    UNIT_FIELD_POWER4                                   = OBJECT_END + 0x01D, // Size: 1, Type: INT, Flags: PUBLIC
    UNIT_FIELD_POWER5                                   = OBJECT_END + 0x01E, // Size: 1, Type: INT, Flags: PUBLIC
    UNIT_FIELD_MAXHEALTH                                = OBJECT_END + 0x01F, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MAXPOWER1                                = OBJECT_END + 0x020, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MAXPOWER2                                = OBJECT_END + 0x021, // Size: 1, Type: INT, Flags: PUBLIC
    UNIT_FIELD_MAXPOWER3                                = OBJECT_END + 0x022, // Size: 1, Type: INT, Flags: PUBLIC
    UNIT_FIELD_MAXPOWER4                                = OBJECT_END + 0x023, // Size: 1, Type: INT, Flags: PUBLIC
    UNIT_FIELD_MAXPOWER5                                = OBJECT_END + 0x024, // Size: 1, Type: INT, Flags: PUBLIC
    UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER                = OBJECT_END + 0x025, // Size: 5, Flags: PRIVATE, OWNER, UNUSED2
    UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER    = OBJECT_END + 0x02A, // Size: 5, Flags: PRIVATE, OWNER, UNUSED2
    UNIT_FIELD_LEVEL                                    = OBJECT_END + 0x02F, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_EFFECTIVE_LEVEL                          = OBJECT_END + 0x030, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_FACTIONTEMPLATE                          = OBJECT_END + 0x031, // Size: 1, Flags: PUBLIC
    UNIT_VIRTUAL_ITEM_SLOT_ID                           = OBJECT_END + 0x032, // Size: 3, Flags: PUBLIC
    UNIT_FIELD_FLAGS                                    = OBJECT_END + 0x035, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_FLAGS_2                                  = OBJECT_END + 0x036, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_AURASTATE                                = OBJECT_END + 0x037, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_BASEATTACKTIME                           = OBJECT_END + 0x038, // Size: 2, Flags: PUBLIC
    UNIT_FIELD_RANGEDATTACKTIME                         = OBJECT_END + 0x03A, // Size: 1, Flags: PRIVATE
    UNIT_FIELD_BOUNDINGRADIUS                           = OBJECT_END + 0x03B, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_COMBATREACH                              = OBJECT_END + 0x03C, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_DISPLAYID                                = OBJECT_END + 0x03D, // Size: 1, Flags: DYNAMIC, 0x100
    UNIT_FIELD_NATIVEDISPLAYID                          = OBJECT_END + 0x03E, // Size: 1, Flags: PUBLIC, 0x100
    UNIT_FIELD_MOUNTDISPLAYID                           = OBJECT_END + 0x03F, // Size: 1, Flags: PUBLIC, 0x100
    UNIT_FIELD_MINDAMAGE                                = OBJECT_END + 0x040, // Size: 1, Flags: PRIVATE, OWNER, SPECIAL_INFO
    UNIT_FIELD_MAXDAMAGE                                = OBJECT_END + 0x041, // Size: 1, Flags: PRIVATE, OWNER, SPECIAL_INFO
    UNIT_FIELD_MINOFFHANDDAMAGE                         = OBJECT_END + 0x042, // Size: 1, Flags: PRIVATE, OWNER, SPECIAL_INFO
    UNIT_FIELD_MAXOFFHANDDAMAGE                         = OBJECT_END + 0x043, // Size: 1, Flags: PRIVATE, OWNER, SPECIAL_INFO
    UNIT_FIELD_BYTES_1                                  = OBJECT_END + 0x044, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_PETNUMBER                                = OBJECT_END + 0x045, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_PET_NAME_TIMESTAMP                       = OBJECT_END + 0x046, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_PETEXPERIENCE                            = OBJECT_END + 0x047, // Size: 1, Flags: OWNER
    UNIT_FIELD_PETNEXTLEVELEXP                          = OBJECT_END + 0x048, // Size: 1, Flags: OWNER
    UNIT_MOD_CAST_SPEED                                 = OBJECT_END + 0x049, // Size: 1, Flags: PUBLIC
    UNIT_MOD_CAST_HASTE                                 = OBJECT_END + 0x04A, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MOD_HASTE                                = OBJECT_END + 0x04B, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MOD_RANGED_HASTE                         = OBJECT_END + 0x04C, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MOD_HASTE_REGEN                          = OBJECT_END + 0x04D, // Size: 1, Flags: PUBLIC
    UNIT_CREATED_BY_SPELL                               = OBJECT_END + 0x04E, // Size: 1, Flags: PUBLIC
    UNIT_NPC_FLAGS                                      = OBJECT_END + 0x04F, // Size: 2, Flags: PUBLIC
    UNIT_NPC_EMOTESTATE                                 = OBJECT_END + 0x051, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_STAT0                                    = OBJECT_END + 0x052, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_STAT1                                    = OBJECT_END + 0x053, // Size: 1, Type: INT, Flags: PRIVATE, OWNER
    UNIT_FIELD_STAT2                                    = OBJECT_END + 0x054, // Size: 1, Type: INT, Flags: PRIVATE, OWNER
    UNIT_FIELD_STAT3                                    = OBJECT_END + 0x055, // Size: 1, Type: INT, Flags: PRIVATE, OWNER
    UNIT_FIELD_STAT4                                    = OBJECT_END + 0x056, // Size: 1, Type: INT, Flags: PRIVATE, OWNER
    UNIT_FIELD_POSSTAT0                                 = OBJECT_END + 0x057, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_POSSTAT1                                 = OBJECT_END + 0x058, // Size: 1, Type: INT, Flags: PRIVATE, OWNER
    UNIT_FIELD_POSSTAT2                                 = OBJECT_END + 0x059, // Size: 1, Type: INT, Flags: PRIVATE, OWNER
    UNIT_FIELD_POSSTAT3                                 = OBJECT_END + 0x05A, // Size: 1, Type: INT, Flags: PRIVATE, OWNER
    UNIT_FIELD_POSSTAT4                                 = OBJECT_END + 0x05B, // Size: 1, Type: INT, Flags: PRIVATE, OWNER
    UNIT_FIELD_NEGSTAT0                                 = OBJECT_END + 0x05C, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_NEGSTAT1                                 = OBJECT_END + 0x05D, // Size: 1, Type: INT, Flags: PRIVATE, OWNER
    UNIT_FIELD_NEGSTAT2                                 = OBJECT_END + 0x05E, // Size: 1, Type: INT, Flags: PRIVATE, OWNER
    UNIT_FIELD_NEGSTAT3                                 = OBJECT_END + 0x05F, // Size: 1, Type: INT, Flags: PRIVATE, OWNER
    UNIT_FIELD_NEGSTAT4                                 = OBJECT_END + 0x060, // Size: 1, Type: INT, Flags: PRIVATE, OWNER
    UNIT_FIELD_RESISTANCES                              = OBJECT_END + 0x061, // Size: 7, Flags: PRIVATE, OWNER, SPECIAL_INFO
    UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE               = OBJECT_END + 0x068, // Size: 7, Flags: PRIVATE, OWNER
    UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE               = OBJECT_END + 0x06F, // Size: 7, Flags: PRIVATE, OWNER
    UNIT_FIELD_BASE_MANA                                = OBJECT_END + 0x076, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_BASE_HEALTH                              = OBJECT_END + 0x077, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_BYTES_2                                  = OBJECT_END + 0x078, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_ATTACK_POWER                             = OBJECT_END + 0x079, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_ATTACK_POWER_MOD_POS                     = OBJECT_END + 0x07A, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_ATTACK_POWER_MOD_NEG                     = OBJECT_END + 0x07B, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_ATTACK_POWER_MULTIPLIER                  = OBJECT_END + 0x07C, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_RANGED_ATTACK_POWER                      = OBJECT_END + 0x07D, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_RANGED_ATTACK_POWER_MOD_POS              = OBJECT_END + 0x07E, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_RANGED_ATTACK_POWER_MOD_NEG              = OBJECT_END + 0x07F, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER           = OBJECT_END + 0x080, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_MINRANGEDDAMAGE                          = OBJECT_END + 0x081, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_MAXRANGEDDAMAGE                          = OBJECT_END + 0x082, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_POWER_COST_MODIFIER                      = OBJECT_END + 0x083, // Size: 7, Flags: PRIVATE, OWNER
    UNIT_FIELD_POWER_COST_MULTIPLIER                    = OBJECT_END + 0x08A, // Size: 7, Flags: PRIVATE, OWNER
    UNIT_FIELD_MAXHEALTHMODIFIER                        = OBJECT_END + 0x091, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_HOVERHEIGHT                              = OBJECT_END + 0x092, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MIN_ITEM_LEVEL                           = OBJECT_END + 0x093, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MAXITEMLEVEL                             = OBJECT_END + 0x094, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_WILD_BATTLEPET_LEVEL                     = OBJECT_END + 0x095, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_BATTLEPET_COMPANION_NAME_TIMESTAMP       = OBJECT_END + 0x096, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_INTERACT_SPELLID                         = OBJECT_END + 0x097, // Size: 1, Flags: PUBLIC
    UNIT_END                                            = OBJECT_END + 0x098
};

enum EUnitDynamicFields
{
    UNIT_DYNAMIC_FIELD_PASSIVE_SPELLS                   = 0x000, //  Flags: PUBLIC, 0x100
    UNIT_DYNAMIC_FIELD_WORLD_EFFECTS                    = 0x001, //  Flags: PUBLIC, 0x100
    UNIT_DYNAMIC_END                                    = 0x002
};

enum EPlayerFields
{
    PLAYER_DUEL_ARBITER                                 = UNIT_END + 0x000, // Size: 2, Flags: PUBLIC
    PLAYER_FLAGS                                        = UNIT_END + 0x002, // Size: 1, Flags: PUBLIC
    PLAYER_GUILDRANK                                    = UNIT_END + 0x003, // Size: 1, Flags: PUBLIC
    PLAYER_GUILDDELETE_DATE                             = UNIT_END + 0x004, // Size: 1, Flags: PUBLIC
    PLAYER_GUILDLEVEL                                   = UNIT_END + 0x005, // Size: 1, Flags: PUBLIC
    PLAYER_BYTES                                        = UNIT_END + 0x006, // Size: 1, Flags: PUBLIC
    PLAYER_BYTES_2                                      = UNIT_END + 0x007, // Size: 1, Flags: PUBLIC
    PLAYER_BYTES_3                                      = UNIT_END + 0x008, // Size: 1, Flags: PUBLIC
    PLAYER_DUEL_TEAM                                    = UNIT_END + 0x009, // Size: 1, Flags: PUBLIC
    PLAYER_GUILD_TIMESTAMP                              = UNIT_END + 0x00A, // Size: 1, Flags: PUBLIC
    PLAYER_QUEST_LOG_1_1                                = UNIT_END + 0x00B, // Size: 750, Flags: PARTY_MEMBER
    PLAYER_VISIBLE_ITEM_1_ENTRYID                       = UNIT_END + 0x2F9, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_1_ENCHANTMENT                   = UNIT_END + 0x2FA, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_2_ENTRYID                       = UNIT_END + 0x2FB, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_2_ENCHANTMENT                   = UNIT_END + 0x2FC, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_3_ENTRYID                       = UNIT_END + 0x2FD, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_3_ENCHANTMENT                   = UNIT_END + 0x2FE, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_4_ENTRYID                       = UNIT_END + 0x2FF, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_4_ENCHANTMENT                   = UNIT_END + 0x300, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_5_ENTRYID                       = UNIT_END + 0x301, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_5_ENCHANTMENT                   = UNIT_END + 0x302, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_6_ENTRYID                       = UNIT_END + 0x303, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_6_ENCHANTMENT                   = UNIT_END + 0x304, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_7_ENTRYID                       = UNIT_END + 0x305, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_7_ENCHANTMENT                   = UNIT_END + 0x306, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_8_ENTRYID                       = UNIT_END + 0x307, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_8_ENCHANTMENT                   = UNIT_END + 0x308, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_9_ENTRYID                       = UNIT_END + 0x309, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_9_ENCHANTMENT                   = UNIT_END + 0x30A, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_10_ENTRYID                      = UNIT_END + 0x30B, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_10_ENCHANTMENT                  = UNIT_END + 0x30C, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_11_ENTRYID                      = UNIT_END + 0x30D, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_11_ENCHANTMENT                  = UNIT_END + 0x30E, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_12_ENTRYID                      = UNIT_END + 0x30F, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_12_ENCHANTMENT                  = UNIT_END + 0x310, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_13_ENTRYID                      = UNIT_END + 0x311, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_13_ENCHANTMENT                  = UNIT_END + 0x312, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_14_ENTRYID                      = UNIT_END + 0x313, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_14_ENCHANTMENT                  = UNIT_END + 0x314, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_15_ENTRYID                      = UNIT_END + 0x315, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_15_ENCHANTMENT                  = UNIT_END + 0x316, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_16_ENTRYID                      = UNIT_END + 0x317, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_16_ENCHANTMENT                  = UNIT_END + 0x318, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_17_ENTRYID                      = UNIT_END + 0x319, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_17_ENCHANTMENT                  = UNIT_END + 0x31A, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_18_ENTRYID                      = UNIT_END + 0x31B, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_18_ENCHANTMENT                  = UNIT_END + 0x31C, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_19_ENTRYID                      = UNIT_END + 0x31D, // Size: 1, Type: INT, Flags: PUBLIC
    PLAYER_VISIBLE_ITEM_19_ENCHANTMENT                  = UNIT_END + 0x31E, // Size: 1, Type: TWO_SHORT, Flags: PUBLIC
    PLAYER_CHOSEN_TITLE                                 = UNIT_END + 0x31F, // Size: 1, Flags: PUBLIC
    PLAYER_FAKE_INEBRIATION                             = UNIT_END + 0x320, // Size: 1, Flags: PUBLIC
    PLAYER_FIELD_VIRTUAL_PLAYER_REALM                   = UNIT_END + 0x321, // Size: 1, Flags: PUBLIC
    PLAYER_FIELD_CURRENT_SPEC_ID                        = UNIT_END + 0x322, // Size: 1, Flags: PUBLIC
    PLAYER_FIELD_TAXI_MOUNT_ANIM_KIT_ID                 = UNIT_END + 0x323, // Size: 1, Flags: PUBLIC
    PLAYER_FIELD_CURRENT_BATTLE_PET_BREED_QUALITY       = UNIT_END + 0x324, // Size: 1, Flags: PUBLIC
    PLAYER_END_NOT_SELF                                 = UNIT_END + 0x325,

    PLAYER_FIELD_INV_SLOT_HEAD                          = UNIT_END + 0x325, // Size: 46, Flags: PRIVATE
    PLAYER_FIELD_PACK_SLOT_1                            = UNIT_END + 0x353, // Size: 32, Type: LONG, Flags: PRIVATE
    PLAYER_FIELD_BANK_SLOT_1                            = UNIT_END + 0x373, // Size: 56, Type: LONG, Flags: PRIVATE
    PLAYER_FIELD_BANKBAG_SLOT_1                         = UNIT_END + 0x3AB, // Size: 14, Type: LONG, Flags: PRIVATE
    PLAYER_FIELD_VENDORBUYBACK_SLOT_1                   = UNIT_END + 0x03B9, // Size: 24, Type: LONG, Flags: PRIVATE
    PLAYER_FARSIGHT                                     = UNIT_END + 0x3D1, // Size: 2, Flags: PRIVATE
    PLAYER__FIELD_KNOWN_TITLES                          = UNIT_END + 0x3D3, // Size: 10, Flags: PRIVATE
    PLAYER_FIELD_COINAGE                                = UNIT_END + 0x3DD, // Size: 2, Flags: PRIVATE
    PLAYER_XP                                           = UNIT_END + 0x3DF, // Size: 1, Flags: PRIVATE
    PLAYER_NEXT_LEVEL_XP                                = UNIT_END + 0x3E0, // Size: 1, Flags: PRIVATE
    PLAYER_SKILL_LINEID_0                               = UNIT_END + 0x3E1,
    PLAYER_SKILL_STEP_0                                 = UNIT_END + 0x421,
    PLAYER_SKILL_RANK_0                                 = UNIT_END + 0x461,
    PLAYER_SKILL_MODIFIER_0                             = UNIT_END + 0x4A1,
    PLAYER_SKILL_MAX_RANK_0                             = UNIT_END + 0x4E1,
    PLAYER_SKILL_TALENT_0                               = UNIT_END + 0x521,
    PLAYER_SKILL_UNKNOWN                                = UNIT_END + 0x561,
    PLAYER_CHARACTER_POINTS                             = UNIT_END + 0x5A1, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_MAX_TALENT_TIERS                       = UNIT_END + 0x5A2, // Size: 1, Flags: PRIVATE
    PLAYER_TRACK_CREATURES                              = UNIT_END + 0x5A3, // Size: 1, Flags: PRIVATE
    PLAYER_TRACK_RESOURCES                              = UNIT_END + 0x5A4, // Size: 1, Flags: PRIVATE
    PLAYER_EXPERTISE                                    = UNIT_END + 0x5A5, // Size: 1, Flags: PRIVATE
    PLAYER_OFFHAND_EXPERTISE                            = UNIT_END + 0x5A6, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_RANGED_EXPERTISE                       = UNIT_END + 0x5A7, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_COMBAT_RATING_EXPERTISE                = UNIT_END + 0x5A8, // Size: 1, Flags: PRIVATE
    PLAYER_BLOCK_PERCENTAGE                             = UNIT_END + 0x5A9, // Size: 1, Flags: PRIVATE
    PLAYER_DODGE_PERCENTAGE                             = UNIT_END + 0x5AA, // Size: 1, Flags: PRIVATE
    PLAYER_PARRY_PERCENTAGE                             = UNIT_END + 0x5AB, // Size: 1, Flags: PRIVATE
    PLAYER_CRIT_PERCENTAGE                              = UNIT_END + 0x5AC, // Size: 1, Flags: PRIVATE
    PLAYER_RANGED_CRIT_PERCENTAGE                       = UNIT_END + 0x5AD, // Size: 1, Flags: PRIVATE
    PLAYER_OFFHAND_CRIT_PERCENTAGE                      = UNIT_END + 0x5AE, // Size: 1, Flags: PRIVATE
    PLAYER_SPELL_CRIT_PERCENTAGE1                       = UNIT_END + 0x5AF, // Size: 7, Flags: PRIVATE
    PLAYER_SHIELD_BLOCK                                 = UNIT_END + 0x5B6, // Size: 1, Flags: PRIVATE
    PLAYER_SHIELD_BLOCK_CRIT_PERCENTAGE                 = UNIT_END + 0x5B7, // Size: 1, Flags: PRIVATE
    PLAYER_MASTERY                                      = UNIT_END + 0x5B8, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_PVP_POWER_DAMAGE                       = UNIT_END + 0x5B9, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_PVP_POWER_HEALING                      = UNIT_END + 0x5BA, // Size: 1, Flags: PRIVATE
    PLAYER_EXPLORED_ZONES_1                             = UNIT_END + 0x5BB, // Size: 200, Flags: PRIVATE
    PLAYER_REST_STATE_EXPERIENCE                        = UNIT_END + 0x683, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_MOD_DAMAGE_DONE_POS                    = UNIT_END + 0x684, // Size: 7, Flags: PRIVATE
    PLAYER_FIELD_MOD_DAMAGE_DONE_NEG                    = UNIT_END + 0x68B, // Size: 7, Flags: PRIVATE
    PLAYER_FIELD_MOD_DAMAGE_DONE_PCT                    = UNIT_END + 0x692, // Size: 7, Flags: PRIVATE
    PLAYER_FIELD_MOD_HEALING_DONE_POS                   = UNIT_END + 0x699, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_MOD_HEALING_PCT                        = UNIT_END + 0x69A, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_MOD_HEALING_DONE_PCT                   = UNIT_END + 0x69B, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_MOD_PERIODIC_HEALING_DONE_PERCENT      = UNIT_END + 0x69C, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_WEAPON_DMG_MULTIPLIERS                 = UNIT_END + 0x69D, // Size: 3, Flags: PRIVATE
    PLAYER_FIELD_MOD_SPELL_POWER_PCT                    = UNIT_END + 0x6A0, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_MOD_RESILIENCE_PERCENT                 = UNIT_END + 0x6A1, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_OVERRIDE_SPELL_POWER_BY_AP_PCT         = UNIT_END + 0x6A2, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_OVERRIDE_AP_BY_SPELL_POWER_PERCENT     = UNIT_END + 0x6A3, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_MOD_TARGET_RESISTANCE                  = UNIT_END + 0x6A4, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_MOD_TARGET_PHYSICAL_RESISTANCE         = UNIT_END + 0x6A5, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_BYTES                                  = UNIT_END + 0x6A6, // Size: 1, Flags: PRIVATE
    PLAYER_SELF_RES_SPELL                               = UNIT_END + 0x6A7, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_PVP_MEDALS                             = UNIT_END + 0x6A8, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_BUYBACK_PRICE_1                        = UNIT_END + 0x6A9, // Size: 12, Flags: PRIVATE
    PLAYER_FIELD_BUYBACK_TIMESTAMP_1                    = UNIT_END + 0x6B5, // Size: 12, Flags: PRIVATE
    PLAYER_FIELD_KILLS                                  = UNIT_END + 0x6C1, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_LIFETIME_HONORABLE_KILLS               = UNIT_END + 0x6C2, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_WATCHED_FACTION_INDEX                  = UNIT_END + 0x6C3, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_COMBAT_RATING_1                        = UNIT_END + 0x6C4, // Size: 27, Flags: PRIVATE
    PLAYER_FIELD_ARENA_TEAM_INFO_1_1                    = UNIT_END + 0x6DF, // Size: 24, Flags: PRIVATE
    PLAYER_FIELD_MAX_LEVEL                              = UNIT_END + 0x6F7, // Size: 1, Flags: PRIVATE
    PLAYER_RUNE_REGEN_1                                 = UNIT_END + 0x6F8, // Size: 4, Flags: PRIVATE
    PLAYER_NO_REAGENT_COST_1                            = UNIT_END + 0x6FC, // Size: 4, Flags: PRIVATE
    PLAYER_FIELD_GLYPH_SLOTS_1                          = UNIT_END + 0x700, // Size: 6, Flags: PRIVATE
    PLAYER_FIELD_GLYPHS_1                               = UNIT_END + 0x706, // Size: 6, Flags: PRIVATE
    PLAYER_GLYPHS_ENABLED                               = UNIT_END + 0x70C, // Size: 1, Flags: PRIVATE
    PLAYER_PET_SPELL_POWER                              = UNIT_END + 0x70D, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_RESEARCHING_1                          = UNIT_END + 0x70E, // Size: 8, Flags: PRIVATE
    PLAYER_PROFESSION_SKILL_LINE_1                      = UNIT_END + 0x716, // Size: 2, Flags: PRIVATE
    PLAYER_FIELD_UI_HIT_MODIFIER                        = UNIT_END + 0x718, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_UI_SPELL_HIT_MODIFIER                  = UNIT_END + 0x719, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_HOME_REALM_TIME_OFFSET                 = UNIT_END + 0x71A, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_MOD_PET_HASTE                          = UNIT_END + 0x71B, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_SUMMONED_BATTLE_PET_ID                 = UNIT_END + 0x71C, // Size: 2, Flags: PRIVATE
    PLAYER_FIELD_BYTES2                                 = UNIT_END + 0x71E, // Size: 1, Flags: PRIVATE, OVERRIDE
    PLAYER_FIELD_LFG_BONUS_FACTION_ID                   = UNIT_END + 0x71F, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_LOOT_SPEC_ID                           = UNIT_END + 0x720, // Size: 1, Flags: PRIVATE
    PLAYER_FIELD_OVERRIDE_ZONE_PVP_TYPE                 = UNIT_END + 0x721, // Size: 1, Flags: PRIVATE, OVERRIDE
    PLAYER_FIELD_ITEM_LEVEL_DELTA                       = UNIT_END + 0x722, // Size: 1, Flags: PRIVATE
    PLAYER_END                                          = UNIT_END + 0x723
};

enum EPlayerDynamicFields
{
    PLAYER_DYNAMIC_FIELD_RESERACH_SITE_1                = 0x000, //  Flags: PRIVATE
    PLAYER_DYNAMIC_FIELD_RESEARCH_SITE_PROGRESS_1       = 0x001, //  Flags: PRIVATE
    PLAYER_DYNAMIC_FIELD_DAILY_QUESTS_1                 = 0x002, //  Flags: PRIVATE
    PLAYER_DYNAMIC_END                                  = 0x003
};

enum EGameObjectFields
{
    OBJECT_FIELD_CREATED_BY                         = OBJECT_END + 0x000, // Size: 2, Flags: PUBLIC
    GAMEOBJECT_DISPLAYID                                = OBJECT_END + 0x002, // Size: 1, Flags: PUBLIC
    GAMEOBJECT_FLAGS                                    = OBJECT_END + 0x003, // Size: 1, Flags: PUBLIC, 0x100
    GAMEOBJECT_PARENTROTATION                           = OBJECT_END + 0x004, // Size: 4, Flags: PUBLIC
    GAMEOBJECT_FACTION                                  = OBJECT_END + 0x008, // Size: 1, Flags: PUBLIC
    GAMEOBJECT_LEVEL                                    = OBJECT_END + 0x009, // Size: 1, Flags: PUBLIC
    GAMEOBJECT_BYTES_1                                  = OBJECT_END + 0x00A, // Size: 1, Flags: PUBLIC, 0x100
    GAMEOBJECT_STATE_SPELL_VISUAL_ID                    = OBJECT_END + 0x00B, // Size: 1, Flags: PUBLIC, 0x100
    GAMEOBJECT_END                                      = OBJECT_END + 0x00C
};

enum EDynamicObjectFields
{
    DYNAMICOBJECT_CASTER                                = OBJECT_END + 0x000, // Size: 2, Flags: PUBLIC
    DYNAMICOBJECT_BYTES                                 = OBJECT_END + 0x002, // Size: 1, Flags: DYNAMIC
    DYNAMICOBJECT_SPELLID                               = OBJECT_END + 0x003, // Size: 1, Flags: PUBLIC
    DYNAMICOBJECT_RADIUS                                = OBJECT_END + 0x004, // Size: 1, Flags: PUBLIC
    DYNAMICOBJECT_CASTTIME                              = OBJECT_END + 0x005, // Size: 1, Flags: PUBLIC
    DYNAMICOBJECT_END                                   = OBJECT_END + 0x006};

enum ECorpseFields
{
    CORPSE_FIELD_OWNER                                  = OBJECT_END + 0x000, // Size: 2, Flags: PUBLIC
    CORPSE_FIELD_PARTY                                  = OBJECT_END + 0x002, // Size: 2, Flags: PUBLIC
    CORPSE_FIELD_DISPLAY_ID                             = OBJECT_END + 0x004, // Size: 1, Flags: PUBLIC
    CORPSE_FIELD_ITEM                                   = OBJECT_END + 0x005, // Size: 19, Flags: PUBLIC
    CORPSE_FIELD_BYTES_1                                = OBJECT_END + 0x018, // Size: 1, Flags: PUBLIC
    CORPSE_FIELD_BYTES_2                                = OBJECT_END + 0x019, // Size: 1, Flags: PUBLIC
    CORPSE_FIELD_FLAGS                                  = OBJECT_END + 0x01A, // Size: 1, Flags: PUBLIC
    CORPSE_FIELD_DYNAMIC_FLAGS                          = OBJECT_END + 0x01B, // Size: 1, Flags: DYNAMIC
    CORPSE_END                                          = OBJECT_END + 0x01C
};

enum EAreaTriggerFields
{
    AREATRIGGER_CASTER                                  = OBJECT_END + 0x000, // Size: 2, Flags: PUBLIC
    AREATRIGGER_DURATION                                = OBJECT_END + 0x002, // Size: 1, Flags: PUBLIC
    AREATRIGGER_SPELLID                                 = OBJECT_END + 0x003, // Size: 1, Flags: PUBLIC
    AREATRIGGER_SPELLVISUALID                           = OBJECT_END + 0x004, // Size: 1, Flags: DYNAMIC
    AREATRIGGER_EXPLICIT_SCALE                          = OBJECT_END + 0x005, // Size: 1, Flags: PUBLIC, 0x100
    AREATRIGGER_END                                     = OBJECT_END + 0x006
};

enum ESceneObjectFields
{
    SCENEOBJECT_FIELD_SCRIPT_PACKAGE_ID                 = OBJECT_END + 0x000, // Size: 1, Flags: PUBLIC
    SCENEOBJECT_FIELD_RND_SEED_VAL                      = OBJECT_END + 0x001, // Size: 1, Flags: PUBLIC
    SCENEOBJECT_FIELD_CREATEDBY                         = OBJECT_END + 0x002, // Size: 2, Flags: PUBLIC
    SCENEOBJECT_FIELD_SCENE_TYPE                        = OBJECT_END + 0x004, // Size: 1, Flags: PUBLIC
    SCENEOBJECT_END                                     = OBJECT_END + 0x005
};

enum EObjectDynamicFields
{
    OBJECT_DYNAMIC_END = 0x0,
};

#endif // _UPDATEFIELDS_H
