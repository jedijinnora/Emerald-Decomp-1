//Trainer Parties 1.0
//THIS IS THE ACTUAL FILE USED BY THE GAME TO BUILD NPC TRAINERS
//WARNING: CHECK VERSION NUMBER WHEN REFERENCING THIS DOCUMENT

//AI FLAG INFO:
//You should check the file "trainers.h" to view AI flags, the game does not reference them here
//The "default" AI in this game is AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY
//Trainers may include smart switching flags
//Ninja boys, Hex Maniacs, and some other trainers have AI_FLAG_RISKY (also AI_FLAG_WILL_SUICIDE if moves like Explosion are present)
//Trainers may have AI_FLAG_HELP_PARTNER if they can be in a double battle and have a move worth targeting on an ally

//EASY PARTY INFO:
//Trainers will use the _easy version of the party if you have fewer than <threshold> badges
// threshold 0 = no easy version, will always be the default (more challenging) party
//On Easy difficulty, easy version of the party will always be selected regardless of badges (including gym leaders)
//Most easy parties have weaker moves, less evolved mons
// usually no EVs or specified nature but exceptions do exist


//INDIVIDUAL VALUES:
//IVs appear in HP/Atk/Def/Speed/SpA/SpD order
//If IVs are not specified here they will be random, good luck!
//
//Trainers with "perfect" IVs (slow mons may have 0 Speed):
//Elite Four and Champion
//Gym Leaders
//Victory Road Trainers
//Pokemon Breeders
//
//Gym Trainers have 20/20/20/20/20/20 IVs
//Cooltrainers and Experts have 25/25/25/25/25/25 IVs
//
//Special NPCs and "Story" Trainers don't have specific rules
//so you'll just have to check their parties individually


//EFFORT VALUES:
//EVs appear in HP/Atk/Def/Speed/SpA/SpD order
//If EVs are not specified here they will be 0
//
//Gym Leaders/Trainers have sensible EVs budgeted by your number of badges
//Regular Trainers have EVs assigned by class
//Easy parties usually have no EVs
//
//.ev = TRAINER_PARTY_EVS(HP, Attack, Defense, Speed, Sp.Atk, SpDef),
//Trainer classes that have a given spread
//
//.ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
//Breeder, Pokefan
//
//.ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
//Youngster, Lass, Bug Catcher, Fisherman, Tubers
//
//.ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
//Camper, Picnicker, Guitarist, Bird Keeper, Swimmer, Sailor
//
//.ev = TRAINER_PARTY_EVS(100, 100, 100, 0, 100, 100),
//Rich Boy, Lady
//
//.ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
//Beauty
//
//.ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
//Triathlete
//
//.ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
//Ninja Boy
//
//.ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
//Kindler, Dragon Tamer
//
//.ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
//Hex Maniac
//
//.ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
//Ruin Maniac, Parasol Lady
//
//.ev = TRAINER_PARTY_EVS(100, 100, 200, 0, 0, 0),
//Hiker
//
//.ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
//Aroma Lady
//Psychics have this spread but may move Sp.Atk EVs to Attack
//
//.ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
//Black Belt, Battle Girl
//
//Collectors and Pokemaniacs always choose some 252/252 spread
//
//Cooltrainers, Experts, Rangers, and Gentlemen have good EV spreads (510 totals)
//
//Guaranteed Double battle trainers have custom spreads
// their parties sometimes have weird doubles-specific strategies


//NATURES:
//          -Atk        -Def        -Speed      -Sp. Atk    -Sp. Def
//+Atk      0-hardy     1-lonely    2-brave     3-adamant   4-naughty
//+Def      5-bold      6-docile    7-relaxed   8-impish    9-lax
//+Speed    10-timid    11-hasty    12-serious  13-jolly    14-naive
//+Sp. Atk  15-modest   16-mild     17-quiet    18-bashful  19-rash
//+Sp. Def  20-calm     21-gentle   22-sassy    23-careful  24-quirky
//
//use the .nature = TRAINER_PARTY_NATURE(NATURE_ID) to assign
//this is to offset by 1 because party creation wants to give random nature on 0


//LEVELS:
//Trainer levels receive a boost depending on game progress
//Thus, a mon listed as lvl 16 will always appear at the level cap
//
//GAME STATE    LEVEL CAP   TRAINER BOOST   State
//0 badges:     16          0               0
//1 badge:      25          9               1
//2 badges:     34          18              2
//3 badges:     43          27              3
//4 badges:     52          36              4
//5 badges:     61          45              5
//6 badges:     70          54              6
//7 badges:     79          63              7
//8 badges:     85          69              8
//victory road: 87          71              9
//entered e4:   90          71              10
//champion:     90          74              11
//postgame:     100         84              12
//
//Victory Road Trainer mons are 85
//E4 mons are 87, Champion is 90
//but cap should lift to 90 on entering E4
//to accomodate standard HC Nuzlocke rules


//DUMMY PARTY FOR REFERENCE, COPY/PASTE
static const struct TrainerMon sParty_None[] = {
    {
    .lvl = 16,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};



// ****** SPOILERS BELOW ******


// ****** SPOILERS BELOW ******


// ****** SPOILERS BELOW ******


// ****** SPOILERS BELOW ******


// ****** SPOILERS BELOW ******


// ****** SPOILERS BELOW ******



//LEAGUE TRAINERS (done)

//ELITE FOUR -- 8 trainers, 8 total
//Random party selection is handled by scripting
//in Easy Difficulty, always chooses party 1

//E4 Brandon uses Rock/Ground types
static const struct TrainerMon sParty_Brandon1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_POISON_HEAL,
    .lvl = 16,
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_FACADE, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .ability = ABILITY_SAND_STREAM,
    .lvl = 16,
    .species = SPECIES_HIPPOWDON,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_EARTHQUAKE, MOVE_SLACK_OFF, MOVE_WHIRLWIND, MOVE_STEALTH_ROCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SOLID_ROCK,
    .lvl = 16,
    .species = SPECIES_RHYPERIOR,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_MEGAHORN, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_SAND_STREAM,
    .lvl = 16,
    .species = SPECIES_GIGALITH,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_TOXIC, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SAND_RUSH,
    .lvl = 16,
    .species = SPECIES_EXCADRILL,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_OUTRAGE, MOVE_DRAGON_DANCE}
    }
};
static const struct TrainerMon sParty_Brandon2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_GUTS,
    .lvl = 16,
    .species = SPECIES_URSALUNA,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_PAYBACK, MOVE_FACADE, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_TOXIC, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .ability = ABILITY_TECHNICIAN,
    .lvl = 16,
    .species = SPECIES_MAROWAK,
    .heldItem = ITEM_THICK_CLUB,
    .moves = {MOVE_BONEMERANG, MOVE_SHADOW_SNEAK, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SAND_STREAM,
    .lvl = 16,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_ROUGH_SKIN,
    .lvl = 16,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_EARTHQUAKE, MOVE_FIRE_FANG, MOVE_SCALE_SHOT, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_EARTH_POWER, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_BOOMBURST}
    }
};

//E4 Lucy uses Poison types
static const struct TrainerMon sParty_Lucy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .ability = ABILITY_PUNK_ROCK,
    .lvl = 16,
    .species = SPECIES_TOXTRICITY,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_BOOMBURST, MOVE_OVERDRIVE, MOVE_SHIFT_GEAR, MOVE_DRAIN_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 0, 170, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .ability = ABILITY_REGENERATOR,
    .lvl = 16,
    .species = SPECIES_SLOWKING_GALARIAN,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_SCALD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_ADAPTABILITY,
    .lvl = 16,
    .species = SPECIES_DRAGALGE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_BOMB, MOVE_FLIP_TURN, MOVE_TOXIC_SPIKES}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_CURSED_BODY,
    .lvl = 16,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_HEX, MOVE_VENOSHOCK, MOVE_DESTINY_BOND, MOVE_PAIN_SPLIT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_POISON_TOUCH,
    .lvl = 16,
    .species = SPECIES_MUK_ALOLAN,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_KNOCK_OFF, MOVE_GUNK_SHOT, MOVE_FIRE_PUNCH, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_MERCILESS,
    .lvl = 16,
    .species = SPECIES_SEVIPER,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_POISON_TAIL, MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH}
    }
};
static const struct TrainerMon sParty_Lucy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SNIPER,
    .lvl = 16,
    .species = SPECIES_DRAPION,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_WICKED_BLOW, MOVE_CROSS_POISON, MOVE_X_SCISSOR, MOVE_TOXIC_SPIKES}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SHEER_FORCE,
    .lvl = 16,
    .species = SPECIES_NIDOKING,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .ability = ABILITY_REGENERATOR,
    .lvl = 16,
    .species = SPECIES_TOXAPEX,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_HAZE, MOVE_TOXIC_SPIKES}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_NATURAL_CURE,
    .lvl = 16,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_GIGA_DRAIN, MOVE_SPIKES}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_CORROSION,
    .lvl = 16,
    .species = SPECIES_SALAZZLE,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_TOXIC, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_MERCILESS,
    .lvl = 16,
    .species = SPECIES_SEVIPER,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_POISON_TAIL, MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH}
    }
};

//E4 Glacia uses Ice types
static const struct TrainerMon sParty_Glacia1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_COMPETITIVE,
    .lvl = 16,
    .species = SPECIES_FROSLASS,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FREEZE_DRY, MOVE_SHADOW_BALL, MOVE_PAIN_SPLIT, MOVE_DESTINY_BOND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_ROTOM_FROST,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_BLIZZARD, MOVE_NASTY_PLOT, MOVE_WILL_O_WISP, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_OBLIVIOUS,
    .lvl = 16,
    .species = SPECIES_MAMOSWINE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SNOW_WARNING,
    .lvl = 16,
    .species = SPECIES_NINETALES_ALOLAN,
    .heldItem = ITEM_LIGHT_CLAY,
    .moves = {MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_FREEZE_DRY, MOVE_PAIN_SPLIT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SLUSH_RUSH,
    .lvl = 16,
    .species = SPECIES_SANDSLASH_ALOLAN,
    .heldItem = ITEM_WIDE_LENS,
    .moves = {MOVE_TRIPLE_AXEL, MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_MAGIC_GUARD,
    .lvl = 16,
    .species = SPECIES_ARTICUNO,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FREEZE_DRY, MOVE_SHEER_COLD, MOVE_FOCUS_BLAST, MOVE_ROOST}
    }
};
static const struct TrainerMon sParty_Glacia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SKILL_LINK,
    .lvl = 16,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_LIQUIDATION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SNOW_WARNING,
    .lvl = 16,
    .species = SPECIES_ABOMASNOW,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_WOOD_HAMMER, MOVE_ICE_SHARD, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_ICE_SCALES,
    .lvl = 16,
    .species = SPECIES_FROSMOTH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_QUIVER_DANCE, MOVE_BLIZZARD, MOVE_BUG_BUZZ, MOVE_FREEZE_DRY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_COMPETITIVE,
    .lvl = 16,
    .species = SPECIES_FROSLASS,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FREEZE_DRY, MOVE_SHADOW_BALL, MOVE_PAIN_SPLIT, MOVE_DESTINY_BOND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SLUSH_RUSH,
    .lvl = 16,
    .species = SPECIES_GLACEON,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .moves = {MOVE_FREEZE_DRY, MOVE_BLIZZARD, MOVE_ICE_SHARD, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_MAGIC_GUARD,
    .lvl = 16,
    .species = SPECIES_ARTICUNO,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FREEZE_DRY, MOVE_SHEER_COLD, MOVE_FOCUS_BLAST, MOVE_ROOST}
    }
};

//E4 Drake uses Dragon types
static const struct TrainerMon sParty_Drake1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_BULLETPROOF,
    .lvl = 16,
    .species = SPECIES_KOMMO_O,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_DRAGON_TAIL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_INFILTRATOR,
    .lvl = 16,
    .species = SPECIES_DRAGAPULT,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_HEX, MOVE_U_TURN, MOVE_DRACO_METEOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_SNIPER,
    .lvl = 16,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_DRACO_METEOR, MOVE_SNIPE_SHOT, MOVE_ICE_BEAM, MOVE_FOCUS_ENERGY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 170, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
    .ability = ABILITY_OVERCOAT,
    .lvl = 16,
    .species = SPECIES_GOODRA_HISUIAN,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_POISON_TAIL, MOVE_IRON_TAIL, MOVE_CURSE, MOVE_DRACO_METEOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_MOLD_BREAKER,
    .lvl = 16,
    .species = SPECIES_HAXORUS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_SCALE_SHOT, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}
    }
};
static const struct TrainerMon sParty_Drake2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SOUNDPROOF,
    .lvl = 16,
    .species = SPECIES_KOMMO_O,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_CLANGOROUS_SOUL, MOVE_AURA_SPHERE, MOVE_BOOMBURST, MOVE_STEALTH_ROCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_INFILTRATOR,
    .lvl = 16,
    .species = SPECIES_DRAGAPULT,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_HEX, MOVE_U_TURN, MOVE_DRACO_METEOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_PIXILATE,
    .lvl = 16,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_ROCK_HEAD,
    .lvl = 16,
    .species = SPECIES_TYRANTRUM,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_HEAD_SMASH, MOVE_CLOSE_COMBAT, MOVE_SCALE_SHOT, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
    .ability = ABILITY_POISON_HEAL,
    .lvl = 16,
    .species = SPECIES_GOODRA,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_ACID_SPRAY, MOVE_RECOVER, MOVE_DRAGON_TAIL, MOVE_DRACO_METEOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_NASTY_PLOT, MOVE_FIRE_BLAST}
    }
};


//CHAMPION -- 4 trainers, 12 total
//Anabel's team selection is handled by scripting
//in Easy Difficulty, always chooses party 4

//Champion Anabel has several teams with different Legendary/Mythicals as her ace(s)
static const struct TrainerMon sParty_Anabel1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 4, 252, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_GLUTTONY,
    .lvl = 16,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_FIGY_BERRY,
    .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_RECYCLE, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_ADAPTABILITY,
    .lvl = 16,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_BULLET_PUNCH, MOVE_METEOR_MASH, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_MISMAGIUS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_ASTRAL_BARRAGE, MOVE_MOONBLAST, MOVE_NASTY_PLOT, MOVE_DESTINY_BOND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SERENE_GRACE,
    .lvl = 16,
    .species = SPECIES_RAIKOU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_WILDBOLT_STORM, MOVE_VOLT_SWITCH, MOVE_AURA_SPHERE, MOVE_EXTRASENSORY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SERENE_GRACE,
    .lvl = 16,
    .species = SPECIES_ENTEI,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SACRED_FIRE, MOVE_EXTREME_SPEED, MOVE_STONE_EDGE, MOVE_IRON_HEAD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SERENE_GRACE,
    .lvl = 16,
    .species = SPECIES_SUICUNE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BLIZZARD, MOVE_CALM_MIND, MOVE_AIR_SLASH, MOVE_HYDRO_PUMP}
    }
};
static const struct TrainerMon sParty_Anabel2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_THICK_FAT,
    .lvl = 16,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_FIRE_PUNCH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_TECHNICIAN,
    .lvl = 16,
    .species = SPECIES_WEAVILE,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_ICE_SHARD, MOVE_KNOCK_OFF, MOVE_TRIPLE_AXEL, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_ADAPTABILITY,
    .lvl = 16,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_BULLET_PUNCH, MOVE_METEOR_MASH, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SERENE_GRACE,
    .lvl = 16,
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_THUNDER_WAVE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_NASTY_PLOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_MULTISCALE,
    .lvl = 16,
    .species = SPECIES_LATIAS,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_CALM_MIND, MOVE_MIST_BALL, MOVE_THUNDER, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_ADAPTABILITY,
    .lvl = 16,
    .species = SPECIES_LATIOS,
    .heldItem = ITEM_SOUL_DEW,
    .moves = {MOVE_DRAGON_PULSE, MOVE_LUSTER_PURGE, MOVE_SURF, MOVE_RECOVER}
    }
};
static const struct TrainerMon sParty_Anabel3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_THICK_FAT,
    .lvl = 16,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_SELF_DESTRUCT, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_MISMAGIUS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_ASTRAL_BARRAGE, MOVE_MOONBLAST, MOVE_NASTY_PLOT, MOVE_DESTINY_BOND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_TECHNICIAN,
    .lvl = 16,
    .species = SPECIES_WEAVILE,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_ICE_SHARD, MOVE_KNOCK_OFF, MOVE_TRIPLE_AXEL, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_THICK_FAT,
    .lvl = 16,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_EXTREME_SPEED, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_HYDRATION,
    .lvl = 16,
    .species = SPECIES_MANAPHY,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_TAIL_GLOW, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_MAGIC_GUARD,
    .lvl = 16,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_PSYCHIC, MOVE_PSYSTRIKE, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}
    }
};
static const struct TrainerMon sParty_Anabel4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_AZELF,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_STEALTH_ROCK, MOVE_TAUNT, MOVE_U_TURN, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_ADAPTABILITY,
    .lvl = 16,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_VACUUM_WAVE, MOVE_FLASH_CANNON, MOVE_AURA_SPHERE, MOVE_NASTY_PLOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SUPER_LUCK,
    .lvl = 16,
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_THUNDER_WAVE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_THICK_FAT,
    .lvl = 16,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_EXTREME_SPEED, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SERENE_GRACE,
    .lvl = 16,
    .species = SPECIES_SHAYMIN_SKY,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_SUBSTITUTE, MOVE_LEECH_SEED}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_MAGIC_GUARD,
    .lvl = 16,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_PSYCHIC, MOVE_PSYSTRIKE, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}
    }
};


//GYM LEADERS (done)
//Because of the way easy parties work, on Easy difficulty you will
//only encounter the badge 1, 3/4, and 8R teams
//So your badge 2, 5, 6, and 7 matches will be easier

//RUSTBORO GYM LEADER -- 3 trainers, 15 total
//Noland_1: threshold 1
static const struct TrainerMon sParty_Noland_badge1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_IRON_BARBS,
    .lvl = 15,
    .species = SPECIES_TOGEDEMARU,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_IRON_HEAD, MOVE_ZING_ZAP, MOVE_FELL_STINGER, MOVE_NUZZLE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_LEVITATE,
    .lvl = 14,
    .species = SPECIES_KLINK,
    .heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_GEAR_GRIND, MOVE_SHIFT_GEAR, MOVE_WILD_CHARGE, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_STURDY,
    .lvl = 16,
    .species = SPECIES_ARON,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_METAL_CLAW, MOVE_ROCK_TOMB, MOVE_HEADBUTT, MOVE_BULLDOZE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .ability = ABILITY_STURDY,
    .lvl = 15,
    .species = SPECIES_PINECO,
    .heldItem = ITEM_NORMAL_GEM,
    .moves = {MOVE_GYRO_BALL, MOVE_BUG_BITE, MOVE_COUNTER, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_TOUGH_CLAWS,
    .lvl = 16,
    .species = SPECIES_MEOWTH_GALARIAN,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_FAKE_OUT, MOVE_METAL_CLAW, MOVE_HONE_CLAWS, MOVE_FLAIL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_STURDY,
    .lvl = 16,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_LIECHI_BERRY,
    .moves = {MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_ROOST, MOVE_BODY_PRESS}
    }
};
static const struct TrainerMon sParty_Noland_badge2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 0, 0, 100),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_STURDY,
    .lvl = 16,
    .species = SPECIES_ARON,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_IRON_HEAD, MOVE_ROCK_TOMB, MOVE_STEALTH_ROCK, MOVE_BULLDOZE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_LEVITATE,
    .lvl = 14,
    .species = SPECIES_KLINK,
    .heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_GEAR_GRIND, MOVE_SHIFT_GEAR, MOVE_WILD_CHARGE, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 150, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .ability = ABILITY_STURDY,
    .lvl = 15,
    .species = SPECIES_PINECO,
    .heldItem = ITEM_NORMAL_GEM,
    .moves = {MOVE_GYRO_BALL, MOVE_BUG_BITE, MOVE_COUNTER, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 0, 0, 100),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_IRON_BARBS,
    .lvl = 15,
    .species = SPECIES_TOGEDEMARU,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_IRON_HEAD, MOVE_ZING_ZAP, MOVE_FELL_STINGER, MOVE_NUZZLE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 0, 0, 100),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_STURDY,
    .lvl = 16,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_LIECHI_BERRY,
    .moves = {MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_ROOST, MOVE_BODY_PRESS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 100, 100, 0, 0, 100),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SHEER_FORCE,
    .lvl = 16,
    .species = SPECIES_CUFANT,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT}
    }
};
//Noland_2: threshold 4
static const struct TrainerMon sParty_Noland_badge34[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 0, 225),
    .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
    .ability = ABILITY_STURDY,
    .lvl = 15,
    .species = SPECIES_FORRETRESS,
    .heldItem = ITEM_CUSTAP_BERRY,
    .moves = {MOVE_GYRO_BALL, MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_VOLT_SWITCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 150, 0, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_STURDY,
    .lvl = 16,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_LIECHI_BERRY,
    .moves = {MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_ROOST, MOVE_BODY_PRESS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 150, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SHEER_FORCE,
    .lvl = 16,
    .species = SPECIES_CUFANT,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_STEELY_SPIRIT,
    .lvl = 15,
    .species = SPECIES_PERRSERKER,
    .heldItem = ITEM_METAL_COAT,
    .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_MOLD_BREAKER,
    .lvl = 16,
    .species = SPECIES_EXCADRILL,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 150, 0, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_ROCK_HEAD,
    .lvl = 16,
    .species = SPECIES_LAIRON,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE}
    }
};
static const struct TrainerMon sParty_Noland_badge567[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
    .ability = ABILITY_STURDY,
    .lvl = 15,
    .species = SPECIES_FORRETRESS,
    .heldItem = ITEM_CUSTAP_BERRY,
    .moves = {MOVE_GYRO_BALL, MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_ROCK_HEAD,
    .lvl = 16,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_HEAD_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_STURDY,
    .lvl = 16,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SPIKES, MOVE_WHIRLWIND, MOVE_ROOST, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_STEELWORKER,
    .lvl = 14,
    .species = SPECIES_KLINKLANG,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_GEAR_GRIND, MOVE_SHIFT_GEAR, MOVE_WILD_CHARGE, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_STEELY_SPIRIT,
    .lvl = 15,
    .species = SPECIES_PERRSERKER,
    .heldItem = ITEM_METAL_COAT,
    .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SHEER_FORCE,
    .lvl = 16,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_BULLDOZE, MOVE_THUNDER_FANG}
    }
};
//Noland_3: threshold 0
static const struct TrainerMon sParty_Noland_badge8R[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_ROCK_HEAD,
    .lvl = 16,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_HEAD_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
    .ability = ABILITY_STURDY,
    .lvl = 15,
    .species = SPECIES_FORRETRESS,
    .heldItem = ITEM_CUSTAP_BERRY,
    .moves = {MOVE_GYRO_BALL, MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_STEELWORKER,
    .lvl = 14,
    .species = SPECIES_KLINKLANG,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_GEAR_GRIND, MOVE_SHIFT_GEAR, MOVE_WILD_CHARGE, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_STEELY_SPIRIT,
    .lvl = 15,
    .species = SPECIES_PERRSERKER,
    .heldItem = ITEM_METAL_COAT,
    .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SHEER_FORCE,
    .lvl = 16,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_BULLDOZE, MOVE_THUNDER_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_IRON_FIST,
    .lvl = 16,
    .species = SPECIES_MELMETAL,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_THUNDER_PUNCH}
    }
};

//DEWFORD GYM LEADER -- 3 trainers, 18 total
//Sidney_1: threshold 1
static const struct TrainerMon sParty_Sidney_badge1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 15,
    .species = SPECIES_SANDILE,
    .heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_BULLDOZE, MOVE_BITE, MOVE_FIRE_FANG, MOVE_THUNDER_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_CHLOROPHYLL,
    .lvl = 14,
    .species = SPECIES_NUZLEAF,
    .heldItem = ITEM_MIRACLE_SEED,
    .moves = {MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_FAKE_OUT, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_ROUGH_SKIN,
    .lvl = 16,
    .species = SPECIES_CARVANHA,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_BITE, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_POISON_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAUGHTY),
    .ability = ABILITY_STENCH,
    .lvl = 15,
    .species = SPECIES_STUNKY,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_ACID_SPRAY, MOVE_SNARL, MOVE_POISON_GAS, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_DEFIANT,
    .lvl = 16,
    .species = SPECIES_PAWNIARD,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_PSYCHO_CUT, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_SCRAGGY,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_PAYBACK, MOVE_FAKE_OUT, MOVE_POWER_UP_PUNCH, MOVE_POISON_JAB}
    }
};
static const struct TrainerMon sParty_Sidney_badge2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 150, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_IRON_TAIL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SPEED_BOOST,
    .lvl = 16,
    .species = SPECIES_CARVANHA,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_BITE, MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 150, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_DEFIANT,
    .lvl = 15,
    .species = SPECIES_PAWNIARD,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_PSYCHO_CUT, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_CHLOROPHYLL,
    .lvl = 15,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_MIRACLE_SEED,
    .moves = {MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_FAKE_OUT, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_FLASH_FIRE,
    .lvl = 16,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FLAMETHROWER, MOVE_SNARL, MOVE_NASTY_PLOT, MOVE_TAUNT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_JUSTIFIED,
    .lvl = 16,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_BLACK_GLASSES,
    .moves = {MOVE_NIGHT_SLASH, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER}
    }
};
//Sidney_2: threshold 4
static const struct TrainerMon sParty_Sidney_badge34[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_IRON_TAIL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SPEED_BOOST,
    .lvl = 16,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_BLACK_GLASSES,
    .moves = {MOVE_CRUNCH, MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_IRON_FIST,
    .lvl = 16,
    .species = SPECIES_PANGORO,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_BULLET_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MILD),
    .ability = ABILITY_WATER_ABSORB,
    .lvl = 15,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_SPIKES, MOVE_GIGA_DRAIN, MOVE_SUCKER_PUNCH, MOVE_DARK_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_FLASH_FIRE,
    .lvl = 16,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FLAMETHROWER, MOVE_SNARL, MOVE_NASTY_PLOT, MOVE_TAUNT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_PRESSURE,
    .lvl = 16,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_LIECHI_BERRY,
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER}
    }
};
static const struct TrainerMon sParty_Sidney_badge567[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 15,
    .species = SPECIES_KROOKODILE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_CRUNCH, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SPEED_BOOST,
    .lvl = 16,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_MOXIE,
    .lvl = 16,
    .species = SPECIES_SCRAFTY,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_DRAGON_DANCE, MOVE_HIGH_JUMP_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .ability = ABILITY_STENCH,
    .lvl = 14,
    .species = SPECIES_SKUNTANK,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_ACID_SPRAY, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_FLASH_FIRE,
    .lvl = 16,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FIRE_BLAST, MOVE_FIERY_WRATH, MOVE_NASTY_PLOT, MOVE_TAUNT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SUPER_LUCK,
    .lvl = 16,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER}
    }
};
//Sidney_3: threshold 0
static const struct TrainerMon sParty_Sidney_badge8R[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 15,
    .species = SPECIES_KROOKODILE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_CRUNCH, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SPEED_BOOST,
    .lvl = 16,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_MOXIE,
    .lvl = 16,
    .species = SPECIES_SCRAFTY,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_DRAGON_DANCE, MOVE_HIGH_JUMP_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_FLASH_FIRE,
    .lvl = 16,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FIRE_BLAST, MOVE_FIERY_WRATH, MOVE_NASTY_PLOT, MOVE_TAUNT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SUPER_LUCK,
    .lvl = 16,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_BERSERK,
    .lvl = 16,
    .species = SPECIES_MOLTRES_GALARIAN,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_NASTY_PLOT, MOVE_ROOST}
    }
};

//MAUVILLE GYM LEADER -- 3 trainers, 21 total
//Wattson_1: threshold 1
static const struct TrainerMon sParty_Wattson_badge1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .ability = ABILITY_STURDY,
    .lvl = 15,
    .species = SPECIES_MAGNEMITE,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_SHOCK_WAVE, MOVE_VOLT_SWITCH, MOVE_MIRROR_SHOT, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .ability = ABILITY_STATIC,
    .lvl = 14,
    .species = SPECIES_VOLTORB_HISUIAN,
    .heldItem = ITEM_WIDE_LENS,
    .moves = {MOVE_CHARGE_BEAM, MOVE_BULLET_SEED, MOVE_SCREECH, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_ELECTRIKE,
    .heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_WATER_ABSORB,
    .lvl = 15,
    .species = SPECIES_CHINCHOU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_BUBBLE_BEAM, MOVE_ICE_BEAM, MOVE_REST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_STURDY,
    .lvl = 16,
    .species = SPECIES_GEODUDE_ALOLAN,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_SMACK_DOWN, MOVE_BULLDOZE, MOVE_ROCK_POLISH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_STURDY,
    .lvl = 16,
    .species = SPECIES_MAGNEMITE,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_MAGNET_RISE, MOVE_METAL_SOUND}
    }
};
static const struct TrainerMon sParty_Wattson_badge2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 0, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_STURDY,
    .lvl = 16,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 150, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_BATTERY,
    .lvl = 16,
    .species = SPECIES_CHARJABUG,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_BUG_BITE, MOVE_SPARK, MOVE_ELECTROWEB, MOVE_STICKY_WEB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 0, 0, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_STURDY,
    .lvl = 16,
    .species = SPECIES_GRAVELER_ALOLAN,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_ROCK_POLISH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAUGHTY),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 15,
    .species = SPECIES_LUXIO,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_WILD_CHARGE, MOVE_VOLT_SWITCH, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 150, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_WATER_ABSORB,
    .lvl = 16,
    .species = SPECIES_CHINCHOU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_BUBBLE_BEAM, MOVE_ICE_BEAM, MOVE_REST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_THUNDER_WAVE, MOVE_AURORA_BEAM}
    }
};
//Wattson_2: threshold 4
static const struct TrainerMon sParty_Wattson_badge34[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .ability = ABILITY_STURDY,
    .lvl = 16,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_BUG_BUZZ, MOVE_THUNDER, MOVE_AGILITY, MOVE_STICKY_WEB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_STATIC,
    .lvl = 16,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_SHUCA_BERRY,
    .moves = {MOVE_TAIL_GLOW, MOVE_THUNDER, MOVE_DAZZLING_GLEAM, MOVE_FOCUS_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 15,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_VOLT_TACKLE, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 225, 225),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_WATER_ABSORB,
    .lvl = 16,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_REST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_THUNDER_WAVE, MOVE_AURORA_BEAM}
    }
};
static const struct TrainerMon sParty_Wattson_badge567[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .ability = ABILITY_ANALYTIC,
    .lvl = 16,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_BUG_BUZZ, MOVE_THUNDER, MOVE_AGILITY, MOVE_STICKY_WEB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_STATIC,
    .lvl = 16,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_SHUCA_BERRY,
    .moves = {MOVE_TAIL_GLOW, MOVE_THUNDER, MOVE_DAZZLING_GLEAM, MOVE_FOCUS_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_GUTS,
    .lvl = 15,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_VOLT_TACKLE, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 252, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_WATER_ABSORB,
    .lvl = 16,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_REST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_THUNDER_WAVE, MOVE_AURORA_BEAM}
    }
};
//Wattson_3: threshold 0
static const struct TrainerMon sParty_Wattson_badge8R[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_STATIC,
    .lvl = 15,
    .species = SPECIES_ZAPDOS,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_DISCHARGE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_HURRICANE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .ability = ABILITY_ANALYTIC,
    .lvl = 16,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_BUG_BUZZ, MOVE_THUNDER, MOVE_AGILITY, MOVE_STICKY_WEB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_GUTS,
    .lvl = 15,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_VOLT_TACKLE, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 252, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_WATER_ABSORB,
    .lvl = 16,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_REST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_THUNDER_WAVE, MOVE_AURORA_BEAM}
    }
};

//LAVARIDGE GYM LEADER -- 3 trainers, 24 total
//Moore_1: threshold 1
static const struct TrainerMon sParty_Moore_badge1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_LONELY),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 15,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_FIRE_FANG, MOVE_OVERHEAT, MOVE_WILD_CHARGE, MOVE_ROCK_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_FLASH_FIRE,
    .lvl = 14,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_FIRE_GEM,
    .moves = {MOVE_FLAME_CHARGE, MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_HIGH_HORSEPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_FLASH_FIRE,
    .lvl = 16,
    .species = SPECIES_VULPIX,
    .heldItem = ITEM_PETAYA_BERRY,
    .moves = {MOVE_HEX, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_HUSTLE,
    .lvl = 15,
    .species = SPECIES_DARUMAKA,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_FIRE_PUNCH, MOVE_FLAME_CHARGE, MOVE_YAWN, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_FLASH_FIRE,
    .lvl = 16,
    .species = SPECIES_SLUGMA,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_LAVA_PLUME, MOVE_RECOVER, MOVE_AMNESIA, MOVE_ACID_ARMOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_BLAZE,
    .lvl = 16,
    .species = SPECIES_QUILAVA,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_MYSTICAL_FIRE, MOVE_FLAME_CHARGE, MOVE_SCORCHING_SANDS, MOVE_QUICK_ATTACK}
    }
};
static const struct TrainerMon sParty_Moore_badge2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_DROUGHT,
    .lvl = 16,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_PETAYA_BERRY,
    .moves = {MOVE_HEX, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_HUSTLE,
    .lvl = 16,
    .species = SPECIES_DARUMAKA,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_FIRE_PUNCH, MOVE_FLAME_CHARGE, MOVE_YAWN, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .ability = ABILITY_SIMPLE,
    .lvl = 15,
    .species = SPECIES_SLUGMA,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_LAVA_PLUME, MOVE_RECOVER, MOVE_AMNESIA, MOVE_ACID_ARMOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 0, 0, 0, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_UNAWARE,
    .lvl = 15,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_SLACK_OFF, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_BLAZE,
    .lvl = 16,
    .species = SPECIES_QUILAVA,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FIRE_BLAST, MOVE_FLAME_CHARGE, MOVE_SCORCHING_SANDS, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_EXTREME_SPEED}
    }
};
//Moore_2: threshold 4
static const struct TrainerMon sParty_Moore_badge34[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 0, 225),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_OVERHEAT, MOVE_CLOSE_COMBAT, MOVE_WILL_O_WISP, MOVE_EXTREME_SPEED}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 225, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_ROTOM_HEAT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_OVERHEAT, MOVE_VOLT_SWITCH, MOVE_TOXIC, MOVE_DISCHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_ROCK_HEAD,
    .lvl = 16,
    .species = SPECIES_ARCANINE_HISUIAN,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_MORNING_SUN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_BLAZE,
    .lvl = 16,
    .species = SPECIES_TYPHLOSION,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FIRE_BLAST, MOVE_FLAME_CHARGE, MOVE_SCORCHING_SANDS, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_DROUGHT,
    .lvl = 16,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_PETAYA_BERRY,
    .moves = {MOVE_HEX, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_GALE_WINGS,
    .lvl = 16,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_DUAL_WINGBEAT, MOVE_BULK_UP, MOVE_ROOST}
    }
};
static const struct TrainerMon sParty_Moore_badge567[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_OVERHEAT, MOVE_CLOSE_COMBAT, MOVE_WILL_O_WISP, MOVE_EXTREME_SPEED}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SIMPLE,
    .lvl = 16,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_FLAMETHROWER, MOVE_POWER_GEM, MOVE_SCALD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SHEER_FORCE,
    .lvl = 16,
    .species = SPECIES_DARMANITAN,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_GALE_WINGS,
    .lvl = 16,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_FLYING_GEM,
    .moves = {MOVE_ACROBATICS, MOVE_TAILWIND, MOVE_BULK_UP, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_DROUGHT,
    .lvl = 16,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_MOONBLAST, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_BLAZE,
    .lvl = 16,
    .species = SPECIES_TYPHLOSION_HISUIAN,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FIRE_BLAST, MOVE_FLAME_CHARGE, MOVE_INFERNAL_PARADE, MOVE_FOCUS_BLAST}
    }
};
//Moore_3: threshold 0
static const struct TrainerMon sParty_Moore_badge8R[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_ZEN_MODE,
    .lvl = 15,
    .species = SPECIES_DARMANITAN_GALARIAN,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FLARE_BLITZ, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_OVERHEAT, MOVE_CLOSE_COMBAT, MOVE_WILL_O_WISP, MOVE_EXTREME_SPEED}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_BLAZE,
    .lvl = 16,
    .species = SPECIES_TYPHLOSION_HISUIAN,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FIRE_BLAST, MOVE_FLAME_CHARGE, MOVE_INFERNAL_PARADE, MOVE_FOCUS_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .ability = ABILITY_FLAME_BODY,
    .lvl = 15,
    .species = SPECIES_MOLTRES,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_HURRICANE, MOVE_WILL_O_WISP, MOVE_ROOST, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SIMPLE,
    .lvl = 16,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_FLAMETHROWER, MOVE_POWER_GEM, MOVE_SCALD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_FLASH_FIRE,
    .lvl = 16,
    .species = SPECIES_HEATRAN,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_MAGMA_STORM, MOVE_FLASH_CANNON, MOVE_TOXIC, MOVE_EARTH_POWER}
    }
};

//PETALBURG GYM LEADER -- 3 trainers, 27 total
//Greta_1: threshold 1
static const struct TrainerMon sParty_Greta_badge1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .ability = ABILITY_OWN_TEMPO,
    .lvl = 15,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_DIZZY_PUNCH, MOVE_SUCKER_PUNCH, MOVE_UPROAR, MOVE_PSYBEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_TECHNICIAN,
    .lvl = 14,
    .species = SPECIES_MINCCINO,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_QUICK_FEET,
    .lvl = 16,
    .species = SPECIES_TEDDIURSA,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_FACADE, MOVE_ICE_PUNCH, MOVE_ROCK_SMASH, MOVE_SHADOW_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .ability = ABILITY_COMPETITIVE,
    .lvl = 15,
    .species = SPECIES_JIGGLYPUFF,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_SING, MOVE_HYPER_VOICE, MOVE_WAKE_UP_SLAP, MOVE_DRAINING_KISS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_PICKUP,
    .lvl = 16,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HEADBUTT, MOVE_THUNDER_WAVE, MOVE_COVET, MOVE_IRON_TAIL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_THICK_FAT,
    .lvl = 16,
    .species = SPECIES_MUNCHLAX,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_SLAM, MOVE_STOCKPILE, MOVE_FIRE_PUNCH, MOVE_POWER_UP_PUNCH}
    }
};
static const struct TrainerMon sParty_Greta_badge2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 150, 0, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_PUNK_ROCK,
    .lvl = 16,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_DISARMING_VOICE, MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_WISH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_TECHNICIAN,
    .lvl = 16,
    .species = SPECIES_CINCCINO,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_THICK_FAT,
    .lvl = 15,
    .species = SPECIES_MUNCHLAX,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_ICE_PUNCH, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_QUICK_FEET,
    .lvl = 15,
    .species = SPECIES_LINOONE_GALARIAN,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_FACADE, MOVE_COUNTER, MOVE_NIGHT_SLASH, MOVE_PARTING_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_CONTRARY,
    .lvl = 16,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_SUPERPOWER, MOVE_STOMPING_TANTRUM, MOVE_DIZZY_PUNCH, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_QUICK_FEET,
    .lvl = 16,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BELLY_DRUM, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_EXTREME_SPEED}
    }
};
//Greta_2: threshold 4
static const struct TrainerMon sParty_Greta_badge34[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_QUICK_FEET,
    .lvl = 16,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BELLY_DRUM, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_EXTREME_SPEED}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_DRY_SKIN,
    .lvl = 16,
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_SURF, MOVE_HYPER_VOICE, MOVE_GLARE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SERENE_GRACE,
    .lvl = 16,
    .species = SPECIES_SAWSBUCK,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_HORN_LEECH, MOVE_BODY_SLAM, MOVE_MEGAHORN, MOVE_ZEN_HEADBUTT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 225, 0, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_PUNK_ROCK,
    .lvl = 16,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_DISARMING_VOICE, MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_WISH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_TOXIC_BOOST,
    .lvl = 16,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_SWORDS_DANCE, MOVE_SHADOW_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SKILL_LINK,
    .lvl = 16,
    .species = SPECIES_CINCCINO,
    .heldItem = ITEM_KINGS_ROCK,
    .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_KNOCK_OFF}
    }
};
static const struct TrainerMon sParty_Greta_badge567[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_OWN_TEMPO,
    .lvl = 16,
    .species = SPECIES_SMEARGLE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_STICKY_WEB, MOVE_NUZZLE, MOVE_ENDEAVOR, MOVE_DESTINY_BOND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_TECHNICIAN,
    .lvl = 16,
    .species = SPECIES_AMBIPOM,
    .heldItem = ITEM_PROTECTIVE_PADS,
    .moves = {MOVE_TAIL_SLAP, MOVE_ARM_THRUST, MOVE_BEAT_UP, MOVE_FAKE_OUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_PUNK_ROCK,
    .lvl = 16,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_BOOMBURST, MOVE_FIRE_BLAST, MOVE_SURF, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SERENE_GRACE,
    .lvl = 16,
    .species = SPECIES_SAWSBUCK,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_HORN_LEECH, MOVE_BODY_SLAM, MOVE_MEGAHORN, MOVE_ZEN_HEADBUTT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SERENE_GRACE,
    .lvl = 16,
    .species = SPECIES_DUNSPARCE,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_BODY_SLAM, MOVE_ZEN_HEADBUTT, MOVE_ROOST, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_GUTS,
    .lvl = 16,
    .species = SPECIES_OBSTAGOON,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_FACADE, MOVE_CROSS_CHOP, MOVE_KNOCK_OFF, MOVE_PARTING_SHOT}
    }
};
//Greta_3: threshold 0
static const struct TrainerMon sParty_Greta_badge8R[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SERENE_GRACE,
    .lvl = 15,
    .species = SPECIES_MELOETTA_PIROUETTE,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_GUTS,
    .lvl = 16,
    .species = SPECIES_OBSTAGOON,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_FACADE, MOVE_CROSS_CHOP, MOVE_KNOCK_OFF, MOVE_PARTING_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_TECHNICIAN,
    .lvl = 16,
    .species = SPECIES_AMBIPOM,
    .heldItem = ITEM_PROTECTIVE_PADS,
    .moves = {MOVE_TAIL_SLAP, MOVE_ARM_THRUST, MOVE_BEAT_UP, MOVE_FAKE_OUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_PUNK_ROCK,
    .lvl = 16,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_BOOMBURST, MOVE_FIRE_BLAST, MOVE_SURF, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SERENE_GRACE,
    .lvl = 16,
    .species = SPECIES_SAWSBUCK,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_HORN_LEECH, MOVE_BODY_SLAM, MOVE_MEGAHORN, MOVE_ZEN_HEADBUTT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_DRY_SKIN,
    .lvl = 16,
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_SURF, MOVE_BOOMBURST, MOVE_GLARE}
    }
};

//FORTREE GYM LEADER -- 3 trainers, 30 total
//Spenser_1: threshold 1
static const struct TrainerMon sParty_Spenser_badge1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_OWN_TEMPO,
    .lvl = 15,
    .species = SPECIES_LOMBRE,
    .heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_ENERGY_BALL, MOVE_COUNTER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .ability = ABILITY_TECHNICIAN,
    .lvl = 14,
    .species = SPECIES_TREECKO,
    .heldItem = ITEM_BIG_ROOT,
    .moves = {MOVE_MEGA_DRAIN, MOVE_DRAGON_BREATH, MOVE_ROCK_TOMB, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_DROUGHT,
    .lvl = 16,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_GROWTH, MOVE_ENERGY_BALL, MOVE_FIRE_SPIN, MOVE_SYNTHESIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_POISON_POINT,
    .lvl = 15,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_POISON_BARB,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_SYNTHESIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_LEAF_GUARD,
    .lvl = 16,
    .species = SPECIES_TANGELA,
    .heldItem = ITEM_BINDING_BAND,
    .moves = {MOVE_CURSE, MOVE_BIND, MOVE_INGRAIN, MOVE_SYNTHESIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_CHLOROPHYLL,
    .lvl = 16,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_SLAM, MOVE_FLY, MOVE_RAZOR_LEAF, MOVE_SYNTHESIS}
    }
};
static const struct TrainerMon sParty_Spenser_badge2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_DANCER,
    .lvl = 16,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_GRASS_KNOT, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 150, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_CHLOROPHYLL,
    .lvl = 16,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_SLAM, MOVE_FLY, MOVE_RAZOR_LEAF, MOVE_SYNTHESIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 0, 0, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_REGENERATOR,
    .lvl = 15,
    .species = SPECIES_TANGROWTH,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_GIGA_DRAIN, MOVE_POWER_WHIP, MOVE_ANCIENT_POWER, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .ability = ABILITY_EFFECT_SPORE,
    .lvl = 15,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_SPORE, MOVE_MACH_PUNCH, MOVE_SKY_UPPERCUT, MOVE_SEED_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_TECHNICIAN,
    .lvl = 16,
    .species = SPECIES_GROVYLE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DUAL_CHOP, MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 0, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_DANCER,
    .lvl = 16,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN, MOVE_FIERY_DANCE, MOVE_STRENGTH_SAP}
    }
};
//Spenser_2: threshold 4
static const struct TrainerMon sParty_Spenser_badge34[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_DANCER,
    .lvl = 16,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_GRASS_KNOT, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_POISON_HEAL,
    .lvl = 15,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_SPORE, MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_DRAIN_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SERENE_GRACE,
    .lvl = 16,
    .species = SPECIES_SAWSBUCK,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_HORN_LEECH, MOVE_BODY_SLAM, MOVE_MEGAHORN, MOVE_BULLDOZE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_DANCER,
    .lvl = 16,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN, MOVE_FIERY_DANCE, MOVE_STRENGTH_SAP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 0, 225),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_REGENERATOR,
    .lvl = 15,
    .species = SPECIES_TANGROWTH,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_GIGA_DRAIN, MOVE_POWER_WHIP, MOVE_ANCIENT_POWER, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_TRIAGE,
    .lvl = 16,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_BIG_ROOT,
    .moves = {MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_SYNTHESIS, MOVE_AROMATHERAPY}
    }
};
static const struct TrainerMon sParty_Spenser_badge567[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_NATURAL_CURE,
    .lvl = 16,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_TOXIC_SPIKES, MOVE_SPIKES, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .ability = ABILITY_IRON_BARBS,
    .lvl = 16,
    .species = SPECIES_FERROTHORN,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_CURSE, MOVE_POWER_WHIP, MOVE_GYRO_BALL, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_ROCK_HEAD,
    .lvl = 16,
    .species = SPECIES_TORTERRA,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_WOOD_HAMMER, MOVE_HEADLONG_RUSH, MOVE_HEAD_SMASH, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_DANCER,
    .lvl = 16,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN, MOVE_FIERY_DANCE, MOVE_STRENGTH_SAP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
    .ability = ABILITY_CONTRARY,
    .lvl = 16,
    .species = SPECIES_LURANTIS,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_SUPERPOWER, MOVE_LEAF_STORM, MOVE_LEECH_LIFE, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_CHLOROPHYLL,
    .lvl = 16,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_JUMP_KICK, MOVE_SAPPY_SEED, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}
    }
};
//Spenser_3: threshold 0
static const struct TrainerMon sParty_Spenser_badge8R[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_NATURAL_CURE,
    .lvl = 16,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_TOXIC_SPIKES, MOVE_SPIKES, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .ability = ABILITY_IRON_BARBS,
    .lvl = 16,
    .species = SPECIES_FERROTHORN,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_CURSE, MOVE_POWER_WHIP, MOVE_GYRO_BALL, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_CHLOROPHYLL,
    .lvl = 16,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_JUMP_KICK, MOVE_SAPPY_SEED, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_DANCER,
    .lvl = 16,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN, MOVE_FIERY_DANCE, MOVE_STRENGTH_SAP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
    .ability = ABILITY_CONTRARY,
    .lvl = 16,
    .species = SPECIES_LURANTIS,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_SUPERPOWER, MOVE_LEAF_STORM, MOVE_LEECH_LIFE, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_NATURAL_CURE,
    .lvl = 16,
    .species = SPECIES_SHAYMIN,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SEED_FLARE, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_EARTH_POWER}
    }
};

//MOSSDEEP GYM LEADER -- 3 trainers, 33 total
//Sabitha_1: threshold 1
static const struct TrainerMon sParty_Sabitha_badge1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 100, 100, 100),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SYNCHRONIZE,
    .lvl = 15,
    .species = SPECIES_RALTS,
    .heldItem = ITEM_PIXIE_PLATE,
    .moves = {MOVE_DRAINING_KISS, MOVE_CONFUSION, MOVE_THUNDER_WAVE, MOVE_PSYCHIC_TERRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .ability = ABILITY_SYNCHRONIZE,
    .lvl = 14,
    .species = SPECIES_NATU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_PSYSHOCK, MOVE_AIR_CUTTER, MOVE_REFLECT, MOVE_NIGHT_SHADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_BALTOY,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_DRILL_RUN, MOVE_ZEN_HEADBUTT, MOVE_ROCK_TOMB, MOVE_SAND_TOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_CHLOROPHYLL,
    .lvl = 15,
    .species = SPECIES_EXEGGCUTE,
    .heldItem = ITEM_BIG_ROOT,
    .moves = {MOVE_MEGA_DRAIN, MOVE_CONFUSION, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(200, 0, 0, 200, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_UNOWN,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_HIDDEN_POWER, MOVE_MYSTICAL_POWER, MOVE_COSMIC_POWER, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(100, 0, 200, 200, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_CHIMECHO,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_CALM_MIND, MOVE_YAWN, MOVE_SHADOW_BALL, MOVE_EXTRASENSORY}
    }
};
static const struct TrainerMon sParty_Sabitha_badge2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 0, 0, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .ability = ABILITY_MAGIC_BOUNCE,
    .lvl = 16,
    .species = SPECIES_XATU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_AIR_SLASH, MOVE_PSYSHOCK, MOVE_REFLECT, MOVE_NIGHT_SHADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 200, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_SYNCHRONIZE,
    .lvl = 16,
    .species = SPECIES_KIRLIA,
    .heldItem = ITEM_BIG_ROOT,
    .moves = {MOVE_CALM_MIND, MOVE_DRAINING_KISS, MOVE_PSYCHIC, MOVE_PSYCHIC_TERRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_PURE_POWER,
    .lvl = 15,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_BULLET_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_UNOWN,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_HIDDEN_POWER, MOVE_MYSTICAL_POWER, MOVE_COSMIC_POWER, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .ability = ABILITY_SHADOW_TAG,
    .lvl = 16,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SAFEGUARD, MOVE_DESTINY_BOND, MOVE_COUNTER, MOVE_MIRROR_COAT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(56, 0, 225, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_CHIMECHO,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_CALM_MIND, MOVE_YAWN, MOVE_SHADOW_BALL, MOVE_EXTRASENSORY}
    }
};
//Sabitha_2: threshold 4
static const struct TrainerMon sParty_Sabitha_badge34[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_BRONZONG,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_PSYWAVE, MOVE_GYRO_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_MAGIC_GUARD,
    .lvl = 16,
    .species = SPECIES_SIGILYPH,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_PSYCHO_SHIFT, MOVE_COSMIC_POWER, MOVE_STORED_POWER, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 0, 225),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_CONTRARY,
    .lvl = 16,
    .species = SPECIES_MALAMAR,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_REST, MOVE_SLEEP_TALK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_MOTOR_DRIVE,
    .lvl = 15,
    .species = SPECIES_RAICHU_ALOLAN,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_SURF, MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_NUZZLE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_TRACE,
    .lvl = 16,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAINING_KISS, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_SHARPNESS,
    .lvl = 16,
    .species = SPECIES_GALLADE,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_DRAIN_PUNCH, MOVE_BULK_UP}
    }
};
static const struct TrainerMon sParty_Sabitha_badge567[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_BRONZONG,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_PSYWAVE, MOVE_GYRO_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_MAGIC_GUARD,
    .lvl = 16,
    .species = SPECIES_SIGILYPH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_AIR_SLASH, MOVE_PSYSHOCK, MOVE_HEAT_WAVE, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_CONTRARY,
    .lvl = 16,
    .species = SPECIES_MALAMAR,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_PSYCHO_BOOST, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_MAGIC_GUARD,
    .lvl = 15,
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_PSYSHOCK, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_FOCUS_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_PURE_POWER,
    .lvl = 16,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_BULLET_PUNCH, MOVE_THUNDER_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_WYRDEER,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_PSYSHIELD_BASH, MOVE_BODY_SLAM, MOVE_HORN_LEECH, MOVE_MEGAHORN}
    }
};
//Sabitha_3: threshold 0
static const struct TrainerMon sParty_Sabitha_badge8R[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
    .ability = ABILITY_LEVITATE,
    .lvl = 16,
    .species = SPECIES_BRONZONG,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_PSYWAVE, MOVE_GYRO_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_MAGIC_GUARD,
    .lvl = 16,
    .species = SPECIES_SIGILYPH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_AIR_SLASH, MOVE_PSYSHOCK, MOVE_HEAT_WAVE, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .ability = ABILITY_CONTRARY,
    .lvl = 16,
    .species = SPECIES_MALAMAR,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_PSYCHO_BOOST, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_MAGIC_GUARD,
    .lvl = 15,
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_PSYSHOCK, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_FOCUS_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_WYRDEER,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_PSYSHIELD_BASH, MOVE_BODY_SLAM, MOVE_HORN_LEECH, MOVE_MEGAHORN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_COMPETITIVE,
    .lvl = 16,
    .species = SPECIES_ARTICUNO_GALARIAN,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FREEZING_GLARE, MOVE_CALM_MIND, MOVE_AIR_SLASH, MOVE_RECOVER}
    }
};

//SOOTOPOLIS GYM LEADER -- 3 trainers, 36 total
//Juan_1: threshold 1
static const struct TrainerMon sParty_Juan_badge1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .ability = ABILITY_THICK_FAT,
    .lvl = 15,
    .species = SPECIES_SPHEAL,
    .heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_ICE_BALL, MOVE_BRINE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_OBLIVIOUS,
    .lvl = 14,
    .species = SPECIES_BARBOACH,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_WATER_GUN, MOVE_MUD_SLAP, MOVE_REST, MOVE_SNORE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .ability = ABILITY_SHELL_ARMOR,
    .lvl = 20,
    .species = SPECIES_CLAMPERL,
    .heldItem = ITEM_DEEP_SEA_TOOTH,
    .moves = {MOVE_AURORA_BEAM, MOVE_CLAMP, MOVE_AQUA_RING, MOVE_BRINE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
    .ability = ABILITY_SHELL_ARMOR,
    .lvl = 16,
    .species = SPECIES_CLAMPERL,
    .heldItem = ITEM_DEEP_SEA_SCALE,
    .moves = {MOVE_AURORA_BEAM, MOVE_CLAMP, MOVE_AQUA_RING, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_ADAPTABILITY,
    .lvl = 16,
    .species = SPECIES_CORPHISH,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_AQUA_JET, MOVE_METAL_CLAW, MOVE_KNOCK_OFF, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(200, 0, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_SWIFT_SWIM,
    .lvl = 16,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_ICY_WIND, MOVE_TEARFUL_LOOK, MOVE_AQUA_JET}
    }
};
static const struct TrainerMon sParty_Juan_badge2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_ADAPTABILITY,
    .lvl = 16,
    .species = SPECIES_CORPHISH,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_AQUA_JET, MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_SNIPER,
    .lvl = 16,
    .species = SPECIES_SEADRA,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_AGILITY, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_FOCUS_ENERGY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 0, 0, 0, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_LIQUID_VOICE,
    .lvl = 15,
    .species = SPECIES_BRIONNE,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_HYPER_VOICE, MOVE_DRAINING_KISS, MOVE_AQUA_JET, MOVE_ICY_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_WATER_ABSORB,
    .lvl = 16,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_WACAN_BERRY,
    .moves = {MOVE_AIR_SLASH, MOVE_SURF, MOVE_ROOST, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 200, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SOUL_HEART,
    .lvl = 16,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_BRINE, MOVE_ICE_BEAM, MOVE_AQUA_JET, MOVE_TEARFUL_LOOK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_SWIFT_SWIM,
    .lvl = 16,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_ICE_PUNCH, MOVE_BRICK_BREAK, MOVE_WATERFALL, MOVE_POWER_UP_PUNCH}
    }
};
//Juan_1: threshold 4
static const struct TrainerMon sParty_Juan_badge34[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_ADAPTABILITY,
    .lvl = 16,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_AQUA_JET, MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 225, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_DRIZZLE,
    .lvl = 16,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_HYPER_VOICE, MOVE_SCALD, MOVE_TOXIC, MOVE_SLACK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 0, 225),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .ability = ABILITY_WATER_ABSORB,
    .lvl = 16,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_WACAN_BERRY,
    .moves = {MOVE_AIR_SLASH, MOVE_SURF, MOVE_ROOST, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_OBLIVIOUS,
    .lvl = 15,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_RINDO_BERRY,
    .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_SPARK, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_HUGE_POWER,
    .lvl = 16,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AQUA_JET, MOVE_WATERFALL, MOVE_PLAY_ROUGH, MOVE_BELLY_DRUM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_SWIFT_SWIM,
    .lvl = 16,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLIP_TURN, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_DRAGON_PULSE}
    }
};
static const struct TrainerMon sParty_Juan_badge567[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_NO_GUARD,
    .lvl = 16,
    .species = SPECIES_SWANNA,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .ability = ABILITY_DRIZZLE,
    .lvl = 16,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BOOMBURST, MOVE_SCALD, MOVE_TOXIC, MOVE_SLACK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ability = ABILITY_SWIFT_SWIM,
    .lvl = 16,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_FLIP_TURN, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ability = ABILITY_ADAPTABILITY,
    .lvl = 15,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_RINDO_BERRY,
    .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_WILD_CHARGE, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_COMPETITIVE,
    .lvl = 16,
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_PETAYA_BERRY,
    .moves = {MOVE_DRAINING_KISS, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAUGHTY),
    .ability = ABILITY_DEFIANT,
    .lvl = 16,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_LIECHI_BERRY,
    .moves = {MOVE_CRUNCH, MOVE_LIQUIDATION, MOVE_SUCKER_PUNCH, MOVE_SHELL_SMASH}
    }
};
//Juan_3: threshold 0
static const struct TrainerMon sParty_Juan_badge8R[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_SNIPER,
    .lvl = 16,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_ICE_BEAM, MOVE_SNIPE_SHOT, MOVE_DRACO_METEOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_DAZZLING,
    .lvl = 16,
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_DRAINING_KISS, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_INTIMIDATE,
    .lvl = 16,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_CRUNCH, MOVE_LIQUIDATION, MOVE_SUCKER_PUNCH, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ability = ABILITY_HUGE_POWER,
    .lvl = 16,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AQUA_JET, MOVE_WATERFALL, MOVE_PLAY_ROUGH, MOVE_BELLY_DRUM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_LIQUID_VOICE,
    .lvl = 16,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_BOOMBURST, MOVE_THUNDER, MOVE_BLIZZARD, MOVE_FREEZE_DRY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_BERSERK,
    .lvl = 16,
    .species = SPECIES_PRIMARINA,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_AQUA_JET, MOVE_DRAINING_KISS}
    }
};


//GYM TRAINERS (done)
//Gym Trainers do not use class-based EVs, so be careful

//RUSTBORO GYM TRAINERS -- 3 trainers, 39 total

//School Kid-M Tommy: threshold 2
//may double with Marc
static const struct TrainerMon sParty_Tommy[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
        .lvl = 14,
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_EVIOLITE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_TRI_ATTACK}
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
        .lvl = 14,
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_THUNDERBOLT, MOVE_TOXIC, MOVE_RECOVER, MOVE_TRI_ATTACK}
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
        .lvl = 14,
        .species = SPECIES_SANDSLASH_ALOLAN,
        .heldItem = ITEM_WIDE_LENS,
        .moves = {MOVE_IRON_HEAD, MOVE_TRIPLE_AXEL, MOVE_ICE_SHARD, MOVE_BRICK_BREAK}
    }
};
static const struct TrainerMon sParty_Tommy_easy[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 14,
        .species = SPECIES_PORYGON,
        .heldItem = ITEM_EVIOLITE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_TRI_ATTACK}
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 14,
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_TRI_ATTACK}
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 14,
        .species = SPECIES_SANDSHREW_ALOLAN,
        .heldItem = ITEM_WIDE_LENS,
        .moves = {MOVE_IRON_HEAD, MOVE_TRIPLE_AXEL, MOVE_ICE_SHARD, MOVE_BRICK_BREAK}
    }
};

//Hiker Marc: threshold 4
//may double with Tommy
static const struct TrainerMon sParty_Marc[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
        .lvl = 14,
        .species = SPECIES_BISHARP,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_DEFIANT,
        .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH}
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
        .lvl = 14,
        .species = SPECIES_MAWILE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .moves = {MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH}
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 0, 225),
        .lvl = 14,
        .species = SPECIES_AGGRON,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_STURDY,
        .moves = {MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_BODY_PRESS}
    }
};
static const struct TrainerMon sParty_Marc_easy[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 14,
        .species = SPECIES_PAWNIARD,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_DEFIANT,
        .moves = {MOVE_METAL_CLAW, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_STONE_EDGE}
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 14,
        .species = SPECIES_MAWILE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .moves = {MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH}
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 14,
        .species = SPECIES_LAIRON,
        .heldItem = ITEM_WIDE_LENS,
        .ability = ABILITY_STURDY,
        .moves = {MOVE_IRON_TAIL, MOVE_ROCK_TOMB, MOVE_BULLDOZE, MOVE_BRICK_BREAK}
    }
};

//Youngster Josh: threshold 3
static const struct TrainerMon sParty_Josh[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
        .lvl = 14,
        .species = SPECIES_TOGEDEMARU,
        .heldItem = ITEM_AIR_BALLOON,
        .moves = {MOVE_ZING_ZAP, MOVE_IRON_HEAD, MOVE_NUZZLE, MOVE_SPIKY_SHIELD}
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 0, 20, 20),
        .ev = TRAINER_PARTY_EVS(150, 150, 0, 0, 0, 150),
        .lvl = 14,
        .species = SPECIES_FERROTHORN,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, MOVE_CURSE}
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
        .lvl = 14,
        .species = SPECIES_DURANT,
        .heldItem = ITEM_WIDE_LENS,
        .ability = ABILITY_HUSTLE,
        .moves = {MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_HONE_CLAWS}
    }
};
static const struct TrainerMon sParty_Josh_easy[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 14,
        .species = SPECIES_TOGEDEMARU,
        .heldItem = ITEM_AIR_BALLOON,
        .moves = {MOVE_ZING_ZAP, MOVE_IRON_HEAD, MOVE_NUZZLE, MOVE_SPIKY_SHIELD}
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 0, 20, 20),
        .lvl = 14,
        .species = SPECIES_FERROSEED,
        .heldItem = ITEM_EVIOLITE,
        .moves = {MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_SEED_BOMB, MOVE_REVENGE}
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 14,
        .species = SPECIES_DURANT,
        .heldItem = ITEM_WIDE_LENS,
        .ability = ABILITY_HUSTLE,
        .moves = {MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_HONE_CLAWS}
    }
};


//DEWFORD GYM TRAINERS -- 6 trainers, 45 total

//Battle Girl Laura: threshold 3
static const struct TrainerMon sParty_Laura[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_SCRAGGY,
    .ability = ABILITY_SHED_SKIN,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_REST, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_SNARL, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_SCRAFTY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CRUNCH, MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_THUNDER_PUNCH}
    }
};
static const struct TrainerMon sParty_Laura_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SCRAGGY,
    .ability = ABILITY_SHED_SKIN,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_REST, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_SNARL, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SCRAGGY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CRUNCH, MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_THUNDER_PUNCH}
    }
};

//Lass Lilith: threshold 2
static const struct TrainerMon sParty_Lilith[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_RATICATE_ALOLAN,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_FACADE, MOVE_ENDEAVOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_PERSIAN_ALOLAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_FUR_COAT,
    .moves = {MOVE_POWER_GEM, MOVE_DARK_PULSE, MOVE_NASTY_PLOT, MOVE_THUNDERBOLT}
    }
};
static const struct TrainerMon sParty_Lilith_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_RATTATA_ALOLAN,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_FACADE, MOVE_ENDEAVOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MEOWTH_ALOLAN,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_FAKE_OUT, MOVE_ASSURANCE, MOVE_PLAY_ROUGH, MOVE_ICY_WIND}
    }
};

//Sailor Brenden: threshold 3
static const struct TrainerMon sParty_Brenden[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_MURKROW,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_TAILWIND, MOVE_ROOST, MOVE_TOXIC, MOVE_FOUL_PLAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_HONCHKROW,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_MOXIE,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_NIGHT_SLASH, MOVE_DUAL_WINGBEAT, MOVE_HEAT_WAVE}
    }
};
static const struct TrainerMon sParty_Brenden_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MURKROW,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_TAILWIND, MOVE_ROOST, MOVE_TOXIC, MOVE_FOUL_PLAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_HONCHKROW,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_MOXIE,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_NIGHT_SLASH, MOVE_DUAL_WINGBEAT, MOVE_HEAT_WAVE}
    }
};

//Psychic-M Cristian: threshold 2
static const struct TrainerMon sParty_Cristian[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_SPIRITOMB,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_HEX, MOVE_DARK_PULSE, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_MALAMAR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_HYPNOSIS, MOVE_PSYCHO_CUT}
    }
};
static const struct TrainerMon sParty_Cristian_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SPIRITOMB,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_HEX, MOVE_DARK_PULSE, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_INKAY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_HYPNOSIS, MOVE_PSYCHO_CUT}
    }
};

//Black Belt Takao: threshold 4
static const struct TrainerMon sParty_Takao[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_PANGORO,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_PARTING_SHOT, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_BISHARP,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_DEFIANT,
    .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH}
    }
};
static const struct TrainerMon sParty_Takao_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_PANCHAM,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_PARTING_SHOT, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_PAWNIARD,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_DEFIANT,
    .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH}
    }
};

//Lady Jocelyn: threshold 3
static const struct TrainerMon sParty_Jocelyn[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 225, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_UMBREON,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_TOXIC, MOVE_FOUL_PLAY, MOVE_WISH, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_ZOROARK,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_DARK_PULSE, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FLAMETHROWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP}
    }
};
static const struct TrainerMon sParty_Jocelyn_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_UMBREON,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_TOXIC, MOVE_FOUL_PLAY, MOVE_WISH, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_ZORUA,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_DARK_PULSE, MOVE_FOUL_PLAY, MOVE_U_TURN, MOVE_EXTRASENSORY}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP}
    }
};


//MAUVILLE GYM TRAINERS -- 5 trainers, 50 total

//Guitarist Shawn: threshold 4
static const struct TrainerMon sParty_Shawn[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_AURORA_BEAM, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_BOOMBURST, MOVE_FIRE_BLAST, MOVE_SURF, MOVE_ICE_BEAM}
    }
};
static const struct TrainerMon sParty_Shawn_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_SYNCHRONOISE, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_LOUDRED,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_SURF, MOVE_ICE_BEAM}
    }
};

//Battle Girl Vivian: threshold 4
//may double with Kirk
static const struct TrainerMon sParty_Vivian[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_GRASS_KNOT, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT, MOVE_NUZZLE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_ORICORIO_POM_POM,
    .heldItem = ITEM_CHARTI_BERRY,
    .moves = {MOVE_REVELATION_DANCE, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_ELECTIVIRE,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_CROSS_CHOP, MOVE_TRAILBLAZE}
    }
};
static const struct TrainerMon sParty_Vivian_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT, MOVE_NUZZLE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_ORICORIO_POM_POM,
    .heldItem = ITEM_CHARTI_BERRY,
    .moves = {MOVE_REVELATION_DANCE, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_ELEKID,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_DETECT, MOVE_CROSS_CHOP, MOVE_BULK_UP}
    }
};

//Guitarist Kirk: threshold 4
//may double with Vivian
static const struct TrainerMon sParty_Kirk[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_PUNCH, MOVE_CHARM, MOVE_NUZZLE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 225, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_STUNFISK,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_EARTH_POWER, MOVE_THUNDER, MOVE_MUD_SLAP, MOVE_MUDDY_WATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 225, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_ROTOM_FAN,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_DISCHARGE, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP}
    }
};
static const struct TrainerMon sParty_Kirk_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_PUNCH, MOVE_CHARM, MOVE_NUZZLE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_STUNFISK,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_EARTH_POWER, MOVE_THUNDER, MOVE_MUD_SLAP, MOVE_MUDDY_WATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_ROTOM,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_DISCHARGE, MOVE_DOUBLE_TEAM, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP}
    }
};

//Youngster Ben: threshold 4
static const struct TrainerMon sParty_Ben[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
    .lvl = 14,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_LIGHT_BALL,
    .moves = {MOVE_BODY_SLAM, MOVE_IRON_TAIL, MOVE_TRAILBLAZE, MOVE_THUNDER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 0, 225),
    .lvl = 14,
    .species = SPECIES_TOGEDEMARU,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_FELL_STINGER, MOVE_IRON_HEAD, MOVE_NUZZLE, MOVE_ZING_ZAP}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 225, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_PACHIRISU,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPER_FANG, MOVE_NUZZLE, MOVE_DISCHARGE, MOVE_GRASS_KNOT}
    }
};
static const struct TrainerMon sParty_Ben_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_LIGHT_BALL,
    .moves = {MOVE_SLAM, MOVE_IRON_TAIL, MOVE_QUICK_ATTACK, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_TOGEDEMARU,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_SPIKY_SHIELD, MOVE_IRON_HEAD, MOVE_NUZZLE, MOVE_WILD_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_PACHIRISU,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPER_FANG, MOVE_NUZZLE, MOVE_DISCHARGE, MOVE_GRASS_KNOT}
    }
};

//Bug Maniac Angelo: threshold 3
static const struct TrainerMon sParty_Angelo[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_PINCURCHIN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_ELECTRIC_SURGE,
    .moves = {MOVE_RISING_VOLTAGE, MOVE_BUBBLE_BEAM, MOVE_TOXIC_SPIKES, MOVE_HEX}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_TAIL_GLOW, MOVE_BATON_PASS, MOVE_THUNDERBOLT, MOVE_SILVER_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_GALVANTULA,
    .heldItem = ITEM_SILVER_POWDER,
    .ability = ABILITY_COMPOUND_EYES,
    .moves = {MOVE_BUG_BUZZ, MOVE_THUNDER, MOVE_STICKY_WEB, MOVE_GIGA_DRAIN}
    }
};
static const struct TrainerMon sParty_Angelo_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_PINCURCHIN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_ELECTRIC_SURGE,
    .moves = {MOVE_RISING_VOLTAGE, MOVE_BUBBLE_BEAM, MOVE_TOXIC_SPIKES, MOVE_HEX}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_TAIL_GLOW, MOVE_BATON_PASS, MOVE_THUNDERBOLT, MOVE_SILVER_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_JOLTIK,
    .heldItem = ITEM_SILVER_POWDER,
    .ability = ABILITY_COMPOUND_EYES,
    .moves = {MOVE_BUG_BUZZ, MOVE_THUNDER, MOVE_SUCKER_PUNCH, MOVE_GIGA_DRAIN}
    }
};


//LAVARIDGE GYM TRAINERS -- 8 trainers, 58 total

//Kindler Jeff (B1F): threshold 3
static const struct TrainerMon sParty_Jeff[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_ARCANINE_HISUIAN,
    .heldItem = ITEM_ROCK_GEM,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_WILD_CHARGE, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_TYPHLOSION,
    .heldItem = ITEM_BLUNDER_POLICY,
    .ability = ABILITY_BLAZE,
    .moves = {MOVE_INFERNO, MOVE_FIRE_BLAST, MOVE_DIG, MOVE_BODY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_MAROWAK_ALOLAN,
    .heldItem = ITEM_THICK_CLUB,
    .ability = ABILITY_CURSED_BODY,
    .moves = {MOVE_SHADOW_BONE, MOVE_FLARE_BLITZ, MOVE_BONEMERANG, MOVE_IRON_HEAD}
    }
};
static const struct TrainerMon sParty_Jeff_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_GROWLITHE_HISUIAN,
    .heldItem = ITEM_ROCK_GEM,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_WILD_CHARGE, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_QUILAVA,
    .heldItem = ITEM_BLUNDER_POLICY,
    .ability = ABILITY_BLAZE,
    .moves = {MOVE_INFERNO, MOVE_FIRE_BLAST, MOVE_DIG, MOVE_BODY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_CUBONE,
    .heldItem = ITEM_THICK_CLUB,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH, MOVE_BONEMERANG, MOVE_IRON_HEAD}
    }
};

//Kindler Cole (1F): threshold 5
//may double with Gerald
static const struct TrainerMon sParty_Cole[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 225, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_LAVA_PLUME, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_CLEAR_SMOG}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_BUG_BUZZ, MOVE_HEAT_WAVE, MOVE_QUIVER_DANCE, MOVE_MORNING_SUN}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_GALE_WINGS,
    .moves = {MOVE_ACROBATICS, MOVE_OVERHEAT, MOVE_ROOST, MOVE_STEEL_WING}
    }
};
static const struct TrainerMon sParty_Cole_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_WHITE_SMOKE,
    .moves = {MOVE_LAVA_PLUME, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_CLEAR_SMOG}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_LARVESTA,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_SWARM,
    .moves = {MOVE_LEECH_LIFE, MOVE_FLARE_BLITZ, MOVE_LUNGE, MOVE_MORNING_SUN}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_FLETCHINDER,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_GALE_WINGS,
    .moves = {MOVE_ACROBATICS, MOVE_OVERHEAT, MOVE_ROOST, MOVE_STEEL_WING}
    }
};

//Cooltrainer Gerald (1F): threshold 3
//may double with Cole
static const struct TrainerMon sParty_Gerald[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_WEATHER_BALL, MOVE_ICE_BEAM, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_ROTOM_HEAT,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_OVERHEAT, MOVE_VOLT_SWITCH, MOVE_DISCHARGE, MOVE_NASTY_PLOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_KECLEON,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_PROTEAN,
    .moves = {MOVE_FIRE_BLAST, MOVE_DRAIN_PUNCH, MOVE_SHADOW_CLAW, MOVE_SOLAR_BEAM}
    }
};
static const struct TrainerMon sParty_Gerald_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_WEATHER_BALL, MOVE_ICE_BEAM, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_ROTOM_HEAT,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_OVERHEAT, MOVE_VOLT_SWITCH, MOVE_DISCHARGE, MOVE_NASTY_PLOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_KECLEON,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_PROTEAN,
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAIN_PUNCH, MOVE_SHADOW_CLAW, MOVE_SOLAR_BEAM}
    }
};

//Kindler Axle (1F): threshold 3
static const struct TrainerMon sParty_Axle[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_DARMANITAN_GALARIAN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_ZEN_MODE,
    .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_ICICLE_CRASH, MOVE_SUPERPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_DARMANITAN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_FIRE_PUNCH, MOVE_ROCK_SLIDE, MOVE_BELLY_DRUM, MOVE_SUPERPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 225, 0, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_HEATMOR,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_WHITE_SMOKE,
    .moves = {MOVE_FIRE_LASH, MOVE_BUG_BITE, MOVE_OVERHEAT, MOVE_THUNDER_PUNCH}
    }
};
static const struct TrainerMon sParty_Axle_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_DARUMAKA,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_FIRE_PUNCH, MOVE_ROCK_SLIDE, MOVE_BELLY_DRUM, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_DARUMAKA,
    .heldItem = ITEM_BLUNDER_POLICY,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT, MOVE_SUPERPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_HEATMOR,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_WHITE_SMOKE,
    .moves = {MOVE_FIRE_LASH, MOVE_BUG_BITE, MOVE_OVERHEAT, MOVE_THUNDER_PUNCH}
    }
};

//Battle Girl Danielle (1F): threshold 3
static const struct TrainerMon sParty_Danielle[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_FIRE_GEM,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_BRAVE_BIRD, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_VACUUM_WAVE, MOVE_FOCUS_BLAST, MOVE_FLAMETHROWER, MOVE_GRASS_KNOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_EMBOAR,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_FLAME_CHARGE, MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_WORK_UP}
    }
};
static const struct TrainerMon sParty_Danielle_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_FIRE_GEM,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_BLAZE_KICK, MOVE_OVERHEAT, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MONFERNO,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_VACUUM_WAVE, MOVE_NASTY_PLOT, MOVE_FLAMETHROWER, MOVE_GRASS_KNOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_PIGNITE,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_FLAME_CHARGE, MOVE_OVERHEAT, MOVE_WILD_CHARGE, MOVE_WORK_UP}
    }
};

//Kindler Keegan (B1F): threshold 3
static const struct TrainerMon sParty_Keegan[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_FIRE_GEM,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_EXTREME_SPEED, MOVE_OVERHEAT, MOVE_THUNDER_FANG, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_SIMISEAR,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_BLAZE,
    .moves = {MOVE_FLAMETHROWER, MOVE_NASTY_PLOT, MOVE_FIRE_SPIN, MOVE_GRASS_KNOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_FLARE_BLITZ, MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_WISH}
    }
};
static const struct TrainerMon sParty_Keegan_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_REVERSAL, MOVE_FLAMETHROWER, MOVE_THUNDER_FANG, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SIMISEAR,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_BLAZE,
    .moves = {MOVE_FLAMETHROWER, MOVE_NASTY_PLOT, MOVE_FIRE_SPIN, MOVE_GRASS_KNOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_FLARE_BLITZ, MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_WISH}
    }
};

//Kindler Jace (B1F): threshold 3
//may double with Eli
static const struct TrainerMon sParty_Jace[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_OVERHEAT, MOVE_WILD_CHARGE, MOVE_EXTREME_SPEED}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_SOLAR_BEAM, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_HEAT_WAVE}
    }
};
static const struct TrainerMon sParty_Jace_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_OVERHEAT, MOVE_WILD_CHARGE, MOVE_MORNING_SUN}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_VULPIX,
    .heldItem = ITEM_BLUNDER_POLICY,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_SOLAR_BEAM, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_INFERNO}
    }
};

//Hiker Eli (B1F): threshold 2
//may double with Jace
static const struct TrainerMon sParty_Eli[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_LAVA_PLUME, MOVE_ANCIENT_POWER, MOVE_RECOVER, MOVE_CLEAR_SMOG}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_ROCK_SLIDE, MOVE_HEAVY_SLAM}
    }
};
static const struct TrainerMon sParty_Eli_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SLUGMA,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_LAVA_PLUME, MOVE_ANCIENT_POWER, MOVE_RECOVER, MOVE_CLEAR_SMOG}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_NUMEL,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_OWN_TEMPO,
    .moves = {MOVE_LAVA_PLUME, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_OVERHEAT}
    }
};


//PETALBURG GYM TRAINERS -- 7 trainers, 65 total

//Cooltrainer-F Mary (Technician Room): threshold 4
static const struct TrainerMon sParty_Mary[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 14,
    .species = SPECIES_PERSIAN,
    .heldItem = ITEM_NORMAL_GEM,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_FAKE_OUT, MOVE_COVET, MOVE_BITE, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 14,
    .species = SPECIES_CINCCINO,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 14,
    .species = SPECIES_AMBIPOM,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_TAIL_SLAP, MOVE_ARM_THRUST, MOVE_FAKE_OUT, MOVE_KNOCK_OFF}
    }
};
static const struct TrainerMon sParty_Mary_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MEOWTH,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_FAKE_OUT, MOVE_METAL_CLAW, MOVE_SMACK_DOWN, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MINCCINO,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_AIPOM,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_DOUBLE_HIT, MOVE_ARM_THRUST, MOVE_FAKE_OUT, MOVE_KNOCK_OFF}
    }
};

//Cooltrainer-M Randall (Speed Room): threshold 3
static const struct TrainerMon sParty_Randall[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 14,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_QUICK_ATTACK, MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .lvl = 14,
    .species = SPECIES_ZOROARK_HISUIAN,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_BITTER_MALICE, MOVE_HYPER_VOICE, MOVE_BURNING_JEALOUSY, MOVE_LOW_SWEEP}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 14,
    .species = SPECIES_LOPUNNY,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_LIMBER,
    .moves = {MOVE_RETALIATE, MOVE_HIGH_JUMP_KICK, MOVE_ICE_PUNCH, MOVE_POWER_UP_PUNCH}
    }
};
static const struct TrainerMon sParty_Randall_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_QUICK_ATTACK, MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_ZORUA_HISUIAN,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_BITTER_MALICE, MOVE_HYPER_VOICE, MOVE_BURNING_JEALOUSY, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_BUNEARY,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_LIMBER,
    .moves = {MOVE_RETALIATE, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_POWER_UP_PUNCH}
    }
};

//Cooltrainer-M Parker (Trickery Room): threshold 3
static const struct TrainerMon sParty_Parker[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 14,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_SUPERPOWER, MOVE_FACADE, MOVE_PSYCHO_BOOST, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 14,
    .species = SPECIES_DUDUNSPARCE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_BODY_SLAM, MOVE_COIL, MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE}
    }
};
static const struct TrainerMon sParty_Parker_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_SUPERPOWER, MOVE_FACADE, MOVE_PSYCHO_BOOST, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_DUNSPARCE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_BODY_SLAM, MOVE_HEADBUTT, MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE}
    }
};

//Cooltrainer-F Alexia (Defense Room): threshold 2
static const struct TrainerMon sParty_Alexia[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .lvl = 14,
    .species = SPECIES_FURFROU_NATURAL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_FUR_COAT,
    .moves = {MOVE_COTTON_GUARD, MOVE_CHARM, MOVE_SUBSTITUTE, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .lvl = 14,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_AGILITY}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .lvl = 14,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_TRACE,
    .moves = {MOVE_RECOVER, MOVE_TOXIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM}
    }
};
static const struct TrainerMon sParty_Alexia_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_FURFROU_NATURAL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_FUR_COAT,
    .moves = {MOVE_COTTON_GUARD, MOVE_CHARM, MOVE_SUBSTITUTE, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_AGILITY}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_PORYGON,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_TRACE,
    .moves = {MOVE_RECOVER, MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM}
    }
};

//Cooltrainer-M George (Recovery Room) : threshold 2
static const struct TrainerMon sParty_George[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 14,
    .species = SPECIES_MILTANK,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_MILK_DRINK, MOVE_ZEN_HEADBUTT, MOVE_HIGH_HORSEPOWER, MOVE_HEAL_BELL}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 14,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_REST, MOVE_CURSE, MOVE_SLEEP_TALK, MOVE_BODY_SLAM}
    }
};
static const struct TrainerMon sParty_George_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MILTANK,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_MILK_DRINK, MOVE_ZEN_HEADBUTT, MOVE_HIGH_HORSEPOWER, MOVE_HEAL_BELL}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MUNCHLAX,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_REST, MOVE_CURSE, MOVE_SLEEP_TALK, MOVE_BODY_SLAM}
    }
};

//Cooltrainer-F Jody (Guts Room): threshold 4
static const struct TrainerMon sParty_Jody[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 14,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_TOXIC_BOOST,
    .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_SHADOW_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 14,
    .species = SPECIES_URSALUNA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_FACADE, MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_STONE_EDGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 14,
    .species = SPECIES_RATICATE,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_SUCKER_PUNCH, MOVE_ENDEAVOR}
    }
};
static const struct TrainerMon sParty_Jody_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_TOXIC_BOOST,
    .moves = {MOVE_LOW_SWEEP, MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_SHADOW_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_RATTATA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_SUCKER_PUNCH, MOVE_ENDEAVOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SQUAWKABILLY_GREEN_PLUMAGE,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_REVERSAL}
    }
};

//Cooltrainer-M Berke (Power Room): threshold 3
static const struct TrainerMon sParty_Berke[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 14,
    .species = SPECIES_DIGGERSBY,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_EARTHQUAKE, MOVE_SLASH, MOVE_QUICK_ATTACK, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 14,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_GIGA_IMPACT, MOVE_LASH_OUT, MOVE_COUNTER, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 14,
    .species = SPECIES_BOUFFALANT,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_HEAD_CHARGE, MOVE_MEGAHORN, MOVE_ROCK_SLIDE, MOVE_WILD_CHARGE}
    }
};
static const struct TrainerMon sParty_Berke_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 14,
    .species = SPECIES_BUNNELBY,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_BULLDOZE, MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 14,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_AQUA_JET, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_WATERFALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_BOUFFALANT,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_HEAD_CHARGE, MOVE_MEGAHORN, MOVE_ROCK_SLIDE, MOVE_WILD_CHARGE}
    }
};


//FORTREE GYM TRAINERS -- 6 trainers, 71 total

//Ninja Boy Humberto: threshold 3
static const struct TrainerMon sParty_Humberto[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 0, 225),
    .lvl = 14,
    .species = SPECIES_LURANTIS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_KNOCK_OFF, MOVE_LEAF_STORM, MOVE_SYNTHESIS, MOVE_SUPERPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GROWTH, MOVE_SOLAR_BLADE, MOVE_SYNTHESIS, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_LEAVANNY,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_OVERCOAT,
    .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_SHADOW_CLAW}
    }
};
static const struct TrainerMon sParty_Humberto_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SEWADDLE,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_OVERCOAT,
    .moves = {MOVE_STICKY_WEB, MOVE_RAZOR_LEAF, MOVE_BUG_BITE, MOVE_ELECTROWEB}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_NUZLEAF,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GROWTH, MOVE_SOLAR_BLADE, MOVE_SYNTHESIS, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_FOMANTIS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_BUG_BITE, MOVE_LEAF_STORM, MOVE_SYNTHESIS, MOVE_SUPERPOWER}
    }
};

//Camper Jared: threshold 2
//may double with Ashley
static const struct TrainerMon sParty_Jared[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .lvl = 14,
    .species = SPECIES_GLOOM,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_SLEEP_POWDER, MOVE_STRENGTH_SAP, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_GLOOM,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_STENCH,
    .moves = {MOVE_GRASSY_TERRAIN, MOVE_MOONBLAST, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_VILEPLUME,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_EFFECT_SPORE,
    .moves = {MOVE_MOONLIGHT, MOVE_MOONBLAST, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB}
    }
};
static const struct TrainerMon sParty_Jared_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_ODDISH,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_SLEEP_POWDER, MOVE_STRENGTH_SAP, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_GLOOM,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_STENCH,
    .moves = {MOVE_GRASSY_TERRAIN, MOVE_MOONBLAST, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_VILEPLUME,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_EFFECT_SPORE,
    .moves = {MOVE_MOONLIGHT, MOVE_MOONBLAST, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB}
    }
};

//Picnicker Ashley: threshold 2
//may double with Jared
static const struct TrainerMon sParty_Ashley[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN, MOVE_FIERY_DANCE, MOVE_STRENGTH_SAP}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_LILLIGANT,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN, MOVE_POLLEN_PUFF, MOVE_SLEEP_POWDER}
    }
};
static const struct TrainerMon sParty_Ashley_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_PETILIL,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_LEAF_STORM, MOVE_LEECH_SEED, MOVE_POLLEN_PUFF, MOVE_SLEEP_POWDER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_MEGA_DRAIN, MOVE_FIRE_SPIN, MOVE_MORNING_SUN}
    }
};

//Camper Flint: threshold 3
//may double with Edwina
static const struct TrainerMon sParty_Flint[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_ELECTRODE_HISUIAN,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_AFTERMATH,
    .moves = {MOVE_THUNDERBOLT, MOVE_LEAF_STORM, MOVE_VOLT_SWITCH, MOVE_FOUL_PLAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_EXEGGUTOR_ALOLAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_HARVEST,
    .moves = {MOVE_DRACO_METEOR, MOVE_LEAF_STORM, MOVE_PSYCH_UP, MOVE_EARTHQUAKE}
    }
};
static const struct TrainerMon sParty_Flint_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_VOLTORB_HISUIAN,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_AFTERMATH,
    .moves = {MOVE_THUNDERBOLT, MOVE_LEAF_STORM, MOVE_VOLT_SWITCH, MOVE_FOUL_PLAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_HARVEST,
    .moves = {MOVE_MEGA_DRAIN, MOVE_PSYSHOCK, MOVE_HYPNOSIS, MOVE_LOW_KICK}
    }
};

//Aroma Lady Edwina: threshold 3
//TODO rename to Edwina
//may double with Flint
static const struct TrainerMon sParty_Edwina[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_WHIMSICOTT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_KNOCK_OFF, MOVE_MOONBLAST, MOVE_LEECH_SEED, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
    .lvl = 14,
    .species = SPECIES_TANGROWTH,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_KNOCK_OFF, MOVE_LEAF_STORM, MOVE_SUPERPOWER, MOVE_SYNTHESIS}
    }
};
static const struct TrainerMon sParty_Edwina_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_COTTONEE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_GIGA_DRAIN, MOVE_DAZZLING_GLEAM, MOVE_LEECH_SEED, MOVE_TICKLE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_TANGELA,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_KNOCK_OFF, MOVE_LEAF_STORM, MOVE_SYNTHESIS, MOVE_STUN_SPORE}
    }
};

//Aroma Lady Cecilia: threshold 2
//TODO rename to Cecilia
static const struct TrainerMon sParty_Cecilia[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_SYNTHESIS, MOVE_GROWTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_LEAF_GUARD,
    .moves = {MOVE_LEAF_BLADE, MOVE_WISH, MOVE_SWORDS_DANCE, MOVE_X_SCISSOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_TSAREENA,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_QUEENLY_MAJESTY,
    .moves = {MOVE_POWER_WHIP, MOVE_TRIPLE_AXEL, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN}
    }
};
static const struct TrainerMon sParty_Cecilia_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_MORNING_SUN, MOVE_FIRE_SPIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_LEAF_GUARD,
    .moves = {MOVE_LEAF_BLADE, MOVE_WISH, MOVE_PROTECT, MOVE_X_SCISSOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_STEENEE,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_OBLIVIOUS,
    .moves = {MOVE_LEAF_STORM, MOVE_TRIPLE_AXEL, MOVE_LOW_SWEEP, MOVE_ACUPRESSURE}
    }
};


//MOSSDEEP GYM TRAINERS -- 12 trainers, 83 total

//Psychic-M Preston (entrance): threshold 4
//may double with Maura
static const struct TrainerMon sParty_Preston[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 0, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_BEHEEYEM,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_ANALYTIC,
    .moves = {MOVE_PSYCHIC, MOVE_METEOR_BEAM, MOVE_RECOVER, MOVE_FLASH_CANNON}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_XATU,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_REFLECT, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_OWN_TEMPO,
    .moves = {MOVE_SLACK_OFF, MOVE_FUTURE_SIGHT, MOVE_FLAMETHROWER, MOVE_SURF}
    }
};
static const struct TrainerMon sParty_Preston_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 0, 20, 20),
    .lvl = 14,
    .species = SPECIES_ELGYEM,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_ANALYTIC,
    .moves = {MOVE_PSYSHOCK, MOVE_METEOR_BEAM, MOVE_RECOVER, MOVE_FLASH_CANNON}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_NATU,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_THUNDER_WAVE, MOVE_NIGHT_SHADE, MOVE_REFLECT, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_OWN_TEMPO,
    .moves = {MOVE_SLACK_OFF, MOVE_FUTURE_SIGHT, MOVE_FLAMETHROWER, MOVE_WATER_PULSE}
    }
};

//Psychic-F Maura (entrance): threshold 3
//may double with Preston
static const struct TrainerMon sParty_Maura[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_CALM_MIND, MOVE_PSYSHOCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_ORICORIO_PAU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_REVELATION_DANCE, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE}
    }
};
static const struct TrainerMon sParty_Maura_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_PSYBEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_FUTURE_SIGHT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_ORICORIO_PAU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_REVELATION_DANCE, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE}
    }
};

//Psychic-M Blake (yellow room): threshold 3
//may double with Samantha
static const struct TrainerMon sParty_Blake[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_MEOWSTIC, //male
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_PSYSHOCK, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_FOCUS_BLAST}
    }
};
static const struct TrainerMon sParty_Blake_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MEOWSTIC, //male
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SOLOSIS,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_PSYSHOCK, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_SHADOW_BALL}
    }
};

//Psychic-F Samantha (yellow room): threshold 3
//may double with Blake
static const struct TrainerMon sParty_Samantha[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_MEOWSTIC_FEMALE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_COMPETITIVE,
    .moves = {MOVE_THUNDERBOLT, MOVE_DARK_PULSE, MOVE_EXTRASENSORY, MOVE_SIGNAL_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_HATTERENE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_MOONBLAST, MOVE_LIFE_DEW, MOVE_PSYCHIC, MOVE_MYSTICAL_FIRE}
    }
};
static const struct TrainerMon sParty_Samantha_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MEOWSTIC_FEMALE,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_COMPETITIVE,
    .moves = {MOVE_CHARGE_BEAM, MOVE_SHADOW_BALL, MOVE_EXTRASENSORY, MOVE_SIGNAL_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_HATENNA,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_LIFE_DEW, MOVE_PSYCHIC, MOVE_MYSTICAL_FIRE}
    }
};

//Gentleman Nate (blue/red room): threshold 3
//may double with Virgil
static const struct TrainerMon sParty_Nate[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 150, 150, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_GRUMPIG,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_PAYBACK, MOVE_BOUNCE, MOVE_POWER_GEM, MOVE_DRAIN_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 0, 150, 150, 0),
    .lvl = 14,
    .species = SPECIES_SIGILYPH,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_PSYCHO_SHIFT, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_HEAT_WAVE}
    }
};
static const struct TrainerMon sParty_Nate_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SPOINK,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_PSYBEAM, MOVE_BOUNCE, MOVE_POWER_GEM, MOVE_DRAIN_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SIGILYPH,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_PSYCHO_SHIFT, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_HEAT_WAVE}
    }
};

//Psychic-M Virgil (blue/red room): threshold 3
//may double with Nate or Sylvia
static const struct TrainerMon sParty_Virgil[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 0, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_ORANGURU,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_INSTRUCT, MOVE_YAWN, MOVE_PSYCHIC, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_FIGHTING_GEM,
    .ability = ABILITY_PURE_POWER,
    .moves = {MOVE_FAKE_OUT, MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_HELPING_HAND}
    }
};
static const struct TrainerMon sParty_Virgil_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 0, 20, 20),
    .lvl = 14,
    .species = SPECIES_ORANGURU,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_INSTRUCT, MOVE_YAWN, MOVE_PSYCHIC, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_FIGHTING_GEM,
    .ability = ABILITY_PURE_POWER,
    .moves = {MOVE_FAKE_OUT, MOVE_FORCE_PALM, MOVE_ZEN_HEADBUTT, MOVE_HELPING_HAND}
    }
};

//Hex Maniac Sylvia (blue/red room): threshold 3
//may double with Virgil or Hannah
static const struct TrainerMon sParty_Sylvia[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_MR_RIME,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SCREEN_CLEANER,
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_FREEZE_DRY, MOVE_ICY_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_BAD_DREAMS,
    .moves = {MOVE_DARK_VOID, MOVE_DREAM_EATER, MOVE_NIGHTMARE, MOVE_KNOCK_OFF}
    }
};
static const struct TrainerMon sParty_Sylvia_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MIME_JR,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_FILTER,
    .moves = {MOVE_PSYBEAM, MOVE_DAZZLING_GLEAM, MOVE_SUCKER_PUNCH, MOVE_ICY_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_DROWZEE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_BAD_DREAMS,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_NIGHTMARE, MOVE_KNOCK_OFF}
    }
};

//Psychic-F Hannah (blue/red room): threshold 3
//may double with Sylvia
static const struct TrainerMon sParty_Hannah[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_CHIMECHO,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_CALM_MIND, MOVE_YAWN, MOVE_SHADOW_BALL, MOVE_EXTRASENSORY}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_FARIGIRAF,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_ARMOR_TAIL,
    .moves = {MOVE_AGILITY, MOVE_NASTY_PLOT, MOVE_HYPER_VOICE, MOVE_PSYCHIC}
    }
};
static const struct TrainerMon sParty_Hannah_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_CHINGLING,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_COSMIC_POWER, MOVE_RECOVER, MOVE_SHADOW_BALL, MOVE_STORED_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_COLBUR_BERRY,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_AGILITY, MOVE_NASTY_PLOT, MOVE_HYPER_VOICE, MOVE_PSYBEAM}
    }
};

//Gentleman Clifford (purple room): threshold 4
//may double with Kathleen or Macey
static const struct TrainerMon sParty_Clifford[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_ORICORIO_SENSU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_REVELATION_DANCE, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 14,
    .species = SPECIES_ESPEON, //EspyJumpy my beloved <3
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_BATON_PASS}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 0, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_BRONZONG,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_FLASH_CANNON, MOVE_PSYSHOCK, MOVE_GYRO_BALL, MOVE_EARTHQUAKE}
    }
};
static const struct TrainerMon sParty_Clifford_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_ORICORIO_SENSU,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_REVELATION_DANCE, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_ESPEON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SYNCHRONIZE,
    .moves = {MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_PSYBEAM, MOVE_MORNING_SUN}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 0, 20, 20),
    .lvl = 14,
    .species = SPECIES_BRONZOR,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_FLASH_CANNON, MOVE_EXTRASENSORY, MOVE_GYRO_BALL, MOVE_EARTHQUAKE}
    }
};

//Hex Maniac Kathleen (purple room): threshold 4
//may double with Clifford or Nikolai
static const struct TrainerMon sParty_Kathleen[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_MUSHARNA,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_STORED_POWER, MOVE_HYPNOSIS, MOVE_AMNESIA, MOVE_BARRIER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SAFEGUARD, MOVE_DESTINY_BOND, MOVE_COUNTER, MOVE_MIRROR_COAT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_TRACE,
    .moves = {MOVE_PSYCHIC, MOVE_WILL_O_WISP, MOVE_LIFE_DEW, MOVE_DRAINING_KISS}
    }
};
static const struct TrainerMon sParty_Kathleen_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MUNNA,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_STORED_POWER, MOVE_HYPNOSIS, MOVE_AMNESIA, MOVE_BARRIER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_WYNAUT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SAFEGUARD, MOVE_DESTINY_BOND, MOVE_COUNTER, MOVE_MIRROR_COAT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_KIRLIA,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_TRACE,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_WILL_O_WISP, MOVE_CHARGE_BEAM, MOVE_DRAINING_KISS}
    }
};

//Psychic-M Nikolai (purple room): threshold 4
//may double with Kathleen
//renamed from Nicholas to avoid collision with Dragon Tamer
static const struct TrainerMon sParty_Nikolai[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_SWOOBAT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SIMPLE,
    .moves = {MOVE_CALM_MIND, MOVE_SIGNAL_BEAM, MOVE_STORED_POWER, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHADOW_TAG,
    .moves = {MOVE_DARK_PULSE, MOVE_MIRROR_COAT, MOVE_TICKLE, MOVE_PSYSHOCK}
    }
};
static const struct TrainerMon sParty_Nikolai_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SWOOBAT,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_SIMPLE,
    .moves = {MOVE_CALM_MIND, MOVE_SIGNAL_BEAM, MOVE_STORED_POWER, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_GOTHORITA,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_SHADOW_TAG,
    .moves = {MOVE_DARK_PULSE, MOVE_MIRROR_COAT, MOVE_TICKLE, MOVE_PSYSHOCK}
    }
};

//Psychic-F Macey (purple room): threshold 4
//may double with Clifford, in which case should truncate to first 3 mons
static const struct TrainerMon sParty_Macey[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_XATU,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_THUNDER_WAVE, MOVE_NIGHT_SHADE, MOVE_REFLECT, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), //dark
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .lvl = 14,
    .species = SPECIES_UNOWN,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 30, 30, 30, 30, 30), //fighting
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .lvl = 14,
    .species = SPECIES_UNOWN,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 31, 30), //fire
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .lvl = 14,
    .species = SPECIES_UNOWN,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 31, 30, 31), //bug
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .lvl = 14,
    .species = SPECIES_UNOWN,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SAFEGUARD, MOVE_DESTINY_BOND, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};
static const struct TrainerMon sParty_Macey_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_NATU,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_THUNDER_WAVE, MOVE_NIGHT_SHADE, MOVE_REFLECT, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), //dark
    .lvl = 14,
    .species = SPECIES_UNOWN,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 30, 30, 30, 30, 30), //fighting
    .lvl = 14,
    .species = SPECIES_UNOWN,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 31, 30), //fire
    .lvl = 14,
    .species = SPECIES_UNOWN,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 31, 30, 31), //bug
    .lvl = 14,
    .species = SPECIES_UNOWN,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_WYNAUT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SAFEGUARD, MOVE_DESTINY_BOND, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};


//SOOTOPOLIS GYM TRAINERS -- 10 trainers, 93 total

//Lass Andrea (puzzle 1): threshold 3
static const struct TrainerMon sParty_Andrea[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_OVERCOAT,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .lvl = 14,
    .species = SPECIES_FLOATZEL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_BULK_UP, MOVE_ICE_FANG, MOVE_AQUA_JET, MOVE_WAVE_CRASH}
    }
};
static const struct TrainerMon sParty_Andrea_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_SHELLDER,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_OVERCOAT,
    .moves = {MOVE_WATER_PULSE, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_BUIZEL,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_FLIP_TURN, MOVE_FACADE, MOVE_AQUA_JET, MOVE_ICE_FANG}
    }
};

//Beauty Connie (puzzle 1): threshold 3
static const struct TrainerMon sParty_Connie[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_WISH, MOVE_ACID_ARMOR, MOVE_SURF, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_PHIONE,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_TAKE_HEART, MOVE_ACID_ARMOR, MOVE_SURF, MOVE_GRASS_KNOT}
    }
};
static const struct TrainerMon sParty_Connie_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_WISH, MOVE_ACID_ARMOR, MOVE_WATER_PULSE, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_PHIONE,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_TAKE_HEART, MOVE_ACID_ARMOR, MOVE_WATER_PULSE, MOVE_GRASS_KNOT}
    }
};

//Lady Daphne (puzzle 2): threshold 3
static const struct TrainerMon sParty_Daphne[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .lvl = 14,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_SOUL_HEART,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DRAINING_KISS, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .lvl = 14,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_RAIN_DISH,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_ICE_BEAM, MOVE_LEECH_SEED}
    }
};
static const struct TrainerMon sParty_Daphne_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_HYDRO_PUMP, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_RAIN_DISH,
    .moves = {MOVE_ENERGY_BALL, MOVE_SURF, MOVE_FAKE_OUT, MOVE_LEECH_SEED}
    }
};

//Pokéfan-F Annika (puzzle 2): threshold 3
static const struct TrainerMon sParty_Annika[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 225, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_COMPETITIVE,
    .moves = {MOVE_RECOVER, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_BIG_ROOT,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SOAK}
    }
};
static const struct TrainerMon sParty_Annika_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_MARVEL_SCALE,
    .moves = {MOVE_RECOVER, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_CHINCHOU,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_DISCHARGE, MOVE_WATER_PULSE, MOVE_REST, MOVE_SLEEP_TALK}
    }
};

//Lass Crissy (puzzle 3): threshold 3
static const struct TrainerMon sParty_Crissy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_LUMINEON,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_STORM_DRAIN,
    .moves = {MOVE_TAILWIND, MOVE_HYDRO_PUMP, MOVE_TAIL_GLOW, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_PRIMARINA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_HYDRO_PUMP, MOVE_MOONBLAST, MOVE_AQUA_JET, MOVE_DRAINING_KISS}
    }
};
static const struct TrainerMon sParty_Crissy_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_FINNEON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_BOUNCE, MOVE_AURORA_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_BRIONNE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_SURF, MOVE_DISARMING_VOICE, MOVE_AQUA_JET, MOVE_MISTY_TERRAIN}
    }
};

//Beauty Tiffany (puzzle 3): threshold 4
static const struct TrainerMon sParty_Tiffany[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 225, 0, 0, 225),
    .lvl = 14,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OBLIVIOUS,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SLACK_OFF, MOVE_WHIRLPOOL}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 0, 225, 0),
    .lvl = 14,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_NIGHT_SLASH, MOVE_EARTHQUAKE}
    }
};
static const struct TrainerMon sParty_Tiffany_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_CARVANHA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_CRUNCH, MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_POISON_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_WAILMER,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OBLIVIOUS,
    .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_SLACK_OFF, MOVE_WHIRLPOOL}
    }
};

//Pokéfan-F Bethany (puzzle 3): threshold 3
static const struct TrainerMon sParty_Bethany[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .lvl = 14,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_SUPERPOWER, MOVE_PLAY_ROUGH, MOVE_LIQUIDATION, MOVE_GIGA_IMPACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .lvl = 14,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .lvl = 14,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_ICE_PUNCH, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_PLAY_ROUGH}
    }
};
static const struct TrainerMon sParty_Bethany_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .lvl = 14,
    .species = SPECIES_AZURILL,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_SLAM, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
    .lvl = 14,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_WATERFALL, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
    .lvl = 14,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_ICE_PUNCH, MOVE_AQUA_JET, MOVE_WATERFALL, MOVE_PLAY_ROUGH}
    }
};

//Beauty Olivia (puzzle 3): threshold 4
static const struct TrainerMon sParty_Olivia[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ability = ABILITY_COMPETITIVE,
    .lvl = 16,
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_PETAYA_BERRY,
    .moves = {MOVE_DRAINING_KISS, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 225, 0, 225, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAUGHTY),
    .ability = ABILITY_DEFIANT,
    .lvl = 16,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_LIECHI_BERRY,
    .moves = {MOVE_CRUNCH, MOVE_LIQUIDATION, MOVE_SUCKER_PUNCH, MOVE_SHELL_SMASH}
    }
};
static const struct TrainerMon sParty_Olivia_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_WATERFALL, MOVE_ICE_BEAM}
    }
};

//Beauty Bridget (puzzle 3): threshold 2
static const struct TrainerMon sParty_Bridget[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(225, 0, 225, 0, 0, 0),
    .lvl = 14,
    .species = SPECIES_CORSOLA,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_MIRROR_COAT, MOVE_EARTH_POWER, MOVE_POWER_GEM, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ROOST, MOVE_HURRICANE, MOVE_GUNK_SHOT}
    }
};
static const struct TrainerMon sParty_Bridget_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_CORSOLA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_EARTH_POWER, MOVE_POWER_GEM, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_PSYBEAM, MOVE_AIR_SLASH, MOVE_BULLET_SEED}
    }
};

//Lady Brianna (puzzle 3): threshold 3
static const struct TrainerMon sParty_Brianna[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 225, 225, 0),
    .lvl = 14,
    .species = SPECIES_GOLDUCK,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_ICY_WIND, MOVE_PSYSHOCK, MOVE_LOW_SWEEP, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 14,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_FISHIOUS_REND, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .lvl = 14,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_FISHIOUS_REND, MOVE_AGILITY, MOVE_MEGAHORN, MOVE_DRILL_RUN}
    }
};
static const struct TrainerMon sParty_Brianna_easy[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_PSYDUCK,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_ICY_WIND, MOVE_PSYSHOCK, MOVE_LOW_SWEEP, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_GOLDEEN,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_FISHIOUS_REND, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 14,
    .species = SPECIES_GOLDEEN,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_WATERFALL, MOVE_AGILITY, MOVE_MEGAHORN, MOVE_DRILL_RUN}
    }
};

//TOTAL "LEAGUE" TRAINERS -- 93



//TYPE TUTORS (TODO)
//No easy versions, all double battles

//Normal Tutor
//Norman
static const struct TrainerMon sParty_Norman1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Norman2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Norman3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Fighting Tutor
//Brawly
static const struct TrainerMon sParty_Brawly_initial[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Brawly_inverse[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Brawly_challenge[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Flying Tutor
//Winona
static const struct TrainerMon sParty_Winona1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Winona2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Winona3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Poison Tutor
//Claudius, uses Collector pic and Man 4 sprite
static const struct TrainerMon sParty_Claudius1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Claudius2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Claudius3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Ground Tutor
//Anton, uses Ruin Maniac pic and sprite
static const struct TrainerMon sParty_Anton1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Anton2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Anton3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Rock Tutor
//Roxanne
static const struct TrainerMon sParty_Roxanne1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Roxanne2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Roxanne3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Bug Tutor
//Hebert, uses Bug Catcher pic and sprite
static const struct TrainerMon sParty_Hebert1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Hebert2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Hebert3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Ghost Tutor
//Persephone, uses Hex Maniac pic and sprite
static const struct TrainerMon sParty_Persephone1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Persephone2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Persephone3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Steel Tutor
//Hogarth, uses School Kid-M pic and sprite
static const struct TrainerMon sParty_Hogarth1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Hogarth2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Hogarth3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Fire Tutor
//Flannery
static const struct TrainerMon sParty_Flannery1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Flannery2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Flannery3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Water Tutor
//Wallace
static const struct TrainerMon sParty_Wallace1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Wallace2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Wallace3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Grass Tutor
//Quinn, uses Aroma Lady pic and sprite
static const struct TrainerMon sParty_Quinn1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Quinn2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Quinn3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Electric Tutor
//Scotty, uses Expert-M pic and Old Man sprite
static const struct TrainerMon sParty_Scotty1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Scotty2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Scotty3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Psychic Tutor
//Tate and Liza
static const struct TrainerMon sParty_TateAndLiza1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_TateAndLiza3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Ice Tutor Ellie, uses Cooltrainer-F pic and Beauty sprite
//standard double battle
static const struct TrainerMon sParty_Ellie_initial[] = {
    {
    .lvl = 14,
    .species = SPECIES_BEARTIC,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SLUSH_RUSH,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_ROCK_SLIDE, MOVE_AQUA_JET, MOVE_SWORDS_DANCE, MOVE_ICICLE_CRASH}
    },
    {
    .lvl = 14,
    .species = SPECIES_VANILLUXE,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_SNOW_WARNING,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_BLIZZARD, MOVE_FLASH_CANNON, MOVE_ICY_WIND, MOVE_AURORA_VEIL}
    },
    {
    .lvl = 14,
    .species = SPECIES_AURORUS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_REFRIGERATE,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPER_VOICE, MOVE_DIAMOND_STORM, MOVE_THUNDER_WAVE, MOVE_CALM_MIND}
    },
    {
    .lvl = 14,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_SHELL_ARMOR,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, MOVE_PERISH_SONG}
    },
    {
    .lvl = 14,
    .species = SPECIES_BAXCALIBUR,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_THERMAL_EXCHANGE,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BREAKING_SWIPE, MOVE_GLAIVE_RUSH, MOVE_IRON_HEAD, MOVE_STOMPING_TANTRUM}
    },
    {
    .lvl = 14,
    .species = SPECIES_ABOMASNOW,
    .heldItem = ITEM_ICY_ROCK,
    .ability = ABILITY_SNOW_WARNING,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .moves = {MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_BLIZZARD, MOVE_GIGA_DRAIN}
    }
};
//inverse double battle
static const struct TrainerMon sParty_Ellie_inverse[] = {
    {
    .lvl = 15,
    .species = SPECIES_AURORUS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_REFRIGERATE,
    .iv = TRAINER_PARTY_IVS(30, 0, 30, 30, 30, 30),
    .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_BOOMBURST, MOVE_DIAMOND_STORM, MOVE_THUNDER_WAVE, MOVE_CALM_MIND}
    },
    {
    .lvl = 15,
    .species = SPECIES_ABOMASNOW,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SOUNDPROOF,
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .moves = {MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_BLIZZARD, MOVE_GIGA_DRAIN}
    },
    {
    .lvl = 15,
    .species = SPECIES_BAXCALIBUR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_THERMAL_EXCHANGE,
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BREAKING_SWIPE, MOVE_GLAIVE_RUSH, MOVE_AQUA_TAIL, MOVE_SWORDS_DANCE}
    },
    {
    .lvl = 15,
    .species = SPECIES_VANILLUXE,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_SNOW_WARNING,
    .iv = TRAINER_PARTY_IVS(30, 0, 30, 30, 30, 30),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_BLIZZARD, MOVE_FLASH_CANNON, MOVE_ICY_WIND, MOVE_AURORA_VEIL}
    },
    {
    .lvl = 15,
    .species = SPECIES_FROSMOTH,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_ICE_SCALES,
    .iv = TRAINER_PARTY_IVS(30, 0, 30, 30, 30, 30),
    .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_BUG_BUZZ, MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE}
    },
    {
    .lvl = 15,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SKILL_LINK,
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_SHELL_SMASH, MOVE_ICICLE_SPEAR, MOVE_SPIKE_CANNON, MOVE_DRILL_RUN}
    }
};
//ice-only double battle
static const struct TrainerMon sParty_Ellie_challenge[] = {
    {
    .lvl = 16,
    .species = SPECIES_DARMANITAN_GALARIAN,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_GORILLA_TACTICS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_ROCK_SLIDE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 16,
    .species = SPECIES_BAXCALIBUR,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_THERMAL_EXCHANGE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BREAKING_SWIPE, MOVE_GLAIVE_RUSH, MOVE_IRON_HEAD, MOVE_DRAGON_CHEER}
    },
    {
    .lvl = 16,
    .species = SPECIES_AURORUS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SNOW_WARNING,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_AURORA_VEIL, MOVE_DIAMOND_STORM, MOVE_THUNDER_WAVE, MOVE_CALM_MIND}
    },
    {
    .lvl = 16,
    .species = SPECIES_CRABOMINABLE,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_IRON_FIST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_COACHING}
    },
    {
    .lvl = 16,
    .species = SPECIES_DARMANITAN_GALARIAN,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .ability = ABILITY_ZEN_MODE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_FACADE}
    },
    {
    .lvl = 16,
    .species = SPECIES_SANDSLASH_ALOLAN,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_SLUSH_RUSH,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK}
    }
};

//Dragon Tutor
//Aster, uses Lass pic and Girl 2 sprite
static const struct TrainerMon sParty_Aster1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Aster2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Aster3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Dark Tutor
//Megaera, uses Hex Maniac pic and sprite
static const struct TrainerMon sParty_Megaera1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Megaera2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Megaera3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Fairy Tutor
//Bellatrix, uses Lady pic and sprite
static const struct TrainerMon sParty_Bellatrix1[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Bellatrix2[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Bellatrix3[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};


//OTHER TUTORS (TODO)
//No easy versions

//Weather Tutor
static const struct TrainerMon sParty_RainTutor[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_SunTutor[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_HailTutor[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_SandTutor[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Terrain Tutor
static const struct TrainerMon sParty_ElectricTerrainTutor[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_GrassyTerrainTutor[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_MistyTerrainTutor[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_PsychicTerrainTutor[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//High-crit Moves Tutor
static const struct TrainerMon sParty_HighCritTutor[] = {
    {
    .lvl = 16,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SUPER_LUCK,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_ARIADOS,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_STICKY_WEB, MOVE_SHADOW_SNEAK}
    },
    {
    .lvl = 16,
    .species = SPECIES_LEAVANNY,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SHARPNESS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_SLASH, MOVE_SWORDS_DANCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SUPER_LUCK,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_THUNDER_WAVE, MOVE_FIRE_BLAST}
    },
    {
    .lvl = 16,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SNIPE_SHOT, MOVE_FOCUS_ENERGY, MOVE_DRACO_METEOR, MOVE_ICE_BEAM}
    },
    {
    .lvl = 16,
    .species = SPECIES_DRAPION,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_CROSS_POISON, MOVE_EARTHQUAKE, MOVE_NIGHT_SLASH, MOVE_TOXIC_SPIKES}
    }
};

//Biting Moves Tutor
static const struct TrainerMon sParty_BiteTutor[] = {
    {
    .lvl = 16,
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_STRONG_JAW,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_LIQUIDATION}
    },
    {
    .lvl = 16,
    .species = SPECIES_BOLTUND,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_STRONG_JAW,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_THUNDER_FANG, MOVE_FIRE_FANG, MOVE_PSYCHIC_FANGS, MOVE_THUNDER_WAVE}
    },
    {
    .lvl = 16,
    .species = SPECIES_TYRANTRUM,
    .heldItem = ITEM_ROCK_GEM,
    .ability = ABILITY_STRONG_JAW,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_OUTRAGE, MOVE_HEAD_SMASH}
    },
    {
    .lvl = 16,
    .species = SPECIES_BRUXISH,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_STRONG_JAW,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_PSYCHIC_FANGS, MOVE_FISHIOUS_REND, MOVE_ICE_FANG, MOVE_POISON_FANG}
    },
    {
    .lvl = 16,
    .species = SPECIES_AVALUGG_HISUIAN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STRONG_JAW,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_STONE_EDGE, MOVE_MOUNTAIN_GALE, MOVE_CRUNCH, MOVE_RECOVER}
    },
    {
    .lvl = 16,
    .species = SPECIES_DREDNAW,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_STRONG_JAW,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_JAW_LOCK, MOVE_LIQUIDATION, MOVE_COUNTER, MOVE_HEAD_SMASH}
    }
};

//Punching Moves Tutor
static const struct TrainerMon sParty_PunchTutor[] = {
    {
    .lvl = 16,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_NO_GUARD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DYNAMIC_PUNCH, MOVE_FOCUS_PUNCH, MOVE_BULLET_PUNCH, MOVE_BULK_UP}
    },
    {
    .lvl = 16,
    .species = SPECIES_PANGORO,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_IRON_FIST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_PARTING_SHOT, MOVE_DRAIN_PUNCH, MOVE_WICKED_BLOW, MOVE_POWER_UP_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_GOLURK,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_IRON_FIST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_SHADOW_PUNCH, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_DYNAMIC_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_IRON_FIST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_MACH_PUNCH, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_THUNDER_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_LEDIAN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_IRON_FIST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_VICTORY_DANCE, MOVE_LEECH_LIFE, MOVE_DRAIN_PUNCH, MOVE_BULLET_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_IRON_FIST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH}
    }
};

//Multi-hit Moves Tutor
static const struct TrainerMon sParty_MultiHitTutor[] = {
    {
    .lvl = 16,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SKILL_LINK,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_SPIKE_CANNON, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_SHELL_SMASH}
    },
    {
    .lvl = 16,
    .species = SPECIES_CINCCINO,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_TECHNICIAN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_TRIPLE_AXEL}
    },
    {
    .lvl = 16,
    .species = SPECIES_TOUCANNON,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_SKILL_LINK,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BRAVE_BIRD, MOVE_BULLET_SEED, MOVE_ROOST, MOVE_ROCK_BLAST}
    },
    {
    .lvl = 16,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_TECHNICIAN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_TRIPLE_KICK, MOVE_TRIPLE_AXEL, MOVE_COUNTER, MOVE_BULLET_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_AMBIPOM,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = ABILITY_SKILL_LINK,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_ARM_THRUST, MOVE_TAIL_SLAP, MOVE_KNOCK_OFF, MOVE_FAKE_OUT}
    },
    {
    .lvl = 16,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_TECHNICIAN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_BULLET_SEED, MOVE_SCALE_SHOT, MOVE_TRAILBLAZE, MOVE_FURY_CUTTER}
    }
};


//WINSTRATES (done)
//initial gauntlet on Route 111: Victor->Victoria->Vivi->Vito->Vicky
//rewards Macho Brace and access to purchase EV Power Items, Macho Braces, and Lucky Eggs

//Winstrate Victor: threshold 3
static const struct TrainerMon sParty_Victor[] = {
    {
    .lvl = 14,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_AERIAL_ACE, MOVE_FACADE, MOVE_STEEL_WING, MOVE_QUICK_ATTACK}
    },
    {
    .lvl = 14,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_QUICK_FEET,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_PLAY_ROUGH, MOVE_HEADBUTT, MOVE_QUICK_ATTACK, MOVE_BELLY_DRUM}
    },
    {
    .lvl = 14,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_STATIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT, MOVE_NUZZLE}
    }
};
static const struct TrainerMon sParty_Victor_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_AERIAL_ACE, MOVE_FACADE, MOVE_STEEL_WING, MOVE_QUICK_ATTACK}
    },
    {
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = ABILITY_QUICK_FEET,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_PLAY_ROUGH, MOVE_HEADBUTT, MOVE_QUICK_ATTACK, MOVE_BELLY_DRUM}
    },
    {
    .lvl = 14,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_STATIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT, MOVE_NUZZLE}
    }
};

//Winstrate Victoria: threshold 4
static const struct TrainerMon sParty_Victoria[] = {
    {
    .lvl = 15,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_POISON_POINT,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_TOXIC_SPIKES, MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER}
    },
    {
    .lvl = 15,
    .species = SPECIES_COMFEY,
    .heldItem = ITEM_BIG_ROOT,
    .ability = ABILITY_TRIAGE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_SYNTHESIS, MOVE_CALM_MIND}
    }
};
static const struct TrainerMon sParty_Victoria_easy[] = {
    {
    .lvl = 15,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_MIRACLE_SEED,
    .ability = ABILITY_POISON_POINT,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_TOXIC_SPIKES, MOVE_ENERGY_BALL, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER}
    },
    {
    .lvl = 15,
    .species = SPECIES_COMFEY,
    .heldItem = ITEM_BIG_ROOT,
    .ability = ABILITY_TRIAGE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_SYNTHESIS, MOVE_CALM_MIND}
    }
};

//Winstrate Vivi: threshold 4
static const struct TrainerMon sParty_Vivi[] = {
    {
    .lvl = 12,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_VICTORY_STAR,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_BLIZZARD, MOVE_THUNDER, MOVE_PSYCHIC, MOVE_HYDRO_PUMP}
    },
    {
    .lvl = 12,
    .species = SPECIES_LURANTIS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_CONTRARY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .moves = {MOVE_SUPERPOWER, MOVE_LEAF_STORM, MOVE_LEECH_LIFE, MOVE_GIGA_DRAIN}
    },
    {
    .lvl = 12,
    .species = SPECIES_ARCANINE_HISUIAN,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_ROCK_HEAD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_WILD_CHARGE, MOVE_EXTREME_SPEED}
    }
};
static const struct TrainerMon sParty_Vivi_easy[] = {
    {
    .lvl = 12,
    .species = SPECIES_STARYU,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_ANALYTIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_SURF}
    },
    {
    .lvl = 12,
    .species = SPECIES_FOMANTIS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_CONTRARY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .moves = {MOVE_SUPERPOWER, MOVE_LEAF_STORM, MOVE_LEECH_LIFE, MOVE_GIGA_DRAIN}
    },
    {
    .lvl = 12,
    .species = SPECIES_GROWLITHE_HISUIAN,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_ROCK_HEAD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_WILD_CHARGE, MOVE_CRUNCH}
    }
};

//Winstrate Vito: threshold 4
static const struct TrainerMon sParty_Vito[] = {
    {
    .lvl = 13,
    .species = SPECIES_BEEDRILL,
    .heldItem = ITEM_BUG_GEM,
    .ability = ABILITY_ADAPTABILITY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_U_TURN, MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_FELL_STINGER}
    },
    {
    .lvl = 13,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_ROCK_HEAD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_HEAD_SMASH, MOVE_WOOD_HAMMER, MOVE_SUCKER_PUNCH, MOVE_COUNTER}
    },
    {
    .lvl = 13,
    .species = SPECIES_BEHEEYEM,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_ANALYTIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
    .moves = {MOVE_PSYSTRIKE, MOVE_RECOVER, MOVE_CALM_MIND, MOVE_METEOR_BEAM}
    }
};
static const struct TrainerMon sParty_Vito_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_BEEDRILL,
    .heldItem = ITEM_BUG_GEM,
    .ability = ABILITY_ADAPTABILITY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_U_TURN, MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_FELL_STINGER}
    },
    {
    .lvl = 13,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_ROCK_HEAD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_HEAD_SMASH, MOVE_WOOD_HAMMER, MOVE_SUCKER_PUNCH, MOVE_COUNTER}
    },
    {
    .lvl = 13,
    .species = SPECIES_ELGYEM,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_ANALYTIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
    .moves = {MOVE_PSYCHIC, MOVE_RECOVER, MOVE_CALM_MIND, MOVE_METEOR_BEAM}
    }
};

//Winstrate Vicky: threshold 4
static const struct TrainerMon sParty_Vicky[] = {
    {
    .lvl = 16,
    .species = SPECIES_MIENSHAO,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_REGENERATOR,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_U_TURN, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_KNOCK_OFF}
    },
    {
    .lvl = 16,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_ADAPTABILITY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_FLASH_CANNON, MOVE_AURA_SPHERE, MOVE_VACUUM_WAVE, MOVE_NASTY_PLOT}
    },
    {
    .lvl = 16,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_PURE_POWER,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    }
};
static const struct TrainerMon sParty_Vicky_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_MIENFOO,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_REGENERATOR,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_U_TURN, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_KNOCK_OFF}
    },
    {
    .lvl = 16,
    .species = SPECIES_RIOLU,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_PRANKSTER,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_FORCE_PALM, MOVE_BULLET_PUNCH, MOVE_VACUUM_WAVE, MOVE_NASTY_PLOT}
    },
    {
    .lvl = 16,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_PURE_POWER,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    }
};

//Challenge Battle parties, no easy versions
//Vivi and Vito have challenge battles after badge 5, reward 2 bottle caps each daily
static const struct TrainerMon sParty_Vivi_Challenge[] = {
    {
    .lvl = 16,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_VICTORY_STAR,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_BLIZZARD, MOVE_THUNDER, MOVE_PSYCHIC, MOVE_HYDRO_PUMP}
    },
    {
    .lvl = 16,
    .species = SPECIES_LURANTIS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_CONTRARY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .moves = {MOVE_SUPERPOWER, MOVE_LEAF_STORM, MOVE_LEECH_LIFE, MOVE_GIGA_DRAIN}
    },
    {
    .lvl = 16,
    .species = SPECIES_ARCANINE_HISUIAN,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_ROCK_HEAD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_WILD_CHARGE, MOVE_EXTREME_SPEED}
    },
    {
    .lvl = 16,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_HUGE_POWER,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_FACADE}
    },
    {
    .lvl = 16,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_LEVITATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW}
    },
    {
    .lvl = 16,
    .species = SPECIES_DRIFBLIM,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_FLARE_BOOST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_STRENGTH_SAP, MOVE_SHADOW_BALL, MOVE_AIR_SLASH, MOVE_DESTINY_BOND}
    }
};
static const struct TrainerMon sParty_Vito_Challenge[] = {
    {
    .lvl = 16,
    .species = SPECIES_BEEDRILL,
    .heldItem = ITEM_BUG_GEM,
    .ability = ABILITY_ADAPTABILITY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_U_TURN, MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_FELL_STINGER}
    },
    {
    .lvl = 16,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_ROCK_HEAD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_HEAD_SMASH, MOVE_WOOD_HAMMER, MOVE_SUCKER_PUNCH, MOVE_COUNTER}
    },
    {
    .lvl = 16,
    .species = SPECIES_BEHEEYEM,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_ANALYTIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
    .moves = {MOVE_PSYSTRIKE, MOVE_RECOVER, MOVE_CALM_MIND, MOVE_METEOR_BEAM}
    },
    {
    .lvl = 16,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PRANKSTER,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_FOUL_PLAY, MOVE_WILL_O_WISP, MOVE_NIGHT_SHADE, MOVE_RECOVER}
    },
    {
    .lvl = 16,
    .species = SPECIES_DARMANITAN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FLARE_BLITZ, MOVE_BULLDOZE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE}
    },
    {
    .lvl = 16,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_AURORA_BEAM, MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_FLAMETHROWER}
    }
};


//GABBY AND TY (done)
//Always a double battle, threshold 4
//Will not battle unless you have at least 2 badges
static const struct TrainerMon sParty_GabbyAndTy111[] = {
    {
    .lvl = 14,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_WATER_BUBBLE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SURF, MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_STICKY_WEB}
    },
    {
    .lvl = 14,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_WATER_ABSORB,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_NEEDLE_ARM, MOVE_SUCKER_PUNCH, MOVE_SPIKY_SHIELD, MOVE_DESTINY_BOND}
    },
    {
    .lvl = 14,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_SCRAPPY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_SHADOW_BALL}
    },
    {
    .lvl = 14,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_ANALYTIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_TRI_ATTACK}
    }
};
static const struct TrainerMon sParty_GabbyAndTy111_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_WATER_BUBBLE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SURF, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_STICKY_WEB}
    },
    {
    .lvl = 14,
    .species = SPECIES_CACNEA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_WATER_ABSORB,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_NEEDLE_ARM, MOVE_SUCKER_PUNCH, MOVE_SPIKY_SHIELD, MOVE_DESTINY_BOND}
    },
    {
    .lvl = 14,
    .species = SPECIES_LOUDRED,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_SCRAPPY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_SHADOW_BALL}
    },
    {
    .lvl = 14,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_ANALYTIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_TRI_ATTACK}
    }
};
static const struct TrainerMon sParty_GabbyAndTy118[] = {
    {
    .lvl = 14,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_COMPETITIVE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPER_VOICE, MOVE_DRAINING_KISS, MOVE_DAZZLING_GLEAM, MOVE_ICY_WIND}
    },
    {
    .lvl = 14,
    .species = SPECIES_AMBIPOM,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_TECHNICIAN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_TAIL_SLAP, MOVE_BEAT_UP, MOVE_ARM_THRUST, MOVE_FAKE_OUT}
    },
    {
    .lvl = 14,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_SCRAPPY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_SHADOW_BALL}
    },
    {
    .lvl = 14,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_ANALYTIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_TRI_ATTACK}
    }
};
static const struct TrainerMon sParty_GabbyAndTy118_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_JIGGLYPUFF,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_COMPETITIVE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPER_VOICE, MOVE_DRAINING_KISS, MOVE_DAZZLING_GLEAM, MOVE_ICY_WIND}
    },
    {
    .lvl = 14,
    .species = SPECIES_AIPOM,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_TECHNICIAN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_TAIL_SLAP, MOVE_BEAT_UP, MOVE_ARM_THRUST, MOVE_FAKE_OUT}
    },
    {
    .lvl = 14,
    .species = SPECIES_LOUDRED,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_SCRAPPY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_SHADOW_BALL}
    },
    {
    .lvl = 14,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_ANALYTIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_TRI_ATTACK}
    }
};
static const struct TrainerMon sParty_GabbyAndTy120[] = {
    {
    .lvl = 14,
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHADOW_TAG,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_PSYSHOCK, MOVE_DARK_PULSE, MOVE_TICKLE, MOVE_FOCUS_BLAST}
    },
    {
    .lvl = 14,
    .species = SPECIES_KECLEON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_ADAPTABILITY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_DRAIN_PUNCH, MOVE_FACADE}
    },
    {
    .lvl = 14,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_SCRAPPY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_SHADOW_BALL}
    },
    {
    .lvl = 14,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_ANALYTIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_TRI_ATTACK}
    }
};
static const struct TrainerMon sParty_GabbyAndTy120_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_GOTHORITA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHADOW_TAG,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_PSYSHOCK, MOVE_DARK_PULSE, MOVE_TICKLE, MOVE_FOCUS_BLAST}
    },
    {
    .lvl = 14,
    .species = SPECIES_KECLEON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_ADAPTABILITY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_DRAIN_PUNCH, MOVE_FACADE}
    },
    {
    .lvl = 14,
    .species = SPECIES_LOUDRED,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_SCRAPPY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_SHADOW_BALL}
    },
    {
    .lvl = 14,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_ANALYTIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_TRI_ATTACK}
    }
};
//Vanilla versions
static const struct TrainerMon sParty_GabbyAndTy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 17,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 17,
    .species = SPECIES_WHISMUR,
    }
};
static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_LOUDRED,
    }
};
static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 30,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 30,
    .species = SPECIES_LOUDRED,
    }
};
static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};
static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 36,
    .species = SPECIES_LOUDRED,
    }
};
static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 39,
    .species = SPECIES_EXPLOUD,
    .moves = {MOVE_ASTONISH, MOVE_STOMP, MOVE_SUPERSONIC, MOVE_HYPER_VOICE}
    }
};


//BEACH BATTLE TRAINERS (done)
//All double battles with 2 opponents
//No easy versions - this is an optional event that
//challenges your ability to build for doubles matches
//and there's nothing TOO crazy here ;)

//Round 1: Tuber-M Mischa
static const struct TrainerMon sParty_BB_Mischa[] = {
    {
    .lvl = 16,
    .species = SPECIES_STARYU,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_REGENERATOR,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FLIP_TURN, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_CONFUSE_RAY}
    },
    {
    .lvl = 16,
    .species = SPECIES_SCYTHER,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_TECHNICIAN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_BUG_BITE, MOVE_U_TURN, MOVE_ROOST}
    },
    {
    .lvl = 16,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_VICTORY_STAR,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYDRO_PUMP, MOVE_PSYSHOCK, MOVE_BLIZZARD, MOVE_THUNDER}
    }
};
//Round 1: Aroma Lady Mirabelle
static const struct TrainerMon sParty_BB_Mirabelle[] = {
    {
    .lvl = 16,
    .species = SPECIES_CLEFABLE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_MAGIC_GUARD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_CALM_MIND, MOVE_DRAINING_KISS, MOVE_FIRE_BLAST, MOVE_SOFTBOILED}
    },
    {
    .lvl = 16,
    .species = SPECIES_BUTTERFREE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_COMPOUND_EYES,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_SLEEP_POWDER, MOVE_POLLEN_PUFF, MOVE_QUIVER_DANCE, MOVE_HURRICANE}
    },
    {
    .lvl = 16,
    .species = SPECIES_CLEFAIRY,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_FRIEND_GUARD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_LIFE_DEW, MOVE_FOLLOW_ME, MOVE_CHARM, MOVE_SEISMIC_TOSS}
    }
};

//Round 2 Sailor Antonio
static const struct TrainerMon sParty_BB_Antonio[] = {
    {
    .lvl = 16,
    .species = SPECIES_DHELMISE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_STEELWORKER,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_POWER_WHIP, MOVE_ANCHOR_SHOT, MOVE_SHADOW_CLAW, MOVE_BODY_PRESS}
    },
    {
    .lvl = 16,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_PRIMORDIAL_SEA,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_NOBLE_ROAR, MOVE_BOUNCE, MOVE_WATERFALL, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 16,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_STATIC,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_DISCHARGE, MOVE_SIGNAL_BEAM, MOVE_THUNDER, MOVE_TAIL_GLOW}
    }
};
//Round 2 Hex Maniac Luisa
static const struct TrainerMon sParty_BB_Luisa[] = {
    {
    .lvl = 16,
    .species = SPECIES_NONE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_UNBURDEN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_LONELY),
    .moves = {MOVE_STRENGTH_SAP, MOVE_TAILWIND, MOVE_DESTINY_BOND, MOVE_EXPLOSION}
    },
    {
    .lvl = 16,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_LEVITATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE}
    },
    {
    .lvl = 16,
    .species = SPECIES_GASTRODON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STORM_DRAIN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_MUDDY_WATER, MOVE_TOXIC}
    }
};

//Round 3 Ranger-F Julieta
static const struct TrainerMon sParty_BB_Julieta[] = {
    {
    .lvl = 16,
    .species = SPECIES_WYRDEER,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_HORN_LEECH, MOVE_PSYSHIELD_BASH, MOVE_BODY_SLAM, MOVE_BULLDOZE}
    },
    {
    .lvl = 16,
    .species = SPECIES_COMFEY,
    .heldItem = ITEM_BIG_ROOT,
    .ability = ABILITY_TRIAGE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_HEAL_PULSE, MOVE_AROMATHERAPY}
    },
    {
    .lvl = 16,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CHLOROPHYLL,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_WEATHER_BALL, MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN}
    }
};
//Round 3 Kindler Camilo
static const struct TrainerMon sParty_BB_Camilo[] = {
    {
    .lvl = 16,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_SPEED_BOOST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_COACHING, MOVE_OVERHEAT, MOVE_HIGH_JUMP_KICK, MOVE_BRAVE_BIRD}
    },
    {
    .lvl = 16,
    .species = SPECIES_MAROWAK_ALOLAN,
    .heldItem = ITEM_THICK_CLUB,
    .ability = ABILITY_ROCK_HEAD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FLARE_BLITZ, MOVE_SHADOW_BONE, MOVE_BONEMERANG, MOVE_WILL_O_WISP}
    },
    {
    .lvl = 16,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_DROUGHT,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_HEAT_WAVE, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_TOXIC}
    }
};

//Round 4 Cooltrainer-M Pedro
static const struct TrainerMon sParty_BB_Pedro[] = {
    {
    .lvl = 2,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_SWIFT_SWIM,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_POWER_UP_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_KROOKODILE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SNARL}
    },
    {
    .lvl = 16,
    .species = SPECIES_TANGROWTH,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_REGENERATOR,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
    .moves = {MOVE_KNOCK_OFF, MOVE_POWER_WHIP, MOVE_ACID_SPRAY, MOVE_GIGA_DRAIN}
    }
};
//Round 4 Cooltrainer-F Alma
static const struct TrainerMon sParty_BB_Alma[] = {
    {
    .lvl = 2,
    .species = SPECIES_ROTOM_HEAT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_LEVITATE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_OVERHEAT, MOVE_DISCHARGE, MOVE_NASTY_PLOT, MOVE_THUNDER}
    },
    {
    .lvl = 16,
    .species = SPECIES_SCRAFTY,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_SUPER_FANG}
    },
    {
    .lvl = 16,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_COMPETITIVE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_ICY_WIND, MOVE_MUDDY_WATER, MOVE_TOXIC, MOVE_RECOVER}
    }
};

//Round 5 Brawly
static const struct TrainerMon sParty_BB_Brawly[] = {
    {
    .lvl = 16,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_NO_GUARD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DYNAMIC_PUNCH, MOVE_THUNDER_PUNCH, MOVE_PAYBACK, MOVE_BULLET_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_PURE_POWER,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_BULLET_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_GUTS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FACADE, MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_KNOCK_OFF}
    }
};
//Round 5 Phoebe
static const struct TrainerMon sParty_BB_Phoebe[] = {
    {
    .lvl = 16,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_PRESSURE,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_CURSE, MOVE_PAIN_SPLIT, MOVE_NIGHT_SHADE, MOVE_TAUNT}
    },
    {
    .lvl = 16,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PRANKSTER,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .moves = {MOVE_SCREECH, MOVE_FOUL_PLAY, MOVE_WILL_O_WISP, MOVE_RECOVER}
    },
    {
    .lvl = 16,
    .species = SPECIES_DUSKNOIR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PERISH_BODY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_PROTECT, MOVE_PAIN_SPLIT, MOVE_SHADOW_SNEAK, MOVE_SHADOW_FORCE}
    }
};


//TPP TRAINERS (done)
//found on islands on Route 132, no easy versions

//Red: threshold 0
static const struct TrainerMon sParty_TPPRed[] = {
    {
    .lvl = 16,
    .species = SPECIES_ZAPDOS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_STATIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_BOLT_BEAK, MOVE_DUAL_WINGBEAT, MOVE_THUNDER_WAVE, MOVE_ROOST}
    },
    {
    .lvl = 16,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHELL_ARMOR,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_TOXIC}
    },
    {
    .lvl = 16,
    .species = SPECIES_VENOMOTH,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_TINTED_LENS,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_ROOST}
    },
    {
    .lvl = 16,
    .species = SPECIES_NIDOKING,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_TOXIC_SPIKES, MOVE_FLAMETHROWER}
    },
    {
    .lvl = 16,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_NO_GUARD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_ROOST}
    },
    {
    .lvl = 16,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SHELL_ARMOR,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_POWER_GEM}
    }
};

//AJ: threshold 0
static const struct TrainerMon sParty_TPPAJ[] = {
    {
    .lvl = 16,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_KEEN_EYE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_SKY_ATTACK, MOVE_QUICK_ATTACK, MOVE_DUAL_WINGBEAT, MOVE_STEEL_WING}
    },
    {
    .lvl = 16,
    .species = SPECIES_ESPEON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_MAGIC_BOUNCE,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MORNING_SUN, MOVE_CALM_MIND}
    },
    {
    .lvl = 16,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_MULTISCALE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_ROOST, MOVE_EXTREME_SPEED}
    },
    {
    .lvl = 16,
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_CRUNCH, MOVE_DRAGON_DANCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_ROCK_HEAD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .moves = {MOVE_COIL, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_HEAD_SMASH}
    }
};

//Dom: threshold 0
static const struct TrainerMon sParty_TPPDom[] = {
    {
    .lvl = 16,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_GUTS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = 0,
    .moves = {MOVE_SACRED_FIRE, MOVE_YAWN, MOVE_WISH, MOVE_FACADE}
    },
    {
    .lvl = 16,
    .species = SPECIES_GENESECT,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_DOWNLOAD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_U_TURN, MOVE_ICE_BEAM, MOVE_IRON_HEAD, MOVE_EXPLOSION}
    },
    {
    .lvl = 16,
    .species = SPECIES_RATICATE,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR, MOVE_CRUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_UMBREON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_MAGIC_GUARD,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .moves = {MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT, MOVE_FOUL_PLAY}
    },
    {
    .lvl = 16,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_BATTLE_ARMOR,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_RAZOR_SHELL, MOVE_LEECH_LIFE, MOVE_ROCK_SLIDE, MOVE_RAPID_SPIN}
    },
    {
    .lvl = 16,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_BLAZE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_FIRE_BLAST, MOVE_AIR_SLASH, MOVE_COUNTER, MOVE_SCORCHING_SANDS}
    }
};



//ROUTE 101 TRAINERS (done)

//Youngster Breyden: threshold 3
static const struct TrainerMon sParty_Breyden[] = {
    {
    .lvl = 12,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_HOWL, MOVE_SUCKER_PUNCH}
    },
    {
    .lvl = 12,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_PICKUP,
    .moves = {MOVE_THUNDER_WAVE, MOVE_COVET, MOVE_HEADBUTT, MOVE_SEED_BOMB}
    },
    {
    .lvl = 12,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .species = SPECIES_LEDIAN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_EARLY_BIRD,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_MACH_PUNCH, MOVE_AERIAL_ACE}
    }
};
static const struct TrainerMon sParty_Breyden_easy[] = {
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_QUICK_FEET,
    .moves = {MOVE_TACKLE, MOVE_BITE, MOVE_HOWL, MOVE_SAND_ATTACK}
    },
    {
    .lvl = 6,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_PICKUP,
    .moves = {MOVE_GROWL, MOVE_COVET, MOVE_HEADBUTT, MOVE_PIN_MISSILE}
    },
    {
    .lvl = 7,
    .species = SPECIES_LEDYBA,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = ABILITY_EARLY_BIRD,
    .moves = {MOVE_SWIFT, MOVE_STRUGGLE_BUG, MOVE_MACH_PUNCH, MOVE_ENCORE}
    }
};

//Bug Catcher Vance: threshold 2
static const struct TrainerMon sParty_Vance[] = {
    {
    .lvl = 12,
    .species = SPECIES_NINJASK,
    .heldItem = ITEM_SILVER_POWDER,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_LEECH_LIFE, MOVE_AERIAL_ACE, MOVE_U_TURN, MOVE_NIGHT_SLASH}
    },
    {
    .lvl = 12,
    .species = SPECIES_BEEDRILL,
    .heldItem = ITEM_POISON_BARB,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_POISON_JAB, MOVE_U_TURN, MOVE_DRILL_RUN, MOVE_KNOCK_OFF}
    },
    {
    .lvl = 12,
    .species = SPECIES_BUTTERFREE,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = ABILITY_COMPOUND_EYES,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_BUG_BUZZ, MOVE_ELECTROWEB, MOVE_PSYCHIC, MOVE_HURRICANE}
    }
};
static const struct TrainerMon sParty_Vance_easy[] = {
    {
    .lvl = 7,
    .species = SPECIES_NINCADA,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_DIG, MOVE_FURY_CUTTER, MOVE_HARDEN, MOVE_ABSORB}
    },
    {
    .lvl = 6,
    .species = SPECIES_WEEDLE,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_POISON_STING, MOVE_STRING_SHOT, MOVE_BUG_BITE, MOVE_NONE}
    },
    {
    .lvl = 8,
    .species = SPECIES_METAPOD,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BUG_BITE, MOVE_ELECTROWEB, MOVE_IRON_DEFENSE, MOVE_STRING_SHOT}
    }
};

//Triathlete-F Stephanie: threshold 4
static const struct TrainerMon sParty_Stephanie[] = {
    {
    .lvl = 9,
    .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_QUICK_ATTACK, MOVE_HEAT_WAVE}
    },
    {
    .lvl = 9,
    .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_EXPLOSION, MOVE_MIRROR_COAT}
    },
    {
    .lvl = 9,
    .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_ICE_BEAM}
    }
};
static const struct TrainerMon sParty_Stephanie_easy[] = {
    {
    .lvl = 9,
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_WING_ATTACK, MOVE_STEEL_WING, MOVE_QUICK_ATTACK, MOVE_FOCUS_ENERGY}
    },
    {
    .lvl = 9,
    .species = SPECIES_VOLTORB,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_SPARK, MOVE_ROLLOUT, MOVE_SCREECH, MOVE_SWIFT}
    },
    {
    .lvl = 9,
    .species = SPECIES_STARYU,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_PSYBEAM, MOVE_THUNDER_WAVE, MOVE_RAPID_SPIN}
    }
};

//Ruin Maniac Abraham: threshold 4
static const struct TrainerMon sParty_Abraham[] = {
    {
    .lvl = 10,
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_HARD_STONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_PSYCHIC, MOVE_RAPID_SPIN}
    },
    {
    .lvl = 11,
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .species = SPECIES_VIBRAVA,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BUG_BITE, MOVE_U_TURN}
    },
    {
    .lvl = 12,
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .species = SPECIES_DONPHAN,
    .heldItem = ITEM_SOFT_SAND,
    .moves = {MOVE_EARTHQUAKE, MOVE_SEED_BOMB, MOVE_GUNK_SHOT, MOVE_ICE_SHARD}
    }
};
static const struct TrainerMon sParty_Abraham_easy[] = {
    {
    .lvl = 10,
    .species = SPECIES_BALTOY,
    .heldItem = ITEM_HARD_STONE,
    .moves = {MOVE_MUD_SLAP, MOVE_ROCK_TOMB, MOVE_PSYBEAM, MOVE_RAPID_SPIN}
    },
    {
    .lvl = 11,
    .species = SPECIES_TRAPINCH,
    .heldItem = ITEM_SOFT_SAND,
    .moves = {MOVE_CRUNCH, MOVE_SAND_TOMB, MOVE_BUG_BITE, MOVE_BULLDOZE}
    },
    {
    .lvl = 12,
    .species = SPECIES_PHANPY,
    .heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_FLAIL, MOVE_ICE_SHARD}
    }
};



//ROUTE 102 TRAINERS (done)

//Youngster Calvin: threshold 4
static const struct TrainerMon sParty_Calvin[] = {
    {
    .lvl = 2,
    .species = SPECIES_OBSTAGOON,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_DEFIANT,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_BODY_SLAM, MOVE_CROSS_CHOP, MOVE_NIGHT_SLASH, MOVE_HONE_CLAWS}
    },
    {
    .lvl = 2,
    .species = SPECIES_ESPATHRA,
    .heldItem = ITEM_TWISTED_SPOON,
    .ability = ABILITY_SPEED_BOOST,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_LUMINA_CRASH, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_PSYCHIC_TERRAIN}
    },
    {
    .lvl = 2,
    .species = SPECIES_KRICKETUNE,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_TECHNICIAN,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_PIN_MISSILE, MOVE_FELL_STINGER, MOVE_AERIAL_ACE, MOVE_BULLET_SEED}
    }
};
static const struct TrainerMon sParty_Calvin_easy[] = {
    {
    .lvl = 2,
    .species = SPECIES_ZIGZAGOON_GALARIAN,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_SNARL, MOVE_HEADBUTT, MOVE_LICK, MOVE_PIN_MISSILE}
    },
    {
    .lvl = 2,
    .species = SPECIES_FLITTLE,
    .heldItem = ITEM_SHARP_BEAK,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_CONFUSION, MOVE_DISARMING_VOICE, MOVE_QUICK_ATTACK, MOVE_PECK}
    },
    {
    .lvl = 2,
    .species = SPECIES_KRICKETOT,
    .heldItem = ITEM_SILVERPOWDER,
    .moves = {MOVE_STRUGGLE_BUG, MOVE_UPROAR, MOVE_BIDE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Calvin1[] = {
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    }
};
static const struct TrainerMon sParty_Calvin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_MIGHTYENA,
    }
};
static const struct TrainerMon sParty_Calvin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_MIGHTYENA,
    }
};
static const struct TrainerMon sParty_Calvin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    }
};
static const struct TrainerMon sParty_Calvin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MIGHTYENA,
    }
};

//Bug Catcher Rick: threshold 2
static const struct TrainerMon sParty_Rick[] = {
    {
    .lvl = 12,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_EXPERT_BELT,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_LEECH_LIFE, MOVE_QUIVER_DANCE}
    },
    {
    .lvl = 12,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_BUG_BUZZ, MOVE_MOONLIGHT}
    }
};
static const struct TrainerMon sParty_Rick_easy[] = {
    {
    .lvl = 10,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_GUST, MOVE_MEGA_DRAIN, MOVE_LEECH_LIFE, MOVE_POISON_STING}
    },
    {
    .lvl = 10,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_CONFUSION, MOVE_VENOSHOCK, MOVE_SILVER_WIND, MOVE_MOONLIGHT}
    }
};

//Youngster Allen: threshold 3
static const struct TrainerMon sParty_Allen[] = {
    {
    .lvl = 12,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_WIDE_LENS,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_AIR_SLASH, MOVE_ROOST}
    },
    {
    .lvl = 12,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_SCOPE_LENS,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FOCUS_ENERGY, MOVE_STEEL_WING}
    },
    {
    .lvl = 12,
    .species = SPECIES_DODRIO,
    .heldItem = ITEM_MUSCLE_BAND,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_QUICK_ATTACK, MOVE_JUMP_KICK}
    }
};
static const struct TrainerMon sParty_Allen_easy[] = {
    {
    .lvl = 7,
    .species = SPECIES_HOOTHOOT,
    .heldItem = ITEM_SHARP_BEAK,
    .moves = {MOVE_PECK, MOVE_CONFUSION, MOVE_ECHOED_VOICE, MOVE_REFLECT}
    },
    {
    .lvl = 7,
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_FOCUS_ENERGY, MOVE_NONE}
    },
    {
    .lvl = 7,
    .species = SPECIES_DODUO,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_PLUCK, MOVE_DOUBLE_HIT, MOVE_QUICK_ATTACK, MOVE_LOW_KICK}
    }
};

//Lass Tiana: threshold 3
static const struct TrainerMon sParty_Tiana[] = {
    {
    .lvl = 13,
    .species = SPECIES_PERSIAN,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_TECHNICIAN,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_FAKE_OUT, MOVE_BITE, MOVE_FURY_SWIPES, MOVE_ASSIST}
    },
    {
    .lvl = 13,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_MIRACLE_SEED,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_SPORE, MOVE_DRAIN_PUNCH, MOVE_LEECH_SEED, MOVE_SEED_BOMB}
    },
    {
    .lvl = 13,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_MYSTIC_WATER,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_CLOSE_COMBAT, MOVE_WATERFALL, MOVE_THROAT_CHOP, MOVE_HYPNOSIS}
    },
    {
    .lvl = 13,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_CHARCOAL,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_FLAMETHROWER, MOVE_EXTRASENSORY, MOVE_HEX, MOVE_WILL_O_WISP}
    }
};
static const struct TrainerMon sParty_Tiana_easy[] = {
    {
    .lvl = 7,
    .species = SPECIES_MEOWTH,
    .heldItem = ITEM_SILK_SCARF,
    .moves = {MOVE_FAKE_OUT, MOVE_BITE, MOVE_FURY_SWIPES, MOVE_ASSIST}
    },
    {
    .lvl = 7,
    .species = SPECIES_SHROOMISH,
    .heldItem = ITEM_MIRACLE_SEED,
    .moves = {MOVE_MEGA_DRAIN, MOVE_HEADBUTT, MOVE_LEECH_SEED, MOVE_BULLET_SEED}
    },
    {
    .lvl = 7,
    .species = SPECIES_POLIWAG,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_MUD_SHOT, MOVE_POUND, MOVE_HYPNOSIS}
    },
    {
    .lvl = 7,
    .species = SPECIES_VULPIX,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_INCINERATE, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_WILL_O_WISP}
    }
};

//Ranger-F Eva: threshold 3
//requires Cut to access
static const struct TrainerMon sParty_Eva[] = {
    {
    .lvl = 12,
    .species = SPECIES_TSAREENA,
    .heldItem = ITEM_MIRACLE_SEED,
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
    .moves = {MOVE_POWER_WHIP, MOVE_TRIPLE_AXEL, MOVE_RAPID_SPIN, MOVE_LOW_SWEEP}
    },
    {
    .lvl = 12,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_THROAT_SPRAY,
    .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
    .moves = {MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_DRAINING_KISS, MOVE_FLAMETHROWER}
    },
    {
    .lvl = 12,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SCREECH, MOVE_HEAVY_SLAM}
    },
    {
    .lvl = 12,
    .species = SPECIES_LUMINEON,
    .heldItem = ITEM_DAMP_ROCK,
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
    .moves = {MOVE_SURF, MOVE_AIR_SLASH, MOVE_TAILWIND, MOVE_RAIN_DANCE}
    },
    {
    .lvl = 12,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
    .moves = {MOVE_FREEZE_DRY, MOVE_ICE_FANG, MOVE_ICE_SHARD, MOVE_CRUNCH}
    }
};
static const struct TrainerMon sParty_Eva_easy[] = {
    {
    .lvl = 9,
    .species = SPECIES_STEENEE,
    .heldItem = ITEM_MIRACLE_SEED,
    .moves = {MOVE_RAZOR_LEAF, MOVE_CHARM, MOVE_RAPID_SPIN, MOVE_LOW_SWEEP}
    },
    {
    .lvl = 9,
    .species = SPECIES_JIGGLYPUFF,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_SWEET_KISS, MOVE_ECHOED_VOICE, MOVE_DISARMING_VOICE, MOVE_DISABLE}
    },
    {
    .lvl = 9,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_ROCK_TOMB, MOVE_BULLDOZE, MOVE_SCREECH, MOVE_SLAM}
    },
    {
    .lvl = 9,
    .species = SPECIES_FINNEON,
    .heldItem = ITEM_DAMP_ROCK,
    .moves = {MOVE_WATER_PULSE, MOVE_GUST, MOVE_CONFUSE_RAY, MOVE_RAIN_DANCE}
    },
    {
    .lvl = 9,
    .species = SPECIES_SNORUNT,
    .heldItem = ITEM_BRIGHT_POWDER,
    .moves = {MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_ICE_SHARD, MOVE_ASTONISH}
    }
};

//Beauty Gloria: threshold 3
//requires Cut to access
static const struct TrainerMon sParty_Gloria[] = {
    {
    .lvl = 12,
    .species = SPECIES_LOPUNNY,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_LIMBER,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_PLAY_ROUGH, MOVE_QUICK_ATTACK, MOVE_DOUBLE_EDGE}
    },
    {
    .lvl = 12,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_MUSCLE_BAND,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .moves = {MOVE_CLOSE_COMBAT, MOVE_VACUUM_WAVE, MOVE_IRON_HEAD, MOVE_BULLET_PUNCH}
    },
    {
    .lvl = 12,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_ASSAULT_VEST,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .moves = {MOVE_ICE_SHARD, MOVE_RAZOR_SHELL, MOVE_ROCK_BLAST, MOVE_ICICLE_SPEAR}
    },
    {
    .lvl = 12,
    .species = SPECIES_SERPERIOR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CONTRARY,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .moves = {MOVE_DRAGON_PULSE, MOVE_LEAF_STORM, MOVE_SUBSTITUTE, MOVE_GLARE}
    },
    {
    .lvl = 12,
    .species = SPECIES_MAROWAK_ALOLAN,
    .heldItem = ITEM_THICK_CLUB,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .moves = {MOVE_SHADOW_BONE, MOVE_EARTHQUAKE, MOVE_FLARE_BLITZ, MOVE_CURSE}
    }
};
static const struct TrainerMon sParty_Gloria_easy[] = {
    {
    .lvl = 9,
    .species = SPECIES_BUNEARY,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = ABILITY_LIMBER,
    .moves = {MOVE_DOUBLE_KICK, MOVE_CHARM, MOVE_QUICK_ATTACK, MOVE_FRUSTRATION}
    },
    {
    .lvl = 9,
    .species = SPECIES_RIOLU,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_FORCE_PALM, MOVE_VACUUM_WAVE, MOVE_QUICK_ATTACK, MOVE_BULLET_PUNCH}
    },
    {
    .lvl = 9,
    .species = SPECIES_SHELLDER,
    .heldItem = ITEM_BINDING_BAND,
    .moves = {MOVE_ICE_SHARD, MOVE_WHIRLPOOL, MOVE_SPIKES, MOVE_WATER_PULSE}
    },
    {
    .lvl = 9,
    .species = SPECIES_SERVINE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_TWISTER, MOVE_LEAF_TORNADO, MOVE_GROWTH, MOVE_GLARE}
    },
    {
    .lvl = 9,
    .species = SPECIES_CUBONE,
    .heldItem = ITEM_THICK_CLUB,
    .moves = {MOVE_HEADBUTT, MOVE_STOMPING_TANTRUM, MOVE_FIRE_PUNCH, MOVE_CURSE}
    }
};


//ROUTE 103 TRAINERS (done)

//Aroma Lady Daisy: threshold 2
static const struct TrainerMon sParty_Daisy[] = {
    {
    .lvl = 13,
    .species = SPECIES_ELDEGOSS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_COTTON_DOWN,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_POLLEN_PUFF, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SYNTHESIS}
    },
    {
    .lvl = 13,
    .species = SPECIES_VICTREEBEL,
    .heldItem = ITEM_STARF_BERRY,
    .ability = ABILITY_GLUTTONY,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_LEECH_LIFE, MOVE_STRENGTH_SAP, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN}
    }
};
static const struct TrainerMon sParty_Daisy_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_GOSSIFLEUR,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_COTTON_DOWN,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_POLLEN_PUFF, MOVE_LEAF_TORNADO, MOVE_LEECH_SEED, MOVE_SYNTHESIS}
    },
    {
    .lvl = 13,
    .species = SPECIES_BELLSPROUT,
    .heldItem = ITEM_STARF_BERRY,
    .ability = ABILITY_GLUTTONY,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_LEECH_LIFE, MOVE_STRENGTH_SAP, MOVE_ACID_SPRAY, MOVE_RAZOR_LEAF}
    }
};

//Twins Amy and Liv: threshold 0
//always double battle, no easy version
static const struct TrainerMon sParty_AmyAndLiv[] = {
    {
    .lvl = 16,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_PLUS,
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_GEAR_UP, MOVE_ELECTROWEB, MOVE_THUNDERBOLT, MOVE_GRASS_KNOT}
    },
    {
    .lvl = 16,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_MINUS,
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_MAGNETIC_FLUX, MOVE_NUZZLE, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    }
};
//vanilla
static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
    .lvl = 15,
    .species = SPECIES_PLUSLE,
    },
    {
    .lvl = 15,
    .species = SPECIES_MINUN,
    }
};
static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_MINUN,
    }
};
static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
    .lvl = 9,
    .species = SPECIES_PLUSLE,
    },
    {
    .lvl = 9,
    .species = SPECIES_MINUN,
    }
};
static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_MINUN,
    }
};
static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_MINUN,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};
static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MINUN,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

//Fisherman Andrew: threshold 2
static const struct TrainerMon sParty_Andrew[] = {
    {
    .lvl = 12,
    .species = SPECIES_BASCULIN_BLUE_STRIPED,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_ROCK_HEAD,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE}
    },
    {
    .lvl = 12,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_CLEAR_BODY,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_SLUDGE_BOMB, MOVE_SURF, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN}
    },
    {
    .lvl = 12,
    .species = SPECIES_BASCULIN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_RECKLESS,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE}
    },
};
static const struct TrainerMon sParty_Andrew_easy[] = {
    {
    .lvl = 12,
    .species = SPECIES_BASCULIN_BLUE_STRIPED,
    .heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_HEAD_SMASH, MOVE_TAKE_DOWN}
    },
    {
    .lvl = 12,
    .species = SPECIES_TENTACOOL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_POISON_JAB, MOVE_SURF, MOVE_AURORA_BEAM, MOVE_GIGA_DRAIN}
    },
    {
    .lvl = 12,
    .species = SPECIES_BASCULIN,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_HEAD_SMASH, MOVE_TAKE_DOWN}
    },
};

//Pokefan-M Miguel: threshold 1
static const struct TrainerMon sParty_Miguel[] = {
    {
    .lvl = 16,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_CUTE_CHARM,
    .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_THUNDER_WAVE, MOVE_WISH, MOVE_CHARM, MOVE_FACADE}
    },
    {
    .lvl = 16,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_WONDER_SKIN,
    .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_NASTY_PLOT, MOVE_UPROAR, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },
    {
    .lvl = 16,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_WONDER_SKIN,
    .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FAKE_OUT, MOVE_LAST_RESORT, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Miguel_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_CUTE_CHARM,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_THUNDER_WAVE, MOVE_WISH, MOVE_CHARM, MOVE_FACADE}
    },
    {
    .lvl = 16,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_NASTY_PLOT, MOVE_UPROAR, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },
    {
    .lvl = 16,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SILK_SCARF,
    .moves = {MOVE_FAKE_OUT, MOVE_LAST_RESORT, MOVE_NONE, MOVE_NONE}
    }
};
//vanilla
static const struct TrainerMon sParty_Miguel1[] = {
    {
    .lvl = 15,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};
static const struct TrainerMon sParty_Miguel2[] = {
    {
    .lvl = 29,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};
static const struct TrainerMon sParty_Miguel3[] = {
    {
    .lvl = 32,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};
static const struct TrainerMon sParty_Miguel4[] = {
    {
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};
static const struct TrainerMon sParty_Miguel5[] = {
    {
    .lvl = 38,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

//Black Belt Rhett: threshold 0
//double with Marcos if at least 3 badges
//requires Cut to access
static const struct TrainerMon sParty_Rhett[] = {
    {
    .lvl = 16,
    .species = SPECIES_HAKAMO_O,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_SOUNDPROOF,
    .ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DRAGON_DANCE, MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_SHADOW_CLAW}
    },
    {
    .lvl = 16,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_GUTS,
    .ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_ICE_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_ELECTIVIRE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_MOTOR_DRIVE,
    .ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_PLASMA_FISTS, MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_TRAILBLAZE}
    }
};

//Guitarist Marcos: threshold 0
//double with Rhett if at least 3 badges
//requires Cut to access
static const struct TrainerMon sParty_Marcos[] = {
    {
    .lvl = 16,
    .species = SPECIES_TOXTRICITY_AMPED,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_PUNK_ROCK,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_BOOMBURST, MOVE_OVERDRIVE, MOVE_SHIFT_GEAR, MOVE_POISON_JAB}
    },
    {
    .lvl = 16,
    .species = SPECIES_ROTOM_FROST,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_LEVITATE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_DISCHARGE, MOVE_HEX, MOVE_BLIZZARD, MOVE_HYPER_VOICE}
    },
    {
    .lvl = 16,
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_BIG_ROOT,
    .ability = ABILITY_DRY_SKIN,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_GRASS_KNOT, MOVE_GLARE, MOVE_HYPER_VOICE}
    }
};

//Swimmer-F Isabelle: threshold 3
//may double with Pete
static const struct TrainerMon sParty_Isabelle[] = {
    {
    .lvl = 16,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_HUGE_POWER,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BOUNCE, MOVE_BODY_SLAM, MOVE_WATERFALL, MOVE_PLAY_ROUGH}
    },
    {
    .lvl = 16,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_STRONG_JAW,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_COIL, MOVE_AQUA_TAIL}
    }
};
static const struct TrainerMon sParty_Isabelle_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_BOUNCE, MOVE_BODY_SLAM, MOVE_WATERFALL, MOVE_PLAY_ROUGH}
    },
    {
    .lvl = 16,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_COIL, MOVE_AQUA_TAIL}
    }
};

//Swimmer-M Pete: threshold 3
//may double with Isabelle
static const struct TrainerMon sParty_Pete[] = {
    {
    .lvl = 16,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_LIGHTNING_ROD,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FISHIOUS_REND, MOVE_MEGAHORN, MOVE_DRILL_RUN, MOVE_AGILITY}
    },
    {
    .lvl = 16,
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_DAZZLING,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_DRAINING_KISS, MOVE_MUDDY_WATER, MOVE_SHELL_SMASH, MOVE_ICE_BEAM}
    }
};
static const struct TrainerMon sParty_Pete_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_GOLDEEN,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_WATERFALL, MOVE_MEGAHORN, MOVE_DRILL_RUN, MOVE_AGILITY}
    },
    {
    .lvl = 16,
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_DAZZLING,
    .moves = {MOVE_DRAINING_KISS, MOVE_MUDDY_WATER, MOVE_SHELL_SMASH, MOVE_ICE_BEAM}
    }
};


//ROUTE 104 TRAINERS (done)

//Lass Haley: threshold 2
static const struct TrainerMon sParty_Haley[] = {
    {
    .lvl = 12,
    .species = SPECIES_SIMISAGE,
    .heldItem = ITEM_STARF_BERRY,
    .ability = ABILITY_GLUTTONY,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_ROCK_SLIDE, MOVE_SEED_BOMB, MOVE_TICKLE, MOVE_SPIKY_SHIELD}
    },
    {
    .lvl = 12,
    .species = SPECIES_SIMISEAR,
    .heldItem = ITEM_STARF_BERRY,
    .ability = ABILITY_GLUTTONY,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT, MOVE_KNOCK_OFF}
    },
    {
    .lvl = 12,
    .species = SPECIES_SIMIPOUR,
    .heldItem = ITEM_STARF_BERRY,
    .ability = ABILITY_GLUTTONY,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_WORK_UP, MOVE_GUNK_SHOT}
    }
};
static const struct TrainerMon sParty_Haley_easy[] = {
    {
    .lvl = 12,
    .species = SPECIES_PANSAGE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_GLUTTONY,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_ACROBATICS, MOVE_SEED_BOMB, MOVE_LEECH_SEED, MOVE_CRUNCH}
    },
    {
    .lvl = 12,
    .species = SPECIES_PANSEAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_GLUTTONY,
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_INCINERATE, MOVE_LOW_SWEEP, MOVE_YAWN, MOVE_KNOCK_OFF}
    },
    {
    .lvl = 12,
    .species = SPECIES_PANPOUR,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_GLUTTONY,
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_BRINE, MOVE_ICE_PUNCH, MOVE_WORK_UP, MOVE_GUNK_SHOT}
    }
};
//vanilla
static const struct TrainerMon sParty_Haley1[] = {
    {
    .lvl = 6,
    .species = SPECIES_LOTAD,
    },
    {
    .lvl = 6,
    .species = SPECIES_SHROOMISH,
    }
};
static const struct TrainerMon sParty_Haley2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    }
};
static const struct TrainerMon sParty_Haley3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_BRELOOM,
    }
};
static const struct TrainerMon sParty_Haley4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    }
};
static const struct TrainerMon sParty_Haley5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

//Fisherman Ivan: threshold 4
static const struct TrainerMon sParty_Ivan[] = {
    {
    .lvl = 7,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_OUTRAGE}
    },
    {
    .lvl = 7,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_MIRROR_COAT}
    },
    {
    .lvl = 7,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_CHESTO_BERRY,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_WATER_SPOUT, MOVE_BODY_SLAM, MOVE_BOUNCE, MOVE_REST}
    }
};
static const struct TrainerMon sParty_Ivan_easy[] = {
    {
    .lvl = 7,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_FLAIL, MOVE_WATERFALL, MOVE_BOUNCE, MOVE_NONE}
    },
    {
    .lvl = 7,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_TICKLE, MOVE_MIRROR_COAT}
    },
    {
    .lvl = 7,
    .species = SPECIES_WAILMER,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SURF, MOVE_BODY_SLAM, MOVE_BOUNCE, MOVE_REST}
    }
};

//Twins Gina and Mia: threshold 2
//twins double
static const struct TrainerMon sParty_GinaAndMia[] = {
    {
    .lvl = 14,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_DANCER,
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_MUDDY_WATER, MOVE_FAKE_OUT}
    },
    {
    .lvl = 14,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_WIND_RIDER,
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_ROCK_SLIDE, MOVE_TAILWIND}
    }
};
static const struct TrainerMon sParty_GinaAndMia_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_LOMBRE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_OWN_TEMPO,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_MEGA_DRAIN, MOVE_ICY_WIND, MOVE_MUDDY_WATER, MOVE_FAKE_OUT}
    },
    {
    .lvl = 14,
    .species = SPECIES_NUZLEAF,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_EARLY_BIRD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE}
    }
};
//vanilla
static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
    .lvl = 6,
    .species = SPECIES_SEEDOT,
    },
    {
    .lvl = 6,
    .species = SPECIES_LOTAD,
    }
};
static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
    .lvl = 10,
    .species = SPECIES_DUSKULL,
    .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 10,
    .species = SPECIES_SHROOMISH,
    .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

//Rich Boy Winston: threshold 2
static const struct TrainerMon sParty_Winston[] = {
    {
    .lvl = 10,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_VOLT_ABSORB,
    .ev = TRAINER_PARTY_EVS(100, 100, 100, 0, 100, 100),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_SWIFT}
    },
    {
    .lvl = 10,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_WATER_ABSORB,
    .ev = TRAINER_PARTY_EVS(100, 100, 100, 0, 100, 100),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_TOXIC, MOVE_WISH, MOVE_ICE_BEAM, MOVE_SURF}
    },
    {
    .lvl = 10,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_FLASH_FIRE,
    .ev = TRAINER_PARTY_EVS(100, 100, 100, 0, 100, 100),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_TICKLE, MOVE_FLARE_BLITZ, MOVE_BODY_SLAM, MOVE_TRAILBLAZE}
    }
};
static const struct TrainerMon sParty_Winston_easy[] = {
    {
    .lvl = 10,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_SWIFT}
    },
    {
    .lvl = 10,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_TOXIC, MOVE_WISH, MOVE_AURORA_BEAM, MOVE_WATER_PULSE}
    },
    {
    .lvl = 10,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_TICKLE, MOVE_FIRE_FANG, MOVE_BODY_SLAM, MOVE_TRAILBLAZE}
    }
};
//vanilla
static const struct TrainerMon sParty_Winston1[] = {
    {
    .lvl = 7,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    }
};
static const struct TrainerMon sParty_Winston2[] = {
    {
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};
static const struct TrainerMon sParty_Winston3[] = {
    {
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};
static const struct TrainerMon sParty_Winston4[] = {
    {
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};
static const struct TrainerMon sParty_Winston5[] = {
    {
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

//Lady Cindy: threshold 2
static const struct TrainerMon sParty_Cindy[] = {
    {
    .lvl = 10,
    .species = SPECIES_SYLVEON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PIXILATE,
    .ev = TRAINER_PARTY_EVS(100, 100, 100, 0, 100, 100),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .moves = {MOVE_HYPER_VOICE, MOVE_QUICK_ATTACK, MOVE_WISH, MOVE_PSYCHIC}
    },
    {
    .lvl = 10,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SAP_SIPPER,
    .ev = TRAINER_PARTY_EVS(100, 100, 100, 0, 100, 100),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_SAPPY_SEED, MOVE_JUMP_KICK, MOVE_X_SCISSOR, MOVE_QUICK_ATTACK}
    },
    {
    .lvl = 10,
    .species = SPECIES_GLACEON,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .ability = ABILITY_CLEAR_BODY,
    .ev = TRAINER_PARTY_EVS(100, 100, 100, 0, 100, 100),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_ICE_BEAM, MOVE_FLASH_CANNON, MOVE_FREEZE_DRY, MOVE_ICE_SHARD}
    }
};
static const struct TrainerMon sParty_Cindy_easy[] = {
    {
    .lvl = 10,
    .species = SPECIES_SYLVEON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CUTE_CHARM,
    .moves = {MOVE_HYPER_VOICE, MOVE_QUICK_ATTACK, MOVE_WISH, MOVE_PSYCHIC}
    },
    {
    .lvl = 10,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SAP_SIPPER,
    .moves = {MOVE_SEED_BOMB, MOVE_DOUBLE_KICK, MOVE_X_SCISSOR, MOVE_QUICK_ATTACK}
    },
    {
    .lvl = 10,
    .species = SPECIES_GLACEON,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_SWIFT, MOVE_ICE_SHARD}
    }
};
//vanilla
static const struct TrainerMon sParty_Cindy1[] = {
    {
    .lvl = 7,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    }
};
static const struct TrainerMon sParty_Cindy2[] = {
    {
    .lvl = 11,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Cindy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};
static const struct TrainerMon sParty_Cindy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};
static const struct TrainerMon sParty_Cindy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};
static const struct TrainerMon sParty_Cindy6[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

//Youngster Billy: threshold 4
static const struct TrainerMon sParty_Billy[] = {
    {
    .lvl = 11,
    .species = SPECIES_KOMALA,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_WOOD_HAMMER, MOVE_SUCKER_PUNCH, MOVE_BODY_SLAM, MOVE_STOMPING_TANTRUM}
    },
    {
    .lvl = 11,
    .species = SPECIES_PALOSSAND,
    .heldItem = ITEM_ROCKY_HELMET,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_EARTH_POWER, MOVE_SHORE_UP, MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL}
    }
};
static const struct TrainerMon sParty_Billy_easy[] = {
    {
    .lvl = 11,
    .species = SPECIES_KOMALA,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SEED_BOMB, MOVE_SUCKER_PUNCH, MOVE_BODY_SLAM, MOVE_STOMPING_TANTRUM}
    },
    {
    .lvl = 11,
    .species = SPECIES_SANDYGAST,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_EARTH_POWER, MOVE_SHORE_UP, MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL}
    }
};

//Fisherman Darian: threshold 3
static const struct TrainerMon sParty_Darian[] = {
    {
    .lvl = 8,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_SHED_SKIN,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_THUNDER_WAVE, MOVE_DRAGON_TAIL, MOVE_WATERFALL, MOVE_SLAM}
    },
    {
    .lvl = 8,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_WILD_CHARGE, MOVE_ICE_BEAM}
    }
};
static const struct TrainerMon sParty_Darian_easy[] = {
    {
    .lvl = 8,
    .species = SPECIES_DRATINI,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_SHED_SKIN,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_THUNDER_WAVE, MOVE_DRAGON_TAIL, MOVE_WATERFALL, MOVE_SLAM}
    },
    {
    .lvl = 8,
    .species = SPECIES_BARBOACH,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_BULLDOZE, MOVE_MUDDY_WATER, MOVE_SPARK, MOVE_ICY_WIND}
    }
};


//ROUTE 105 TRAINERS (done)
//all require Surf to access

//Swimmer-M Luis: threshold 3
static const struct TrainerMon sParty_Luis[] = {
    {
    .lvl = 14,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHELL_ARMOR,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_THUNDER, MOVE_FREEZE_DRY}
    },
    {
    .lvl = 14,
    .species = SPECIES_VELUZA,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_SHARPNESS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_FILLET_AWAY}
    }
};
static const struct TrainerMon sParty_Luis_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_THUNDER, MOVE_FREEZE_DRY}
    },
    {
    .lvl = 14,
    .species = SPECIES_VELUZA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_FILLET_AWAY}
    }
};

//Swimmer-M Dominik: threshold 3
static const struct TrainerMon sParty_Dominik[] = {
    {
    .lvl = 14,
    .species = SPECIES_GOLDUCK,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_NEUROFORCE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYDRO_PUMP, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_NASTY_PLOT}
    },
    {
    .lvl = 14,
    .species = SPECIES_KINGLER,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_RAZOR_SHELL, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_BODY_SLAM}
    }
};
static const struct TrainerMon sParty_Dominik_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_PSYDUCK,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_NASTY_PLOT}
    },
    {
    .lvl = 14,
    .species = SPECIES_KRABBY,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_RAZOR_SHELL, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_BODY_SLAM}
    }
};

//Swimmer-F Beverly: threshold 3
static const struct TrainerMon sParty_Beverly[] = {
    {
    .lvl = 13,
    .species = SPECIES_CETITAN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_THICK_FAT,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_ICE_SHARD, MOVE_ICICLE_CRASH, MOVE_BODY_SLAM, MOVE_BULLDOZE}
    },
    {
    .lvl = 13,
    .species = SPECIES_EISCUE,
    .heldItem = ITEM_SALAC_BERRY,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_ICICLE_SPEAR, MOVE_ZEN_HEADBUTT, MOVE_BELLY_DRUM, MOVE_SUBSTITUTE}
    },
    {
    .lvl = 13,
    .species = SPECIES_EMPOLEON,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_COMPETITIVE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_AIR_SLASH, MOVE_AQUA_JET}
    }
};
static const struct TrainerMon sParty_Beverly_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_CETODDLE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_THICK_FAT,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_ICE_SHARD, MOVE_AVALANCHE, MOVE_BODY_SLAM, MOVE_BULLDOZE}
    },
    {
    .lvl = 13,
    .species = SPECIES_EISCUE,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_ICICLE_SPEAR, MOVE_ZEN_HEADBUTT, MOVE_BELLY_DRUM, MOVE_SUBSTITUTE}
    },
    {
    .lvl = 16,
    .species = SPECIES_PRINPLUP,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_DEFIANT,
    .moves = {MOVE_BRINE, MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_AQUA_JET}
    }
};

//Swimmer-F Imani: threshold 3
static const struct TrainerMon sParty_Imani[] = {
    {
    .lvl = 13,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_VOLT_ABSORB,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SURF, MOVE_DISCHARGE, MOVE_ICE_BEAM, MOVE_SHADOW_BALL}
    },
    {
    .lvl = 13,
    .species = SPECIES_BASCULEGION_FEMALE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_ADAPTABILITY,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HEX, MOVE_AQUA_JET, MOVE_HYDRO_PUMP, MOVE_SHADOW_BALL}
    }
};
static const struct TrainerMon sParty_Imani_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_CHINCHOU,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SURF, MOVE_DISCHARGE, MOVE_ICE_BEAM, MOVE_SHADOW_BALL}
    },
    {
    .lvl = 13,
    .species = SPECIES_BASCULEGION_FEMALE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_HEX, MOVE_AQUA_JET, MOVE_SURF, MOVE_SHADOW_BALL}
    }
};

//Ruin Maniac Foster: threshold 3
static const struct TrainerMon sParty_Foster[] = {
    {
    .lvl = 13,
    .species = SPECIES_DUGTRIO_ALOLAN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_TANGLING_HAIR,
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH}
    },
    {
    .lvl = 13,
    .species = SPECIES_SANDSLASH_ALOLAN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_TOUGH_CLAWS,
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_IRON_HEAD, MOVE_TRIPLE_AXEL, MOVE_RAPID_SPIN, MOVE_SWORDS_DANCE}
    }
};
static const struct TrainerMon sParty_Foster_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_DIGLETT_ALOLAN,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_TANGLING_HAIR,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_IRON_HEAD, MOVE_BULLDOZE, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH}
    },
    {
    .lvl = 13,
    .species = SPECIES_SANDSHREW_ALOLAN,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_TOUGH_CLAWS,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_IRON_HEAD, MOVE_TRIPLE_AXEL, MOVE_RAPID_SPIN, MOVE_SWORDS_DANCE}
    }
};

//Bird Keeper Josue: threshold 3
//double with Andres
static const struct TrainerMon sParty_Josue[] = {
    {
    .lvl = 14,
    .species = SPECIES_KILOWATTREL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_COMPETITIVE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_DISCHARGE, MOVE_VOLT_SWITCH, MOVE_AIR_CUTTER, MOVE_ELECTROWEB}
    },
    {
    .lvl = 14,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_NO_GUARD,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_TAILWIND, MOVE_AIR_CUTTER}
    },
    {
    .lvl = 14,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_GUTS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_FACADE, MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_STEEL_WING}
    }
};
static const struct TrainerMon sParty_Josue_easy[] = {
    {
    .lvl = 12,
    .species = SPECIES_WATTREL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_COMPETITIVE,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_DISCHARGE, MOVE_VOLT_SWITCH, MOVE_AIR_CUTTER, MOVE_ELECTROWEB}
    },
    {
    .lvl = 12,
    .species = SPECIES_PIDGEOTTO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_NO_GUARD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_TAILWIND, MOVE_AIR_CUTTER}
    },
    {
    .lvl = 12,
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_GUTS,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_U_TURN, MOVE_STEEL_WING}
    }
};

//Ruin Maniac Andres: threshold 3
//double with Josue
static const struct TrainerMon sParty_Andres[] = {
    {
    .lvl = 16,
    .species = SPECIES_MAMOSWINE,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_OBLIVIOUS,
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_ICICLE_SPEAR, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_ICE_SHARD}
    },
    {
    .lvl = 16,
    .species = SPECIES_URSALUNA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAIN_PUNCH}
    }
};
static const struct TrainerMon sParty_Andres_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_SWINUB,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_OBLIVIOUS,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_ICICLE_SPEAR, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_ICE_SHARD}
    },
    {
    .lvl = 16,
    .species = SPECIES_TEDDIURSA,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_QUICK_FEET,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FACADE, MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK}
    }
};
//vanilla
static const struct TrainerMon sParty_Andres1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    }
};
static const struct TrainerMon sParty_Andres2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    }
};
static const struct TrainerMon sParty_Andres3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    }
};
static const struct TrainerMon sParty_Andres4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    }
};
static const struct TrainerMon sParty_Andres5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    }
};


//ROUTE 106 TRAINERS (done)

//Swimmer-M Douglas: threshold 3
static const struct TrainerMon sParty_Douglas[] = {
    {
    .lvl = 13,
    .species = SPECIES_PYUKUMUKU,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_INNARDS_OUT,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_TAUNT, MOVE_TOXIC}
    },
    {
    .lvl = 13,
    .species = SPECIES_QUAQUAVAL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_MOXIE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF}
    },
    {
    .lvl = 13,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_ICY_WIND, MOVE_LEECH_SEED, MOVE_TICKLE, MOVE_ZEN_HEADBUTT}
    }
};
static const struct TrainerMon sParty_Douglas_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_PYUKUMUKU,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_INNARDS_OUT,
    .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_TAUNT, MOVE_TOXIC}
    },
    {
    .lvl = 13,
    .species = SPECIES_QUAXWELL,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_MOXIE,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_LIQUIDATION, MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_RAPID_SPIN}
    },
    {
    .lvl = 13,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_LEFTOVERS,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_ICY_WIND, MOVE_LEECH_SEED, MOVE_TICKLE, MOVE_ZEN_HEADBUTT}
    }
};

//Swimmer-F Kyla: threshold 3
static const struct TrainerMon sParty_Kyla[] = {
    {
    .lvl = 13,
    .species = SPECIES_WISHIWASHI,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_WHIRLPOOL, MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .lvl = 13,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SPEED_BOOST,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_CRUNCH, MOVE_LIQUIDATION, MOVE_ICE_FANG, MOVE_POISON_FANG}
    }
};
static const struct TrainerMon sParty_Kyla_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_WISHIWASHI,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_WHIRLPOOL, MOVE_BRINE, MOVE_BULLDOZE, MOVE_ICE_BEAM}
    },
    {
    .lvl = 13,
    .species = SPECIES_CARVANHA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_CRUNCH, MOVE_LIQUIDATION, MOVE_ICE_FANG, MOVE_POISON_FANG}
    }
};

//Fisherman Elliot: threshold 4
static const struct TrainerMon sParty_Elliot[] = {
    {
    .lvl = 8,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_LIQUID_OOZE,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_TOXIC_SPIKES}
    },
    {
    .lvl = 8,
    .species = SPECIES_OCTILLERY,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_OCTAZOOKA, MOVE_GUNK_SHOT, MOVE_BULLET_SEED, MOVE_FIRE_BLAST}
    }
};
static const struct TrainerMon sParty_Elliot_easy[] = {
    {
    .lvl = 8,
    .species = SPECIES_TENTACOOL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_LIQUID_OOZE,
    .moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_TOXIC_SPIKES}
    },
    {
    .lvl = 8,
    .species = SPECIES_REMORAID,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_WATER_PULSE, MOVE_GUNK_SHOT, MOVE_BULLET_SEED, MOVE_FIRE_BLAST}
    }
};
//vanilla
static const struct TrainerMon sParty_Elliot1[] = {
    {
    .lvl = 10,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 7,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 10,
    .species = SPECIES_MAGIKARP,
    }
};
static const struct TrainerMon sParty_Elliot2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    }
};
static const struct TrainerMon sParty_Elliot3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    }
};
static const struct TrainerMon sParty_Elliot4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    }
};
static const struct TrainerMon sParty_Elliot5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

//Fisherman Ned: threshold 4
static const struct TrainerMon sParty_Ned[] = {
    {
    .lvl = 8,
    .species = SPECIES_SAMUROTT_HISUIAN,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SHARPNESS,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_CEASELESS_EDGE, MOVE_RAZOR_SHELL, MOVE_AQUA_JET, MOVE_AERIAL_ACE}
    },
    {
    .lvl = 8,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SOUL_HEART,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_ICE_BEAM, MOVE_DRAINING_KISS, MOVE_MOONBLAST, MOVE_SURF}
    }
};
static const struct TrainerMon sParty_Ned_easy[] = {
    {
    .lvl = 8,
    .species = SPECIES_OSHAWOTT,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_RAZOR_SHELL, MOVE_AQUA_JET, MOVE_AERIAL_ACE}
    },
    {
    .lvl = 8,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_ICY_WIND, MOVE_DRAINING_KISS, MOVE_AQUA_JET, MOVE_WATER_PULSE}
    }
};

//Ninja Boy Owen: threshold 3
static const struct TrainerMon sParty_Owen[] = {
    {
    .lvl = 12,
    .species = SPECIES_OVERQWIL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_INTIMIDATE,
    .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_BARB_BARRAGE, MOVE_TOXIC_SPIKES, MOVE_DESTINY_BOND, MOVE_CRUNCH}
    },
    {
    .lvl = 12,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_ROCK_HEAD,
    .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_WOOD_HAMMER, MOVE_HEAD_SMASH, MOVE_SUCKER_PUNCH, MOVE_EXPLOSION}
    },
    {
    .lvl = 12,
    .species = SPECIES_KECLEON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_ADAPTABILITY,
    .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_RETALIATE, MOVE_DRAIN_PUNCH, MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK}
    }
};
static const struct TrainerMon sParty_Owen_easy[] = {
    {
    .lvl = 12,
    .species = SPECIES_QWILFISH_HISUIAN,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_POISON_JAB, MOVE_TOXIC_SPIKES, MOVE_DESTINY_BOND, MOVE_BITE}
    },
    {
    .lvl = 12,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_SEED_BOMB, MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH, MOVE_EXPLOSION}
    },
    {
    .lvl = 12,
    .species = SPECIES_KECLEON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_RETALIATE, MOVE_DRAIN_PUNCH, MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK}
    }
};

//Beauty Michelle: threshold 4
static const struct TrainerMon sParty_Michelle[] = {
    {
    .lvl = 10,
    .species = SPECIES_GLIMMORA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_TOXIC_DEBRIS,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_MORTAL_SPIN, MOVE_VENOSHOCK, MOVE_POWER_GEM, MOVE_ENERGY_BALL}
    },
    {
    .lvl = 10,
    .species = SPECIES_GASTRODON_EAST_SEA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STORM_DRAIN,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_MUDDY_WATER, MOVE_RECOVER}
    },
    {
    .lvl = 10,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_FLASH_FIRE,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPNOSIS, MOVE_FIRE_BLAST, MOVE_EXTRASENSORY, MOVE_DARK_PULSE}
    }
};
static const struct TrainerMon sParty_Michelle_easy[] = {
    {
    .lvl = 10,
    .species = SPECIES_GLIMMET,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_TOXIC_DEBRIS,
    .moves = {MOVE_ACID_SPRAY, MOVE_SELF_DESTRUCT, MOVE_ANCIENT_POWER, MOVE_ENERGY_BALL}
    },
    {
    .lvl = 10,
    .species = SPECIES_SHELLOS_EAST_SEA,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_STORM_DRAIN,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_MUDDY_WATER, MOVE_RECOVER}
    },
    {
    .lvl = 10,
    .species = SPECIES_VULPIX,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_FLASH_FIRE,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPNOSIS, MOVE_FIRE_BLAST, MOVE_EXTRASENSORY, MOVE_DARK_PULSE}
    }
};


//ROUTE 107 TRAINERS (done)

//Swimmer-M Darrin: threshold 2
static const struct TrainerMon sParty_Darrin[] = {
    {
    .lvl = 13,
    .species = SPECIES_PALAFIN,
    .heldItem = ITEM_EJECT_BUTTON,
    .ability = ABILITY_ZERO_TO_HERO,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_JET_PUNCH, MOVE_FLIP_TURN, MOVE_ICE_PUNCH, MOVE_DRAIN_PUNCH}
    },
    {
    .lvl = 13,
    .species = SPECIES_WUGTRIO,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_GOOEY,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_TRIPLE_DIVE, MOVE_SUCKER_PUNCH, MOVE_BULLDOZE, MOVE_FOUL_PLAY}
    }
};
static const struct TrainerMon sParty_Darrin_easy[] = {
    {
    .lvl = 11,
    .species = SPECIES_PALAFIN,
    .heldItem = ITEM_EJECT_BUTTON,
    .ability = ABILITY_ZERO_TO_HERO,
    .moves = {MOVE_JET_PUNCH, MOVE_FLIP_TURN, MOVE_ICE_PUNCH, MOVE_DRAIN_PUNCH}
    },
    {
    .lvl = 15,
    .species = SPECIES_WIGLETT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_GOOEY,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_LIQUIDATION, MOVE_SUCKER_PUNCH, MOVE_BULLDOZE, MOVE_FOUL_PLAY}
    }
};

//Swimmer-M Tony: threshold 4
static const struct TrainerMon sParty_Tony[] = {
    {
    .lvl = 12,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = ABILITY_DRIZZLE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_U_TURN, MOVE_SURF, MOVE_HURRICANE, MOVE_ROOST}
    },
    {
    .lvl = 12,
    .species = SPECIES_QWILFISH,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_SWIFT_SWIM,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_POISON_JAB, MOVE_AQUA_TAIL, MOVE_SPIKES, MOVE_DESTINY_BOND}
    },
    {
    .lvl = 12,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = ABILITY_SWIFT_SWIM,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_ICE_PUNCH, MOVE_POWER_UP_PUNCH}
    }
};
static const struct TrainerMon sParty_Tony_easy[] = {
    {
    .lvl = 12,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = ABILITY_DRIZZLE,
    .moves = {MOVE_U_TURN, MOVE_SURF, MOVE_AIR_SLASH, MOVE_ROOST}
    },
    {
    .lvl = 12,
    .species = SPECIES_QWILFISH,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_POISON_JAB, MOVE_AQUA_TAIL, MOVE_SPIKES, MOVE_DESTINY_BOND}
    },
    {
    .lvl = 12,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_BULLDOZE, MOVE_WATERFALL, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE}
    }
};
//vanilla
static const struct TrainerMon sParty_Tony1[] = {
    {
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    }
};
static const struct TrainerMon sParty_Tony2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_SHARPEDO,
    }
};
static const struct TrainerMon sParty_Tony3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};
static const struct TrainerMon sParty_Tony4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_SHARPEDO,
    }
};
static const struct TrainerMon sParty_Tony5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_SHARPEDO,
    }
};

//Swimmer-F Denise: threshold 2
static const struct TrainerMon sParty_Denise[] = {
    {
    .lvl = 13,
    .species = SPECIES_FLOATZEL,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_WATER_BUBBLE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FAKE_OUT, MOVE_FLIP_TURN, MOVE_ICE_PUNCH, MOVE_SURGING_STRIKES}
    },
    {
    .lvl = 13,
    .species = SPECIES_FLOATZEL,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_WATER_BUBBLE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FAKE_OUT, MOVE_FLIP_TURN, MOVE_ICE_PUNCH, MOVE_SURGING_STRIKES}
    }
};
static const struct TrainerMon sParty_Denise_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_BUIZEL,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_WATER_BUBBLE,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FAKE_OUT, MOVE_FLIP_TURN, MOVE_ICE_PUNCH, MOVE_JET_PUNCH}
    },
    {
    .lvl = 13,
    .species = SPECIES_BUIZEL,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_WATER_BUBBLE,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FAKE_OUT, MOVE_FLIP_TURN, MOVE_ICE_PUNCH, MOVE_JET_PUNCH}
    }
};

//Swimmer-F Beth: threshold 2
//may double with Camron
static const struct TrainerMon sParty_Beth[] = {
    {
    .lvl = 13,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_VICTORY_STAR,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDER, MOVE_BLIZZARD}
    }
};
static const struct TrainerMon sParty_Beth_easy[] = {
    {
    .lvl = 11,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_VICTORY_STAR,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDER, MOVE_BLIZZARD}
    }
};

//Sis and Bro Lisa and Ray: threshold 2
//siblings double
static const struct TrainerMon sParty_LisaAndRay[] = {
    {
    .lvl = 15,
    .species = SPECIES_LUMINEON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_DAZZLING,
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_TAILWIND, MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP}
    },
    {
    .lvl = 14,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_LIGHTNING_ROD,
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FISHIOUS_REND, MOVE_MEGAHORN, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE}
    }
};
static const struct TrainerMon sParty_LisaAndRay_easy[] = {
    {
    .lvl = 15,
    .species = SPECIES_FINNEON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_DAZZLING,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_TAILWIND, MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP}
    },
    {
    .lvl = 14,
    .species = SPECIES_GOLDEEN,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_WATERFALL, MOVE_MEGAHORN, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE}
    }
};

//Swimmer-M Camron: threshold 2
//may double with Beth
static const struct TrainerMon sParty_Camron[] = {
    {
    .lvl = 13,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = ABILITY_WATER_ABSORB,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ROOST, MOVE_WIDE_GUARD}
    }
};
static const struct TrainerMon sParty_Camron_easy[] = {
    {
    .lvl = 11,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = ABILITY_WATER_ABSORB,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ROOST, MOVE_WIDE_GUARD}
    }
};

//Fisherman Kenneth: threshold 3
static const struct TrainerMon sParty_Kenneth[] = {
    {
    .lvl = 14,
    .species = SPECIES_TOXAPEX,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_MERCILESS,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SURF, MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_BANEFUL_BUNKER}
    },
    {
    .lvl = 14,
    .species = SPECIES_CURSOLA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PERISH_BODY,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_HEX, MOVE_STRENGTH_SAP, MOVE_DESTINY_BOND, MOVE_WILL_O_WISP}
    }
};
static const struct TrainerMon sParty_Kenneth_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_MAREANIE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_MERCILESS,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SURF, MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_PROTECT}
    },
    {
    .lvl = 14,
    .species = SPECIES_CORSOLA_GALARIAN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CURSED_BODY,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_HEX, MOVE_STRENGTH_SAP, MOVE_DESTINY_BOND, MOVE_WILL_O_WISP}
    }
};




//ROUTE 108 TRAINERS

//Swimmer-M Jerome: threshold 2
static const struct TrainerMon sParty_Jerome[] = {
    {
    .lvl = 14,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_CLEAR_BODY,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_TICKLE}
    },
    {
    .lvl = 14,
    .species = SPECIES_BIBAREL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SIMPLE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_WATERFALL, MOVE_FACADE, MOVE_AQUA_JET, MOVE_CURSE}
    }
};
static const struct TrainerMon sParty_Jerome_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_TENTACOOL,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_TICKLE}
    },
    {
    .lvl = 14,
    .species = SPECIES_BIBAREL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SIMPLE,
    .moves = {MOVE_WATERFALL, MOVE_FACADE, MOVE_AQUA_JET, MOVE_CURSE}
    }
};

//Swimmer-F Tara: threshold 3
static const struct TrainerMon sParty_Tara[] = {
    {
    .lvl = 16,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_SWIFT_SWIM,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DRAGON_DANCE, MOVE_WAVE_CRASH, MOVE_SCALE_SHOT, MOVE_BODY_SLAM}
    },
    {
    .lvl = 16,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_WATER_BUBBLE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_QUIVER_DANCE, MOVE_HYDRO_PUMP, MOVE_BUG_BUZZ, MOVE_AIR_SLASH}
    }
};
static const struct TrainerMon sParty_Tara_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_SEADRA,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DRAGON_DANCE, MOVE_WAVE_CRASH, MOVE_SCALE_SHOT, MOVE_BODY_SLAM}
    },
    {
    .lvl = 16,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_WATER_BUBBLE,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_QUIVER_DANCE, MOVE_HYDRO_PUMP, MOVE_BUG_BUZZ, MOVE_AIR_SLASH}
    }
};

//Swimmer-M Matthew: threshold 3
static const struct TrainerMon sParty_Matthew[] = {
    {
    .lvl = 15,
    .species = SPECIES_GOLISOPOD,
    .heldItem = ITEM_ASSAULT_VEST,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_RAZOR_SHELL, MOVE_ROCK_SLIDE, MOVE_LEECH_LIFE}
    },
    {
    .lvl = 15,
    .species = SPECIES_BARBARACLE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_TOUGH_CLAWS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_STONE_EDGE, MOVE_RAZOR_SHELL, MOVE_CROSS_CHOP, MOVE_POISON_JAB}
    }
};
static const struct TrainerMon sParty_Matthew_easy[] = {
    {
    .lvl = 15,
    .species = SPECIES_WIMPOD,
    .heldItem = ITEM_EVIOLITE,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_STRUGGLE_BUG, MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_LEECH_LIFE}
    },
    {
    .lvl = 15,
    .species = SPECIES_BINACLE,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_TOUGH_CLAWS,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_STONE_EDGE, MOVE_RAZOR_SHELL, MOVE_CROSS_CHOP, MOVE_POISON_JAB}
    }
};

//Swimmer-F Missy: threshold 3
static const struct TrainerMon sParty_Missy[] = {
    {
    .lvl = 13,
    .species = SPECIES_JELLICENT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CURSED_BODY,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_WATER_SPOUT, MOVE_RECOVER, MOVE_WILL_O_WISP, MOVE_HEX}
    },
    {
    .lvl = 13,
    .species = SPECIES_SWANNA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_NO_GUARD,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_AQUA_JET}
    }
};
static const struct TrainerMon sParty_Missy_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_FRILLISH,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CURSED_BODY,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SURF, MOVE_RECOVER, MOVE_WILL_O_WISP, MOVE_HEX}
    },
    {
    .lvl = 13,
    .species = SPECIES_DUCKLETT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_NO_GUARD,
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_AQUA_JET}
    }
};

//Cooltrainer-F Carolina: threshold 4
//double with Cory
static const struct TrainerMon sParty_Carolina[] = {
    {
    .lvl = 15,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_LIGHTNING_ROD,
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_NUZZLE, MOVE_VOLT_SWITCH, MOVE_FAKE_OUT, MOVE_ENDEAVOR}
    },
    {
    .lvl = 15,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_ROUGH_SKIN,
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BREAKING_SWIPE, MOVE_FIRE_FANG}
    },
    {
    .lvl = 15,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STORM_DRAIN,
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_BRINE, MOVE_ANCIENT_POWER}
    }
};
static const struct TrainerMon sParty_Carolina_easy[] = {
    {
    .lvl = 15,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_NUZZLE, MOVE_VOLT_SWITCH, MOVE_FAKE_OUT, MOVE_ENDEAVOR}
    },
    {
    .lvl = 15,
    .species = SPECIES_GABITE,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_ROUGH_SKIN,
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BREAKING_SWIPE, MOVE_FIRE_FANG}
    },
    {
    .lvl = 15,
    .species = SPECIES_LILEEP,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STORM_DRAIN,
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_BRINE, MOVE_ANCIENT_POWER}
    }
};

//Sailor Cory: threshold 3
//double with Carolina
static const struct TrainerMon sParty_Cory[] = {
    {
    .lvl = 15,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_HUGE_POWER,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_WATERFALL, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_ICE_PUNCH}
    },
    {
    .lvl = 15,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_DRAGON_DANCE, MOVE_LASH_OUT, MOVE_WATERFALL, MOVE_FIRE_BLAST}
    },
    {
    .lvl = 15,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_COMPETITIVE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_RECOVER, MOVE_COIL}
    }
};
static const struct TrainerMon sParty_Cory_easy[] = {
    {
    .lvl = 15,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_HUGE_POWER,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_WATERFALL, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_ICE_PUNCH}
    },
    {
    .lvl = 15,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_DRAGON_DANCE, MOVE_LASH_OUT, MOVE_WATERFALL, MOVE_FIRE_BLAST}
    },
    {
    .lvl = 15,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_COMPETITIVE,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_RECOVER, MOVE_COIL}
    }
};
//vanilla
static const struct TrainerMon sParty_Cory1[] = {
    {
    .lvl = 24,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 24,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    }
};
static const struct TrainerMon sParty_Cory2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    }
};
static const struct TrainerMon sParty_Cory3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_TENTACOOL,
    }
};
static const struct TrainerMon sParty_Cory4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};
static const struct TrainerMon sParty_Cory5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    }
};

//Running Triathlete-M Felix: threshold 3
static const struct TrainerMon sParty_Felix[] = {
    {
    .lvl = 13,
    .species = SPECIES_RIBOMBEE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SHIELD_DUST,
    .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_STICKY_WEB, MOVE_DRAINING_KISS, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE}
    },
    {
    .lvl = 13,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_VOLT_ABSORB,
    .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_SWIFT, MOVE_VOLT_SWITCH}
    },
    {
    .lvl = 13,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_QUICK_ATTACK}
    },
    {
    .lvl = 13,
    .species = SPECIES_TSAREENA,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_QUEENLY_MAJESTY,
    .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_TROP_KICK, MOVE_TRIPLE_AXEL, MOVE_HIGH_JUMP_KICK, MOVE_POWER_WHIP}
    }
};
static const struct TrainerMon sParty_Felix_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_CUTIEFLY,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SHIELD_DUST,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_STICKY_WEB, MOVE_DRAINING_KISS, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE}
    },
    {
    .lvl = 13,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_SWIFT, MOVE_VOLT_SWITCH}
    },
    {
    .lvl = 13,
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_QUICK_ATTACK}
    },
    {
    .lvl = 13,
    .species = SPECIES_STEENEE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_OBLIVIOUS,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_TRAILBLAZE, MOVE_TRIPLE_AXEL, MOVE_LOW_SWEEP, MOVE_LEAF_STORM}
    }
};



//ROUTE 109 TRAINERS

//Swimmer-M David: threshold 3
static const struct TrainerMon sParty_David[] = {
    {
    .lvl = 13,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHELL_ARMOR,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYDRO_PUMP, MOVE_ANCIENT_POWER, MOVE_ICE_BEAM, MOVE_TICKLE}
    },
    {
    .lvl = 13,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_BATTLE_ARMOR,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_LEECH_LIFE, MOVE_STONE_EDGE, MOVE_AQUA_JET, MOVE_LIQUIDATION}
    }
};
static const struct TrainerMon sParty_David_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_OMANYTE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHELL_ARMOR,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYDRO_PUMP, MOVE_ANCIENT_POWER, MOVE_ICE_BEAM, MOVE_TICKLE}
    },
    {
    .lvl = 13,
    .species = SPECIES_KABUTO,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_BATTLE_ARMOR,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_LEECH_LIFE, MOVE_STONE_EDGE, MOVE_AQUA_JET, MOVE_LIQUIDATION}
    }
};

//Swimmer-F Alice: threshold 0
static const struct TrainerMon sParty_Alice[] = {
    {
    .lvl = 13,
    .species = SPECIES_DREDNAW,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SHELL_ARMOR,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_JAW_LOCK, MOVE_LIQUIDATION, MOVE_HEAD_SMASH, MOVE_ICE_FANG}
    }
};

//Sailor Huey: threshold 2
static const struct TrainerMon sParty_Huey[] = {
    {
    .lvl = 15,
    .species = SPECIES_CRAMORANT,
    .heldItem = ITEM_LUM_BERRY,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_SURF, MOVE_DRILL_PECK, MOVE_ROOST, MOVE_ICE_BEAM}
    },
    {
    .lvl = 15,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_GUTS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BRICK_BREAK, MOVE_KNOCK_OFF, MOVE_BULLET_PUNCH, MOVE_POISON_JAB}
    }
};
static const struct TrainerMon sParty_Huey_easy[] = {
    {
    .lvl = 15,
    .species = SPECIES_CRAMORANT,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_SURF, MOVE_DRILL_PECK, MOVE_ROOST, MOVE_ICE_BEAM}
    },
    {
    .lvl = 15,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_GUTS,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BRICK_BREAK, MOVE_KNOCK_OFF, MOVE_BULLET_PUNCH, MOVE_POISON_JAB}
    }
};

//Sailor Edmond: threshold 2
//double with Elijah
static const struct TrainerMon sParty_Edmond[] = {
    {
    .lvl = 14,
    .species = SPECIES_TAUROS_PALDEAN_BLAZE_BREED,
    .heldItem = ITEM_STARF_BERRY,
    .ability = ABILITY_CUD_CHEW,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_FLARE_BLITZ, MOVE_FLAME_CHARGE, MOVE_BODY_SLAM, MOVE_EARTHQUAKE}
    },
    {
    .lvl = 14,
    .species = SPECIES_TAUROS_PALDEAN_AQUA_BREED,
    .heldItem = ITEM_STARF_BERRY,
    .ability = ABILITY_CUD_CHEW,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_BODY_SLAM, MOVE_ROCK_SLIDE}
    }
};
static const struct TrainerMon sParty_Edmond_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_TAUROS_PALDEAN_BLAZE_BREED,
    .heldItem = ITEM_STARF_BERRY,
    .ability = ABILITY_CUD_CHEW,
    .moves = {MOVE_RAGING_BULL, MOVE_FLAME_CHARGE, MOVE_BODY_SLAM, MOVE_EARTHQUAKE}
    },
    {
    .lvl = 14,
    .species = SPECIES_TAUROS_PALDEAN_AQUA_BREED,
    .heldItem = ITEM_STARF_BERRY,
    .ability = ABILITY_CUD_CHEW,
    .moves = {MOVE_RAGING_BULL, MOVE_AQUA_JET, MOVE_BODY_SLAM, MOVE_ROCK_SLIDE}
    }
};

//Tuber-M Ricky: threshold 0
static const struct TrainerMon sParty_Ricky[] = {
    {
    .lvl = 12,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_PICKUP,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_MUD_SHOT, MOVE_BODY_SLAM}
    },
    {
    .lvl = 12,
    .species = SPECIES_LINOONE_GALARIAN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PICKUP,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_STOMPING_TANTRUM, MOVE_HEADBUTT}
    }
};
//vanilla
static const struct TrainerMon sParty_Ricky1[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 13,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_SAND_ATTACK, MOVE_HEADBUTT, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};
static const struct TrainerMon sParty_Ricky2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};
static const struct TrainerMon sParty_Ricky3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};
static const struct TrainerMon sParty_Ricky4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};
static const struct TrainerMon sParty_Ricky5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

//Tuber-F Lola: threshold 0
//has non-standard EV sets
static const struct TrainerMon sParty_Lola[] = {
    {
    .lvl = 12,
    .species = SPECIES_AZURILL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_HUGE_POWER,
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .moves = {MOVE_BOUNCE, MOVE_WATERFALL, MOVE_BUBBLE_BEAM, MOVE_BODY_SLAM}
    },
    {
    .lvl = 12,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_HUGE_POWER,
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .moves = {MOVE_SUPERPOWER, MOVE_LIQUIDATION, MOVE_ICE_SPINNER, MOVE_BODY_SLAM}
    },
    {
    .lvl = 12,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_HUGE_POWER,
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .moves = {MOVE_BELLY_DRUM, MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_PLAY_ROUGH}
    }
};
//vanilla
static const struct TrainerMon sParty_Lola1[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 12,
    .species = SPECIES_AZURILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 12,
    .species = SPECIES_AZURILL,
    }
};
static const struct TrainerMon sParty_Lola2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};
static const struct TrainerMon sParty_Lola3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_MARILL,
    }
};
static const struct TrainerMon sParty_Lola4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_MARILL,
    }
};
static const struct TrainerMon sParty_Lola5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    }
};

//Swimmer-F Gwen: threshold 3
static const struct TrainerMon sParty_Gwen[] = {
    {
    .lvl = 13,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SAP_SIPPER,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_WHIRLPOOL, MOVE_PERISH_SONG, MOVE_PROTECT, MOVE_BODY_SLAM}
    },
    {
    .lvl = 13,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_VOLT_ABSORB,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SURF, MOVE_PARABOLIC_CHARGE, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM}
    },
    {
    .lvl = 13,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_INTIMIDATE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MILD),
    .moves = {MOVE_WATERFALL, MOVE_BOUNCE, MOVE_FIRE_BLAST, MOVE_CRUNCH}
    }
};
static const struct TrainerMon sParty_Gwen_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SAP_SIPPER,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_WHIRLPOOL, MOVE_PERISH_SONG, MOVE_PROTECT, MOVE_BODY_SLAM}
    },
    {
    .lvl = 13,
    .species = SPECIES_CHINCHOU,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SURF, MOVE_PARABOLIC_CHARGE, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM}
    },
    {
    .lvl = 13,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .nature = TRAINER_PARTY_NATURE(NATURE_MILD),
    .moves = {MOVE_WATERFALL, MOVE_BOUNCE, MOVE_FIRE_BLAST, MOVE_CRUNCH}
    }
};

//Swimmer-F Austina: threshold 2
static const struct TrainerMon sParty_Austina[] = {
    {
    .lvl = 13,
    .species = SPECIES_GASTRODON_WEST_SEA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STORM_DRAIN,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_RECOVER, MOVE_SCALD, MOVE_STOCKPILE, MOVE_TOXIC}
    },
    {
    .lvl = 13,
    .species = SPECIES_GASTRODON_EAST_SEA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_STORM_DRAIN,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_BODY_SLAM}
    }
};
static const struct TrainerMon sParty_Austina_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_SHELLOS_WEST_SEA,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_STORM_DRAIN,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_RECOVER, MOVE_SCALD, MOVE_STOCKPILE, MOVE_TOXIC}
    },
    {
    .lvl = 13,
    .species = SPECIES_SHELLOS_EAST_SEA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_STORM_DRAIN,
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_BODY_SLAM}
    }
};

//Fisherman Carter: threshold 3
static const struct TrainerMon sParty_Carter[] = {
    {
    .lvl = 16,
    .species = SPECIES_CLAWITZER,
    .heldItem = ITEM_LIFE_ORB,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_WATER_PULSE, MOVE_AURA_SPHERE, MOVE_DARK_PULSE, MOVE_DRAGON_PULSE}
    }
};
static const struct TrainerMon sParty_Carter_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_CLAUNCHER,
    .heldItem = ITEM_LIFE_ORB,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_WATER_PULSE, MOVE_AURA_SPHERE, MOVE_DARK_PULSE, MOVE_DRAGON_PULSE}
    }
};

//Young Couple Mel and Paul: threshold 0
//couple double battle
static const struct TrainerMon sParty_MelAndPaul[] = {
    {
    .lvl = 16,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHIELD_DUST,
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .moves = {MOVE_MOONLIGHT, MOVE_SLUDGE_BOMB, MOVE_LEECH_LIFE, MOVE_PSYCHIC}
    },
    {
    .lvl = 16,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_RIVALRY,
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .moves = {MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_AIR_CUTTER}
    }
};

//Swimming Triathlete-F Hailey: threshold 0
static const struct TrainerMon sParty_Hailey[] = {
    {
    .lvl = 16,
    .species = SPECIES_RAICHU_ALOLAN,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SURGE_SURFER,
    .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_ELECTRIC_TERRAIN, MOVE_RISING_VOLTAGE, MOVE_SURF, MOVE_PSYCHIC}
    },
    {
    .lvl = 16,
    .species = SPECIES_FURRET,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_FRISK,
    .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_COIL, MOVE_FACADE, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    }
};

//Swimmer-M Chandler: threshold 3
static const struct TrainerMon sParty_Chandler[] = {
    {
    .lvl = 13,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_BATTLE_ARMOR,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_LIQUIDATION, MOVE_X_SCISSOR}
    },
    {
    .lvl = 13,
    .species = SPECIES_CARRACOSTA,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SOLID_ROCK,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_SHELL_SMASH, MOVE_SMACK_DOWN, MOVE_AQUA_JET, MOVE_EARTHQUAKE}
    }
};
static const struct TrainerMon sParty_Chandler_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_ANORITH,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_BATTLE_ARMOR,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_LIQUIDATION, MOVE_X_SCISSOR}
    },
    {
    .lvl = 13,
    .species = SPECIES_TIRTOUGA,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SOLID_ROCK,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_SHELL_SMASH, MOVE_SMACK_DOWN, MOVE_AQUA_JET, MOVE_EARTHQUAKE}
    }
};

//Bird Keeper Elijah: threshold 2
//double with Edmond
static const struct TrainerMon sParty_Elijah[] = {
    {
    .lvl = 14,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_STURDY,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_TAILWIND, MOVE_STEEL_WING, MOVE_DRILL_PECK, MOVE_PAYBACK}
    },
    {
    .lvl = 14,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_INNER_FOCUS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MILD),
    .moves = {MOVE_GIGA_DRAIN, MOVE_AIR_CUTTER, MOVE_POISON_FANG, MOVE_VENOSHOCK}
    }
};
static const struct TrainerMon sParty_Elijah_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_STURDY,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_TAILWIND, MOVE_STEEL_WING, MOVE_DRILL_PECK, MOVE_PAYBACK}
    },
    {
    .lvl = 14,
    .species = SPECIES_GOLBAT,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_INNER_FOCUS,
    .nature = TRAINER_PARTY_NATURE(NATURE_MILD),
    .moves = {MOVE_GIGA_DRAIN, MOVE_AIR_CUTTER, MOVE_POISON_FANG, MOVE_VENOSHOCK}
    }
};



//ROUTE 110 TRAINERS

static const struct TrainerMon sParty_Jasmine[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .lvl = 6,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Anthony[] = {
    {
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    }
};

//Abigail
static const struct TrainerMon sParty_Abigail1[] = {
    {
    .lvl = 16,
    .species = SPECIES_MAGNEMITE,
    }
};
static const struct TrainerMon sParty_Abigail2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};
static const struct TrainerMon sParty_Abigail3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_MAGNEMITE,
    }
};
static const struct TrainerMon sParty_Abigail4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};
static const struct TrainerMon sParty_Abigail5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_MAGNETON,
    }
};

//Benjamin
static const struct TrainerMon sParty_Benjamin1[] = {
    {
    .lvl = 16,
    .species = SPECIES_MAGNEMITE,
    }
};
static const struct TrainerMon sParty_Benjamin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MAGNEMITE,
    }
};
static const struct TrainerMon sParty_Benjamin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MAGNEMITE,
    }
};
static const struct TrainerMon sParty_Benjamin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    }
};
static const struct TrainerMon sParty_Benjamin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Edward[] = {
    {
    .lvl = 15,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jaclyn[] = {
    {
    .lvl = 16,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Edwin
static const struct TrainerMon sParty_Edwin1[] = {
    {
    .lvl = 14,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 14,
    .species = SPECIES_NUZLEAF,
    }
};
static const struct TrainerMon sParty_Edwin2[] = {
    {
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 26,
    .species = SPECIES_NUZLEAF,
    }
};
static const struct TrainerMon sParty_Edwin3[] = {
    {
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 29,
    .species = SPECIES_NUZLEAF,
    }
};
static const struct TrainerMon sParty_Edwin4[] = {
    {
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 32,
    .species = SPECIES_NUZLEAF,
    }
};
static const struct TrainerMon sParty_Edwin5[] = {
    {
    .lvl = 35,
    .species = SPECIES_LUDICOLO,
    },
    {
    .lvl = 35,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Dale[] = {
    {
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 14,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 14,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jacob[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 6,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 6,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Timmy[] = {
    {
    .lvl = 15,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 13,
    .species = SPECIES_ELECTRIKE,
    }
};

//Isabel
static const struct TrainerMon sParty_Isabel1[] = {
    {
    .lvl = 14,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .lvl = 14,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};
static const struct TrainerMon sParty_Isabel2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};
static const struct TrainerMon sParty_Isabel3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};
static const struct TrainerMon sParty_Isabel4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};
static const struct TrainerMon sParty_Isabel5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Kaleb[] = {
    {
    .lvl = 14,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .lvl = 14,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Alyssa[] = {
    {
    .lvl = 15,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Joseph[] = {
    {
    .lvl = 14,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .lvl = 14,
    .species = SPECIES_VOLTORB,
    }
};


//ROUTE 111 SOUTH TRAINERS (done)
//Gabby and Ty are listed in their own section

//Camper Tyron: threshold 3
//may double with Celina
static const struct TrainerMon sParty_Tyron[] = {
    {
    .lvl = 13,
    .species = SPECIES_LYCANROC_DUSK,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_TOUGH_CLAWS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_ACCELEROCK, MOVE_STONE_EDGE, MOVE_BRICK_BREAK, MOVE_FIRE_FANG}
    },
    {
    .lvl = 13,
    .species = SPECIES_TOEDSCRUEL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_ADAPTABILITY,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_SPORE, MOVE_ACID_SPRAY}
    }
};
static const struct TrainerMon sParty_Tyron_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_ROCKRUFF_OWN_TEMPO,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_OWN_TEMPO,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_ROCK_CLIMB, MOVE_STONE_EDGE, MOVE_SNARL, MOVE_FIRE_FANG}
    },
    {
    .lvl = 13,
    .species = SPECIES_TOEDSCOOL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_ADAPTABILITY,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_MEGA_DRAIN, MOVE_MUD_SHOT, MOVE_SPORE, MOVE_ACID_SPRAY}
    }
};

//Aroma Lady Celina: threshold 3
//may double with Tyron
static const struct TrainerMon sParty_Celina[] = {
    {
    .lvl = 13,
    .species = SPECIES_VILEPLUME,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_CHLOROPHYLL,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_SOLAR_BEAM}
    },
    {
    .lvl = 13,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CHLOROPHYLL,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_QUIVER_DANCE, MOVE_DAZZLING_GLEAM, MOVE_GIGA_DRAIN, MOVE_FIERY_DANCE}
    }
};
static const struct TrainerMon sParty_Celina_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_ODDISH,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_SOLAR_BEAM}
    },
    {
    .lvl = 13,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_QUIVER_DANCE, MOVE_DAZZLING_GLEAM, MOVE_MEGA_DRAIN, MOVE_FIERY_DANCE}
    }
};

//Picnicker Bianca: threshold 2
//may double with Hayden
static const struct TrainerMon sParty_Bianca[] = {
    {
    .lvl = 12,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_DROUGHT,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SEED_FLARE, MOVE_HEAT_WAVE, MOVE_GROWTH, MOVE_SYNTHESIS}
    },
    {
    .lvl = 12,
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SOLAR_POWER,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_SOLAR_BEAM, MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_BREAKING_SWIPE}
    }
};
static const struct TrainerMon sParty_Bianca_easy[] = {
    {
    .lvl = 12,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_DROUGHT,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_ENERGY_BALL, MOVE_FIRE_SPIN, MOVE_GROWTH, MOVE_SYNTHESIS}
    },
    {
    .lvl = 12,
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SOLAR_POWER,
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_GRASS_KNOT, MOVE_ELECTROWEB, MOVE_GLARE, MOVE_BREAKING_SWIPE}
    }
};

//Kindler Hayden: threshold 3
//may double with Bianca
static const struct TrainerMon sParty_Hayden[] = {
    {
    .lvl = 12,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_BLAZE,
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_FOCUS_BLAST}
    },
    {
    .lvl = 12,
    .species = SPECIES_CENTISKORCH,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_WHITE_SMOKE,
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FIRE_LASH, MOVE_LEECH_LIFE, MOVE_THUNDER_FANG, MOVE_COIL}
    },
    {
    .lvl = 12,
    .species = SPECIES_KINGLER,
    .heldItem = ITEM_UTILITY_UMBRELLA,
    .ability = ABILITY_SHELL_ARMOR,
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_CRABHAMMER, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_FACADE}
    }
};
static const struct TrainerMon sParty_Hayden_easy[] = {
    {
    .lvl = 12,
    .species = SPECIES_CHARMELEON,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SOLAR_POWER,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_BREAKING_SWIPE, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_FOCUS_BLAST}
    },
    {
    .lvl = 12,
    .species = SPECIES_SIZZLIPEDE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_WHITE_SMOKE,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FIRE_LASH, MOVE_BUG_BITE, MOVE_FIRE_SPIN, MOVE_COIL}
    },
    {
    .lvl = 12,
    .species = SPECIES_KRABBY,
    .heldItem = ITEM_UTILITY_UMBRELLA,
    .ability = ABILITY_SHELL_ARMOR,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_RAZOR_SHELL, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_FACADE}
    }
};

//Picnicker Irene: threshold 3
static const struct TrainerMon sParty_Irene[] = {
    {
    .lvl = 14,
    .species = SPECIES_UNFEZANT,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SUPER_LUCK,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DRILL_PECK, MOVE_SLASH, MOVE_ROOST, MOVE_HYPNOSIS}
    },
    {
    .lvl = 14,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_DANCER,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_ICE_BEAM, MOVE_LEECH_SEED}
    },
    {
    .lvl = 14,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SPEED_BOOST,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_OVERHEAT, MOVE_BLAZE_KICK, MOVE_SKY_UPPERCUT, MOVE_THUNDER_PUNCH}
    }
};
static const struct TrainerMon sParty_Irene_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_TRANQUILL,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SUPER_LUCK,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_AIR_CUTTER, MOVE_SLASH, MOVE_ROOST, MOVE_HYPNOSIS}
    },
    {
    .lvl = 14,
    .species = SPECIES_LOMBRE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OWN_TEMPO,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_ICE_BEAM, MOVE_LEECH_SEED}
    },
    {
    .lvl = 16,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SPEED_BOOST,
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_OVERHEAT, MOVE_FLAME_CHARGE, MOVE_BRICK_BREAK, MOVE_THUNDER_PUNCH}
    }
};

//Picnicker Travis: threshold 3
static const struct TrainerMon sParty_Travis[] = {
    {
    .lvl = 12,
    .species = SPECIES_CRUSTLE,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_SHELL_ARMOR,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_ROCK_BLAST, MOVE_BUG_BITE, MOVE_SANDSTORM, MOVE_EARTHQUAKE}
    },
    {
    .lvl = 12,
    .species = SPECIES_SWANNA,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = ABILITY_NO_GUARD,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HURRICANE, MOVE_BLIZZARD, MOVE_HYDRO_PUMP, MOVE_AQUA_JET}
    }
};
static const struct TrainerMon sParty_Travis_easy[] = {
    {
    .lvl = 12,
    .species = SPECIES_DWEBBLE,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_SHELL_ARMOR,
    .moves = {MOVE_ROCK_BLAST, MOVE_BUG_BITE, MOVE_SANDSTORM, MOVE_BULLDOZE}
    },
    {
    .lvl = 12,
    .species = SPECIES_DUCKLETT,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = ABILITY_NO_GUARD,
    .moves = {MOVE_AIR_SLASH, MOVE_ICY_WIND, MOVE_SURF, MOVE_AQUA_JET}
    }
};

//Camper Beau: threshold 3
//Guards the south entrance of the desert
//Has permanent sandstorm if exiting desert
static const struct TrainerMon sParty_Beau[] = {
    {
    .lvl = 16,
    .species = SPECIES_MUDSDALE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_STAMINA,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE, MOVE_HEAVY_SLAM}
    },
    {
    .lvl = 16,
    .species = SPECIES_RABSCA,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = ABILITY_SYNCHRONIZE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_EARTH_POWER, MOVE_RECOVER}
    },
    {
    .lvl = 16,
    .species = SPECIES_CARNIVINE,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = ABILITY_LEVITATE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_POWER_WHIP, MOVE_LEECH_LIFE, MOVE_SNAP_TRAP, MOVE_LEECH_SEED}
    }
};
static const struct TrainerMon sParty_Beau_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_MUDBRAY,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_STAMINA,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE, MOVE_HEAVY_SLAM}
    },
    {
    .lvl = 16,
    .species = SPECIES_RELLOR,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = ABILITY_SHED_SKIN,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BUG_BITE, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_GUNK_SHOT}
    },
    {
    .lvl = 16,
    .species = SPECIES_CARNIVINE,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_SEED_BOMB, MOVE_LEECH_LIFE, MOVE_SNAP_TRAP, MOVE_LEECH_SEED}
    }
};


//ROUTE 111 DESERT TRAINERS (done)

//Ruin Maniac Dusty: threshold 2
static const struct TrainerMon sParty_Dusty[] = {
    {
    .lvl = 16,
    .species = SPECIES_TRAPINCH,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_ARENA_TRAP,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .moves = {MOVE_EARTHQUAKE, MOVE_BUG_BITE, MOVE_FIRST_IMPRESSION, MOVE_ROCK_SLIDE}
    },
    {
    .lvl = 16,
    .species = SPECIES_STUNFISK,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_STATIC,
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .moves = {MOVE_EARTH_POWER, MOVE_DISCHARGE, MOVE_MUDDY_WATER, MOVE_SLUDGE_BOMB}
    },
    {
    .lvl = 16,
    .species = SPECIES_SANDSLASH,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SAND_RUSH,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .moves = {MOVE_SPIKY_SHIELD, MOVE_ROCK_SLIDE, MOVE_BULLDOZE, MOVE_CRUSH_CLAW}
    }
};
static const struct TrainerMon sParty_Dusty_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_TRAPINCH,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_ARENA_TRAP,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_EARTHQUAKE, MOVE_BUG_BITE, MOVE_FIRST_IMPRESSION, MOVE_ROCK_SLIDE}
    },
    {
    .lvl = 16,
    .species = SPECIES_STUNFISK,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_STATIC,
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .moves = {MOVE_EARTH_POWER, MOVE_DISCHARGE, MOVE_MUDDY_WATER, MOVE_SLUDGE_BOMB}
    },
    {
    .lvl = 16,
    .species = SPECIES_SANDSHREW,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_SAND_RUSH,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_DEFENSE_CURL, MOVE_ROCK_SLIDE, MOVE_BULLDOZE, MOVE_SLASH}
    }
};
//vanilla
static const struct TrainerMon sParty_Dusty1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 23,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};
static const struct TrainerMon sParty_Dusty2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};
static const struct TrainerMon sParty_Dusty3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 30,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};
static const struct TrainerMon sParty_Dusty4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 33,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};
static const struct TrainerMon sParty_Dusty5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 36,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

//Ruin Maniac Bryan: threshold 4
//must be double with either Celia or Branden
static const struct TrainerMon sParty_Bryan[] = {
    {
    .lvl = 16,
    .species = SPECIES_GRAVELER_ALOLAN,
    .heldItem = ITEM_ELECTRIC_GEM,
    .ability = ABILITY_GALVANIZE,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .moves = {MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 16,
    .species = SPECIES_GIGALITH,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_SAND_STREAM,
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .moves = {MOVE_ROCK_SLIDE, MOVE_SHORE_UP, MOVE_STOMPING_TANTRUM, MOVE_BLOCK}
    },
    {
    .lvl = 16,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STORM_DRAIN,
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .moves = {MOVE_ANCIENT_POWER, MOVE_GIGA_DRAIN, MOVE_BRINE, MOVE_LEECH_SEED}
    }
};
static const struct TrainerMon sParty_Bryan_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE_ALOLAN,
    .heldItem = ITEM_ELECTRIC_GEM,
    .ability = ABILITY_GALVANIZE,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 16,
    .species = SPECIES_BOLDORE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_SAND_STREAM,
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .moves = {MOVE_ROCK_SLIDE, MOVE_SHORE_UP, MOVE_STOMPING_TANTRUM, MOVE_BLOCK}
    },
    {
    .lvl = 16,
    .species = SPECIES_LILEEP,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STORM_DRAIN,
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .moves = {MOVE_ANCIENT_POWER, MOVE_GIGA_DRAIN, MOVE_BRINE, MOVE_LEECH_SEED}
    }
};

//Picnicker Celia: threshold 3
//may double with Bryan
static const struct TrainerMon sParty_Celia[] = {
    {
    .lvl = 16,
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_POISON_HEAL,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_FACADE, MOVE_DUAL_WINGBEAT, MOVE_ROOST}
    },
    {
    .lvl = 16,
    .species = SPECIES_LYCANROC_MIDDAY,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SAND_RUSH,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_ROCK_SLIDE, MOVE_ACCELEROCK, MOVE_BULK_UP, MOVE_PLAY_ROUGH}
    },
    {
    .lvl = 16,
    .species = SPECIES_SANDACONDA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SAND_SPIT,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_GLARE, MOVE_COIL, MOVE_DRAGON_RUSH, MOVE_POISON_TAIL}
    }
};
static const struct TrainerMon sParty_Celia_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_POISON_HEAL,
    .moves = {MOVE_KNOCK_OFF, MOVE_FACADE, MOVE_DUAL_WINGBEAT, MOVE_ROOST}
    },
    {
    .lvl = 16,
    .species = SPECIES_ROCKRUFF,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_STEADFAST,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_TRAILBLAZE, MOVE_PLAY_ROUGH}
    },
    {
    .lvl = 16,
    .species = SPECIES_SILICOBRA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SAND_SPIT,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_GLARE, MOVE_COIL, MOVE_DRAGON_RUSH, MOVE_POISON_TAIL}
    }
};

//Camper Branden: threshold 3
//may double with Bryan
static const struct TrainerMon sParty_Branden[] = {
    {
    .lvl = 16,
    .species = SPECIES_DUGTRIO,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_ARENA_TRAP,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH, MOVE_ENDEAVOR}
    },
    {
    .lvl = 16,
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SAND_RUSH,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_RETALIATE, MOVE_SNARL, MOVE_THUNDER_WAVE, MOVE_ICE_FANG}
    },
    {
    .lvl = 16,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SIMPLE,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_SHELL_SMASH, MOVE_HEAT_WAVE, MOVE_ANCIENT_POWER, MOVE_SCALD}
    }
};
static const struct TrainerMon sParty_Branden_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_DIGLETT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_ARENA_TRAP,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH, MOVE_ENDEAVOR}
    },
    {
    .lvl = 16,
    .species = SPECIES_HERDIER,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SAND_RUSH,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_RETALIATE, MOVE_SNARL, MOVE_THUNDER_WAVE, MOVE_ICE_FANG}
    },
    {
    .lvl = 16,
    .species = SPECIES_SLUGMA,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SIMPLE,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_RECOVER, MOVE_HEAT_WAVE, MOVE_ANCIENT_POWER, MOVE_SCALD}
    }
};

//Picnicker Becky: threshold 4
//Guards the north entrance of the desert
//Has permanent sandstorm if exiting desert
static const struct TrainerMon sParty_Becky[] = {
    {
    .lvl = 13,
    .species = SPECIES_LEAVANNY,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_OVERCOAT,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_TRIPLE_AXEL}
    },
    {
    .lvl = 13,
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OVERCOAT,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_PSYCHIC, MOVE_RECOVER, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST}
    },
    {
    .lvl = 13,
    .species = SPECIES_MANDIBUZZ,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OVERCOAT,
    .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_KNOCK_OFF, MOVE_PLUCK, MOVE_FOUL_PLAY, MOVE_HEAT_WAVE}
    }
};
static const struct TrainerMon sParty_Becky_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_SWADLOON,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_OVERCOAT,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_TRIPLE_AXEL}
    },
    {
    .lvl = 13,
    .species = SPECIES_SOLOSIS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_MAGIC_GUARD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_PSYBEAM, MOVE_RECOVER, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON}
    },
    {
    .lvl = 13,
    .species = SPECIES_VULLABY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OVERCOAT,
    .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
    .moves = {MOVE_KNOCK_OFF, MOVE_PLUCK, MOVE_FOUL_PLAY, MOVE_HEAT_WAVE}
    }
};


//ROUTE 111 NORTH TRAINERS (done)

//Picnicker Heidi
static const struct TrainerMon sParty_Heidi[] = {
    {
    .lvl = 13,
    .species = SPECIES_GOGOAT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_GRASS_PELT,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_HORN_LEECH, MOVE_GRASSY_TERRAIN, MOVE_WILD_CHARGE, MOVE_BODY_SLAM}
    },
    {
    .lvl = 13,
    .species = SPECIES_DUBWOOL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_FLUFFY,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_COTTON_GUARD, MOVE_BODY_PRESS, MOVE_ZEN_HEADBUTT, MOVE_BODY_SLAM}
    }
};
static const struct TrainerMon sParty_Heidi_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_WOOLOO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_GRASS_PELT,
    .moves = {MOVE_HORN_LEECH, MOVE_GRASSY_TERRAIN, MOVE_ZEN_HEADBUTT, MOVE_BODY_SLAM}
    },
    {
    .lvl = 13,
    .species = SPECIES_SKIDDO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_FLUFFY,
    .moves = {MOVE_COTTON_GUARD, MOVE_THUNDER_WAVE, MOVE_WILD_CHARGE, MOVE_HEADBUTT}
    }
};

//Camper Drew: threshold 3
static const struct TrainerMon sParty_Drew[] = {
    {
    .lvl = 13,
    .species = SPECIES_GLIGAR,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_HYPER_CUTTER,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_SWORDS_DANCE, MOVE_CRABHAMMER, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE}
    },
    {
    .lvl = 13,
    .species = SPECIES_DRAPION,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_BATTLE_ARMOR,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_X_SCISSOR, MOVE_ICE_FANG}
    }
};
static const struct TrainerMon sParty_Drew_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_GLIGAR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_HYPER_CUTTER,
    .moves = {MOVE_SWORDS_DANCE, MOVE_CRABHAMMER, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE}
    },
    {
    .lvl = 13,
    .species = SPECIES_SKORUPI,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_BATTLE_ARMOR,
    .moves = {MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_X_SCISSOR, MOVE_ROCK_TOMB}
    }
};

//Black Belt Daisuke: threshold 3
static const struct TrainerMon sParty_Daisuke[] = {
    {
    .lvl = 16,
    .species = SPECIES_PASSIMIAN,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_DEFIANT,
    .ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_U_TURN, MOVE_ROCK_SLIDE}
    },
    {
    .lvl = 16,
    .species = SPECIES_DONPHAN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_STURDY,
    .ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_RAPID_SPIN, MOVE_KNOCK_OFF}
    },
    {
    .lvl = 16,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_GUTS,
    .ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_CROSS_CHOP, MOVE_BULLET_PUNCH, MOVE_THUNDER_PUNCH, MOVE_POISON_JAB}
    }
};
static const struct TrainerMon sParty_Daisuke_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_PASSIMIAN,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_DEFIANT,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_U_TURN, MOVE_ROCK_SLIDE}
    },
    {
    .lvl = 16,
    .species = SPECIES_PHANPY,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SAND_VEIL,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_RAPID_SPIN, MOVE_KNOCK_OFF}
    },
    {
    .lvl = 16,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_GUTS,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_KARATE_CHOP, MOVE_BULLET_PUNCH, MOVE_THUNDER_PUNCH, MOVE_POISON_JAB}
    }
};

//Cooltrainer-F Brooke: threshold 4
//mini-boss, blocks access to Assault Vest, berry area, and rest stop (if you lack Cut)
static const struct TrainerMon sParty_Brooke[] = {
    {
    .lvl = 16,
    .species = SPECIES_PURUGLY,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_DEFIANT,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FAKE_OUT, MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_HYPNOSIS}
    },
    {
    .lvl = 16,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_TECHNICIAN,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BULLET_PUNCH, MOVE_BUG_BITE, MOVE_PURSUIT, MOVE_SWORDS_DANCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_NATURAL_CURE,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEAF_STORM, MOVE_EXTRASENSORY}
    },
    {
    .lvl = 16,
    .species = SPECIES_INCINEROAR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_U_TURN}
    },
    {
    .lvl = 16,
    .species = SPECIES_PALOSSAND,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_WATER_COMPACTION,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SHORE_UP}
    },
    {
    .lvl = 16,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_FOCUS_ENERGY, MOVE_SNIPE_SHOT, MOVE_DRACO_METEOR, MOVE_ICE_BEAM}
    }
};
static const struct TrainerMon sParty_Brooke_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_GLAMEOW,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_OWN_TEMPO,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FAKE_OUT, MOVE_FACADE, MOVE_PLAY_ROUGH, MOVE_HYPNOSIS}
    },
    {
    .lvl = 16,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_TECHNICIAN,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BULLET_PUNCH, MOVE_BUG_BITE, MOVE_PURSUIT, MOVE_SWORDS_DANCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_NATURAL_CURE,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_ENERGY_BALL, MOVE_EXTRASENSORY}
    },
    {
    .lvl = 16,
    .species = SPECIES_TORRACAT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_FIRE_FANG, MOVE_CRUNCH, MOVE_FAKE_OUT, MOVE_U_TURN}
    },
    {
    .lvl = 16,
    .species = SPECIES_SANDYGAST,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_WATER_COMPACTION,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SHORE_UP}
    },
    {
    .lvl = 16,
    .species = SPECIES_HORSEA,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_FOCUS_ENERGY, MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_ICE_BEAM}
    }
};
//vanilla
static const struct TrainerMon sParty_Brooke1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_ROSELIA,
    }
};
static const struct TrainerMon sParty_Brooke2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};
static const struct TrainerMon sParty_Brooke3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    }
};
static const struct TrainerMon sParty_Brooke4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_ROSELIA,
    }
};
static const struct TrainerMon sParty_Brooke5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 34,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    }
};

//Cooltrainer-M Wilton: threshold 4
//skippable, but is a mini-boss
static const struct TrainerMon sParty_Wilton[] = {
    {
    .lvl = 16,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_AURORA_BEAM}
    },
    {
    .lvl = 16,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_GUTS,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FACADE, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_HEADLONG_RUSH}
    },
    {
    .lvl = 16,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PRIMORDIAL_SEA,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_WATER_SPOUT, MOVE_SURF, MOVE_ICE_BEAM, MOVE_HYPER_VOICE}
    },
    {
    .lvl = 16,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_LEVITATE,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_COSMIC_POWER, MOVE_STORED_POWER, MOVE_RECOVER, MOVE_EARTH_POWER}
    },
    {
    .lvl = 16,
    .species = SPECIES_CERULEDGE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_WEAK_ARMOR,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BITTER_BLADE, MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_SERPERIOR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CONTRARY,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_LEAF_STORM, MOVE_DRACO_METEOR, MOVE_GLARE, MOVE_LEECH_SEED}
    }
};
static const struct TrainerMon sParty_Wilton_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_ELECTRIKE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLAMETHROWER, MOVE_AURORA_BEAM}
    },
    {
    .lvl = 16,
    .species = SPECIES_MAKUHITA,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_GUTS,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FACADE, MOVE_FORCE_PALM, MOVE_KNOCK_OFF, MOVE_BULLDOZE}
    },
    {
    .lvl = 16,
    .species = SPECIES_WAILMER,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_THICK_FAT,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_WATER_SPOUT, MOVE_SURF, MOVE_ICE_BEAM, MOVE_HYPER_VOICE}
    },
    {
    .lvl = 16,
    .species = SPECIES_BALTOY,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_LEVITATE,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_COSMIC_POWER, MOVE_STORED_POWER, MOVE_RECOVER, MOVE_EARTH_POWER}
    },
    {
    .lvl = 16,
    .species = SPECIES_CHARCADET,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_FLAME_BODY,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FLAME_CHARGE, MOVE_CLEAR_SMOG, MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP}
    },
    {
    .lvl = 16,
    .species = SPECIES_SERVINE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CONTRARY,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_LEAF_STORM, MOVE_TWISTER, MOVE_GLARE, MOVE_LEECH_SEED}
    }
};
//vanilla
static const struct TrainerMon sParty_Wilton1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_MAKUHITA,
    }
};
static const struct TrainerMon sParty_Wilton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};
static const struct TrainerMon sParty_Wilton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};
static const struct TrainerMon sParty_Wilton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MAKUHITA,
    }
};
static const struct TrainerMon sParty_Wilton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};


//ROUTE 112 TRAINERS

static const struct TrainerMon sParty_Brice[] = {
    {
    .lvl = 17,
    .species = SPECIES_NUMEL,
    },
    {
    .lvl = 17,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Larry[] = {
    {
    .lvl = 18,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Carol[] = {
    {
    .lvl = 17,
    .species = SPECIES_TAILLOW,
    },
    {
    .lvl = 17,
    .species = SPECIES_LOMBRE,
    }
};

//Trent
static const struct TrainerMon sParty_Trent1[] = {
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 17,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    }
};
static const struct TrainerMon sParty_Trent2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GRAVELER,
    }
};
static const struct TrainerMon sParty_Trent3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    }
};
static const struct TrainerMon sParty_Trent4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};
static const struct TrainerMon sParty_Trent5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_Bryant[] = {
    {
    .lvl = 18,
    .species = SPECIES_NUMEL,
    },
    {
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Shayla[] = {
    {
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    }
};



//ROUTE 113 TRAINERS

static const struct TrainerMon sParty_Jaylen[] = {
    {
    .lvl = 19,
    .species = SPECIES_TRAPINCH,
    }
};

static const struct TrainerMon sParty_Dillon[] = {
    {
    .lvl = 19,
    .species = SPECIES_ARON,
    }
};

//Madeline
static const struct TrainerMon sParty_Madeline1[] = {
    {
    .lvl = 19,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};
static const struct TrainerMon sParty_Madeline2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 29,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};
static const struct TrainerMon sParty_Madeline3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};
static const struct TrainerMon sParty_Madeline4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};
static const struct TrainerMon sParty_Madeline5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_CAMERUPT,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};

//Lao
static const struct TrainerMon sParty_Lao1[] = {
    {
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    }
};
static const struct TrainerMon sParty_Lao2[] = {
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 26,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Lao3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Lao4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Lao5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_SMOKE_BALL,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lung[] = {
    {
    .lvl = 18,
    .species = SPECIES_KOFFING,
    },
    {
    .lvl = 18,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_ToriAndTia[] = {
    {
    .lvl = 19,
    .species = SPECIES_SPINDA,
    },
    {
    .lvl = 19,
    .species = SPECIES_SPINDA,
    }
};

static const struct TrainerMon sParty_Wyatt[] = {
    {
    .lvl = 18,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 18,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Lawrence[] = {
    {
    .lvl = 18,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 18,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Sophie[] = {
    {
    .lvl = 17,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 19,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Coby[] = {
    {
    .lvl = 17,
    .species = SPECIES_SKARMORY,
    },
    {
    .lvl = 19,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Ike[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = 0,
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};



//ROUTE 114 TRAINERS

static const struct TrainerMon sParty_Lenny[] = {
    {
    .lvl = 18,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 18,
    .species = SPECIES_MACHOP,
    }
};

//Lucas
static const struct TrainerMon sParty_Lucas1[] = {
    {
    .lvl = 18,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 18,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Lucas2[] = {
    {
    .lvl = 9,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Shane[] = {
    {
    .lvl = 18,
    .species = SPECIES_SANDSHREW,
    },
    {
    .lvl = 18,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Nancy[] = {
    {
    .lvl = 18,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    }
};

//Steve
static const struct TrainerMon sParty_Steve1[] = {
    {
    .lvl = 19,
    .species = SPECIES_ARON,
    }
};
static const struct TrainerMon sParty_Steve2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_LAIRON,
    }
};
static const struct TrainerMon sParty_Steve3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_RHYHORN,
    }
};
static const struct TrainerMon sParty_Steve4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_RHYHORN,
    }
};
static const struct TrainerMon sParty_Steve5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_AGGRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Nolan[] = {
    {
    .lvl = 19,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Claude[] = {
    {
    .lvl = 16,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 17,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 18,
    .species = SPECIES_BARBOACH,
    }
};

//Bernie
static const struct TrainerMon sParty_Bernie1[] = {
    {
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .lvl = 18,
    .species = SPECIES_WINGULL,
    }
};
static const struct TrainerMon sParty_Bernie2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_WINGULL,
    }
};
static const struct TrainerMon sParty_Bernie3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    }
};
static const struct TrainerMon sParty_Bernie4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    }
};
static const struct TrainerMon sParty_Bernie5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_MAGCARGO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_GROWTH, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED}
    },
    {
    .lvl = 20,
    .species = SPECIES_GRAVELER,
    .moves = {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_MUD_SPORT, MOVE_ROCK_THROW}
    }
};

static const struct TrainerMon sParty_Charlotte[] = {
    {
    .lvl = 19,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Angelina[] = {
    {
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 18,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kai[] = {
    {
    .lvl = 19,
    .species = SPECIES_BARBOACH,
    }
};


//ROUTE 115 TRAINERS

//Timothy
static const struct TrainerMon sParty_Timothy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 27,
    .species = SPECIES_HARIYAMA,
    }
};
static const struct TrainerMon sParty_Timothy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};
static const struct TrainerMon sParty_Timothy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};
static const struct TrainerMon sParty_Timothy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};
static const struct TrainerMon sParty_Timothy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

//Nob
static const struct TrainerMon sParty_Nob1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 19,
    .species = SPECIES_MACHOP,
    }
};
static const struct TrainerMon sParty_Nob2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 27,
    .species = SPECIES_MACHOKE,
    }
};
static const struct TrainerMon sParty_Nob3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MACHOKE,
    }
};
static const struct TrainerMon sParty_Nob4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 31,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    }
};
static const struct TrainerMon sParty_Nob5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_BLACK_BELT
    }
};

//Cyndy
static const struct TrainerMon sParty_Cyndy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 18,
    .species = SPECIES_MAKUHITA,
    }
};
static const struct TrainerMon sParty_Cyndy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};
static const struct TrainerMon sParty_Cyndy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};
static const struct TrainerMon sParty_Cyndy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    }
};
static const struct TrainerMon sParty_Cyndy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Koichi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 24,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 28,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Hector[] = {
    {
    .lvl = 18,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .lvl = 18,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_Kyra[] = {
    {
    .lvl = 26,
    .species = SPECIES_DODUO,
    },
    {
    .lvl = 26,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Jaiden[] = {
    {
    .lvl = 26,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 26,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Alix[] = {
    {
    .lvl = 26,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 26,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Helene[] = {
    {
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Marlene[] = {
    {
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 18,
    .species = SPECIES_SPOINK,
    }
};



//ROUTE 116 TRAINERS

//Youngster Joey
static const struct TrainerMon sParty_Joey[] = {
    {
    .lvl = 9,
    .species = SPECIES_MACHOP,
    }
};

//Bug Catcher Jose
static const struct TrainerMon sParty_Jose[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 8,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 8,
    .species = SPECIES_NINCADA,
    }
};

//Hiker
static const struct TrainerMon sParty_Clark[] = {
    {
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Janice[] = {
    {
    .lvl = 9,
    .species = SPECIES_MARILL,
    }
};

//School Kid-F Karen
static const struct TrainerMon sParty_Karen1[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 9,
    .species = SPECIES_SHROOMISH,
    }
};
static const struct TrainerMon sParty_Karen2[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_WHISMUR,
    }
};
static const struct TrainerMon sParty_Karen3[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    }
};
static const struct TrainerMon sParty_Karen4[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_LOUDRED,
    }
};
static const struct TrainerMon sParty_Karen5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_EXPLOUD,
    }
};

//School Kid-M Jerry
static const struct TrainerMon sParty_Jerry1[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 9,
    .species = SPECIES_RALTS,
    }
};
static const struct TrainerMon sParty_Jerry2[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_RALTS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    }
};
static const struct TrainerMon sParty_Jerry3[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    }
};
static const struct TrainerMon sParty_Jerry4[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    }
};
static const struct TrainerMon sParty_Jerry5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_BANETTE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Sarah[] = {
    {
    .lvl = 8,
    .species = SPECIES_LOTAD,
    .heldItem = ITEM_NONE
    },
    {
    .lvl = 8,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Dawson[] = {
    {
    .lvl = 8,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    },
    {
    .lvl = 8,
    .species = SPECIES_POOCHYENA,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Johnson[] = {
    {
    .lvl = 8,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 8,
    .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sParty_Devan[] = {
    {
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Giorgio[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = 0,
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};



//ROUTE 117 TRAINERS

//Running Triathlete-M Dylan
static const struct TrainerMon sParty_Dylan1[] = {
    {
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};
static const struct TrainerMon sParty_Dylan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};
static const struct TrainerMon sParty_Dylan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};
static const struct TrainerMon sParty_Dylan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};
static const struct TrainerMon sParty_Dylan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

//Running Triathlete-F Maria
static const struct TrainerMon sParty_Maria1[] = {
    {
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};
static const struct TrainerMon sParty_Maria2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};
static const struct TrainerMon sParty_Maria3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};
static const struct TrainerMon sParty_Maria4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};
static const struct TrainerMon sParty_Maria5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

//Breeder-F Lydia
static const struct TrainerMon sParty_Lydia1[] = {
    {
    .lvl = 11,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 11,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 11,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 11,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 11,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 11,
    .species = SPECIES_GOLDEEN,
    }
};
static const struct TrainerMon sParty_Lydia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_GOLDEEN,
    }
};
static const struct TrainerMon sParty_Lydia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};
static const struct TrainerMon sParty_Lydia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_GOLDEEN,
    }
};
static const struct TrainerMon sParty_Lydia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_SEAKING,
    }
};

//Breeder-M Isaac
static const struct TrainerMon sParty_Isaac1[] = {
    {
    .lvl = 11,
    .species = SPECIES_WHISMUR,
    },
    {
    .lvl = 11,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 11,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 11,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 11,
    .species = SPECIES_TAILLOW,
    },
    {
    .lvl = 11,
    .species = SPECIES_MAKUHITA,
    }
};
static const struct TrainerMon sParty_Isaac2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MAKUHITA,
    }
};
static const struct TrainerMon sParty_Isaac3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    }
};
static const struct TrainerMon sParty_Isaac4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    }
};
static const struct TrainerMon sParty_Isaac5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Derek[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 16,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 16,
    .species = SPECIES_BEAUTIFLY,
    }
};

//Senior and Junior Anna and Meg
//double battle
static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    {
    .lvl = 15,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .lvl = 17,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Brandi[] = {
    {
    .lvl = 17,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Aisha[] = {
    {
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Melina[] = {
    {
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};


//ROUTE 118 TRAINERS
//Gabby and Ty are listed in their own section

static const struct TrainerMon sParty_Perry[] = {
    {
    .lvl = 26,
    .species = SPECIES_WINGULL,
    }
};

//Rose
static const struct TrainerMon sParty_Rose1[] = {
    {
    .lvl = 14,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 14,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 14,
    .species = SPECIES_ROSELIA,
    }
};
static const struct TrainerMon sParty_Rose2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};
static const struct TrainerMon sParty_Rose3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    }
};
static const struct TrainerMon sParty_Rose4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    }
};
static const struct TrainerMon sParty_Rose5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Wade[] = {
    {
    .lvl = 16,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Chester[] = {
    {
    .lvl = 25,
    .species = SPECIES_TAILLOW,
    },
    {
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Barny[] = {
    {
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 25,
    .species = SPECIES_CARVANHA,
    }
};

//Dalton
static const struct TrainerMon sParty_Dalton1[] = {
    {
    .lvl = 15,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .lvl = 15,
    .species = SPECIES_WHISMUR,
    }
};
static const struct TrainerMon sParty_Dalton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_WHISMUR,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MAGNEMITE,
    }
};
static const struct TrainerMon sParty_Dalton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};
static const struct TrainerMon sParty_Dalton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    }
};
static const struct TrainerMon sParty_Dalton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Deandre[] = {
    {
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 14,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 14,
    .species = SPECIES_ELECTRIKE,
    }
};


//ROUTE 119 TRAINERS

//MIMIC CIRCLE BUG FOLKS
static const struct TrainerMon sParty_Greg[] = {
    {
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
    }
};
static const struct TrainerMon sParty_Taylor[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_CASCOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_DUSTOX,
    }
};
static const struct TrainerMon sParty_Donald[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 24,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 24,
    .species = SPECIES_SILCOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 24,
    .species = SPECIES_BEAUTIFLY,
    }
};
static const struct TrainerMon sParty_Brent[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 26,
    .species = SPECIES_SURSKIT,
    }
};
static const struct TrainerMon sParty_Doug[] = {
    {
    .lvl = 28,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 28,
    .species = SPECIES_NINJASK,
    }
};
static const struct TrainerMon sParty_Kent[] = {
    {
    .lvl = 25,
    .species = SPECIES_NINJASK,
    }
};

//Jackson
static const struct TrainerMon sParty_Jackson1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};
static const struct TrainerMon sParty_Jackson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    }
};
static const struct TrainerMon sParty_Jackson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};
static const struct TrainerMon sParty_Jackson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 37,
    .species = SPECIES_BRELOOM,
    }
};
static const struct TrainerMon sParty_Jackson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_BRELOOM,
    }
};

//Catherine
static const struct TrainerMon sParty_Catherine1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};
static const struct TrainerMon sParty_Catherine2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_ROSELIA,
    }
};
static const struct TrainerMon sParty_Catherine3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 33,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    }
};
static const struct TrainerMon sParty_Catherine4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 36,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 36,
    .species = SPECIES_ROSELIA,
    }
};
static const struct TrainerMon sParty_Catherine5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Yasu[] = {
    {
    .lvl = 26,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Takashi[] = {
    {
    .lvl = 25,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 25,
    .species = SPECIES_KOFFING,
    }
};

static const struct TrainerMon sParty_Hugh[] = {
    {
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 25,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Phil[] = {
    {
    .lvl = 26,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Hideo[] = {
    {
    .lvl = 25,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
    .lvl = 25,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_POISON_GAS, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};

static const struct TrainerMon sParty_Chris[] = {
    {
    .lvl = 29,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 20,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 26,
    .species = SPECIES_FEEBAS,
    },
    {
    .lvl = 23,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Rachel[] = {
    {
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Dayton[] = {
    {
    .lvl = 25,
    .species = SPECIES_SLUGMA,
    },
    {
    .lvl = 25,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Fabian[] = {
    {
    .lvl = 26,
    .species = SPECIES_MANECTRIC,
    }
};


//ROUTE 120 TRAINERS
//Gabby and Ty are listed in their own section

static const struct TrainerMon sParty_Colin[] = {
    {
    .lvl = 28,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 28,
    .species = SPECIES_NATU,
    }
};

//Robert
static const struct TrainerMon sParty_Robert1[] = {
    {
    .lvl = 29,
    .species = SPECIES_SWABLU,
    }
};
static const struct TrainerMon sParty_Robert2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 32,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 32,
    .species = SPECIES_SWABLU,
    }
};
static const struct TrainerMon sParty_Robert3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_ALTARIA,
    }
};
static const struct TrainerMon sParty_Robert4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_ALTARIA,
    }
};
static const struct TrainerMon sParty_Robert5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Lorenzo[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Jenna[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    }
};

//Jeffrey
static const struct TrainerMon sParty_Jeffrey1[] = {
    {
    .lvl = 27,
    .species = SPECIES_SURSKIT,
    },
    {
    .lvl = 27,
    .species = SPECIES_SURSKIT,
    },
    {
    .lvl = 27,
    .species = SPECIES_SURSKIT,
    }
};
static const struct TrainerMon sParty_Jeffrey2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    }
};
static const struct TrainerMon sParty_Jeffrey3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 34,
    .species = SPECIES_MASQUERAIN,
    }
};
static const struct TrainerMon sParty_Jeffrey4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MASQUERAIN,
    }
};
static const struct TrainerMon sParty_Jeffrey5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Jennifer[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 30,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Chip[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_PSYBEAM, MOVE_SELF_DESTRUCT, MOVE_SANDSTORM, MOVE_ANCIENT_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Clarissa[] = {
    {
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 28,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Angelica[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 30,
    .species = SPECIES_CASTFORM_NORMAL,
    .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Keigo[] = {
    {
    .lvl = 28,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
    .lvl = 28,
    .species = SPECIES_NINJASK,
    .moves = {MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM, MOVE_FURY_CUTTER, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_Riley[] = {
    {
    .lvl = 28,
    .species = SPECIES_NINCADA,
    .moves = {MOVE_LEECH_LIFE, MOVE_FURY_SWIPES, MOVE_MIND_READER, MOVE_DIG}
    },
    {
    .lvl = 28,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};

static const struct TrainerMon sParty_Callie[] = {
    {
    .lvl = 28,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 28,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Leonel[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 30,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_NONE}
    }
};


//ROUTE 121 TRAINERS

static const struct TrainerMon sParty_KateAndJoy[] = {
    {
    .lvl = 30,
    .species = SPECIES_SPINDA,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE}
    },
    {
    .lvl = 32,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FEINT_ATTACK}
    }
};

static const struct TrainerMon sParty_Vanessa[] = {
    {
    .lvl = 30,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_ORAN_BERRY
    }
};

//Walter
static const struct TrainerMon sParty_Walter1[] = {
    {
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    }
};
static const struct TrainerMon sParty_Walter2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    }
};
static const struct TrainerMon sParty_Walter3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};
static const struct TrainerMon sParty_Walter4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Walter5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_GOLDUCK,
    .moves = {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Tammy[] = {
    {
    .lvl = 29,
    .species = SPECIES_DUSKULL,
    },
    {
    .lvl = 29,
    .species = SPECIES_SHUPPET,
    }
};

//Jessica
static const struct TrainerMon sParty_Jessica1[] = {
    {
    .lvl = 29,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .lvl = 29,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};
static const struct TrainerMon sParty_Jessica2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};
static const struct TrainerMon sParty_Jessica3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};
static const struct TrainerMon sParty_Jessica4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};
static const struct TrainerMon sParty_Jessica5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 44,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 44,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Cale[] = {
    {
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .lvl = 29,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Myles[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Pat[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Marcel[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SHIFTRY,
    }
};

//Cristin
static const struct TrainerMon sParty_Cristin1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_VIGOROTH,
    }
};
static const struct TrainerMon sParty_Cristin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 35,
    .species = SPECIES_VIGOROTH,
    }
};
static const struct TrainerMon sParty_Cristin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_VIGOROTH,
    }
};
static const struct TrainerMon sParty_Cristin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 39,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_VIGOROTH,
    }
};
static const struct TrainerMon sParty_Cristin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_SLAKING,
    }
};


//ROUTE 122 TRAINERS

//Running Triathlete-M Mitchell
static const struct TrainerMon sParty_Mitchell[] = {
    {
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
    },
    {
    .lvl = 43,
    .species = SPECIES_SOLROCK,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
    }
};

//Swimming Triathlete-F Julie
static const struct TrainerMon sParty_Julie[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_NINETALES,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_TROPIUS,
    }
};

//Ninja Boy Hiromichi
static const struct TrainerMon sParty_Hiromichi[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = 0,
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Ninja Boy Tsunao
static const struct TrainerMon sParty_Tsunao[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = 0,
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Bug Catcher Micah
static const struct TrainerMon sParty_Micah[] = {
    {
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    }
};

//Swimmer-M Edgar
static const struct TrainerMon sParty_Edgar[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_CACTURNE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    }
};




//ROUTE 123 TRAINERS

static const struct TrainerMon sParty_Wendy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_MAWILE,
    .moves = {MOVE_BATON_PASS, MOVE_FEINT_ATTACK, MOVE_FAKE_TEARS, MOVE_BITE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MEGA_DRAIN, MOVE_MAGICAL_LEAF, MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    .moves = {MOVE_FLY, MOVE_WATER_GUN, MOVE_MIST, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Braxton[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_QUICK_ATTACK, MOVE_WING_ATTACK, MOVE_ENDEAVOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 28,
    .species = SPECIES_TRAPINCH,
    .moves = {MOVE_BITE, MOVE_DIG, MOVE_FEINT_ATTACK, MOVE_SAND_TOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 28,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_ROLLOUT, MOVE_WHIRLPOOL, MOVE_ASTONISH, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 28,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_THUNDERBOLT, MOVE_SUPERSONIC, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 28,
    .species = SPECIES_SHIFTRY,
    .moves = {MOVE_GIGA_DRAIN, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_SWAGGER}
    }
};

static const struct TrainerMon sParty_Violet[] = {
    {
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 26,
    .species = SPECIES_GLOOM,
    }
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
    .lvl = 26,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .lvl = 26,
    .species = SPECIES_DUSTOX,
    }
};

//Cameron
static const struct TrainerMon sParty_Cameron1[] = {
    {
    .lvl = 31,
    .species = SPECIES_SOLROCK,
    }
};
static const struct TrainerMon sParty_Cameron2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 33,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 33,
    .species = SPECIES_SOLROCK,
    }
};
static const struct TrainerMon sParty_Cameron3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_SOLROCK,
    }
};
static const struct TrainerMon sParty_Cameron4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};
static const struct TrainerMon sParty_Cameron5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_SOLROCK,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_ALAKAZAM,
    }
};

//Jacki
static const struct TrainerMon sParty_Jacki1[] = {
    {
    .lvl = 30,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 30,
    .species = SPECIES_LUNATONE,
    }
};
static const struct TrainerMon sParty_Jacki2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_LUNATONE,
    }
};
static const struct TrainerMon sParty_Jacki3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_LUNATONE,
    }
};
static const struct TrainerMon sParty_Jacki4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_LUNATONE,
    }
};
static const struct TrainerMon sParty_Jacki5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Kindra[] = {
    {
    .lvl = 30,
    .species = SPECIES_DUSKULL,
    },
    {
    .lvl = 30,
    .species = SPECIES_SHUPPET,
    }
};

static const struct TrainerMon sParty_Jonas[] = {
    {
    .lvl = 31,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB}
    }
};

static const struct TrainerMon sParty_Kayley[] = {
    {
    .lvl = 31,
    .species = SPECIES_CASTFORM_NORMAL,
    .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
    }
};

static const struct TrainerMon sParty_Ed[] = {
    {
    .lvl = 30,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .lvl = 30,
    .species = SPECIES_SEVIPER,
    }
};

//Fernando
static const struct TrainerMon sParty_Fernando1[] = {
    {
    .lvl = 30,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .lvl = 30,
    .species = SPECIES_LOUDRED,
    }
};
static const struct TrainerMon sParty_Fernando2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    }
};
static const struct TrainerMon sParty_Fernando3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    }
};
static const struct TrainerMon sParty_Fernando4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    }
};
static const struct TrainerMon sParty_Fernando5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_Alberto[] = {
    {
    .lvl = 30,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 30,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Fredrick[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 30,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Jazmyn[] = {
    {
    .lvl = 27,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Davis[] = {
    {
    .lvl = 27,
    .species = SPECIES_PINSIR,
    }
};


//ROUTE 124 TRAINERS

static const struct TrainerMon sParty_Spencer[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Roland[] = {
    {
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};

//Jenny
static const struct TrainerMon sParty_Jenny1[] = {
    {
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};
static const struct TrainerMon sParty_Jenny2[] = {
    {
    .lvl = 38,
    .species = SPECIES_WAILMER,
    }
};
static const struct TrainerMon sParty_Jenny3[] = {
    {
    .lvl = 41,
    .species = SPECIES_WAILMER,
    }
};
static const struct TrainerMon sParty_Jenny4[] = {
    {
    .lvl = 43,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 43,
    .species = SPECIES_WAILMER,
    }
};
static const struct TrainerMon sParty_Jenny5[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

//Vanilla Grace renamed to Rischel
static const struct TrainerMon sParty_Rischel[] = {
    {
    .lvl = 34,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Chad[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WAILMER,
    }
};

//Lila and Roy
static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 33,
    .species = SPECIES_CARVANHA,
    }
};
static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .lvl = 42,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 40,
    .species = SPECIES_CARVANHA,
    }
};
static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .lvl = 45,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 43,
    .species = SPECIES_CARVANHA,
    }
};
static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .lvl = 48,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 46,
    .species = SPECIES_SHARPEDO,
    }
};
static const struct TrainerMon sParty_LilaAndRoy5[] = {
    {
    .lvl = 51,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 49,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Declan[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Isabella[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

//Bird Keeper Garret
static const struct TrainerMon sParty_Garret[] = {
    {
    .lvl = 45,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Josie[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = 0,
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};


//ROUTE 125 TRAINERS

static const struct TrainerMon sParty_Nolen[] = {
    {
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Stan[] = {
    {
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Tanya[] = {
    {
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Sharon[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

//Ernest
static const struct TrainerMon sParty_Ernest1[] = {
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    }
};
static const struct TrainerMon sParty_Ernest2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    }
};
static const struct TrainerMon sParty_Ernest3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};
static const struct TrainerMon sParty_Ernest4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_MACHOKE,
    }
};
static const struct TrainerMon sParty_Ernest5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_KimAndIris[] = {
    {
    .lvl = 32,
    .species = SPECIES_SWABLU,
    .moves = {MOVE_SING, MOVE_FURY_ATTACK, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
    .lvl = 35,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Presley[] = {
    {
    .lvl = 33,
    .species = SPECIES_TROPIUS,
    },
    {
    .lvl = 33,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Auron[] = {
    {
    .lvl = 33,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    }
};

//Camper Terry
static const struct TrainerMon sParty_Terry[] = {
    {
    .lvl = 37,
    .species = SPECIES_GIRAFARIG,
    }
};

//Tuber-F Holly
static const struct TrainerMon sParty_Holly[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = 0,
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Tuber-M Colton
static const struct TrainerMon sParty_Colton[] = {
    {
    .lvl = 22,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 36,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 40,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 12,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 30,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 42,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    }
};


//ROUTE 126 TRAINERS

static const struct TrainerMon sParty_Barry[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dean[] = {
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 31,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Nikki[] = {
    {
    .lvl = 33,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Brenda[] = {
    {
    .lvl = 34,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Sienna[] = {
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

//Pablo
static const struct TrainerMon sParty_Pablo1[] = {
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};
static const struct TrainerMon sParty_Pablo2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    }
};
static const struct TrainerMon sParty_Pablo3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};
static const struct TrainerMon sParty_Pablo4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    }
};
static const struct TrainerMon sParty_Pablo5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isobel[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};


//ROUTE 127 TRAINERS

static const struct TrainerMon sParty_Camden[] = {
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Donny[] = {
    {
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Jonah[] = {
    {
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 32,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Roger[] = {
    {
    .lvl = 15,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 25,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Henry[] = {
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Aidan[] = {
    {
    .lvl = 32,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 32,
    .species = SPECIES_SKARMORY,
    }
};

//Koji
static const struct TrainerMon sParty_Koji1[] = {
    {
    .lvl = 34,
    .species = SPECIES_MACHOKE,
    }
};
static const struct TrainerMon sParty_Koji2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    }
};
static const struct TrainerMon sParty_Koji3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};
static const struct TrainerMon sParty_Koji4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    }
};
static const struct TrainerMon sParty_Koji5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Athena[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 32,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE}
    }
};



//ROUTE 128 TRAINERS

//Isaiah
static const struct TrainerMon sParty_Isaiah1[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};
static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};
static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};
static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};
static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

//Katelyn
static const struct TrainerMon sParty_Katelyn1[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};
static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};
static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};
static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};
static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Wayne[] = {
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 36,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Ruben[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMon sParty_Alexa[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Carlee[] = {
    {
    .lvl = 35,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Harrison[] = {
    {
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

//Running Triathlete-M Leonard
static const struct TrainerMon sParty_Leonard[] = {
    {
    .lvl = 43,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 43,
    .species = SPECIES_MACHOKE,
    }
};



//ROUTE 129 TRAINERS

static const struct TrainerMon sParty_Chase[] = {
    {
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Allison[] = {
    {
    .lvl = 27,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Tisha[] = {
    {
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMon sParty_Reed[] = {
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Clarence[] = {
    {
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

//Twins Emma and Lil
//double battle
static const struct TrainerMon sParty_EmmaAndLil[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = 0,
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Ranger-F Shannon
static const struct TrainerMon sParty_Shannon[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_CLAYDOL,
    }
};



//ROUTE 130 TRAINERS

static const struct TrainerMon sParty_Rodney[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Katie[] = {
    {
    .lvl = 33,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Santiago[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WAILMER,
    }
};


//ROUTE 131 TRAINERS

static const struct TrainerMon sParty_Richard[] = {
    {
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Herman[] = {
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Susie[] = {
    {
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Kara[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    {
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Kevin[] = {
    {
    .lvl = 34,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Talia[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};


//ROUTE 132 TRAINERS

static const struct TrainerMon sParty_Paxton[] = {
    {
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 33,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Makayla[] = {
    {
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Darcy[] = {
    {
    .lvl = 33,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Gilbert[] = {
    {
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Dana[] = {
    {
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Kiyo[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Ronald[] = {
    {
    .lvl = 19,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 21,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 23,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 26,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 30,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Jonathan[] = {
    {
    .lvl = 33,
    .species = SPECIES_KECLEON,
    },
    {
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};


//ROUTE 133 TRAINERS

static const struct TrainerMon sParty_Franklin[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEALEO,
    }
};

static const struct TrainerMon sParty_Linda[] = {
    {
    .lvl = 33,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 33,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Debra[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Beck[] = {
    {
    .lvl = 34,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Warren[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 33,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Mollie[] = {
    {
    .lvl = 33,
    .species = SPECIES_WHISCASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Conor[] = {
    {
    .lvl = 33,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

//Picnicker Dianne
static const struct TrainerMon sParty_Dianne[] = {
    {
    .lvl = 43,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 43,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

//Beauty Caroline
static const struct TrainerMon sParty_Caroline[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    }
};


//ROUTE 134 TRAINERS

static const struct TrainerMon sParty_Jack[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Laurel[] = {
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Aaron[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_BAGON,
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER}
    }
};

static const struct TrainerMon sParty_Alex[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Hitoshi[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 32,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Marley[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sParty_Kelvin[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Reyna[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Hudson[] = {
    {
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};


//GRANITE CAVE TRAINERS (done)

//Camper Thomas: threshold 2
static const struct TrainerMon sParty_Thomas[] = {
    {
    .lvl = 13,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .moves = {MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_WOOD_HAMMER, MOVE_COUNTER}
    },
    {
    .lvl = 13,
    .species = SPECIES_SANDSLASH,
    .heldItem = ITEM_ROCKY_HELMET,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_RAPID_SPIN, MOVE_CRUSH_CLAW, MOVE_EARTHQUAKE, MOVE_SPIKY_SHIELD}
    },
    {
    .lvl = 13,
    .species = SPECIES_GOLBAT,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE, MOVE_POISON_FANG, MOVE_GIGA_DRAIN}
    }
};
static const struct TrainerMon sParty_Thomas_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_SANDSHREW,
    .heldItem = ITEM_ROCKY_HELMET,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_RAPID_SPIN, MOVE_SLASH, MOVE_BULLDOZE, MOVE_DEFENSE_CURL}
    },
    {
    .lvl = 13,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_LEFTOVERS,
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .moves = {MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_WOOD_HAMMER, MOVE_COUNTER}
    },
    {
    .lvl = 13,
    .species = SPECIES_ZUBAT,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE, MOVE_POISON_FANG, MOVE_GIGA_DRAIN}
    }
};

//Hex Maniac Kaylee: threshold 2
static const struct TrainerMon sParty_Kaylee[] = {
    {
    .lvl = 14,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_LIECHI_BERRY,
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_SUCKER_PUNCH}
    },
    {
    .lvl = 14,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_PRANKSTER,
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .moves = {MOVE_KNOCK_OFF, MOVE_RECOVER, MOVE_SHADOW_CLAW, MOVE_POWER_GEM}
    },
    {
    .lvl = 14,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_EVIOLITE,
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    .moves = {MOVE_CURSE, MOVE_WILL_O_WISP, MOVE_HEX, MOVE_PAIN_SPLIT}
    },
    {
    .lvl = 14,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_SPELL_TAG,
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    .moves = {MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_WOOD_HAMMER}
    }
};
static const struct TrainerMon sParty_Kaylee_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_MAWILE,
    .moves = {MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_SUCKER_PUNCH}
    },
    {
    .lvl = 14,
    .species = SPECIES_SABLEYE,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_KNOCK_OFF, MOVE_RECOVER, MOVE_SHADOW_CLAW, MOVE_POWER_GEM}
    },
    {
    .lvl = 14,
    .species = SPECIES_DUSKULL,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_CURSE, MOVE_WILL_O_WISP, MOVE_HEX, MOVE_PAIN_SPLIT}
    },
    {
    .lvl = 14,
    .species = SPECIES_MIMIKYU,
    .moves = {MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_WOOD_HAMMER}
    }
};


//MT CHIMNEY TRAINERS (done)

//Expert-F Shelby: threshold 2
static const struct TrainerMon sParty_Shelby[] = {
    {
    .lvl = 16,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PURE_POWER,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_DRAIN_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_BULK_UP}
    },
    {
    .lvl = 16,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_THICK_FAT,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = TRAINER_PARTY_EVS(0, 252, 128, 0, 0, 128),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BODY_SLAM, MOVE_CLOSE_COMBAT, MOVE_THUNDER_PUNCH, MOVE_KNOCK_OFF}
    }
};
static const struct TrainerMon sParty_Shelby_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PURE_POWER,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DRAIN_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_BULK_UP}
    },
    {
    .lvl = 16,
    .species = SPECIES_MAKUHITA,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_THICK_FAT,
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BODY_SLAM, MOVE_FORCE_PALM, MOVE_THUNDER_PUNCH, MOVE_KNOCK_OFF}
    }
};
//vanilla
static const struct TrainerMon sParty_Shelby1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 21,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 21,
    .species = SPECIES_MAKUHITA,
    }
};
static const struct TrainerMon sParty_Shelby2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 30,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    }
};
static const struct TrainerMon sParty_Shelby3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};
static const struct TrainerMon sParty_Shelby4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 36,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    }
};
static const struct TrainerMon sParty_Shelby5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    }
};

//Beauty Sheila: threshold 3
//double with Shirley
static const struct TrainerMon sParty_Sheila[] = {
    {
    .lvl = 16,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_DROUGHT,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_FIRE_SPIN, MOVE_SYNTHESIS}
    },
    {
    .lvl = 16,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_EFFECT_SPORE,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_SPORE, MOVE_DRAIN_PUNCH, MOVE_SEED_BOMB, MOVE_LEECH_SEED}
    }
};
static const struct TrainerMon sParty_Sheila_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_DROUGHT,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_FIRE_SPIN, MOVE_SYNTHESIS}
    },
    {
    .lvl = 16,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_EFFECT_SPORE,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_SPORE, MOVE_MACH_PUNCH, MOVE_SEED_BOMB, MOVE_LEECH_SEED}
    }
};

//Beauty Shirley: threshold 4
//double with Sheila
static const struct TrainerMon sParty_Shirley[] = {
    {
    .lvl = 16,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SOLAR_POWER,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_SNARL, MOVE_DESTINY_BOND}
    },
    {
    .lvl = 16,
    .species = SPECIES_CHANDELURE,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_FLASH_FIRE,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_WILL_O_WISP}
    }
};
static const struct TrainerMon sParty_Shirley_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SOLAR_POWER,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_SNARL, MOVE_DESTINY_BOND}
    },
    {
    .lvl = 16,
    .species = SPECIES_LITWICK,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_FLASH_FIRE,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_WILL_O_WISP}
    }
};

//Beauty Melissa: threshold 2
//may double with Sawyer
static const struct TrainerMon sParty_Melissa[] = {
    {
    .lvl = 16,
    .species = SPECIES_PALAFIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .moves = {MOVE_FLIP_TURN, MOVE_JET_PUNCH, MOVE_ICE_PUNCH, MOVE_ZEN_HEADBUTT}
    },
    {
    .lvl = 16,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_HUGE_POWER,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .moves = {MOVE_AQUA_JET, MOVE_WATERFALL, MOVE_PLAY_ROUGH, MOVE_BODY_SLAM}
    }
};
static const struct TrainerMon sParty_Melissa_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_PALAFIN,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_JET_PUNCH, MOVE_ICE_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_NONE}
    },
    {
    .lvl = 16,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_AQUA_JET, MOVE_WATERFALL, MOVE_PLAY_ROUGH, MOVE_BODY_SLAM}
    }
};

//Hiker Sawyer: threshold 4
//may double with Melissa
static const struct TrainerMon sParty_Sawyer[] = {
    {
    .lvl = 16,
    .species = SPECIES_COALOSSAL,
    .heldItem = ITEM_ROCKY_HELMET,
    .ev = TRAINER_PARTY_EVS(100, 100, 200, 0, 0, 0),
    .moves = {MOVE_ROCK_SLIDE, MOVE_HEAT_CRASH, MOVE_FLAME_CHARGE, MOVE_BODY_PRESS}
    },
    {
    .lvl = 16,
    .species = SPECIES_GRAVELER_ALOLAN,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_GALVANIZE,
    .ev = TRAINER_PARTY_EVS(100, 100, 200, 0, 0, 0),
    .moves = {MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_ELECTROWEB, MOVE_HIGH_HORSEPOWER}
    }
};
static const struct TrainerMon sParty_Sawyer_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_CARKOL,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_ROCK_SLIDE, MOVE_HEAT_CRASH, MOVE_FLAME_CHARGE, MOVE_BODY_PRESS}
    },
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE_ALOLAN,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_GALVANIZE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_ELECTROWEB, MOVE_HIGH_HORSEPOWER}
    }
};
//vanilla
static const struct TrainerMon sParty_Sawyer1[] = {
    {
    .lvl = 21,
    .species = SPECIES_GEODUDE,
    }
};
static const struct TrainerMon sParty_Sawyer2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    }
};
static const struct TrainerMon sParty_Sawyer3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GRAVELER,
    }
};
static const struct TrainerMon sParty_Sawyer4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};
static const struct TrainerMon sParty_Sawyer5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};


//PETALBURG WOODS TRAINERS (done)

//Bug Catcher Lyle: threshold 3
static const struct TrainerMon sParty_Lyle[] = {
    {
    .lvl = 6,
    .species = SPECIES_DUSTOX,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    },
    {
    .lvl = 6,
    .species = SPECIES_BUTTERFREE,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    },
    {
    .lvl = 6,
    .species = SPECIES_BEEDRILL,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    },
    {
    .lvl = 6,
    .species = SPECIES_ARIADOS,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    },
    {
    .lvl = 6,
    .species = SPECIES_LEDIAN,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    }
};
static const struct TrainerMon sParty_Lyle_easy[] = {
    {
    .lvl = 6,
    .species = SPECIES_WURMPLE,
    },
    {
    .lvl = 6,
    .species = SPECIES_CATERPIE,
    },
    {
    .lvl = 6,
    .species = SPECIES_WEEDLE,
    },
    {
    .lvl = 6,
    .species = SPECIES_SPINARAK,
    },
    {
    .lvl = 6,
    .species = SPECIES_LEDYBA,
    }
};

//Bug Catcher James: threshold 2
static const struct TrainerMon sParty_James[] = {
    {
    .lvl = 9,
    .species = SPECIES_ARAQUANID,
    .heldItem = ITEM_MYSTIC_WATER,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_STICKY_WEB, MOVE_NONE}
    },
    {
    .lvl = 9,
    .species = SPECIES_NINJASK,
    .heldItem = ITEM_SCOPE_LENS,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_FURY_CUTTER, MOVE_SUBSTITUTE, MOVE_AERIAL_ACE, MOVE_NIGHT_SLASH}
    },
    {
    .lvl = 10,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_SILVER_POWDER,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_SILVER_WIND, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_ELECTROWEB}
    }
};
static const struct TrainerMon sParty_James_easy[] = {
    {
    .lvl = 9,
    .species = SPECIES_DEWPIDER,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_STICKY_WEB, MOVE_NONE}
    },
    {
    .lvl = 9,
    .species = SPECIES_NINCADA,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_FURY_CUTTER, MOVE_SUBSTITUTE, MOVE_DIG, MOVE_HARDEN}
    },
    {
    .lvl = 10,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_SILVER_POWDER,
    .moves = {MOVE_SILVER_WIND, MOVE_GUST, MOVE_GIGA_DRAIN, MOVE_ELECTROWEB}
    }
};
//vanilla
static const struct TrainerMon sParty_James1[] = {
    {
    .lvl = 6,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 6,
    .species = SPECIES_NINCADA,
    }
};
static const struct TrainerMon sParty_James2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_NINJASK,
    }
};
static const struct TrainerMon sParty_James3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_NINJASK,
    }
};
static const struct TrainerMon sParty_James4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_NINJASK,
    }
};
static const struct TrainerMon sParty_James5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_NINJASK,
    }
};


//RUSTURF TUNNEL TRAINERS (done)

//Hiker Mike: threshold 3
static const struct TrainerMon sParty_Mike[] = {
    {
    .lvl = 13,
    .species = SPECIES_BASTIODON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SOUNDPROOF,
    .ev = TRAINER_PARTY_EVS(100, 100, 200, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_METAL_BURST, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_ROAR}
    },
    {
    .lvl = 13,
    .species = SPECIES_GRAVELER,
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = ABILITY_STURDY,
    .ev = TRAINER_PARTY_EVS(100, 100, 200, 0, 0, 0),
    .moves = {MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION, MOVE_ROLLOUT}
    },
    {
    .lvl = 13,
    .species = SPECIES_LOUDRED,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_SOUNDPROOF,
    .ev = TRAINER_PARTY_EVS(100, 100, 200, 0, 0, 0),
    .moves = {MOVE_HYPER_VOICE, MOVE_FAKE_TEARS, MOVE_STOMPING_TANTRUM, MOVE_RETALIATE}
    }
};
static const struct TrainerMon sParty_Mike_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_SHIELDON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SOUNDPROOF,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_METAL_BURST, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_ROAR}
    },
    {
    .lvl = 13,
    .species = SPECIES_GEODUDE,
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_BULLDOZE, MOVE_ROCK_TOMB, MOVE_EXPLOSION, MOVE_ROLLOUT}
    },
    {
    .lvl = 13,
    .species = SPECIES_WHISMUR,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_SOUNDPROOF,
    .moves = {MOVE_UPROAR, MOVE_FAKE_TEARS, MOVE_STOMPING_TANTRUM, MOVE_NONE}
    }
};
//vanilla
static const struct TrainerMon sParty_Mike1[] = {
    {
    .lvl = 10,
    .species = SPECIES_PELIPPER,
    .moves = {MOVE_GUST, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 10,
    .species = SPECIES_POOCHYENA,
    .moves = {MOVE_BITE, MOVE_SCARY_FACE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Mike2[] = {
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 16,
    .species = SPECIES_MACHOP,
    }
};


//ABANDONED SHIP TRAINERS (done)
//minimum 1 HM (Surf) to reach

//Tuber-M Charlie: threshold 3
static const struct TrainerMon sParty_Charlie[] = {
    {
    .lvl = 14,
    .species = SPECIES_AZUMARILL,
    .ability = ABILITY_SAP_SIPPER,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_WATERFALL, MOVE_CHARM, MOVE_BODY_SLAM, MOVE_ROLLOUT}
    },
    {
    .lvl = 14,
    .species = SPECIES_PALOSSAND,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_EARTH_POWER, MOVE_SHORE_UP, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Charlie_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_MARILL,
    .ability = ABILITY_SAP_SIPPER,
    .moves = {MOVE_WATERFALL, MOVE_CHARM, MOVE_BODY_SLAM, MOVE_ROLLOUT}
    },
    {
    .lvl = 14,
    .species = SPECIES_SANDYGAST,
    .moves = {MOVE_EARTH_POWER, MOVE_SHORE_UP, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

//Beauty Thalia: threshold 4
//may double with Demetrius
static const struct TrainerMon sParty_Thalia[] = {
    {
    .lvl = 16,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_SHELL_BELL,
    .ability = ABILITY_SOUL_HEART,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_MOONBLAST, MOVE_DRAINING_KISS}
    },
    {
    .lvl = 16,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PRIMORDIAL_SEA,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .moves = {MOVE_WATER_SPOUT, MOVE_HEAVY_SLAM, MOVE_BODY_SLAM, MOVE_BOUNCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 150, 0),
    .moves = {MOVE_DRACO_METEOR, MOVE_SNIPE_SHOT, MOVE_ICE_BEAM, MOVE_FOCUS_ENERGY}
    }
};
static const struct TrainerMon sParty_Thalia_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_LIFE_ORB,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_MOONBLAST, MOVE_DRAINING_KISS}
    },
    {
    .lvl = 16,
    .species = SPECIES_WAILMER,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_DRIZZLE,
    .moves = {MOVE_SURF, MOVE_HEAVY_SLAM, MOVE_BODY_SLAM, MOVE_BOUNCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_HORSEA,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_DRAGON_BREATH, MOVE_ICE_BEAM, MOVE_FOCUS_ENERGY}
    }
};
//vanilla
static const struct TrainerMon sParty_Thalia1[] = {
    {
    .lvl = 25,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 25,
    .species = SPECIES_HORSEA,
    }
};
static const struct TrainerMon sParty_Thalia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};
static const struct TrainerMon sParty_Thalia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_SEADRA,
    }
};
static const struct TrainerMon sParty_Thalia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_SEADRA,
    }
};
static const struct TrainerMon sParty_Thalia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_WAILORD,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_KINGDRA,
    }
};

//Youngster Demetrius: threshold 3
//may double with Thalia
static const struct TrainerMon sParty_Demetrius[] = {
    {
    .lvl = 16,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = ABILITY_DRIZZLE,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_U_TURN, MOVE_ROOST, MOVE_HURRICANE, MOVE_MUDDY_WATER}
    },
    {
    .lvl = 16,
    .species = SPECIES_BEARTIC,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SWIFT_SWIM,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_ICICLE_CRASH, MOVE_ROCK_SLIDE, MOVE_FACADE, MOVE_LIQUIDATION}
    },
    {
    .lvl = 16,
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_DRY_SKIN,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_HYPER_VOICE, MOVE_THUNDER, MOVE_GRASS_KNOT}
    }
};
static const struct TrainerMon sParty_Demetrius_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_WINGULL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_RAIN_DISH,
    .moves = {MOVE_U_TURN, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_MUDDY_WATER}
    },
    {
    .lvl = 16,
    .species = SPECIES_CUBCHOO,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_RATTLED,
    .moves = {MOVE_AVALANCHE, MOVE_ROCK_SLIDE, MOVE_FACADE, MOVE_LIQUIDATION}
    },
    {
    .lvl = 16,
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_DRY_SKIN,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_HYPER_VOICE, MOVE_THUNDERBOLT, MOVE_GRASS_KNOT}
    }
};

//Sailor Duncan: threshold 4
static const struct TrainerMon sParty_Duncan[] = {
    {
    .lvl = 16,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_OBLIVIOUS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_BODY_SLAM, MOVE_BULLDOZE}
    },
    {
    .lvl = 16,
    .species = SPECIES_CONKELDURR,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FACADE, MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF}
    },
    {
    .lvl = 16,
    .species = SPECIES_LIEPARD,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PRANKSTER,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_SUBSTITUTE, MOVE_ASSIST, MOVE_NIGHT_SLASH, MOVE_PLAY_ROUGH}
    }
};
static const struct TrainerMon sParty_Duncan_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_SPHEAL,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_OBLIVIOUS,
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_BODY_SLAM, MOVE_BULLDOZE}
    },
    {
    .lvl = 16,
    .species = SPECIES_GURDURR,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FACADE, MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF}
    },
    {
    .lvl = 16,
    .species = SPECIES_LIEPARD,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PRANKSTER,
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_SUBSTITUTE, MOVE_ASSIST, MOVE_NIGHT_SLASH, MOVE_PLAY_ROUGH}
    }
};

//Young Couple Kira and Dan
//double battle, no easy version
static const struct TrainerMon sParty_KiraAndDan[] = {
    {
    .lvl = 14,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_PRANKSTER,
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    .moves = {MOVE_TAIL_GLOW, MOVE_BUG_BUZZ, MOVE_THUNDERBOLT, MOVE_GIGA_DRAIN}
    },
    {
    .lvl = 14,
    .species = SPECIES_ILLUMISE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_TINTED_LENS,
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    .moves = {MOVE_PLAY_ROUGH, MOVE_BUG_BITE, MOVE_ICE_PUNCH, MOVE_ZEN_HEADBUTT}
    }
};
//vanilla
static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
    }
};
static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_ILLUMISE,
    }
};
static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_ILLUMISE,
    }
};
static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_ILLUMISE,
    }
};
static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_ILLUMISE,
    }
};

//Ruin Maniac Garrison: threshold 3
//may double with Jani
static const struct TrainerMon sParty_Garrison[] = {
    {
    .lvl = 16,
    .species = SPECIES_SANDSLASH,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_TOUGH_CLAWS,
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_RAPID_SPIN, MOVE_LEECH_LIFE}
    },
    {
    .lvl = 16,
    .species = SPECIES_MAROWAK_ALOLAN,
    .heldItem = ITEM_THICK_CLUB,
    .ability = ABILITY_LIGHTNING_ROD,
    .ev = TRAINER_PARTY_EVS(150, 0, 150, 0, 0, 150),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_SHADOW_BONE, MOVE_FLARE_BLITZ, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE}
    }
};
static const struct TrainerMon sParty_Garrison_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_SANDSLASH,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_RAPID_SPIN, MOVE_LEECH_LIFE}
    },
    {
    .lvl = 16,
    .species = SPECIES_CUBONE,
    .heldItem = ITEM_THICK_CLUB,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_RETALIATE, MOVE_DOUBLE_EDGE, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE}
    }
};

//Tuber-F Jani: threshold 2
//may double with Garrison
static const struct TrainerMon sParty_Jani[] = {
    {
    .lvl = 16,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_WATER_BUBBLE,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_TAILWIND, MOVE_BUG_BUZZ, MOVE_AIR_CUTTER, MOVE_HYDRO_PUMP}
    },
    {
    .lvl = 16,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SAP_SIPPER,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_WATERFALL, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_BELLY_DRUM}
    }
};
static const struct TrainerMon sParty_Jani_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_WATER_BUBBLE,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_TAILWIND, MOVE_BUG_BUZZ, MOVE_AIR_CUTTER, MOVE_HYDRO_PUMP}
    },
    {
    .lvl = 16,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_HUGE_POWER,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_WATERFALL, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_BOUNCE}
    }
};


//METEOR FALLS 1F-1R TRAINERS (done)

//Dragon Tamer Bill: threshold 3
static const struct TrainerMon sParty_Bill[] = {
    {
    .lvl = 13,
    .species = SPECIES_DRAMPA,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_BERSERK,
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPER_VOICE, MOVE_DRAGON_PULSE, MOVE_EXTRASENSORY, MOVE_GLARE}
    },
    {
    .lvl = 13,
    .species = SPECIES_TATSUGIRI_STRETCHY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STORM_DRAIN,
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_ICY_WIND, MOVE_SURF, MOVE_RAPID_SPIN, MOVE_COUNTER}
    },
    {
    .lvl = 16,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_BLAZE,
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_HEAT_WAVE, MOVE_THUNDER_PUNCH, MOVE_BELLY_DRUM, MOVE_FIRE_PUNCH}
    }
};
static const struct TrainerMon sParty_Bill_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_DRAMPA,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_BERSERK,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_ECHOED_VOICE, MOVE_DRAGON_BREATH, MOVE_EXTRASENSORY, MOVE_GLARE}
    },
    {
    .lvl = 13,
    .species = SPECIES_TATSUGIRI_STRETCHY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STORM_DRAIN,
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_ICY_WIND, MOVE_CHILLING_WATER, MOVE_RAPID_SPIN, MOVE_COUNTER}
    },
    {
    .lvl = 16,
    .species = SPECIES_CHARMELEON,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_BLAZE,
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_HEAT_WAVE, MOVE_THUNDER_PUNCH, MOVE_BELLY_DRUM, MOVE_FIRE_PUNCH}
    }
};


//METEOR FALLS 1F-2R TRAINERS (done)
//minimum 2 HMs (Surf & Waterfall OR Strength & Rock Smash) to reach

//Dragon Tamer Nicolas: threshold 5
static const struct TrainerMon sParty_Nicolas[] = {
    {
    .lvl = 16,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CLOUD_NINE,
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_COTTON_GUARD, MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_ROOST}
    },
    {
    .lvl = 16,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_INTIMIDATE,
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE}
    },
    {
    .lvl = 16,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_MOXIE,
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE}
    }
};
static const struct TrainerMon sParty_Nicolas_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_CLOUD_NINE,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_COTTON_GUARD, MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_ROOST}
    },
    {
    .lvl = 16,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OVERCOAT,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_IRON_DEFENSE, MOVE_DRAGON_CLAW, MOVE_BODY_SLAM, MOVE_ROCK_TOMB}
    },
    {
    .lvl = 16,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_ROCK_HEAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_RUSH, MOVE_DOUBLE_EDGE, MOVE_IRON_HEAD}
    }
};
//vanilla
static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    }
};
static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    }
};
static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    }
};
static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_BAGON,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    }
};
static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_DRAGON_FANG
    }
};

//Old Couple John and Jay: threshold 3
//old couple double battle
static const struct TrainerMon sParty_JohnAndJay[] = {
    {
    .lvl = 16,
    .species = SPECIES_DONDOZO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OBLIVIOUS,
    .ev = TRAINER_PARTY_EVS(4, 156, 4, 212, 0, 136),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_ORDER_UP, MOVE_WAVE_CRASH, MOVE_EARTHQUAKE, MOVE_PROTECT}
    },
    {
    .lvl = 16,
    .species = SPECIES_TATSUGIRI_CURLY,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_COMMANDER,
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_DRACO_METEOR, MOVE_HYDRO_PUMP, MOVE_MUDDY_WATER, MOVE_ICY_WIND}
    },
    {
    .lvl = 16,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_UNNERVE,
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_STEEL_WING, MOVE_FACADE}
    },
    {
    .lvl = 16,
    .species = SPECIES_FLAMIGO,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_SCRAPPY,
    .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_ROOST, MOVE_U_TURN}
    }
};
static const struct TrainerMon sParty_JohnAndJay_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_DONDOZO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_UNAWARE,
    .ev = TRAINER_PARTY_EVS(4, 156, 4, 212, 0, 136),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_ORDER_UP, MOVE_AQUA_TAIL, MOVE_BULLDOZE, MOVE_PROTECT}
    },
    {
    .lvl = 16,
    .species = SPECIES_TATSUGIRI_CURLY,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_COMMANDER,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_DRAGON_PULSE, MOVE_CHILLING_WATER, MOVE_SURF, MOVE_ICY_WIND}
    },
    {
    .lvl = 16,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_UNNERVE,
    .ev = TRAINER_PARTY_EVS(4, 124, 0, 124, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_STEEL_WING, MOVE_FACADE}
    },
    {
    .lvl = 16,
    .species = SPECIES_FLAMIGO,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_SCRAPPY,
    .ev = TRAINER_PARTY_EVS(0, 124, 4, 124, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_AERIAL_ACE, MOVE_REVERSAL, MOVE_ROOST, MOVE_U_TURN}
    }
};
//vanilla
static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};
static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};
static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};
static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};
static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};


//METEOR FALLS B1F-1R TRAINERS (done)
//minimum 2 HMs (Surf & Waterfall OR Strength & Rock Smash) to reach

//Lass Ginny: threshold 3
static const struct TrainerMon sParty_Ginny[] = {
    {
    .lvl = 14,
    .species = SPECIES_DRUDDIGON,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_GUNK_SHOT, MOVE_IRON_TAIL, MOVE_BULLDOZE, MOVE_HONE_CLAWS}
    },
    {
    .lvl = 14,
    .species = SPECIES_TATSUGIRI_DROOPY,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_STORM_DRAIN,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_MUDDY_WATER, MOVE_NASTY_PLOT, MOVE_DRAGON_PULSE, MOVE_MIRROR_COAT}
    }
};
static const struct TrainerMon sParty_Ginny_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_DRUDDIGON,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_GUNK_SHOT, MOVE_IRON_HEAD, MOVE_DRAGON_CLAW, MOVE_HONE_CLAWS}
    },
    {
    .lvl = 13,
    .species = SPECIES_TATSUGIRI_DROOPY,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_STORM_DRAIN,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_MUDDY_WATER, MOVE_NASTY_PLOT, MOVE_DRAGON_PULSE, MOVE_MIRROR_COAT}
    }
};

//Dragon Tamer Charles: threshold 5
static const struct TrainerMon sParty_Charles[] = {
    {
    .lvl = 15,
    .species = SPECIES_HAXORUS,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_UNNERVE,
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_SCALE_SHOT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_POISON_JAB}
    },
    {
    .lvl = 15,
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_WHITE_HERB,
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_DRACO_METEOR, MOVE_OVERHEAT}
    },
    {
    .lvl = 15,
    .species = SPECIES_TYRANTRUM,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_ROCK_HEAD,
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 110, 200, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_HEAD_SMASH, MOVE_OUTRAGE, MOVE_DRAGON_DANCE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_Charles_easy[] = {
    {
    .lvl = 15,
    .species = SPECIES_FRAXURE,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_UNNERVE,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_SCALE_SHOT, MOVE_SWORDS_DANCE, MOVE_STOMPING_TANTRUM, MOVE_POISON_JAB}
    },
    {
    .lvl = 15,
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_WHITE_HERB,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER}
    },
    {
    .lvl = 15,
    .species = SPECIES_TYRUNT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_STRONG_JAW,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_CRUNCH, MOVE_OUTRAGE, MOVE_DRAGON_DANCE, MOVE_NONE}
    }
};

//Battle Girl Tess: threshold 5
static const struct TrainerMon sParty_Tess[] = {
    {
    .lvl = 15,
    .species = SPECIES_MIENSHAO,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_INNER_FOCUS,
    .ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BOUNCE, MOVE_HIGH_JUMP_KICK, MOVE_TRIPLE_AXEL, MOVE_HONE_CLAWS}
    },
    {
    .lvl = 15,
    .species = SPECIES_KOMMO_O,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_BULLETPROOF,
    .ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_DRAGON_CLAW, MOVE_CLOSE_COMBAT, MOVE_NOBLE_ROAR, MOVE_EARTHQUAKE}
    }
};
static const struct TrainerMon sParty_Tess_easy[] = {
    {
    .lvl = 15,
    .species = SPECIES_MIENFOO,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BOUNCE, MOVE_HIGH_JUMP_KICK, MOVE_FAKE_OUT, MOVE_HONE_CLAWS}
    },
    {
    .lvl = 15,
    .species = SPECIES_HAKAMO_O,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_BULLETPROOF,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_DRAGON_CLAW, MOVE_CLOSE_COMBAT, MOVE_NOBLE_ROAR, MOVE_EARTHQUAKE}
    }
};


//MT PYRE 2F TRAINERS (done)

//Pokemaniac Mark: threshold 4
//may double with Leah, leaving fourth mon behind
static const struct TrainerMon sParty_Mark[] = {
    {
    .lvl = 14,
    .species = SPECIES_EMOLGA,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_STATIC,
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_VOLT_SWITCH, MOVE_U_TURN, MOVE_AIR_SLASH, MOVE_ELECTROWEB}
    },
    {
    .lvl = 14,
    .species = SPECIES_GUMSHOOS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_STAKEOUT,
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_U_TURN}
    },
    {
    .lvl = 14,
    .species = SPECIES_LICKILICKY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OBLIVIOUS,
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BELLY_DRUM, MOVE_KNOCK_OFF, MOVE_BODY_SLAM, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 14,
    .species = SPECIES_RHYDON,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_LIGHTNING_ROD,
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_STONE_EDGE, MOVE_MEGAHORN, MOVE_STOMPING_TANTRUM, MOVE_THUNDER_PUNCH}
    }
};
static const struct TrainerMon sParty_Mark_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_EMOLGA,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_STATIC,
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_VOLT_SWITCH, MOVE_U_TURN, MOVE_AIR_SLASH, MOVE_ELECTROWEB}
    },
    {
    .lvl = 14,
    .species = SPECIES_YUNGOOS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_STAKEOUT,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_TAKE_DOWN, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_U_TURN}
    },
    {
    .lvl = 14,
    .species = SPECIES_LICKITUNG,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OBLIVIOUS,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_SCREECH, MOVE_KNOCK_OFF, MOVE_BODY_SLAM, MOVE_GIGA_IMPACT}
    },
    {
    .lvl = 14,
    .species = SPECIES_RHYHORN,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_ROCK_BLAST, MOVE_MEGAHORN, MOVE_STOMPING_TANTRUM, MOVE_THUNDER_FANG}
    }
};

//Young Couple Dez and Luke: threshold 2
//double battle
static const struct TrainerMon sParty_DezAndLuke[] = {
    {
    .lvl = 16,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SHELL_BELL,
    .ability = ABILITY_JUSTIFIED,
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_BRUTAL_SWING, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 16,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SHELL_BELL,
    .ability = ABILITY_JUSTIFIED,
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_BRUTAL_SWING, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
static const struct TrainerMon sParty_DezAndLuke_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SHELL_BELL,
    .ability = ABILITY_JUSTIFIED,
    .moves = {MOVE_BRUTAL_SWING, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 16,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SHELL_BELL,
    .ability = ABILITY_JUSTIFIED,
    .moves = {MOVE_BRUTAL_SWING, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Black Belt Zander: threshold 2
//may double with Leah
static const struct TrainerMon sParty_Zander[] = {
    {
    .lvl = 16,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_FACADE, MOVE_ROCK_SLIDE}
    },
    {
    .lvl = 16,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_MOXIE,
    .ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_PIN_MISSILE, MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_ARM_THRUST}
    }
};
static const struct TrainerMon sParty_Zander_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_BLACK_BELT,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_FACADE, MOVE_NONE}
    },
    {
    .lvl = 16,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_BLACK_BELT,
    .ability = ABILITY_SWARM,
    .moves = {MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_NONE}
    }
};

//Hex Maniac Leah: threshold 3
//may double with Mark or Zander
static const struct TrainerMon sParty_Leah[] = {
    {
    .lvl = 15,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_SPELL_TAG,
    .ability = ABILITY_PRANKSTER,
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_SHADOW_CLAW, MOVE_CRUSH_CLAW, MOVE_SHADOW_SNEAK, MOVE_KNOCK_OFF}
    },
    {
    .lvl = 15,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_LEVITATE,
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_PAIN_SPLIT, MOVE_HEX, MOVE_CURSE, MOVE_WILL_O_WISP}
    }
};
static const struct TrainerMon sParty_Leah_easy[] = {
    {
    .lvl = 15,
    .species = SPECIES_SHUPPET,
    .heldItem = ITEM_SPELL_TAG,
    .ability = ABILITY_PRANKSTER,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_PHANTOM_FORCE, MOVE_FACADE, MOVE_SHADOW_SNEAK, MOVE_SUCKER_PUNCH}
    },
    {
    .lvl = 15,
    .species = SPECIES_DUSKULL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_LEVITATE,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_PAIN_SPLIT, MOVE_HEX, MOVE_CURSE, MOVE_WILL_O_WISP}
    }
};


//MT PYRE 3F TRAINERS (done)

//Psychic-M William: threshold 3
//may double with Gabrielle
static const struct TrainerMon sParty_William[] = {
    {
    .lvl = 16,
    .species = SPECIES_MEOWSTIC,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_PRANKSTER,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_PSYCHIC, MOVE_FAKE_TEARS}
    },
    {
    .lvl = 16,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHADOW_TAG,
    .ev = TRAINER_PARTY_EVS(100, 200, 0, 0, 0, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_SAFEGUARD, MOVE_DESTINY_BOND, MOVE_COUNTER, MOVE_MIRROR_COAT}
    },
    {
    .lvl = 16,
    .species = SPECIES_GALLADE,
    .heldItem = ITEM_BLACK_BELT,
    .ability = ABILITY_SHARPNESS,
    .ev = TRAINER_PARTY_EVS(100, 200, 0, 0, 0, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_DRAIN_PUNCH, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_BULK_UP}
    }
};
static const struct TrainerMon sParty_William_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_ESPURR,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_OWN_TEMPO,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_PSYCHIC, MOVE_FAKE_TEARS}
    },
    {
    .lvl = 16,
    .species = SPECIES_WYNAUT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHADOW_TAG,
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_SAFEGUARD, MOVE_DESTINY_BOND, MOVE_COUNTER, MOVE_MIRROR_COAT}
    },
    {
    .lvl = 16,
    .species = SPECIES_KIRLIA,
    .heldItem = ITEM_TWISTED_SPOON,
    .ability = ABILITY_SYNCHRONIZE,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_ICY_WIND, MOVE_HYPNOSIS}
    }
};

//Psychic-F Kayla: threshold 4
//may double with Gabrielle
static const struct TrainerMon sParty_Kayla[] = {
    {
    .lvl = 16,
    .species = SPECIES_MEOWSTIC_FEMALE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_COMPETITIVE,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_NASTY_PLOT}
    },
    {
    .lvl = 16,
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHADOW_TAG,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_PSYSHOCK, MOVE_DARK_PULSE, MOVE_TICKLE, MOVE_CALM_MIND}
    },
    {
    .lvl = 16,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_FAIRY_FEATHER,
    .ability = ABILITY_SYNCHRONIZE,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYSHOCK, MOVE_LIFE_DEW, MOVE_MYSTICAL_FIRE}
    }
};
static const struct TrainerMon sParty_Kayla_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_ESPURR,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_INFILTRATOR,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_CHARGE_BEAM, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_SWIFT}
    },
    {
    .lvl = 16,
    .species = SPECIES_GOTHITA,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_SHADOW_TAG,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_PSYSHOCK, MOVE_DARK_PULSE, MOVE_TICKLE, MOVE_CALM_MIND}
    },
    {
    .lvl = 16,
    .species = SPECIES_KIRLIA,
    .heldItem = ITEM_FAIRY_FEATHER,
    .ability = ABILITY_SYNCHRONIZE,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYSHOCK, MOVE_LIFE_DEW, MOVE_MYSTICAL_FIRE}
    }
};

//Breeder Gabrielle: threshold 3
//may double with William or Kayla, will truncate to first 3 mons
static const struct TrainerMon sParty_Gabrielle_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_QUILAVA,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_BLAZE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_HEAT_WAVE, MOVE_SWIFT, MOVE_BRICK_BREAK, MOVE_WILD_CHARGE}
    },
    {
    .lvl = 16,
    .species = SPECIES_BAYLEEF,
    .heldItem = ITEM_MIRACLE_SEED,
    .ability = ABILITY_OVERGROW,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM, MOVE_LIGHT_SCREEN, MOVE_SYNTHESIS}
    },
    {
    .lvl = 16,
    .species = SPECIES_CROCONAW,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_TORRENT,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_WATERFALL, MOVE_DRAGON_DANCE, MOVE_ICE_FANG, MOVE_BREAKING_SWIPE}
    },
    {
    .lvl = 16,
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_SHARP_BEAK,
    .ability = ABILITY_GUTS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FACADE, MOVE_STEEL_WING}
    },
    {
    .lvl = 16,
    .species = SPECIES_MAGNEMITE,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_MAGNET_PULL,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_NONE}
    },
    {
    .lvl = 16,
    .species = SPECIES_DIGLETT,
    .heldItem = ITEM_SOFT_SAND,
    .ability = ABILITY_ARENA_TRAP,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_SUBSTITUTE, MOVE_STONE_EDGE}
    }
};
static const struct TrainerMon sParty_Gabrielle[] = {
    {
    .lvl = 16,
    .species = SPECIES_TYPHLOSION_HISUIAN,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_BLAZE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
    .moves = {MOVE_HEAT_WAVE, MOVE_INFERNAL_PARADE, MOVE_ROCK_SLIDE, MOVE_SHADOW_BALL}
    },
    {
    .lvl = 16,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_MIRACLE_SEED,
    .ability = ABILITY_OVERGROW,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM, MOVE_LIGHT_SCREEN, MOVE_SYNTHESIS}
    },
    {
    .lvl = 16,
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_TORRENT,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_WATERFALL, MOVE_DRAGON_DANCE, MOVE_ICE_FANG, MOVE_BREAKING_SWIPE}
    },
    {
    .lvl = 16,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_SHARP_BEAK,
    .ability = ABILITY_GUTS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FACADE, MOVE_STEEL_WING}
    },
    {
    .lvl = 16,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_MAGNET_PULL,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_TRI_ATTACK}
    },
    {
    .lvl = 16,
    .species = SPECIES_DUGTRIO,
    .heldItem = ITEM_SOFT_SAND,
    .ability = ABILITY_ARENA_TRAP,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_SUBSTITUTE, MOVE_STONE_EDGE}
    }
};
//vanilla
static const struct TrainerMon sParty_Gabrielle1[] = {
    {
    .lvl = 26,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 26,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 26,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 26,
    .species = SPECIES_LOTAD,
    },
    {
    .lvl = 26,
    .species = SPECIES_SEEDOT,
    },
    {
    .lvl = 26,
    .species = SPECIES_TAILLOW,
    }
};
static const struct TrainerMon sParty_Gabrielle2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_TAILLOW,
    }
};
static const struct TrainerMon sParty_Gabrielle3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_TAILLOW,
    }
};
static const struct TrainerMon sParty_Gabrielle4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SWELLOW,
    }
};
static const struct TrainerMon sParty_Gabrielle5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    }
};


//MT PYRE 4F TRAINERS (done)

//Hex Maniac Tasha: threshold 3
static const struct TrainerMon sParty_Tasha[] = {
    {
    .lvl = 16,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_LIFE_ORB,
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_LONELY),
    .moves = {MOVE_SLUDGE_BOMB, MOVE_DESTINY_BOND, MOVE_SHADOW_BALL, MOVE_EXPLOSION}
    },
    {
    .lvl = 16,
    .species = SPECIES_MISMAGIUS,
    .heldItem = ITEM_LIFE_ORB,
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_DESTINY_BOND, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT}
    },
    {
    .lvl = 16,
    .species = SPECIES_CERULEDGE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_WEAK_ARMOR,
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BITTER_BLADE, MOVE_DESTINY_BOND, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE}
    }
};
static const struct TrainerMon sParty_Tasha_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_GASTLY,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_DESTINY_BOND, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN}
    },
    {
    .lvl = 16,
    .species = SPECIES_MISDREAVUS,
    .heldItem = ITEM_LIFE_ORB,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_DESTINY_BOND, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT}
    },
    {
    .lvl = 16,
    .species = SPECIES_CHARCADET,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_FLAME_BODY,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FLARE_BLITZ, MOVE_DESTINY_BOND, MOVE_NIGHT_SHADE, MOVE_FLAME_CHARGE}
    }
};


//MT PYRE 5F TRAINERS (done)

//Black Belt Atsushi: threshold 3
static const struct TrainerMon sParty_Atsushi[] = {
    {
    .lvl = 16,
    .species = SPECIES_PRIMEAPE,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_DEFIANT,
    .ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FOCUS_ENERGY, MOVE_STOMPING_TANTRUM, MOVE_CROSS_CHOP, MOVE_FACADE}
    },
    {
    .lvl = 16,
    .species = SPECIES_ANNIHILAPE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_DEFIANT,
    .ev = TRAINER_PARTY_EVS(0, 200, 150, 150, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BULK_UP, MOVE_RAGE_FIST, MOVE_DRAIN_PUNCH, MOVE_FACADE}
    }
};
static const struct TrainerMon sParty_Atsushi_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_MANKEY,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_DEFIANT,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FOCUS_ENERGY, MOVE_STOMPING_TANTRUM, MOVE_CROSS_CHOP, MOVE_FACADE}
    },
    {
    .lvl = 16,
    .species = SPECIES_MANKEY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_DEFIANT,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FOCUS_ENERGY, MOVE_STOMPING_TANTRUM, MOVE_CROSS_CHOP, MOVE_FACADE}
    }
};


//MT PYRE 6F TRAINERS (done)

//Hex Maniac Valerie: threshold 3
//may double with Cedric
static const struct TrainerMon sParty_Valerie[] = {
    {
    .lvl = 16,
    .species = SPECIES_SPIRITOMB,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_INTIMIDATE,
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_DARK_PULSE, MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_PSYCHIC}
    },
    {
    .lvl = 16,
    .species = SPECIES_DOUBLADE,
    .heldItem = ITEM_EVIOLITE,
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_CUT, MOVE_SHADOW_CLAW, MOVE_SACRED_SWORD, MOVE_SHADOW_SNEAK}
    }
};
static const struct TrainerMon sParty_Valerie_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_SPIRITOMB,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_INTIMIDATE,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_DARK_PULSE, MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_PSYCHIC}
    },
    {
    .lvl = 16,
    .species = SPECIES_HONEDGE,
    .heldItem = ITEM_EVIOLITE,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_CUT, MOVE_SHADOW_CLAW, MOVE_SACRED_SWORD, MOVE_SHADOW_SNEAK}
    }
};
//vanilla
static const struct TrainerMon sParty_Valerie1[] = {
    {
    .lvl = 32,
    .species = SPECIES_SABLEYE,
    }
};
static const struct TrainerMon sParty_Valerie2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SPOINK,
    }
};
static const struct TrainerMon sParty_Valerie3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_SABLEYE,
    }
};
static const struct TrainerMon sParty_Valerie4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_SABLEYE,
    }
};
static const struct TrainerMon sParty_Valerie5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 42,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 42,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 42,
    .species = SPECIES_GRUMPIG,
    }
};

//Psychic-M Cedric: threshold 3
//may double with Valerie
static const struct TrainerMon sParty_Cedric[] = {
    {
    .lvl = 16,
    .species = SPECIES_CHIMECHO,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_CALM_MIND, MOVE_EXTRASENSORY, MOVE_RECOVER, MOVE_DRAINING_KISS}
    },
    {
    .lvl = 16,
    .species = SPECIES_ZOROARK,
    .heldItem = ITEM_FOCUS_SASH,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_NIGHT_DAZE, MOVE_U_TURN, MOVE_FOCUS_BLAST, MOVE_MEMENTO}
    },
    {
    .lvl = 16,
    .species = SPECIES_ZOROARK_HISUIAN,
    .heldItem = ITEM_FOCUS_SASH,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_BITTER_MALICE, MOVE_U_TURN, MOVE_HYPER_VOICE, MOVE_MEMENTO}
    },
    {
    .lvl = 16,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_LIFE_ORB,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_PSYCHIC, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_DAZZLING_GLEAM}
    }
};
static const struct TrainerMon sParty_Cedric_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_CHIMECHO,
    .heldItem = ITEM_LEFTOVERS,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_CALM_MIND, MOVE_EXTRASENSORY, MOVE_RECOVER, MOVE_DRAINING_KISS}
    },
    {
    .lvl = 16,
    .species = SPECIES_ZORUA,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_NIGHT_DAZE, MOVE_U_TURN, MOVE_COUNTER, MOVE_MEMENTO}
    },
    {
    .lvl = 16,
    .species = SPECIES_ZORUA_HISUIAN,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_BITTER_MALICE, MOVE_U_TURN, MOVE_SWIFT, MOVE_MEMENTO}
    },
    {
    .lvl = 16,
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_LIFE_ORB,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_PSYCHIC, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_DAZZLING_GLEAM}
    }
};


//VICTORY ROAD 1F TRAINERS (done)

//Cooltrainer Yoshi
//double with Tsuji
static const struct TrainerMon sParty_Yoshi[] = {
    {
    .lvl = 16,
    .species = SPECIES_SMEARGLE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_WONDER_SKIN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_SPORE, MOVE_STICKY_WEB, MOVE_SUPER_FANG, MOVE_STEALTH_ROCK}
    },
    {
    .lvl = 16,
    .species = SPECIES_BRONZONG,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = ABILITY_LEVITATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
    .moves = {MOVE_RAIN_DANCE, MOVE_PSYCHIC, MOVE_GYRO_BALL, MOVE_BODY_PRESS}
    },
    {
    .lvl = 16,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_THICK_FAT,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 4, 252, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_REST, MOVE_SLEEP_TALK}
    }
};

//Cooltrainer Tsuji
//double with Yoshi
static const struct TrainerMon sParty_Tsuji[] = {
    {
    .lvl = 16,
    .species = SPECIES_EMPOLEON,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_COMPETITIVE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYDRO_PUMP, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_AQUA_JET}
    },
    {
    .lvl = 16,
    .species = SPECIES_TOXICROAK,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_DRY_SKIN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_SWORDS_DANCE, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_SWIFT_SWIM,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP}
    }
};

//Cooltrainer Wolfe
//double battle
static const struct TrainerMon sParty_Wolfe[] = {
    {
    .lvl = 16,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_EJECT_BUTTON,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_ENDEAVOR}
    },
    {
    .lvl = 16,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_LIGHTNING_ROD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 252, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_FAKE_OUT, MOVE_NUZZLE, MOVE_VOLT_SWITCH, MOVE_ENDEAVOR}
    },
    {
    .lvl = 16,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_LEVITATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_SLUDGE_BOMB, MOVE_TAUNT, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND}
    },
    {
    .lvl = 16,
    .species = SPECIES_BRONZONG,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_LEVITATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
    .moves = {MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK}
    },
    {
    .lvl = 16,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PRIMORDIAL_SEA,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_HYPER_VOICE, MOVE_PROTECT}
    },
    {
    .lvl = 16,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_STEEL_WING}
    },
};

//Cooltrainer Ryota
static const struct TrainerMon sParty_Ryota[] = {
    {
    .lvl = 16,
    .species = SPECIES_WHIMSICOTT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_PRANKSTER,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_TAILWIND, MOVE_LEECH_SEED, MOVE_ENERGY_BALL, MOVE_MOONBLAST}
    },
    {
    .lvl = 16,
    .species = SPECIES_MAROWAK_ALOLAN,
    .heldItem = ITEM_THICK_CLUB,
    .ability = ABILITY_LIGHTNING_ROD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .moves = {MOVE_FLARE_BLITZ, MOVE_SHADOW_BONE, MOVE_BRICK_BREAK, MOVE_SHADOW_SNEAK}
    },
    {
    .lvl = 16,
    .species = SPECIES_KROOKODILE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_TAUNT, MOVE_ROCK_SLIDE}
    },
    {
    .lvl = 16,
    .species = SPECIES_NINETALES_ALOLAN,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_SNOW_WARNING,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_AURORA_VEIL, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_BLIZZARD}
    },
    {
    .lvl = 16,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 170, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_SNARL, MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_EXTREME_SPEED}
    },
};

//Cooltrainer Ruiz
//double battle
static const struct TrainerMon sParty_Ruiz[] = {
    {
    .lvl = 16,
    .species = SPECIES_INCINEROAR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .moves = {MOVE_FLARE_BLITZ, MOVE_PARTING_SHOT, MOVE_DARKEST_LARIAT, MOVE_SNARL}
    },
    {
    .lvl = 16,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = ABILITY_DRIZZLE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_SURF, MOVE_HYPNOSIS, MOVE_PERISH_SONG, MOVE_TOXIC}
    },
    {
    .lvl = 16,
    .species = SPECIES_GASTRODON,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_STORM_DRAIN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_EARTH_POWER, MOVE_STOCKPILE, MOVE_ICE_BEAM, MOVE_RECOVER}
    },
    {
    .lvl = 16,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_DISGUISE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW}
    },
    {
    .lvl = 16,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_ANALYTIC,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
    .moves = {MOVE_FOUL_PLAY, MOVE_TECHNO_BLAST, MOVE_RECOVER, MOVE_TOXIC}
    },
};


//VICTORY ROAD B1F TRAINERS (done)

//Cooltrainer Rizzo
//double battle
static const struct TrainerMon sParty_Rizzo[] = {
    {
    .lvl = 16,
    .species = SPECIES_THUNDURUS,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = ABILITY_PRANKSTER,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .moves = {MOVE_WILDBOLT_STORM, MOVE_THUNDER_WAVE, MOVE_VOLT_SWITCH, MOVE_FOUL_PLAY}
    },
    {
    .lvl = 16,
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHADOW_TAG,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_TICKLE, MOVE_DARK_PULSE}
    },
    {
    .lvl = 16,
    .species = SPECIES_ROTOM_WASH,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_LEVITATE,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}
    },
    {
    .lvl = 16,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_CLEAR_BODY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_ZEN_HEADBUTT}
    },
    {
    .lvl = 16,
    .species = SPECIES_ESCAVALIER,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = ABILITY_SWARM,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_MEGAHORN, MOVE_IRON_HEAD, MOVE_COUNTER, MOVE_SUBSTITUTE}
    },
    {
    .lvl = 16,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_GUTS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_BELLY_DRUM, MOVE_ICE_PUNCH}
    },
};

//Cooltrainer Park
//double battle
static const struct TrainerMon sParty_Park[] = {
    {
    .lvl = 16,
    .species = SPECIES_PACHIRISU,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_VOLT_ABSORB,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_NUZZLE, MOVE_SUPER_FANG, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
    .lvl = 16,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_TRACE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_LIFE_DEW}
    },
    {
    .lvl = 16,
    .species = SPECIES_ROTOM_MOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_LEVITATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_LEAF_STORM, MOVE_WILL_O_WISP}
    },
    {
    .lvl = 16,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_DESOLATE_LAND,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM}
    },
    {
    .lvl = 16,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_ADAPTABILITY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_BULLET_PUNCH, MOVE_ICE_PUNCH, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED}
    },
    {
    .lvl = 16,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_ASCENT, MOVE_EARTHQUAKE, MOVE_WATERFALL}
    }
};

//Cooltrainer Shoma
static const struct TrainerMon sParty_Shoma[] = {
    {
    .lvl = 16,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_SCRAPPY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BODY_SLAM, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT}
    },
    {
    .lvl = 16,
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_POISON_HEAL,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_AEGISLASH,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STANCE_CHANGE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_SUBSTITUTE, MOVE_KINGS_SHIELD}
    },
    {
    .lvl = 16,
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_FLAME_BODY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER}
    },
    {
    .lvl = 16,
    .species = SPECIES_SYLVEON,
    .heldItem = ITEM_PIXIE_PLATE,
    .ability = ABILITY_PIXILATE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPER_VOICE, MOVE_QUICK_ATTACK, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND}
    }
};

//Cooltrainer Katelynn
static const struct TrainerMon sParty_Katelynn[] = {
    {
    .lvl = 16,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_ANALYTIC,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TOXIC, MOVE_EXPLOSION}
    },
    {
    .lvl = 16,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_TRUANT,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_GIGA_IMPACT, MOVE_COUNTER, MOVE_FACADE, MOVE_EARTHQUAKE}
    },
    {
    .lvl = 16,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SUPER_LUCK,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_DROUGHT,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_FLAMETHROWER, MOVE_MOONBLAST, MOVE_MORNING_SUN, MOVE_SOLAR_BEAM}
    },
    {
    .lvl = 16,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_CHLOROPHYLL,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .moves = {MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_VENOSHOCK}
    },
    {
    .lvl = 16,
    .species = SPECIES_DARMANITAN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_FOCUS_PUNCH}
    },
};


//VICTORY ROAD B2F TRAINERS (done)

//Cooltrainer Arash
static const struct TrainerMon sParty_Arash[] = {
    {
    .lvl = 16,
    .species = SPECIES_TORNADUS,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_PRANKSTER,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_ACROBATICS, MOVE_SUBSTITUTE, MOVE_U_TURN, MOVE_SUPERPOWER}
    },
    {
    .lvl = 16,
    .species = SPECIES_MAMOSWINE,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_THICK_FAT,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}
    },
    {
    .lvl = 16,
    .species = SPECIES_AMOONGUSS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_EFFECT_SPORE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_SPORE, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS}
    },
    {
    .lvl = 16,
    .species = SPECIES_CONKELDURR,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_FACADE, MOVE_KNOCK_OFF}
    },
    {
    .lvl = 16,
    .species = SPECIES_SHEDINJA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_WONDER_GUARD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_SHADOW_SNEAK, MOVE_POLTERGEIST, MOVE_PROTECT, MOVE_TOXIC}
    },
};

//Cooltrainer Glick
//double battle
static const struct TrainerMon sParty_Glick[] = {
    {
    .lvl = 16,
    .species = SPECIES_SCRAFTY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_MOXIE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DRAIN_PUNCH, MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_DRAGON_DANCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_COFAGRIGUS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_MUMMY,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
    .moves = {MOVE_SHADOW_BALL, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_WILL_O_WISP}
    },
    {
    .lvl = 16,
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_MAGIC_GUARD,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_CALM_MIND, MOVE_HIDDEN_POWER}
    },
    {
    .lvl = 16,
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_HARVEST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .moves = {MOVE_LEAF_STORM, MOVE_PSYSHOCK, MOVE_POWER_SWAP, MOVE_HYPNOSIS}
    },
    {
    .lvl = 16,
    .species = SPECIES_EMBOAR,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_BLAZE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
    .moves = {MOVE_FLARE_BLITZ, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_DRAIN_PUNCH}
    }
};

//Cooltrainer Shirona
static const struct TrainerMon sParty_Shirona[] = {
    {
    .lvl = 16,
    .species = SPECIES_SPIRITOMB,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PRESSURE,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SHADOW_BALL, MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_HYPNOSIS}
    },
    {
    .lvl = 16,
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SERENE_GRACE,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_AIR_SLASH, MOVE_THUNDER_WAVE, MOVE_EXTRASENSORY, MOVE_FIRE_BLAST}
    },
    {
    .lvl = 16,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_POISON_POINT,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_TOXIC_SPIKES, MOVE_SLEEP_POWDER}
    },
    {
    .lvl = 16,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_ADAPTABILITY,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_VACUUM_WAVE, MOVE_FOCUS_BLAST, MOVE_FLASH_CANNON, MOVE_NASTY_PLOT}
    },
    {
    .lvl = 16,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_COMPETITIVE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_ICE_BEAM, MOVE_MIRROR_COAT}
    },
    {
    .lvl = 16,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_ROUGH_SKIN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SCALE_SHOT, MOVE_DRAGON_RUSH}
    },
};

//Cooltrainer Hope
static const struct TrainerMon sParty_Hope[] = {
    {
    .lvl = 16,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PRANKSTER,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .moves = {MOVE_FOUL_PLAY, MOVE_SWAGGER, MOVE_NIGHT_SHADE, MOVE_TOXIC}
    },
    {
    .lvl = 16,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_VOLT_ABSORB,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 252, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .moves = {MOVE_SCALD, MOVE_VOLT_SWITCH, MOVE_PARABOLIC_CHARGE, MOVE_THUNDER}
    },
    {
    .lvl = 16,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_PSYCHIC_SURGE,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_POWER_GEM, MOVE_MOONLIGHT}
    },
    {
    .lvl = 16,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_PURE_POWER,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_DRAIN_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_ORICORIO_SENSU,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_DANCER,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_AIR_SLASH, MOVE_REVELATION_DANCE, MOVE_QUIVER_DANCE, MOVE_ROOST}
    },
    {
    .lvl = 16,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_PUNK_ROCK,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_EXPANDING_FORCE, MOVE_THUNDER_WAVE}
    }
};

//Cooltrainer Grace
//reference to fanfic "I Will Touch the Skies"
static const struct TrainerMon sParty_Grace[] = {
    {
    .lvl = 16,
    .species = SPECIES_ELECTIVIRE,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_IRON_FIST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .gender = TRAINER_MON_MALE,
    .moves = {MOVE_PLASMA_FISTS, MOVE_POWER_UP_PUNCH, MOVE_CROSS_CHOP, MOVE_THUNDER_WAVE}
    },
    {
    .lvl = 16,
    .species = SPECIES_TANGROWTH,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_REGENERATOR,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
    .gender = TRAINER_MON_MALE,
    .moves = {MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_GIGA_DRAIN, MOVE_EARTHQUAKE}
    },
    {
    .lvl = 16,
    .species = SPECIES_JELLICENT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_WATER_ABSORB,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 252, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .gender = TRAINER_MON_MALE,
    .moves = {MOVE_TOXIC, MOVE_HEX, MOVE_RECOVER, MOVE_BRINE}
    },
    {
    .lvl = 16,
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SHELL_ARMOR,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
    .gender = TRAINER_MON_MALE,
    .moves = {MOVE_SHELL_TRAP, MOVE_SCORCHING_SANDS, MOVE_FLASH_CANNON, MOVE_FIRE_BLAST}
    },
    {
    .lvl = 16,
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SUPER_LUCK,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .gender = TRAINER_MON_FEMALE,
    .moves = {MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_AURA_SPHERE, MOVE_ANCIENT_POWER}
    },
    {
    .lvl = 16,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_SAND_STREAM,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .gender = TRAINER_MON_FEMALE,
    .moves = {MOVE_STONE_EDGE, MOVE_PAYBACK, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH}
    }
};


//SOUTHERN ISLAND TRAINERS (done)

//Aroma Lady Naomi: threshold 2
static const struct TrainerMon sParty_Naomi[] = {
    {
    .lvl = 16,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_DROUGHT,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SEED_FLARE, MOVE_FIRE_BLAST, MOVE_SYNTHESIS, MOVE_GRASSY_TERRAIN}
    },
    {
    .lvl = 16,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_POISON_POINT,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_WEATHER_BALL, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER}
    },
    {
    .lvl = 16,
    .species = SPECIES_COMFEY,
    .heldItem = ITEM_BIG_ROOT,
    .ability = ABILITY_TRIAGE,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_SYNTHESIS, MOVE_AROMATHERAPY}
    },
    {
    .lvl = 16,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_HARVEST,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .moves = {MOVE_BODY_SLAM, MOVE_SYNTHESIS, MOVE_FLY, MOVE_SOLAR_BEAM}
    }
};
static const struct TrainerMon sParty_Naomi_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = ABILITY_DROUGHT,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_SYNTHESIS, MOVE_GRASSY_TERRAIN}
    },
    {
    .lvl = 16,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_POISON_POINT,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_WEATHER_BALL, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER}
    },
    {
    .lvl = 16,
    .species = SPECIES_COMFEY,
    .heldItem = ITEM_BIG_ROOT,
    .ability = ABILITY_TRIAGE,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_SYNTHESIS, MOVE_AROMATHERAPY}
    },
    {
    .lvl = 16,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_HARVEST,
    .nature = TRAINER_PARTY_NATURE(NATURE_RASH),
    .moves = {MOVE_BODY_SLAM, MOVE_SYNTHESIS, MOVE_FLY, MOVE_SOLAR_BEAM}
    }
};


//LITTLEROOT SHORE TRAINERS (done)

//Psychic-M Samuel
//no easy version, Choice Specs is locked behind this trainer
static const struct TrainerMon sParty_Samuel[] = {
    {
    .lvl = 16,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_MAGIC_GUARD,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_RECOVER, MOVE_NONE}
    },
    {
    .lvl = 16,
    .species = SPECIES_BEHEEYEM,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_ANALYTIC,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
    .moves = {MOVE_PSYSTRIKE, MOVE_DARK_PULSE, MOVE_FLASH_CANNON, MOVE_DESTINY_BOND}
    },
    {
    .lvl = 16,
    .species = SPECIES_MISMAGIUS,
    .heldItem = ITEM_NONE,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND}
    },
    {
    .lvl = 16,
    .species = SPECIES_POLTEAGEIST,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_CURSED_BODY,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_SHELL_SMASH, MOVE_SHADOW_BALL, MOVE_STRENGTH_SAP, MOVE_GIGA_DRAIN}
    },
    {
    .lvl = 16,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_TOXIC, MOVE_HEX, MOVE_VENOSHOCK, MOVE_DAZZLING_GLEAM}
    },
    {
    .lvl = 16,
    .species = SPECIES_SPIRITOMB,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 200, 200),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_SHADOW_BALL, MOVE_DARK_PULSE}
    }
};

//Fisherman Phillip: threshold 3
static const struct TrainerMon sParty_Phillip[] = {
    {
    .lvl = 16,
    .species = SPECIES_BASCULIN_BLUE_STRIPED,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_ROCK_HEAD,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_WAVE_CRASH, MOVE_DOUBLE_EDGE, MOVE_HEAD_SMASH, MOVE_AQUA_JET}
    },
    {
    .lvl = 16,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_CLEAR_BODY,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SLUDGE_BOMB, MOVE_ACID_ARMOR}
    },
    {
    .lvl = 16,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_VOLT_ABSORB,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_SIGNAL_BEAM, MOVE_REST}
    }
};
static const struct TrainerMon sParty_Phillip_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_BASCULIN_BLUE_STRIPED,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_WAVE_CRASH, MOVE_TAKE_DOWN, MOVE_CRUNCH, MOVE_AQUA_JET}
    },
    {
    .lvl = 16,
    .species = SPECIES_TENTACOOL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_CLEAR_BODY,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_BUBBLE_BEAM, MOVE_ICE_BEAM, MOVE_SLUDGE_BOMB, MOVE_ACID_ARMOR}
    },
    {
    .lvl = 16,
    .species = SPECIES_CHINCHOU,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_THUNDERBOLT, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_REST}
    }
};

//Swimmer-F Hillary: threshold 4
static const struct TrainerMon sParty_Hillary[] = {
    {
    .lvl = 16,
    .species = SPECIES_ALOMOMOLA,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_REGENERATOR,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_WISH, MOVE_TOXIC, MOVE_FLIP_TURN, MOVE_SCALD}
    },
    {
    .lvl = 16,
    .species = SPECIES_JELLICENT,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HEX, MOVE_SCALD, MOVE_WATER_SPOUT, MOVE_RECOVER}
    }
};
static const struct TrainerMon sParty_Hillary_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_ALOMOMOLA,
    .moves = {MOVE_WISH, MOVE_TOXIC, MOVE_FLIP_TURN, MOVE_SCALD}
    },
    {
    .lvl = 16,
    .species = SPECIES_FRILLISH,
    .heldItem = ITEM_LEFTOVERS,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_HEX, MOVE_SCALD, MOVE_WATER_SPOUT, MOVE_RECOVER}
    }
};


//JAGGED PASS TRAINERS (done)

//Hiker Eric: threshold 3
static const struct TrainerMon sParty_Eric[] = {
    {
    .lvl = 13,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_INTIMIDATE,
    .ev = TRAINER_PARTY_EVS(100, 100, 200, 0, 0, 0),
    .moves = {MOVE_TRIPLE_KICK, MOVE_TRIPLE_AXEL, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH}
    },
    {
    .lvl = 13,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_ROCKY_HELMET,
    .ev = TRAINER_PARTY_EVS(100, 100, 200, 0, 0, 0),
    .moves = {MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_EXPLOSION, MOVE_COSMIC_POWER}
    },
    {
    .lvl = 13,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_ASSAULT_VEST,
    .ev = TRAINER_PARTY_EVS(100, 100, 200, 0, 0, 0),
    .moves = {MOVE_LOW_KICK, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_WOOD_HAMMER}
    }
};
static const struct TrainerMon sParty_Eric_easy[] = {
    {
    .lvl = 13,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_TRIPLE_KICK, MOVE_TRIPLE_AXEL, MOVE_BULLET_PUNCH, MOVE_SUCKER_PUNCH}
    },
    {
    .lvl = 13,
    .species = SPECIES_BALTOY,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_EXPLOSION, MOVE_COSMIC_POWER}
    },
    {
    .lvl = 13,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LOW_KICK, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_WOOD_HAMMER}
    }
};

//Camper Ethan: threshold 2
//vanilla
static const struct TrainerMon sParty_Ethan[] = {
    {
    .lvl = 14,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_FACADE, MOVE_QUICK_ATTACK}
    },
    {
    .lvl = 14,
    .species = SPECIES_KECLEON,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_PROTEAN,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_SUCKER_PUNCH, MOVE_BODY_SLAM, MOVE_SHADOW_SNEAK, MOVE_OVERHEAT}
    }
};
static const struct TrainerMon sParty_Ethan_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_FOCUS_ENERGY, MOVE_QUICK_ATTACK}
    },
    {
    .lvl = 14,
    .species = SPECIES_KECLEON,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_BODY_SLAM, MOVE_SHADOW_SNEAK, MOVE_OVERHEAT}
    }
};
//vanilla
static const struct TrainerMon sParty_Ethan1[] = {
    {
    .lvl = 20,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 20,
    .species = SPECIES_TAILLOW,
    }
};
static const struct TrainerMon sParty_Ethan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_TAILLOW,
    }
};
static const struct TrainerMon sParty_Ethan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    }
};
static const struct TrainerMon sParty_Ethan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_LINOONE,
    }
};
static const struct TrainerMon sParty_Ethan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_LINOONE,
    }
};

//Picnicker Diana: threshold 3
static const struct TrainerMon sParty_Diana[] = {
    {
    .lvl = 14,
    .species = SPECIES_TOEDSCRUEL,
    .heldItem = ITEM_ROCKY_HELMET,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_EARTH_POWER, MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_ENERGY_BALL}
    },
    {
    .lvl = 14,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LUM_BERRY,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_FIERY_DANCE, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE, MOVE_STRENGTH_SAP}
    },
    {
    .lvl = 14,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_DRAGON_DANCE, MOVE_BODY_SLAM, MOVE_DRAGON_RUSH, MOVE_PLAY_ROUGH}
    }
};
static const struct TrainerMon sParty_Diana_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_TOEDSCOOL,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_MUD_SHOT, MOVE_POISON_POWDER, MOVE_VENOSHOCK, MOVE_MAGICAL_LEAF}
    },
    {
    .lvl = 14,
    .species = SPECIES_ODDISH,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_SLUDGE, MOVE_MEGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_STRENGTH_SAP}
    },
    {
    .lvl = 14,
    .species = SPECIES_SWABLU,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_COTTON_GUARD, MOVE_ROOST, MOVE_DRAGON_RUSH, MOVE_PLAY_ROUGH}
    }
};
//vanilla
static const struct TrainerMon sParty_Diana1[] = {
    {
    .lvl = 19,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 19,
    .species = SPECIES_ODDISH,
    },
    {
    .lvl = 19,
    .species = SPECIES_SWABLU,
    }
};
static const struct TrainerMon sParty_Diana2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SWABLU,
    }
};
static const struct TrainerMon sParty_Diana3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SWABLU,
    }
};
static const struct TrainerMon sParty_Diana4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWABLU,
    }
};
static const struct TrainerMon sParty_Diana5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_VILEPLUME,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_ALTARIA,
    }
};

//Picnicker Autumn: threshold 3
//may double with Julio
static const struct TrainerMon sParty_Autumn[] = {
    {
    .lvl = 14,
    .species = SPECIES_DACHSBUN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_AROMA_VEIL,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_PLAY_ROUGH, MOVE_BODY_PRESS, MOVE_TRAILBLAZE, MOVE_FIRE_FANG}
    },
    {
    .lvl = 14,
    .species = SPECIES_ARBOLIVA,
    .heldItem = ITEM_LEFTOVERS,
    .ev = TRAINER_PARTY_EVS(120, 120, 0, 120, 120, 0),
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_HYPER_VOICE, MOVE_POLLEN_PUFF}
    }
};
static const struct TrainerMon sParty_Autumn_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_FIDOUGH,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_TRAILBLAZE, MOVE_FIRE_FANG}
    },
    {
    .lvl = 14,
    .species = SPECIES_DOLLIV,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_SWIFT, MOVE_REST}
    }
};

//Cycling Triathlete-M Julio: threshold 3
//may double with Autumn
static const struct TrainerMon sParty_Julio[] = {
    {
    .lvl = 14,
    .species = SPECIES_PAWMOT,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_IRON_FIST,
    .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_MACH_PUNCH}
    },
    {
    .lvl = 14,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_EVIOLITE,
    .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_SCREECH, MOVE_METAL_SOUND}
    }
};
static const struct TrainerMon sParty_Julio_easy[] = {
    {
    .lvl = 14,
    .species = SPECIES_PAWMI,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_STATIC,
    .moves = {MOVE_NUZZLE, MOVE_SPARK, MOVE_BITE, MOVE_MACH_PUNCH}
    },
    {
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_SCREECH, MOVE_METAL_SOUND}
    }
};


//DEWDROP GLEN TRAINERS (done)

//Ranger Albert: threshold 3
static const struct TrainerMon sParty_Albert[] = {
    {
    .lvl = 16,
    .species = SPECIES_BRAMBLEGHAST,
    .heldItem = ITEM_WIDE_LENS,
    .ev = TRAINER_PARTY_EVS(200, 200, 0, 110, 0, 0),
    .moves = {MOVE_INFESTATION, MOVE_BULLET_SEED, MOVE_SHADOW_SNEAK, MOVE_SKITTER_SMACK}
    },
    {
    .lvl = 16,
    .species = SPECIES_CLODSIRE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_WATER_ABSORB,
    .ev = TRAINER_PARTY_EVS(200, 0, 200, 0, 0, 110),
    .moves = {MOVE_YAWN, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_RECOVER}
    },
    {
    .lvl = 16,
    .species = SPECIES_ESPATHRA,
    .heldItem = ITEM_TWISTED_SPOON,
    .ability = ABILITY_SPEED_BOOST,
    .ev = TRAINER_PARTY_EVS(200, 0, 0, 110, 200, 0),
    .moves = {MOVE_LUMINA_CRASH, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_ROOST}
    }
};
static const struct TrainerMon sParty_Albert_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_BRAMBLIN,
    .heldItem = ITEM_EVIOLITE,
    .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
    .moves = {MOVE_INFESTATION, MOVE_BULLET_SEED, MOVE_SHADOW_SNEAK, MOVE_POUNCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_WOOPER_PALDEAN,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_WATER_ABSORB,
    .ev = TRAINER_PARTY_EVS(200, 0, 200, 0, 0, 0),
    .moves = {MOVE_YAWN, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_RECOVER}
    },
    {
    .lvl = 16,
    .species = SPECIES_FLITTLE,
    .heldItem = ITEM_TWISTED_SPOON,
    .ability = ABILITY_SPEED_BOOST,
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
    .moves = {MOVE_PSYBEAM, MOVE_DISARMING_VOICE, MOVE_CALM_MIND, MOVE_ROOST}
    }
};

//Youngster Quincy: threshold 3
static const struct TrainerMon sParty_Quincy[] = {
    {
    .lvl = 16,
    .species = SPECIES_GRAFAIAI,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_POISON_TOUCH,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_SLASH, MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_DUBWOOL,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_BULLETPROOF,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_RETALIATE, MOVE_BODY_PRESS, MOVE_ZEN_HEADBUTT, MOVE_BOUNCE}
    }
};
static const struct TrainerMon sParty_Quincy_easy[] = {
    {
    .lvl = 16,
    .species = SPECIES_SHROODLE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_SLASH, MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_U_TURN}
    },
    {
    .lvl = 16,
    .species = SPECIES_WOOLOO,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_BULLETPROOF,
    .moves = {MOVE_HEADBUTT, MOVE_DOUBLE_KICK, MOVE_PAYBACK, MOVE_NONE}
    }
};

//Fisherman Dudley: threshold 3
static const struct TrainerMon sParty_Dudley[] = {
    {
    .lvl = 12,
    .species = SPECIES_TATSUGIRI,
    .heldItem = ITEM_ASSAULT_VEST,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_PULSE, MOVE_MIRROR_COAT, MOVE_COUNTER}
    },
    {
    .lvl = 12,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_ACID_ARMOR, MOVE_ICE_BEAM}
    },
    {
    .lvl = 12,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = ABILITY_LIGHTNING_ROD,
    .ev = TRAINER_PARTY_EVS(100, 100, 0, 100, 100, 0),
    .moves = {MOVE_AGILITY, MOVE_MEGAHORN, MOVE_FISHIOUS_REND, MOVE_DRILL_RUN}
    }
};
static const struct TrainerMon sParty_Dudley_easy[] = {
    {
    .lvl = 12,
    .species = SPECIES_TATSUGIRI,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_MIRROR_COAT, MOVE_COUNTER}
    },
    {
    .lvl = 12,
    .species = SPECIES_TENTACOOL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_SURF, MOVE_SLUDGE, MOVE_ACID_ARMOR, MOVE_ICE_BEAM}
    },
    {
    .lvl = 12,
    .species = SPECIES_GOLDEEN,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_AGILITY, MOVE_MEGAHORN, MOVE_WATERFALL, MOVE_DRILL_RUN}
    }
};


//DEWFORD RESORT TRAINERS

//Swimming Tuber-M Phelps
static const struct TrainerMon sParty_Phelps[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Tuber-F Tatjana
static const struct TrainerMon sParty_Tatjana[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Fisherman Mac
static const struct TrainerMon sParty_Mac[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Sailor Kondo
static const struct TrainerMon sParty_Kondo[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Swimmer-F Ledecky
static const struct TrainerMon sParty_Ledecky[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Young Couple Lea and Jed
static const struct TrainerMon sParty_LeaAndJed[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    }
};


//VERDANT FOREST TRAINERS

//Pokemaniac Dresden
static const struct TrainerMon sParty_Dresden[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Kindler Chapman
static const struct TrainerMon sParty_Chapman[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Aroma Lady Carrie
static const struct TrainerMon sParty_Carrie[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};


//MOSSDEEP CAVERNS TRAINERS

//Hiker Noran
static const struct TrainerMon sParty_Noran[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Psychic Cooper
static const struct TrainerMon sParty_Cooper[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Camper Edmund
static const struct TrainerMon sParty_Edmund[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};


//VALLEY OF STEEL TRAINERS

//Ranger-F Pepper
static const struct TrainerMon sParty_Pepper[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Ranger-M Stark
static const struct TrainerMon sParty_Stark[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Ninja Boy Yinsen
static const struct TrainerMon sParty_Yinsen[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};


//SANDSWEPT OASIS TRAINERS

//Hiker Neal
static const struct TrainerMon sParty_Neal[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Ranger-M Raoul
static const struct TrainerMon sParty_Raoul[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Parasol Lady Cleo
static const struct TrainerMon sParty_Cleo[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};


//FORINA TRAINERS

//Picnicker Kel
static const struct TrainerMon sParty_Kel[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Psychic-M Davide
static const struct TrainerMon sParty_Davide[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Fisherman Finley
static const struct TrainerMon sParty_Finley[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Black Belt Sumner
static const struct TrainerMon sParty_Sumner[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Bug Catcher Abner
static const struct TrainerMon sParty_Abner[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Running Triathlete-M Lance
static const struct TrainerMon sParty_Lance[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Biking Triathlete-F Artemis
static const struct TrainerMon sParty_Artemis[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Parasol Lady Hallie
static const struct TrainerMon sParty_Hallie[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};


//SLATEPORT BEACH TRAINERS

//Sailor Luther
static const struct TrainerMon sParty_Luther[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Tuber-M Hank
static const struct TrainerMon sParty_Hank[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Tuber-F Hali
static const struct TrainerMon sParty_Hali[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Expert-F Halle
static const struct TrainerMon sParty_Halle[] = {
    {
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    },
    {
    .lvl = 43,
    .species = SPECIES_ABSOL,
    }
};

//Fisherman Sheaffer
static const struct TrainerMon sParty_Sheaffer[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Battle Girl Ashlin
static const struct TrainerMon sParty_Ashlin[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Beauty Simone
static const struct TrainerMon sParty_Simone[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Bug Catcher Ellis
static const struct TrainerMon sParty_Ellis[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Swimmer-M Kinsley
static const struct TrainerMon sParty_Kinsley[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};



//SEASHORE HOUSE TRAINERS

static const struct TrainerMon sParty_Simon[] = {
    {
    .lvl = 12,
    .species = SPECIES_AZURILL,
    },
    {
    .lvl = 12,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Johanna[] = {
    {
    .lvl = 13,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Dwayne[] = {
    {
    .lvl = 11,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 11,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    }
};


//POWER PLANT TRAINERS

//Swimmer-F Ariarne
static const struct TrainerMon sParty_Ariarne[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Fisherman Timin
static const struct TrainerMon sParty_Timin[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Ninja Boy Benito
static const struct TrainerMon sParty_Benito[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};



//SUMMER SEA TRAINERS

//Sailor Stanly
static const struct TrainerMon sParty_Stanly[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Swimmer-F Regan
static const struct TrainerMon sParty_Regan[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Senior and Junior Tya and Madison
static const struct TrainerMon sParty_TyaAndMadi[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Fisherman Vernon
static const struct TrainerMon sParty_Vernon[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Bird Keeper Boris
static const struct TrainerMon sParty_Boris[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Expert-M Theodore
static const struct TrainerMon sParty_Theodore[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

//Swimmer-M Howie
static const struct TrainerMon sParty_Howie[] = {
    {
    .lvl = 2,
    .species = SPECIES_NONE,
    .heldItem = ITEM_NONE,
    .ability = ABILITY_NONE,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};


//TRICK HOUSE TRAINERS

//PUZZLE 1 -- 3 trainers, 3 total

//Sally
static const struct TrainerMon sParty_Sally[] = {
    {
    .lvl = 16,
    .species = SPECIES_ODDISH,
    }
};
//Eddie
static const struct TrainerMon sParty_Eddie[] = {
    {
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 16,
    .species = SPECIES_ZIGZAGOON,
    }
};
//Robin
static const struct TrainerMon sParty_Robin[] = {
    {
    .lvl = 14,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 14,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 14,
    .species = SPECIES_MARILL,
    }
};


//PUZZLE 2 -- 3 trainers, 6 total

//Ted
static const struct TrainerMon sParty_Ted[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 17,
    .species = SPECIES_RALTS,
    }
};
//Paul
static const struct TrainerMon sParty_Paul[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 15,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 15,
    .species = SPECIES_ODDISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 15,
    .species = SPECIES_WINGULL,
    }
};
//Georgia
static const struct TrainerMon sParty_Georgia[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 16,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 16,
    .species = SPECIES_BEAUTIFLY,
    }
};


//PUZZLE 3 -- 3 trainers, 9 total

//Justin
static const struct TrainerMon sParty_Justin[] = {
    {
    .lvl = 24,
    .species = SPECIES_KECLEON,
    }
};
//Martha
static const struct TrainerMon sParty_Martha[] = {
    {
    .lvl = 23,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 23,
    .species = SPECIES_SWABLU,
    }
};
//Alan
static const struct TrainerMon sParty_Alan[] = {
    {
    .lvl = 22,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 22,
    .species = SPECIES_NOSEPASS,
    },
    {
    .lvl = 22,
    .species = SPECIES_GRAVELER,
    }
};


//PUZZLE 4 -- 3 trainers, 12 total

//Cora
static const struct TrainerMon sParty_Cora[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_MEDITITE,
    }
};
//Paula
static const struct TrainerMon sParty_Paula[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};
//Yuji
static const struct TrainerMon sParty_Yuji[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 26,
    .species = SPECIES_MACHOKE,
    }
};


//PUZZLE 5 -- 3 trainers, 17 total (done)
//No easy versions here, this is intended to be an extreme gauntlet

//Bug Catcher Irvin
static const struct TrainerMon sParty_Irvin[] = {
    {
    .lvl = 16,
    .species = SPECIES_GALVANTULA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_COMPOUND_EYES,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_STICKY_WEB}
    },
    {
    .lvl = 16,
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .ability = ABILITY_FLAME_BODY,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .moves = {MOVE_FIRE_BLAST, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_FIERY_DANCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_ESCAVALIER,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_OVERCOAT,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_MEGAHORN, MOVE_IRON_HEAD, MOVE_RAZOR_SHELL, MOVE_DRILL_RUN}
    },
    {
    .lvl = 16,
    .species = SPECIES_YANMEGA,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .ability = ABILITY_SPEED_BOOST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_U_TURN, MOVE_GIGA_DRAIN, MOVE_AIR_SLASH, MOVE_DETECT}
    },
    {
    .lvl = 16,
    .species = SPECIES_ARAQUANID,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_WATER_BUBBLE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 170, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_LEECH_LIFE, MOVE_LEECH_LIFE, MOVE_MIRROR_COAT, MOVE_INFESTATION}
    },
    {
    .lvl = 16,
    .species = SPECIES_SHEDINJA,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .ability = ABILITY_WONDER_GUARD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE}
    }
};
//Battle Girl Kelsey
static const struct TrainerMon sParty_Kelsey[] = {
    {
    .lvl = 16,
    .species = SPECIES_AEGISLASH,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STANCE_CHANGE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_SHADOW_BALL, MOVE_TOXIC, MOVE_SHADOW_SNEAK, MOVE_FLASH_CANNON}
    },
    {
    .lvl = 16,
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_UNBURDEN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(12, 244, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE, MOVE_HIGH_JUMP_KICK, MOVE_ACROBATICS}
    },
    {
    .lvl = 16,
    .species = SPECIES_LILLIGANT_HISUIAN,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_HUSTLE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_VICTORY_DANCE, MOVE_LEAF_BLADE, MOVE_AXE_KICK, MOVE_ICE_SPINNER}
    },
    {
    .lvl = 16,
    .species = SPECIES_SCRAFTY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHED_SKIN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_REST}
    },
    {
    .lvl = 16,
    .species = SPECIES_BEWEAR,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_FLUFFY,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DRAIN_PUNCH, MOVE_DOUBLE_EDGE, MOVE_SHADOW_CLAW, MOVE_ICE_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_ADAPTABILITY,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_VACUUM_WAVE, MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_FLASH_CANNON}
    }
};
//Bird Keeper Toby
static const struct TrainerMon sParty_Toby[] = {
    {
    .lvl = 16,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_RECKLESS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN}
    },
    {
    .lvl = 16,
    .species = SPECIES_CORVIKNIGHT,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_MIRROR_ARMOR,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 136, 120, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
    .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_U_TURN, MOVE_ROOST}
    },
    {
    .lvl = 16,
    .species = SPECIES_HONCHKROW,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_MOXIE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BRAVE_BIRD, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_ROOST}
    },
    {
    .lvl = 16,
    .species = SPECIES_TOUCANNON,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SKILL_LINK,
    .iv = TRAINER_PARTY_IVS(29, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_BRAVE_BIRD, MOVE_BRICK_BREAK}
    },
    {
    .lvl = 16,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_NO_GUARD,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_U_TURN, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST}
    },
    {
    .lvl = 16,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .ability = ABILITY_GALE_WINGS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_BULK_UP, MOVE_OVERHEAT, MOVE_DUAL_WINGBEAT, MOVE_ROOST}
    }
};
//Cooltrainer-F Alicia
static const struct TrainerMon sParty_Alicia[] = {
    {
    .lvl = 16,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_MULTISCALE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_DRAGON_DANCE, MOVE_DUAL_WINGBEAT, MOVE_EXTREME_SPEED, MOVE_EARTHQUAKE}
    },
    {
    .lvl = 16,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .ability = ABILITY_INTIMIDATE,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 170, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .moves = {MOVE_TOXIC, MOVE_MORNING_SUN, MOVE_SNARL, MOVE_FLAMETHROWER}
    },
    {
    .lvl = 16,
    .species = SPECIES_PRIMARINA,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_BERSERK,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_MOONBLAST, MOVE_AQUA_JET, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM}
    },
    {
    .lvl = 16,
    .species = SPECIES_TANGROWTH,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_REGENERATOR,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
    .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
    .moves = {MOVE_KNOCK_OFF, MOVE_POWER_WHIP, MOVE_FOCUS_BLAST, MOVE_SLUDGE_BOMB}
    },
    {
    .lvl = 16,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STATIC,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_THUNDER, MOVE_SIGNAL_BEAM, MOVE_COTTON_GUARD, MOVE_TAIL_GLOW}
    },
    {
    .lvl = 16,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHADOW_TAG,
    .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
    .moves = {MOVE_ENCORE, MOVE_DESTINY_BOND, MOVE_MIRROR_COAT, MOVE_COUNTER}
    }
};
//Cooltrainer-M Oliver
static const struct TrainerMon sParty_Oliver[] = {
    {
    .lvl = 16,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SAND_STREAM,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(170, 170, 170, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_STEALTH_ROCK, MOVE_DRAGON_DANCE}
    },
    {
    .lvl = 16,
    .species = SPECIES_EMPOLEON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_COMPETITIVE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
    .moves = {MOVE_ROOST, MOVE_FLASH_CANNON, MOVE_HYDRO_PUMP, MOVE_FLIP_TURN}
    },
    {
    .lvl = 16,
    .species = SPECIES_FERROTHORN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_IRON_BARBS,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
    .moves = {MOVE_THUNDER_WAVE, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP}
    },
    {
    .lvl = 16,
    .species = SPECIES_GOLURK,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_IRON_FIST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_SHADOW_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .lvl = 16,
    .species = SPECIES_MINIOR,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SHIELDS_DOWN,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_SHELL_SMASH, MOVE_ACROBATICS, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}
    },
    {
    .lvl = 16,
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_POISON_HEAL,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_EARTHQUAKE, MOVE_FACADE, MOVE_ROOST, MOVE_SWORDS_DANCE}
    }
};


//PUZZLE 6 -- 3 trainers, 20 total

//Ranger-F Sophia
static const struct TrainerMon sParty_Sophia[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 38,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    }
};
//Bird Keeper Benny
static const struct TrainerMon sParty_Benny[] = {
    {
    .lvl = 36,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 36,
    .species = SPECIES_XATU,
    }
};
//Ranger-M Sebastian
static const struct TrainerMon sParty_Sebastian[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 39,
    .species = SPECIES_CACTURNE,
    }
};


//PUZZLE 7 -- 6 trainers, 26 total

//Psychic-M Joshua
static const struct TrainerMon sParty_Joshua[] = {
    {
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};
//Psychic-F Alexis
static const struct TrainerMon sParty_Alexis[] = {
    {
    .lvl = 41,
    .species = SPECIES_KIRLIA,
    },
    {
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};
//Hex Maniac Patricia
static const struct TrainerMon sParty_Patricia[] = {
    {
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 41,
    .species = SPECIES_LUNATONE,
    }
};
//Psychic-F Mariela
static const struct TrainerMon sParty_Mariela[] = {
    {
    .lvl = 41,
    .species = SPECIES_CHIMECHO,
    }
};
//Psychic-M Alvaro
static const struct TrainerMon sParty_Alvaro[] = {
    {
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 41,
    .species = SPECIES_KADABRA,
    }
};
//Gentleman Everett
static const struct TrainerMon sParty_Everett[] = {
    {
    .lvl = 41,
    .species = SPECIES_WOBBUFFET,
    }
};


//PUZZLE 8 -- 3 trainers, 29 total

//Cooltrainer-M Vincent
static const struct TrainerMon sParty_Vincent[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_SHARPEDO,
    }
};
//Cooltrainer-M Leroy
static const struct TrainerMon sParty_Leroy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 46,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 46,
    .species = SPECIES_STARMIE,
    }
};
//Cooltrainer-F Keira
static const struct TrainerMon sParty_Keira[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    }
};

//TOTAL TRICK HOUSE TRAINERS -- 29




//Vanilla parties below

//MAGMA AND AQUA

static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    {
    .lvl = 32,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
    .lvl = 36,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    {
    .lvl = 36,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
    .lvl = 36,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
    {
    .lvl = 9,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    {
    .lvl = 36,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    {
    .lvl = 11,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    {
    .lvl = 27,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 27,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    {
    .lvl = 27,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 27,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
    .lvl = 26,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 26,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntMuseum1[] = {
    {
    .lvl = 15,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntMuseum2[] = {
    {
    .lvl = 14,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 14,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    {
    .lvl = 32,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMtPyre1[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre2[] = {
    {
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntMtPyre3[] = {
    {
    .lvl = 30,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
    .lvl = 28,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
    .lvl = 26,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 30,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMtChimney1[] = {
    {
    .lvl = 20,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .lvl = 31,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
    .lvl = 20,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
    .lvl = 32,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
    .lvl = 27,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 27,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
    .lvl = 29,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
    .lvl = 28,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 28,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
    .lvl = 28,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 28,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
    .lvl = 29,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
    .lvl = 29,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
    .lvl = 29,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 42,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 20,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 38,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 39,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 24,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 24,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 25,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 38,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 40,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Matt[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Archie[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 41,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 41,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_SHARPEDO,
    }
};




//VANILLA ELITE FOUR AND CHAMPION

static const struct TrainerMon sParty_Sidney[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 46,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 46,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_FEINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Phoebe[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Glacia[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD}
    }
};

static const struct TrainerMon sParty_Drake[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 54,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 53,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SMOKESCREEN, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_BODY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 53,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Wallace[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_AMNESIA, MOVE_HYPER_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC}
    }
};


//VANILLA GYM LEADERS

static const struct TrainerMon sParty_Brawly1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 16,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_KARATE_CHOP, MOVE_LOW_KICK, MOVE_SEISMIC_TOSS, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 16,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 19,
    .species = SPECIES_MAKUHITA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_ARM_THRUST, MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP}
    }
};

static const struct TrainerMon sParty_Roxanne4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Brawly2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Flannery4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Winona4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};




//VANILLA RIVALS

static const struct TrainerMon sParty_WallyVR1[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 41,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 45,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanRoute103Mudkip[] = {
    {
    .lvl = 5,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 20,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
    {
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 20,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
    {
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 20,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
    {
    .lvl = 5,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 20,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 20,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayRoute119Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 20,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute119Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_BrendanRustboroMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_MayRustboroMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_MayRustboroTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_MayRustboroTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_WallyMauville[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 16,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_WallyVR2[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 46,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR3[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 49,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 51,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR4[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 52,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 54,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR5[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 56,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 55,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 56,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 57,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanLilycoveMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_MARSHTOMP,
    }
};



//METEOR FALLS STEVEN
static const struct TrainerMon sParty_Steven[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 77,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 75,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 78,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};


//VANILLA BATTLE FRONTIER BRAIN PLACEHOLDERS

static const struct TrainerMon sParty_Anabel[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};


//LINK PLACEHOLDER PARTIES

static const struct TrainerMon sParty_Red[] = {
    {
    .lvl = 5,
    .species = SPECIES_CHARMANDER,
    }
};

static const struct TrainerMon sParty_Leaf[] = {
    {
    .lvl = 5,
    .species = SPECIES_BULBASAUR,
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};
