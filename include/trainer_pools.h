#ifndef GUARD_TRAINER_POOLS_H
#define GUARD_TRAINER_POOLS_H

#include "pokemon.h"
#include "data.h"
#include "event_data.h"
#include "global.h"

#define POOL_SLOT_DISABLED  0xff

//  Unlimited is set to 0 so that the default is unlimited
#define POOL_MEMBER_COUNT_UNLIMITED 0
#define POOL_MEMBER_COUNT_NONE      0xff

enum PoolRulesets {
    POOL_RULESET_BASIC,
    POOL_RULESET_DOUBLES,
    POOL_RULESET_WEATHER_SINGLES,
    POOL_RULESET_WEATHER_DOUBLES,
    POOL_RULESET_SUPPORT_DOUBLES,
    POOL_RULESET_CORE_3_SINGLES,
    POOL_RULESET_CORE_4_SINGLES,
    POOL_RULESET_CORE_5_SINGLES,
    POOL_RULESET_E4_BRANDON,
};

enum PoolPickFunctions {
    POOL_PICK_DEFAULT,
    POOL_PICK_LOWEST,
};

enum PoolPruneOptions {
    POOL_PRUNE_NONE,
    POOL_PRUNE_TEST,
    POOL_PRUNE_RANDOM_TAG,
    POOL_PRUNE_BADGES,
};

enum PoolTags {
    //  Lead and Ace has special handling, leave them be
    POOL_TAG_LEAD = 0,
    POOL_TAG_ACE = 1,

    POOL_TAG_WEATHER_SETTER = 2,
    POOL_TAG_WEATHER_ABUSER = 3,

    POOL_TAG_SUPPORT = 4,
    
    POOL_TAG_CORE_1 = 5,
    POOL_TAG_CORE_2 = 6,
    POOL_TAG_CORE_3 = 7,
    POOL_TAG_CORE_4 = 8,
    POOL_TAG_CORE_5 = 9,

    POOL_TAG_BADGES_0 = 10,
    POOL_TAG_BADGES_1 = 11,
    POOL_TAG_BADGES_2 = 12,
    POOL_TAG_BADGES_3 = 13,
    POOL_TAG_BADGES_4 = 14,
    POOL_TAG_BADGES_5 = 15,
    POOL_TAG_BADGES_6 = 16,
    POOL_TAG_BADGES_7 = 17,
    POOL_TAG_BADGES_8 = 18,

    POOL_TAG_TRICK_ROOM_SETTER = 19,
    POOL_TAG_TRICK_ROOM_ABUSER = 20,

    POOL_TAG_STEALTH_ROCK = 21,
    POOL_TAG_STICKY_WEB = 22,
    POOL_TAG_SPIKES = 23,
    POOL_TAG_TOXIC_SPIKES = 24,

    POOL_TAG_HAZARD_REMOVAL = 25,
    POOL_TAG_PHAZING_MOVE = 26,
    POOL_TAG_SCREENS = 27,

    POOL_TAG_TERRAIN_SETTER = 28,
    POOL_TAG_TERRAIN_ABUSER = 29,
    //  Must be the last element
    POOL_NUM_TAGS = 30
};

#define MON_POOL_TAG_LEAD           1 << POOL_TAG_LEAD
#define MON_POOL_TAG_ACE            1 << POOL_TAG_ACE
#define MON_POOL_TAG_WEATHER_SETTER 1 << POOL_TAG_WEATHER_SETTER
#define MON_POOL_TAG_WEATHER_ABUSER 1 << POOL_TAG_WEATHER_ABUSER
#define MON_POOL_TAG_SUPPORT        1 << POOL_TAG_SUPPORT
#define MON_POOL_TAG_CORE_1         1 << POOL_TAG_CORE_1
#define MON_POOL_TAG_CORE_2         1 << POOL_TAG_CORE_2
#define MON_POOL_TAG_CORE_3         1 << POOL_TAG_CORE_3
#define MON_POOL_TAG_CORE_4         1 << POOL_TAG_CORE_4
#define MON_POOL_TAG_CORE_5         1 << POOL_TAG_CORE_5
#define MON_POOL_TAG_BADGES_0       1 << POOL_TAG_BADGES_0
#define MON_POOL_TAG_BADGES_1       1 << POOL_TAG_BADGES_1
#define MON_POOL_TAG_BADGES_2       1 << POOL_TAG_BADGES_2
#define MON_POOL_TAG_BADGES_3       1 << POOL_TAG_BADGES_3
#define MON_POOL_TAG_BADGES_4       1 << POOL_TAG_BADGES_4
#define MON_POOL_TAG_BADGES_5       1 << POOL_TAG_BADGES_5
#define MON_POOL_TAG_BADGES_6       1 << POOL_TAG_BADGES_6
#define MON_POOL_TAG_BADGES_7       1 << POOL_TAG_BADGES_7
#define MON_POOL_TAG_BADGES_8       1 << POOL_TAG_BADGES_8
#define MON_POOL_TAG_TRICK_ROOM_SETTER 1 << POOL_TAG_TRICK_ROOM_SETTER
#define MON_POOL_TAG_TRICK_ROOM_ABUSER 1 << POOL_TAG_TRICK_ROOM_ABUSER
#define MON_POOL_TAG_STEALTH_ROCK   1 << POOL_TAG_STEALTH_ROCK
#define MON_POOL_TAG_STICKY_WEB     1 << POOL_TAG_STICKY_WEB
#define MON_POOL_TAG_SPIKES         1 << POOL_TAG_SPIKES
#define MON_POOL_TAG_TOXIC_SPIKES   1 << POOL_TAG_TOXIC_SPIKES
#define MON_POOL_TAG_HAZARD_REMOVAL 1 << POOL_TAG_HAZARD_REMOVAL
#define MON_POOL_TAG_PHAZING_MOVE   1 << POOL_TAG_PHAZING_MOVE
#define MON_POOL_TAG_SCREENS        1 << POOL_TAG_SCREENS
#define MON_POOL_TAG_TERRAIN_SETTER 1 << POOL_TAG_TERRAIN_SETTER
#define MON_POOL_TAG_TERRAIN_ABUSER 1 << POOL_TAG_TERRAIN_ABUSER

struct PoolRules
{
    bool8 speciesClause;
    bool8 excludeForms;
    bool8 itemClause;
    bool8 itemClauseExclusions;
    bool8 soloLead;
    bool8 soloAce;
    u8 tagMaxMembers[POOL_NUM_TAGS];
    bool8 tagRequired[POOL_NUM_TAGS];
};

struct PickFunctions
{
    u32 (*LeadFunction)(const struct Trainer *, u8 *, u32, u32, u32, struct PoolRules *);
    u32 (*AceFunction)(const struct Trainer *, u8 *, u32, u32, u32, struct PoolRules *);
    u32 (*OtherFunction)(const struct Trainer *, u8 *, u32, u32, u32, struct PoolRules *);
};

void DoTrainerPartyPool(const struct Trainer *trainer, u32 *monIndices, u8 monsCount, u32 battleTypeFlags);

#endif
