#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)  // Unused Flag
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)  // Unused Flag
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)  // Unused Flag
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)  // Unused Flag
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)  // Unused Flag
#define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)  // Unused Flag
#define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10) // Unused Flag
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F
#define NUM_TEMP_FLAGS   (TEMP_FLAGS_END - TEMP_FLAGS_START + 1)


//JINNORA: type tutor gems
#define FLAG_RECEIVED_NORMAL_GEM                        0x20
#define FLAG_RECEIVED_FIGHTING_GEM                      0x21
#define FLAG_RECEIVED_FLYING_GEM                        0x22
#define FLAG_RECEIVED_SLATEPORT_CITY_HOUSE2_POISON_GEM  0x23
#define FLAG_RECEIVED_GROUND_GEM                        0x24
#define FLAG_RECEIVED_ROCK_GEM                          0x25
#define FLAG_RECEIVED_OLDALE_TOWN_HOUSE2_BUG_GEM        0x26
#define FLAG_RECEIVED_GHOST_GEM                         0x27
#define FLAG_RECEIVED_STEEL_GEM                         0x28
#define FLAG_RECEIVED_FIRE_GEM                          0x29
#define FLAG_RECEIVED_WATER_GEM                         0x2A
#define FLAG_RECEIVED_GRASS_GEM                         0x2B
#define FLAG_RECEIVED_ELECTRIC_GEM                      0x2C
#define FLAG_RECEIVED_PSYCHIC_GEM                       0x2D
#define FLAG_RECEIVED_EVER_GRANDE_CITY_HOUSE3_ICE_GEM   0x2E
#define FLAG_RECEIVED_DRAGON_GEM                        0x2F
#define FLAG_RECEIVED_DEWFORD_TOWN_HOUSE3_DARK_GEM      0x30
#define FLAG_RECEIVED_FAIRY_GEM                         0x31

#define FLAG_PENDING_DAYCARE_EGG        0x32
#define FLAG_INFINITE_CANDY             0x33//Jinnora: toggles regular XP mode/infinte candy mode
#define FLAG_MOVE_RELEARN_PARTY         0x34//Jinnora: for returning to party from move relearner

//Jinnora: added flags for various configs
#define FLAG_EXP_SHARE          0x35 
#define FLAG_INVERSE_BATTLE     0x36 
#define FLAG_FORCE_DOUBLE_WILD  0x37 
#define FLAG_SMART_WILD_AI      0x38 
#define FLAG_NO_BAG_USE         0x39
#define FLAG_NO_CATCHING        0x3A
#define FLAG_NO_ENCOUNTER       0x3B 
#define FLAG_NO_TRAINER_SEE     0x3C
#define FLAG_NO_COLLISION       0x3D
#define FLAG_FORCE_SHINY        0x3E
#define FLAG_FORCE_NO_SHINY     0x3F

//Jinnora: flags for challenge settings
#define FLAG_CHALLENGE_HM_RANDOM    0x40 // gives random HM after gym victory
#define FLAG_CHALLENGE_HM_NONE      0x41 // receive no HMs until postgame
#define FLAG_CHALLENGE_FERRY_LIMIT  0x42 // one ferry ride only, replenish after gym victory
#define FLAG_CHALLENGE_FERRY_TICKET 0x43 // is single ferry use available?

#define FLAG_UNUSED_0x044                           0x44
#define FLAG_UNUSED_0x045                           0x45
#define FLAG_GIVEN_POWER_ITEMS                      0x46
#define FLAG_GIVEN_ARRIVAL_FERRY_CORRIDOR_LEMONADE  0x47
#define FLAG_GIVEN_VERDANT_FOREST_TANGA_BERRY       0x48
#define FLAG_ETERNAL_ENCOUNTERED                    0x49
#define FLAG_BEACH_BATTLE_VICTORY                   0x4A
#define FLAG_BEACH_BATTLE_STARTED                   0x4B
#define FLAG_UNUSED_0x04C    0x4C // Unused Flag
#define FLAG_UNUSED_0x04D    0x4D // Unused Flag
#define FLAG_UNUSED_0x04E    0x4E // Unused Flag
#define FLAG_UNUSED_0x04F    0x4F // Unused Flag

// Scripts
#define FLAG_SET_WALL_CLOCK                  0x50//was hide still rayquaza
#define FLAG_GYM_LEADER_REMATCH_AVAILABLE    0x51//was set wall clock
#define FLAG_POKERUS_EXPLAINED               0x52//was rescued birch
#define FLAG_TV_EXPLAINED                    0x53//was legends in sootopolis
#define FLAG_UNUSED_0x054                    0x54  // Unused Flag
#define FLAG_UNUSED_0x055                    0x55  // Unused Flag
#define FLAG_UNUSED_0x056                    0x56//was hide contest pokeball
#define FLAG_UNUSED_0x057                    0x57//was met rival mom
#define FLAG_UNUSED_0x058                    0x58//was met birch aide
#define FLAG_DECLINED_BIKE                   0x59
#define FLAG_RECEIVED_BIKE                   0x5A
#define FLAG_UNUSED_0x05B                    0x5B//was wattson rematch available (jinnora renamed)
#define FLAG_COLLECTED_ALL_SILVER_SYMBOLS    0x5C//was silver symbols
#define FLAG_GOOD_LUCK_SAFARI_ZONE           0x5D // Set after talking to NPC blocking Safari Zone entrance/exit once.
#define FLAG_RECEIVED_WAILMER_PAIL           0x5E
#define FLAG_RECEIVED_POKEBLOCK_CASE         0x5F
#define FLAG_RECEIVED_SECRET_POWER           0x60
#define FLAG_MET_TEAM_AQUA_HARBOR            0x61
#define FLAG_UNUSED_0x062                    0x62//was tv explained
#define FLAG_MAUVILLE_GYM_BARRIERS_STATE     0x63
#define FLAG_RECEIVED_BLUNDER_POLICY         0x64//was mossdeep gym switch 1
#define FLAG_RECEIVED_TUNNELER_GIFT          0x65//was mossdeep gym switch 2
#define FLAG_MET_THOMPSON_HIT_MOVES          0x66//was mossdeep gym switch 3
#define FLAG_MET_THOMSON_SET_MOVES           0x67//was mossdeep gym switch 4
#define FLAG_UNUSED_0x068                    0x68// Unused Flag
#define FLAG_OCEANIC_MUSEUM_MET_REPORTER     0x69
#define FLAG_RECEIVED_HM_STRENGTH            0x6A
#define FLAG_UNUSED_0x06B                    0x6B//was rock smash
#define FLAG_UNUSED_0x06C                    0x6C //was set after defeating Flannery, so the player cant white out from poison before receiving Go Goggles
#define FLAG_UNUSED_0x06D                    0x6D//was flash
#define FLAG_UNUSED_0x06E                    0x6E//was received fly
#define FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT  0x6F
#define FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE  0x70
#define FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE 0x71 // Unused Flag. Used in R/S to indicate whether player defeated or caught Groudon/Kyogre in Cave of Origin.
#define FLAG_SCOTT_CALL_BATTLE_FRONTIER      0x72 // Used in order to activate a phone call from Scott, inviting the player to the SS Tidal.
#define FLAG_RECEIVED_METEORITE              0x73
#define FLAG_UNUSED_0x74                     0x74//was adventure started
#define FLAG_UNUSED_0x75                     0x75//was defeated space center magma
#define FLAG_MET_HIDDEN_POWER_GIVER          0x76
#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE    0x77
#define FLAG_LANDMARK_MIRAGE_TOWER           0x78
#define FLAG_UNUSED_0x79                     0x79
#define FLAG_UNUSED_0x7A                     0x7A//was received surf
#define FLAG_UNUSED_0x7B                     0x7B//was receieved dive
#define FLAG_UNUSED_0x7C                     0x7C//was register rival pokenav
#define FLAG_UNUSED_0x7D                     0x7D//was defeat rival 104
#define FLAG_DEFEATED_WALLY_VICTORY_ROAD     0x7E
#define FLAG_UNUSED_0x7F                     0x7F//was met pretty petal shop owner
#define FLAG_UNUSED_0x80                     0x80//was roxanne call after brawly
#define FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN  0x81
#define FLAG_UNUSED_0x82                     0x82//was defeated rival 103
#define FLAG_UNUSED_0x83                     0x83//was received doll lanette
#define FLAG_UNUSED_0x84                     0x84//used to be oldale potion flag
#define FLAG_RECEIVED_AMULET_COIN            0x85
#define FLAG_UNUSED_0x86                     0x86//used to be daycare egg flag
#define FLAG_UNUSED_0x87                     0x87//was thank for play with wally
#define FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL 0x88 // Set after defeating Wally outside Mauville Gym. Will activate a call later to register Wally.
#define FLAG_UNUSED_0x89                     0x89//was received cut
#define FLAG_SCOTT_CALL_FORTREE_GYM          0x8A // Triggers call from Scott after defeating Winona
#define FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY   0x8B
#define FLAG_RECEIVED_6_SODA_POP             0x8C
#define FLAG_DEFEATED_SEASHORE_HOUSE         0x8D
#define FLAG_UNUSED_0x8E                     0x8E//was devon goods stolen
#define FLAG_UNUSED_0x8F                     0x8F//was recovered devon goods
#define FLAG_UNUSED_0x90                     0x90//was returned devon goods
#define FLAG_CAUGHT_LUGIA                    0x91
#define FLAG_CAUGHT_HO_OH                    0x92
#define FLAG_UNUSED_0x93                     0x93//was briney sailing intro
#define FLAG_UNUSED_0x94                     0x94//was dock rejected devon goods
#define FLAG_DELIVERED_DEVON_GOODS           0x95
#define FLAG_UNUSED_0x96                     0x96//was RS contest pass
#define FLAG_RECEIVED_CASTFORM               0x97//was received castform
#define FLAG_UNUSED_0x98                     0x98//unused, was super rod
#define FLAG_RUSTBORO_NPC_TRADE_COMPLETED    0x99
#define FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED  0x9A
#define FLAG_FORTREE_NPC_TRADE_COMPLETED     0x9B
#define FLAG_BATTLE_FRONTIER_TRADE_DONE      0x9C
#define FLAG_FORCE_MIRAGE_TOWER_VISIBLE      0x9D
#define FLAG_UNUSED_0x9E                     0x9E//was sootopolis archie maxie leave
#define FLAG_UNUSED_0x9F                     0x9F//was interacted devon employee stolen
#define FLAG_COOL_PAINTING_MADE              0xA0
#define FLAG_BEAUTY_PAINTING_MADE            0xA1
#define FLAG_CUTE_PAINTING_MADE              0xA2
#define FLAG_SMART_PAINTING_MADE             0xA3
#define FLAG_TOUGH_PAINTING_MADE             0xA4
#define FLAG_RECEIVED_RED_SCARF              0xA5//was rock tomb
#define FLAG_RECEIVED_BLUE_SCARF             0xA6//was bulk up
#define FLAG_RECEIVED_PINK_SCARF             0xA7//was shock wave
#define FLAG_RECEIVED_GREEN_SCARF            0xA8//was overheat
#define FLAG_RECEIVED_YELLOW_SCARF           0xA9//was facade
#define FLAG_UNUSED_0xAA                     0xAA//was aerial ace
#define FLAG_UNUSED_0xAB                     0xAB//was calm mind
#define FLAG_UNUSED_0xAC                     0xAC//was water pulse
#define FLAG_HIDE_SECRET_BASE_TRAINER        0xAD
#define FLAG_DECORATION_1                    0xAE
#define FLAG_DECORATION_2                    0xAF
#define FLAG_DECORATION_3                    0xB0
#define FLAG_DECORATION_4                    0xB1
#define FLAG_DECORATION_5                    0xB2
#define FLAG_DECORATION_6                    0xB3
#define FLAG_DECORATION_7                    0xB4
#define FLAG_DECORATION_8                    0xB5
#define FLAG_DECORATION_9                    0xB6
#define FLAG_DECORATION_10                   0xB7
#define FLAG_DECORATION_11                   0xB8
#define FLAG_DECORATION_12                   0xB9
#define FLAG_DECORATION_13                   0xBA
#define FLAG_DECORATION_14                   0xBB
#define FLAG_RECEIVED_POKENAV                0xBC
#define FLAG_DELIVERED_STEVEN_LETTER         0xBD
#define FLAG_DEFEATED_WALLY_MAUVILLE         0xBE
#define FLAG_UNUSED_0xBF                     0xBF//was defeated grunt space center
#define FLAG_UNUSED_0xC0                     0xC0//was received mossdeep sun stone
#define FLAG_WALLY_SPEECH                    0xC1
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1   0xC2 // Leftover from the RS version of Puzzle Room 7, functionally unused
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2   0xC3 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3   0xC4 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4   0xC5 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5   0xC6 //
#define FLAG_RUSTURF_TUNNEL_OPENED           0xC7
#define FLAG_UNUSED_0xC8                     0xC8//was scarf flags (red)
#define FLAG_UNUSED_0xC9                     0xC9//blue
#define FLAG_UNUSED_0xCA                     0xCA//pink
#define FLAG_UNUSED_0xCB                     0xCB//green
#define FLAG_UNUSED_0xCC                     0xCC//yellow
#define FLAG_UNUSED_0xCD                     0xCD//was interacted steven space center
#define FLAG_ENCOUNTERED_LATIAS_OR_LATIOS    0xCE
#define FLAG_UNUSED_0xCF                     0xCF//was met archie meteor falls
#define FLAG_UNUSED_0xD0                     0xD0//was got basement key wattson
#define FLAG_UNUSED_0xD1                     0xD1//was got thunderbolt wattson
#define FLAG_FAN_CLUB_STRENGTH_SHARED        0xD2 // Set when you rate the strength of another trainer in Lilycove's Trainer Fan Club.
#define FLAG_DEFEATED_RIVAL_RUSTBORO         0xD3
#define FLAG_RECEIVED_RED_OR_BLUE_ORB        0xD4
#define FLAG_UNUSED_0xD5                     0xD5//was premier ball rustboro
#define FLAG_ENABLE_WALLY_MATCH_CALL         0xD6
#define FLAG_ENABLE_SCOTT_MATCH_CALL         0xD7
#define FLAG_ENABLE_MOM_MATCH_CALL           0xD8
#define FLAG_MET_DIVING_TREASURE_HUNTER      0xD9
#define FLAG_UNUSED_0xDA                     0xDA//was met wailmer trainer
#define FLAG_UNUSED_0xDB                     0xDB//was evil leader pls stop
#define FLAG_UNUSED_0xDC                     0xDC // This flag was read, but never written to
#define FLAG_UNUSED_0xDD                     0xDD//was received go goggles
#define FLAG_WINGULL_SENT_ON_ERRAND          0xDE
#define FLAG_RECEIVED_MENTAL_HERB            0xDF
#define FLAG_WINGULL_DELIVERED_MAIL          0xE0
#define FLAG_RECEIVED_20_COINS               0xE1
#define FLAG_RECEIVED_STARTER_DOLL           0xE2
#define FLAG_RECEIVED_GOOD_ROD               0xE3
#define FLAG_REGI_DOORS_OPENED               0xE4
#define FLAG_RECEIVED_TM_RETURN              0xE5
#define FLAG_UNUSED_0x0E6                    0xE6//was sludge bomb
#define FLAG_UNUSED_0x0E7                    0xE7//was roar
#define FLAG_UNUSED_0x0E8                    0xE8//was giga drain
#define FLAG_UNUSED_0x0E9                    0xE9 // Unused Flag
#define FLAG_UNUSED_0x0EA                    0xEA//was tm rest
#define FLAG_UNUSED_0x0EB                    0xEB//was attract
#define FLAG_RECEIVED_GLASS_ORNAMENT         0xEC
#define FLAG_RECEIVED_SILVER_SHIELD          0xED
#define FLAG_RECEIVED_GOLD_SHIELD            0xEE
#define FLAG_USED_STORAGE_KEY                0xEF
#define FLAG_USED_ROOM_1_KEY                 0xF0
#define FLAG_USED_ROOM_2_KEY                 0xF1
#define FLAG_USED_ROOM_4_KEY                 0xF2
#define FLAG_USED_ROOM_6_KEY                 0xF3
#define FLAG_MET_PROF_COZMO                  0xF4
#define FLAG_RECEIVED_WAILMER_DOLL           0xF5
#define FLAG_RECEIVED_SITRUS_BERRY_ROUTE_104 0xF6
#define FLAG_DEFEATED_SS_TIDAL_TRAINERS      0xF7
#define FLAG_RECEIVED_SPELON_BERRY           0xF8
#define FLAG_RECEIVED_PAMTRE_BERRY           0xF9
#define FLAG_RECEIVED_WATMEL_BERRY           0xFA
#define FLAG_RECEIVED_DURIN_BERRY            0xFB
#define FLAG_RECEIVED_BELUE_BERRY            0xFC
#define FLAG_ENABLE_RIVAL_MATCH_CALL         0xFD
#define FLAG_UNUSED_0xFE                     0xFE//was recieved charcoal
#define FLAG_LATIOS_OR_LATIAS_ROAMING        0xFF
#define FLAG_UNUSED_0x100                    0x100//was repeat ball
#define FLAG_UNUSED_0x101                    0x101//was received old rod
#define FLAG_UNUSED_0x102                    0x102//was coin case
#define FLAG_RETURNED_RED_OR_BLUE_ORB        0x103//was returned reb or blue orb
#define FLAG_UNUSED_0x104                    0x104//was tm snatch
#define FLAG_UNUSED_0x105                    0x105//was dig
#define FLAG_UNUSED_0x106                    0x106//was bullet seed
#define FLAG_ENTERED_ELITE_FOUR              0x107
#define FLAG_RECEIVED_TM_HIDDEN_POWER        0x108//was tm hidden power
#define FLAG_UNUSED_0x109                    0x109//was torment
#define FLAG_RECEIVED_LAVARIDGE_EGG          0x10A
#define FLAG_UNUSED_0x10B                    0x10B//was received fossil mon
#define FLAG_SECRET_BASE_REGISTRY_ENABLED    0x10C
#define FLAG_UNUSED_0x10D                    0x10D//was received thief
#define FLAG_UNUSED_0x10E                    0x10E  // was unused contest sketch flag
#define FLAG_UNUSED_0x10F                    0x10F//was evil team escaped, stern spoke
#define FLAG_RECEIVED_EXP_SHARE              0x110//was received exp share
#define FLAG_LEGENDARIES_IN_SOOTOPOLIS       0x111//was explain pokerus
#define FLAG_UNUSED_0x112                    0x112//was received running shoes
#define FLAG_RECEIVED_QUICK_CLAW             0x113
#define FLAG_UNUSED_0x114                    0x114//was received kings rock
#define FLAG_RECEIVED_MACHO_BRACE            0x115
#define FLAG_UNUSED_0x116                    0x116//was received soothe bell
#define FLAG_UNUSED_0x117                    0x117//was received white herb
#define FLAG_RECEIVED_SOFT_SAND              0x118
#define FLAG_ENABLE_PROF_BIRCH_MATCH_CALL    0x119
#define FLAG_RECEIVED_CLEANSE_TAG            0x11A
#define FLAG_RECEIVED_FOCUS_BAND             0x11B
#define FLAG_UNUSED_0x11C                    0x11C//was declined wally mauville
#define FLAG_UNUSED_0x11D                    0x11D//was received devon scope
#define FLAG_UNUSED_0x11E                    0x11E//was declined rival lilycove
#define FLAG_UNUSED_0x11F                    0x11F//was met devon employee
#define FLAG_UNUSED_0x120                    0x120//was met rival rustboro
#define FLAG_UNUSED_0x121                    0x121//was received silk scarf
#define FLAG_UNUSED_0x122                    0x122//was a 120 flag related to kecleon battle
#define FLAG_UNUSED_0x123                    0x123//was received ss ticket
#define FLAG_UNUSED_0x124                    0x124//was met rival lilycove
#define FLAG_UNUSED_0x125                    0x125//was met rival house after lilycove
#define FLAG_EXCHANGED_SCANNER               0x126
#define FLAG_UNUSED_0x127                    0x127//was kecleon fled fortree
#define FLAG_UNUSED_0x128                    0x128//was petalburg mart items
#define FLAG_RECEIVED_MIRACLE_SEED           0x129
#define FLAG_UNUSED_0x12A                    0x12A//was received beldum
#define FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK   0x12B
#define FLAG_MET_FANCLUB_YOUNGER_BROTHER     0x12C
#define FLAG_UNUSED_0x12D                    0x12D//was rival left for 103
#define FLAG_UNUSED_0x12E                    0x12E//was omit dive steven letter
#define FLAG_HAS_MATCH_CALL                  0x12F
#define FLAG_ADDED_MATCH_CALL_TO_POKENAV     0x130
#define FLAG_REGISTERED_STEVEN_POKENAV       0x131
#define FLAG_ENABLE_NORMAN_MATCH_CALL        0x132
#define FLAG_UNUSED_0x133                    0x133//was steven to cave or origin
#define FLAG_UNUSED_0x134                    0x134//was met archie sootopolis
#define FLAG_UNUSED_0x135                    0x135//was met maxie sootopolis
#define FLAG_UNUSED_0x136                    0x136//was met scott rustboro
#define FLAG_WALLACE_GOES_TO_SKY_PILLAR      0x137 // Set after speaking to Wallace within the Cave of Origin.
#define FLAG_UNUSED_0x138                    0x138//was received waterfall
#define FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS    0x139
#define FLAG_RECEIVED_AURORA_TICKET          0x13A
#define FLAG_RECEIVED_MYSTIC_TICKET          0x13B
#define FLAG_RECEIVED_OLD_SEA_MAP            0x13C

// Wonder Card Flags
#define FLAG_WONDER_CARD_UNUSED_1            0x13D // These Wonder Card flags are referenced but never set
#define FLAG_WONDER_CARD_UNUSED_2            0x13E
#define FLAG_WONDER_CARD_UNUSED_3            0x13F
#define FLAG_WONDER_CARD_UNUSED_4            0x140
#define FLAG_WONDER_CARD_UNUSED_5            0x141
#define FLAG_WONDER_CARD_UNUSED_6            0x142
#define FLAG_WONDER_CARD_UNUSED_7            0x143
#define FLAG_WONDER_CARD_UNUSED_8            0x144
#define FLAG_WONDER_CARD_UNUSED_9            0x145
#define FLAG_WONDER_CARD_UNUSED_10           0x146
#define FLAG_WONDER_CARD_UNUSED_11           0x147
#define FLAG_WONDER_CARD_UNUSED_12           0x148
#define FLAG_WONDER_CARD_UNUSED_13           0x149
#define FLAG_WONDER_CARD_UNUSED_14           0x14A
#define FLAG_WONDER_CARD_UNUSED_15           0x14B
#define FLAG_WONDER_CARD_UNUSED_16           0x14C
#define FLAG_WONDER_CARD_UNUSED_17           0x14D
#define NUM_WONDER_CARD_FLAGS                (1 + FLAG_WONDER_CARD_UNUSED_17 - FLAG_RECEIVED_AURORA_TICKET)

#define FLAG_MIRAGE_TOWER_VISIBLE            0x14E//should be removed and reused
#define FLAG_UNUSED_0x14F                    0x14F//was chose root fossil
#define FLAG_CHOSE_CLAW_FOSSIL               0x150
#define FLAG_RECEIVED_POWDER_JAR             0x151
#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER 0x152
#define FLAG_MET_BATTLE_FRONTIER_BREEDER     0x153
#define FLAG_MET_BATTLE_FRONTIER_MANIAC      0x154
#define FLAG_ENTERED_CONTEST                 0x155
#define FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN  0x156
#define FLAG_MET_BATTLE_FRONTIER_GAMBLER     0x157
#define FLAG_ENABLE_MR_STONE_POKENAV         0x158
#define FLAG_NURSE_MENTIONS_GOLD_CARD        0x159
#define FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR  0x15A
#define FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR 0x15B

// Trainer Rematch Flags
#define FLAG_MATCH_CALL_REGISTERED           0x15C
#define FLAG_REMATCH_ROSE                    0x15D
#define FLAG_REMATCH_ANDRES                  0x15E
#define FLAG_REMATCH_DUSTY                   0x15F
#define FLAG_REMATCH_LOLA                    0x160
#define FLAG_REMATCH_RICKY                   0x161
#define FLAG_REMATCH_LILA_AND_ROY            0x162
#define FLAG_REMATCH_CRISTIN                 0x163
#define FLAG_REMATCH_BROOKE                  0x164
#define FLAG_REMATCH_WILTON                  0x165
#define FLAG_REMATCH_VALERIE                 0x166
#define FLAG_REMATCH_CINDY                   0x167
#define FLAG_REMATCH_THALIA                  0x168
#define FLAG_REMATCH_JESSICA                 0x169
#define FLAG_REMATCH_WINSTON                 0x16A
#define FLAG_REMATCH_STEVE                   0x16B
#define FLAG_REMATCH_TONY                    0x16C
#define FLAG_REMATCH_NOB                     0x16D
#define FLAG_REMATCH_KOJI                    0x16E
#define FLAG_REMATCH_FERNANDO                0x16F
#define FLAG_REMATCH_DALTON                  0x170
#define FLAG_REMATCH_BERNIE                  0x171
#define FLAG_REMATCH_ETHAN                   0x172
#define FLAG_REMATCH_JOHN_AND_JAY            0x173
#define FLAG_REMATCH_JEFFREY                 0x174
#define FLAG_REMATCH_CAMERON                 0x175
#define FLAG_REMATCH_JACKI                   0x176
#define FLAG_REMATCH_WALTER                  0x177
#define FLAG_REMATCH_KAREN                   0x178
#define FLAG_REMATCH_JERRY                   0x179
#define FLAG_REMATCH_ANNA_AND_MEG            0x17A
#define FLAG_REMATCH_ISABEL                  0x17B
#define FLAG_REMATCH_MIGUEL                  0x17C
#define FLAG_REMATCH_TIMOTHY                 0x17D
#define FLAG_REMATCH_SHELBY                  0x17E
#define FLAG_REMATCH_CALVIN                  0x17F
#define FLAG_REMATCH_ELLIOT                  0x180
#define FLAG_REMATCH_ISAIAH                  0x181
#define FLAG_REMATCH_MARIA                   0x182
#define FLAG_REMATCH_ABIGAIL                 0x183
#define FLAG_REMATCH_DYLAN                   0x184
#define FLAG_REMATCH_KATELYN                 0x185
#define FLAG_REMATCH_BENJAMIN                0x186
#define FLAG_REMATCH_PABLO                   0x187
#define FLAG_REMATCH_NICOLAS                 0x188
#define FLAG_REMATCH_ROBERT                  0x189
#define FLAG_REMATCH_LAO                     0x18A
#define FLAG_REMATCH_CYNDY                   0x18B
#define FLAG_REMATCH_MADELINE                0x18C
#define FLAG_REMATCH_JENNY                   0x18D
#define FLAG_REMATCH_DIANA                   0x18E
#define FLAG_REMATCH_AMY_AND_LIV             0x18F
#define FLAG_REMATCH_ERNEST                  0x190
#define FLAG_REMATCH_CORY                    0x191
#define FLAG_REMATCH_EDWIN                   0x192
#define FLAG_REMATCH_LYDIA                   0x193
#define FLAG_REMATCH_ISAAC                   0x194
#define FLAG_REMATCH_GABRIELLE               0x195
#define FLAG_REMATCH_CATHERINE               0x196
#define FLAG_REMATCH_JACKSON                 0x197
#define FLAG_REMATCH_HALEY                   0x198
#define FLAG_REMATCH_JAMES                   0x199
#define FLAG_REMATCH_TRENT                   0x19A
#define FLAG_REMATCH_SAWYER                  0x19B
#define FLAG_REMATCH_KIRA_AND_DAN            0x19C

#define FLAG_REMATCH_WALLY                   0x19D
#define FLAG_REMATCH_ROXANNE                 0x19E
#define FLAG_REMATCH_BRAWLY                  0x19F
#define FLAG_REMATCH_WATTSON                 0x1A0
#define FLAG_REMATCH_FLANNERY                0x1A1
#define FLAG_REMATCH_NORMAN                  0x1A2
#define FLAG_REMATCH_WINONA                  0x1A3
#define FLAG_REMATCH_TATE_AND_LIZA           0x1A4
// Note: FLAG_REMATCH_JUAN is handled by FLAG_ENABLE_JUAN_MATCH_CALL instead.
#define FLAG_REMATCH_SIDNEY                  0x1A5
#define FLAG_REMATCH_PHOEBE                  0x1A6
#define FLAG_REMATCH_GLACIA                  0x1A7
#define FLAG_REMATCH_DRAKE                   0x1A8
#define FLAG_REMATCH_WALLACE                 0x1A9
#define FLAG_REMATCH_JUAN                    0x1AA // Unused Flag

#define FLAG_UNUSED_0x1AB                    0x1AB // Unused Flag
#define FLAG_DEFEATED_DEOXYS                 0x1AC
#define FLAG_BATTLED_DEOXYS                  0x1AD
#define FLAG_SHOWN_EON_TICKET                0x1AE
#define FLAG_SHOWN_AURORA_TICKET             0x1AF
#define FLAG_SHOWN_OLD_SEA_MAP               0x1B0
#define FLAG_MOVE_TUTOR_TAUGHT_SWAGGER       0x1B1
#define FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT       0x1B2
#define FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER   0x1B3
#define FLAG_MOVE_TUTOR_TAUGHT_MIMIC         0x1B4
#define FLAG_MOVE_TUTOR_TAUGHT_METRONOME     0x1B5
#define FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK    0x1B6
#define FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE    0x1B7
#define FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH  0x1B8
#define FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE   0x1B9
#define FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION     0x1BA
#define FLAG_DEFEATED_REGIROCK               0x1BB
#define FLAG_DEFEATED_REGICE                 0x1BC
#define FLAG_DEFEATED_REGISTEEL              0x1BD
#define FLAG_DEFEATED_KYOGRE                 0x1BE
#define FLAG_DEFEATED_GROUDON                0x1BF
#define FLAG_DEFEATED_RAYQUAZA               0x1C0
#define FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE 0x1C1
#define FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE 0x1C2
#define FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE 0x1C3
#define FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT 0x1C4
#define FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT 0x1C5
#define FLAG_DEFEATED_SUDOWOODO              0x1C6
#define FLAG_DEFEATED_MEW                    0x1C7
#define FLAG_DEFEATED_LATIAS_OR_LATIOS       0x1C8
#define FLAG_CAUGHT_LATIAS_OR_LATIOS         0x1C9
#define FLAG_CAUGHT_MEW                      0x1CA
#define FLAG_UNUSED_0x1CB                    0x1CB//was met scott after stone badge
#define FLAG_UNUSED_0x1CC                    0x1CC//was met scott verdanturf
#define FLAG_UNUSED_0x1CD                    0x1CD//was met scott fallarbor
#define FLAG_UNUSED_0x1CE                    0x1CE//was met scott lilycove
#define FLAG_UNUSED_0x1CF                    0x1CF//was met scott evergrande
#define FLAG_MET_SCOTT_ON_SS_TIDAL           0x1D0//was met scott ss tidal
#define FLAG_SCOTT_GIVES_BATTLE_POINTS       0x1D1
#define FLAG_COLLECTED_ALL_GOLD_SYMBOLS      0x1D2//was gold symbols
#define FLAG_ENABLE_ROXANNE_MATCH_CALL       0x1D3
#define FLAG_ENABLE_BRAWLY_MATCH_CALL        0x1D4
#define FLAG_ENABLE_WATTSON_MATCH_CALL       0x1D5
#define FLAG_ENABLE_FLANNERY_MATCH_CALL      0x1D6
#define FLAG_ENABLE_WINONA_MATCH_CALL        0x1D7
#define FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL 0x1D8
#define FLAG_ENABLE_JUAN_MATCH_CALL          0x1D9

#define FLAG_UNUSED_0x1DA                    0x1DA // Unused Flag

#define FLAG_SHOWN_MYSTIC_TICKET             0x1DB
#define FLAG_DEFEATED_HO_OH                  0x1DC
#define FLAG_DEFEATED_LUGIA                  0x1DD

#define FLAG_UNUSED_0x1DE                    0x1DE // Unused Flag
#define FLAG_UNUSED_0x1DF                    0x1DF // Unused Flag
#define FLAG_UNUSED_0x1E0                    0x1E0 // Unused Flag
#define FLAG_UNUSED_0x1E1                    0x1E1 // Unused Flag
#define FLAG_UNUSED_0x1E2                    0x1E2 // Unused Flag
#define FLAG_UNUSED_0x1E3                    0x1E3 // Unused Flag

// Mystery Gift Flags (Unknown)
#define FLAG_MYSTERY_GIFT_DONE               0x1E4
#define FLAG_MYSTERY_GIFT_1                  0x1E5
#define FLAG_MYSTERY_GIFT_2                  0x1E6
#define FLAG_MYSTERY_GIFT_3                  0x1E7
#define FLAG_MYSTERY_GIFT_4                  0x1E8
#define FLAG_MYSTERY_GIFT_5                  0x1E9
#define FLAG_MYSTERY_GIFT_6                  0x1EA
#define FLAG_MYSTERY_GIFT_7                  0x1EB
#define FLAG_MYSTERY_GIFT_8                  0x1EC
#define FLAG_MYSTERY_GIFT_9                  0x1ED
#define FLAG_MYSTERY_GIFT_10                 0x1EE
#define FLAG_MYSTERY_GIFT_11                 0x1EF
#define FLAG_MYSTERY_GIFT_12                 0x1F0
#define FLAG_MYSTERY_GIFT_13                 0x1F1
#define FLAG_MYSTERY_GIFT_14                 0x1F2
#define FLAG_MYSTERY_GIFT_15                 0x1F3

// Hidden Items
#define FLAG_HIDDEN_ITEMS_START                                                         0x1F4
#define FLAG_HIDDEN_ITEM_TRICK_HOUSE_NUGGET                  (FLAG_HIDDEN_ITEMS_START + 0x00)
#define FLAG_HIDDEN_ITEM_PETALBURG_CITY_PP_MAX               (FLAG_HIDDEN_ITEMS_START + 0x01)
#define FLAG_HIDDEN_ITEM_PETALBURG_CITY_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x02)
#define FLAG_HIDDEN_ITEM_PETALBURG_CITY_MAX_REVIVE           (FLAG_HIDDEN_ITEMS_START + 0x03)
#define FLAG_HIDDEN_ITEM_SLATEPORT_CITY_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x04)
#define FLAG_HIDDEN_ITEM_MAUVILLE_CITY_LOADED_DICE           (FLAG_HIDDEN_ITEMS_START + 0x05)
#define FLAG_HIDDEN_ITEM_RUSTBORO_CITY_BOTTLE_CAP_1          (FLAG_HIDDEN_ITEMS_START + 0x06)
#define FLAG_HIDDEN_ITEM_RUSTBORO_CITY_BOTTLE_CAP_2          (FLAG_HIDDEN_ITEMS_START + 0x07)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_RED_SHARD             (FLAG_HIDDEN_ITEMS_START + 0x08)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_GREEN_SHARD           (FLAG_HIDDEN_ITEMS_START + 0x09)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_BLUE_SHARD            (FLAG_HIDDEN_ITEMS_START + 0x0A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_YELLOW_SHARD          (FLAG_HIDDEN_ITEMS_START + 0x0B)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_STAR_PIECE            (FLAG_HIDDEN_ITEMS_START + 0x0C)
#define FLAG_HIDDEN_ITEM_MOSSDEEP_CITY_ELIXIR                (FLAG_HIDDEN_ITEMS_START + 0x0D)
#define FLAG_HIDDEN_ITEM_MOSSDEEP_CITY_PP_MAX                (FLAG_HIDDEN_ITEMS_START + 0x0E)
#define FLAG_HIDDEN_ITEM_MOSSDEEP_CITY_BOTTLE_CAP            (FLAG_HIDDEN_ITEMS_START + 0x0F)
#define FLAG_HIDDEN_ITEM_SOOTOPOLIS_CITY_RED_SHARD           (FLAG_HIDDEN_ITEMS_START + 0x10)
#define FLAG_HIDDEN_ITEM_SOOTOPOLIS_CITY_BLUE_SHARD          (FLAG_HIDDEN_ITEMS_START + 0x11)
#define FLAG_HIDDEN_ITEM_EVER_GRANDE_CITY_GOLD_BOTTLE_CAP    (FLAG_HIDDEN_ITEMS_START + 0x12)
#define FLAG_HIDDEN_ITEM_EVER_GRANDE_CITY_STARDUST           (FLAG_HIDDEN_ITEMS_START + 0x13)
#define FLAG_HIDDEN_ITEM_LITTLEROOT_TOWN_PP_UP               (FLAG_HIDDEN_ITEMS_START + 0x14)
#define FLAG_HIDDEN_ITEM_LITTLEROOT_TOWN_GOLD_BOTTLE_CAP     (FLAG_HIDDEN_ITEMS_START + 0x15)
#define FLAG_HIDDEN_ITEM_LAVARIDGE_TOWN_FIRE_STONE           (FLAG_HIDDEN_ITEMS_START + 0x16)
#define FLAG_HIDDEN_ITEM_FALLRBOR_TOWN_SUN_STONE             (FLAG_HIDDEN_ITEMS_START + 0x17)
#define FLAG_HIDDEN_ITEM_PACIFIDLOG_TOWN_WATER_STONE         (FLAG_HIDDEN_ITEMS_START + 0x18)
#define FLAG_HIDDEN_ITEM_ROUTE_101_PP_MAX                    (FLAG_HIDDEN_ITEMS_START + 0x19)
#define FLAG_HIDDEN_ITEM_ROUTE_102_GREEN_SHARD               (FLAG_HIDDEN_ITEMS_START + 0x1A)
#define FLAG_HIDDEN_ITEM_ROUTE_102_REVIVAL_HERB_1            (FLAG_HIDDEN_ITEMS_START + 0x1B)
#define FLAG_HIDDEN_ITEM_ROUTE_102_REVIVAL_HERB_2            (FLAG_HIDDEN_ITEMS_START + 0x1C)
#define FLAG_HIDDEN_ITEM_ROUTE_104_BOTTLE_CAP_1              (FLAG_HIDDEN_ITEMS_START + 0x1D)
#define FLAG_HIDDEN_ITEM_ROUTE_104_BOTTLE_CAP_2              (FLAG_HIDDEN_ITEMS_START + 0x1E)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_1_KEY             (FLAG_HIDDEN_ITEMS_START + 0x1F)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_2_KEY             (FLAG_HIDDEN_ITEMS_START + 0x20)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_4_KEY             (FLAG_HIDDEN_ITEMS_START + 0x21)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_6_KEY             (FLAG_HIDDEN_ITEMS_START + 0x22)
#define FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x23)
#define FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x24)
#define FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL                 (FLAG_HIDDEN_ITEMS_START + 0x25)
#define FLAG_HIDDEN_ITEM_ROUTE_105_POWER_HERB                (FLAG_HIDDEN_ITEMS_START + 0x26)
#define FLAG_HIDDEN_ITEM_ROUTE_106_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x27)
#define FLAG_HIDDEN_ITEM_ROUTE_106_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x28)
#define FLAG_HIDDEN_ITEM_ROUTE_107_BIG_PEARL                 (FLAG_HIDDEN_ITEMS_START + 0x29)
#define FLAG_HIDDEN_ITEM_ROUTE_107_PEARL                     (FLAG_HIDDEN_ITEMS_START + 0x2A)
#define FLAG_HIDDEN_ITEM_ROUTE_108_PEARL_STRING              (FLAG_HIDDEN_ITEMS_START + 0x2B)
#define FLAG_HIDDEN_ITEM_ROUTE_109_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x2C)
#define FLAG_HIDDEN_ITEM_ROUTE_109_BLUE_SHARD                (FLAG_HIDDEN_ITEMS_START + 0x2D)
#define FLAG_HIDDEN_ITEM_ROUTE_109_GREEN_SHARD               (FLAG_HIDDEN_ITEMS_START + 0x2E)
#define FLAG_HIDDEN_ITEM_ROUTE_110_BOTTLE_CAP_1              (FLAG_HIDDEN_ITEMS_START + 0x2F)
#define FLAG_HIDDEN_ITEM_ROUTE_110_BOTTLE_CAP_2              (FLAG_HIDDEN_ITEMS_START + 0x30)
#define FLAG_HIDDEN_ITEM_ROUTE_111_BOTTLE_CAP_1              (FLAG_HIDDEN_ITEMS_START + 0x31)
#define FLAG_HIDDEN_ITEM_ROUTE_111_BOTTLE_CAP_2              (FLAG_HIDDEN_ITEMS_START + 0x32)
#define FLAG_HIDDEN_ITEM_ROUTE_113_MOON_STONE                (FLAG_HIDDEN_ITEMS_START + 0x33)
#define FLAG_HIDDEN_ITEM_ROUTE_113_MAX_ETHER                 (FLAG_HIDDEN_ITEMS_START + 0x34)
#define FLAG_HIDDEN_ITEM_ROUTE_113_STAR_PIECE                (FLAG_HIDDEN_ITEMS_START + 0x35)
#define FLAG_HIDDEN_ITEM_ROUTE_113_ELIXIR                    (FLAG_HIDDEN_ITEMS_START + 0x36)
#define FLAG_HIDDEN_ITEM_ROUTE_114_PP_MAX                    (FLAG_HIDDEN_ITEMS_START + 0x37)
#define FLAG_HIDDEN_ITEM_ROUTE_114_STARDUST_1                (FLAG_HIDDEN_ITEMS_START + 0x38)
#define FLAG_HIDDEN_ITEM_ROUTE_114_STARDUST_2                (FLAG_HIDDEN_ITEMS_START + 0x39)
#define FLAG_HIDDEN_ITEM_ROUTE_114_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x3A)
#define FLAG_HIDDEN_ITEM_ROUTE_114_DRAGON_SCALE              (FLAG_HIDDEN_ITEMS_START + 0x3B)
#define FLAG_HIDDEN_ITEM_ROUTE_115_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x3C)
#define FLAG_HIDDEN_ITEM_ROUTE_115_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x3D)
#define FLAG_HIDDEN_ITEM_ROUTE_115_MAX_ETHER                 (FLAG_HIDDEN_ITEMS_START + 0x3E)
#define FLAG_HIDDEN_ITEM_ROUTE_115_WHITE_HERB                (FLAG_HIDDEN_ITEMS_START + 0x3F)
#define FLAG_HIDDEN_ITEM_ROUTE_116_ETHER_1                   (FLAG_HIDDEN_ITEMS_START + 0x40)
#define FLAG_HIDDEN_ITEM_ROUTE_116_ETHER_2                   (FLAG_HIDDEN_ITEMS_START + 0x41)
#define FLAG_HIDDEN_ITEM_ROUTE_117_MIRROR_HERB               (FLAG_HIDDEN_ITEMS_START + 0x42)
#define FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x43)
#define FLAG_HIDDEN_ITEM_ROUTE_118_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x44)
#define FLAG_HIDDEN_ITEM_ROUTE_119_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x45)
#define FLAG_HIDDEN_ITEM_ROUTE_119_REVIVAL_HERB              (FLAG_HIDDEN_ITEMS_START + 0x46)
#define FLAG_HIDDEN_ITEM_ROUTE_120_BOTTLE_CAP                (FLAG_HIDDEN_ITEMS_START + 0x47)
#define FLAG_HIDDEN_ITEM_ROUTE_120_MENTAL_HERB               (FLAG_HIDDEN_ITEMS_START + 0x48)
#define FLAG_HIDDEN_ITEM_ROUTE_121_BOTTLE_CAP                (FLAG_HIDDEN_ITEMS_START + 0x49)
#define FLAG_HIDDEN_ITEM_ROUTE_122_RARE_CANDY_1              (FLAG_HIDDEN_ITEMS_START + 0x4A)
#define FLAG_HIDDEN_ITEM_ROUTE_122_RARE_CANDY_2              (FLAG_HIDDEN_ITEMS_START + 0x4B)
#define FLAG_HIDDEN_ITEM_ROUTE_122_GRASSY_SEED               (FLAG_HIDDEN_ITEMS_START + 0x4C)
#define FLAG_HIDDEN_ITEM_ROUTE_123_MISTY_SEED                (FLAG_HIDDEN_ITEMS_START + 0x4D)
#define FLAG_HIDDEN_ITEM_ROUTE_123_BOTTLE_CAP                (FLAG_HIDDEN_ITEMS_START + 0x4E)
#define FLAG_HIDDEN_ITEM_ROUTE_124_RED_SHARD                 (FLAG_HIDDEN_ITEMS_START + 0x4F)
#define FLAG_HIDDEN_ITEM_ROUTE_124_GREEN_SHARD               (FLAG_HIDDEN_ITEMS_START + 0x50)
#define FLAG_HIDDEN_ITEM_ROUTE_124_BLUE_SHARD                (FLAG_HIDDEN_ITEMS_START + 0x51)
#define FLAG_HIDDEN_ITEM_ROUTE_124_YELLOW_SHARD              (FLAG_HIDDEN_ITEMS_START + 0x52)
#define FLAG_HIDDEN_ITEM_ROUTE_125_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x53)
#define FLAG_HIDDEN_ITEM_ROUTE_126_BOTTLE_CAP                (FLAG_HIDDEN_ITEMS_START + 0x54)
#define FLAG_HIDDEN_ITEM_ROUTE_127_PSYCHIC_SEED              (FLAG_HIDDEN_ITEMS_START + 0x55)
#define FLAG_HIDDEN_ITEM_ROUTE_127_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x56)
#define FLAG_HIDDEN_ITEM_ROUTE_127_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x57)
#define FLAG_HIDDEN_ITEM_ROUTE_128_GREEN_SHARD               (FLAG_HIDDEN_ITEMS_START + 0x58)
#define FLAG_HIDDEN_ITEM_ROUTE_128_YELLOW_SHARD              (FLAG_HIDDEN_ITEMS_START + 0x59)
#define FLAG_HIDDEN_ITEM_ROUTE_128_BOTTLE_CAP                (FLAG_HIDDEN_ITEMS_START + 0x5A)
#define FLAG_HIDDEN_ITEM_ROUTE_129_BOTTLE_CAP                (FLAG_HIDDEN_ITEMS_START + 0x5B)
#define FLAG_HIDDEN_ITEM_ROUTE_131_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x5C)
#define FLAG_HIDDEN_ITEM_ROUTE_133_RED_SHARD                 (FLAG_HIDDEN_ITEMS_START + 0x5D)
#define FLAG_HIDDEN_ITEM_ROUTE_133_BLUE_SHARD                (FLAG_HIDDEN_ITEMS_START + 0x5E)
#define FLAG_HIDDEN_ITEM_ROUTE_134_BOTTLE_CAP                (FLAG_HIDDEN_ITEMS_START + 0x5F)
#define FLAG_HIDDEN_ITEM_ROUTE_134_WATER_STONE               (FLAG_HIDDEN_ITEMS_START + 0x60)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE          (FLAG_HIDDEN_ITEMS_START + 0x61)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_BIG_PEARL            (FLAG_HIDDEN_ITEMS_START + 0x62)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_DEEP_SEA_SCALE       (FLAG_HIDDEN_ITEMS_START + 0x63)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_DEEP_SEA_TOOTH       (FLAG_HIDDEN_ITEMS_START + 0x64)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BOTTLE_CAP_1         (FLAG_HIDDEN_ITEMS_START + 0x65)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BOTTLE_CAP_2         (FLAG_HIDDEN_ITEMS_START + 0x66)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_YELLOW_SHARD         (FLAG_HIDDEN_ITEMS_START + 0x67)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BIG_PEARL            (FLAG_HIDDEN_ITEMS_START + 0x68)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_RED_SHARD            (FLAG_HIDDEN_ITEMS_START + 0x69)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_BLUE_SHARD           (FLAG_HIDDEN_ITEMS_START + 0x6A)
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_GREEN_SHARD          (FLAG_HIDDEN_ITEMS_START + 0x6B)
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_COMET_SHARD          (FLAG_HIDDEN_ITEMS_START + 0x6C)
#define FLAG_HIDDEN_ITEM_EMERALD_CAPE_PP_UP                  (FLAG_HIDDEN_ITEMS_START + 0x6D)
#define FLAG_HIDDEN_ITEM_DEWFORD_RESORT_BOTTLE_CAP           (FLAG_HIDDEN_ITEMS_START + 0x6E)
#define FLAG_HIDDEN_ITEM_DEWFORD_RESORT_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x6F)
#define FLAG_HIDDEN_ITEM_DEWFORD_RESORT_HEART_SCALE          (FLAG_HIDDEN_ITEMS_START + 0x70)
#define FLAG_HIDDEN_ITEM_VERDANT_FOREST_ELIXIR_1             (FLAG_HIDDEN_ITEMS_START + 0x71)
#define FLAG_HIDDEN_ITEM_VERDANT_FOREST_ELIXIR_2             (FLAG_HIDDEN_ITEMS_START + 0x72)
#define FLAG_HIDDEN_ITEM_LITTLEROOT_SHORE_PEARL              (FLAG_HIDDEN_ITEMS_START + 0x73)
#define FLAG_HIDDEN_ITEM_LITTLEROOT_SHORE_HEART_SCALE        (FLAG_HIDDEN_ITEMS_START + 0x74)
#define FLAG_HIDDEN_ITEM_ARRIVAL_FERRY_ROOM_FRESH_WATER      (FLAG_HIDDEN_ITEMS_START + 0x75)
#define FLAG_HIDDEN_ITEM_DEWDROP_GLEN_LEAF_STONE             (FLAG_HIDDEN_ITEMS_START + 0x76)
#define FLAG_HIDDEN_ITEM_FORINA_BIG_NUGGET                   (FLAG_HIDDEN_ITEMS_START + 0x77)
#define FLAG_HIDDEN_ITEM_FORINA_STAR_PIECE                   (FLAG_HIDDEN_ITEMS_START + 0x78)
#define FLAG_HIDDEN_ITEM_MILLENNIUM_FIELD_AIR_BALLOON        (FLAG_HIDDEN_ITEMS_START + 0x79)
#define FLAG_HIDDEN_ITEM_SLATEPORT_BEACH_SODA_POP            (FLAG_HIDDEN_ITEMS_START + 0x7A)
#define FLAG_HIDDEN_ITEM_SLATEPORT_BEACH_BOTTLE_CAP_1        (FLAG_HIDDEN_ITEMS_START + 0x7B)
#define FLAG_HIDDEN_ITEM_SLATEPORT_BEACH_BOTTLE_CAP_2        (FLAG_HIDDEN_ITEMS_START + 0x7C)
#define FLAG_HIDDEN_ITEM_POWER_PLANT_ELECTRIC_SEED           (FLAG_HIDDEN_ITEMS_START + 0x7D)
#define FLAG_HIDDEN_ITEM_SUMMER_SEA_BIG_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x7E)
#define FLAG_HIDDEN_ITEM_SUMMER_SEA_YELLOW_SHARD             (FLAG_HIDDEN_ITEMS_START + 0x7F)
#define FLAG_HIDDEN_ITEM_SUMMER_SEA_RED_SHARD                (FLAG_HIDDEN_ITEMS_START + 0x80)
#define FLAG_HIDDEN_ITEM_METEOR_FALLS_1F_1R_PP_MAX           (FLAG_HIDDEN_ITEMS_START + 0x81)
#define FLAG_HIDDEN_ITEM_METEOR_FALLS_1F_1R_STAR_PIECE_1     (FLAG_HIDDEN_ITEMS_START + 0x82)
#define FLAG_HIDDEN_ITEM_METEOR_FALLS_1F_1R_STAR_PIECE_2     (FLAG_HIDDEN_ITEMS_START + 0x83)
#define FLAG_HIDDEN_ITEM_METEOR_FALLS_B1F_2R_COMET_SHARD     (FLAG_HIDDEN_ITEMS_START + 0x84)
#define FLAG_HIDDEN_ITEM_METEOR_FALLS_B1F_1R_STAR_PIECE_1    (FLAG_HIDDEN_ITEMS_START + 0x85)
#define FLAG_HIDDEN_ITEM_METEOR_FALLS_B1F_1R_STAR_PIECE_2    (FLAG_HIDDEN_ITEMS_START + 0x86)
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B1F_EVERSTONE           0x27B
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVIOLITE            0x27C
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_PP_MAX              0x27D
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_BERRY_JUICE          0x27E
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_BIG_MUSHROOM_1       0x27F
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_BIG_MUSHROOM_2       0x280
#define FLAG_HIDDEN_ITEM_MT_PYRE_3F_MAX_REVIVE                0x281
#define FLAG_HIDDEN_ITEM_MT_PYRE_6F_REAPER_CLOTH              0x282
#define FLAG_HIDDEN_ITEM_MT_PYRE_REVIVAL_HERB                 0x283
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B1F_ETHER_1             0x284
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B1F_ETHER_2             0x285
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B1F_MAX_REVIVE          0x286
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_EVIOLITE            0x287
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_PP_UP               0x288
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_ROOMS_1F_BOTTLE_CAP   0x289
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_ROOM_B1F_ELIXIR       0x28A
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_ROOMS2_1F_BOTTLE_CAP  0x28B
#define FLAG_HIDDEN_ITEM_UNDERWATER_134_RED_SHARD             0x28C
#define FLAG_HIDDEN_ITEM_UNDERWATER_134_YELLOW_SHARD          0x28D
#define FLAG_HIDDEN_ITEM_UNDERWATER_134_BLUE_SHARD            0x28E
#define FLAG_HIDDEN_ITEM_MOSSDEEP_CAVERNS_MEDITATION_POOL_PP_UP 0x28F
#define FLAG_HIDDEN_ITEM_MOSSDEEP_CAVERNS_1F_EVERSTONE        0x290
#define FLAG_HIDDEN_ITEM_MOSSDEEP_CAVERNS_DIVE_CHAMBER_MAX_ETHER 0x291
#define FLAG_HIDDEN_ITEM_SCORCHED_SLAB_B1F_FIRE_STONE         0x292
#define FLAG_HIDDEN_ITEM_SCORCHED_SLAB_B1F_RED_SHARD_1        0x293
#define FLAG_HIDDEN_ITEM_SCORCHED_SLAB_B1F_RED_SHARD_2        0x294
#define FLAG_HIDDEN_ITEM_CHAMPIONS_CUT_GOLD_BOTTLE_CAP        0x295
#define FLAG_HIDDEN_ITEM_OLDALE_RUINS_CENTER_ODD_KEYSTONE     0x296
#define FLAG_HIDDEN_ITEM_OLDALE_RUINS_B1F_STAR_PIECE_1        0x297
#define FLAG_HIDDEN_ITEM_OLDALE_RUINS_B1F_STAR_PIECE_2        0x298
#define FLAG_HIDDEN_ITEM_OLDALE_RUINS_B2F_STAR_PIECE_1        0x299
#define FLAG_HIDDEN_ITEM_OLDALE_RUINS_B2F_STAR_PIECE_2        0x29A
#define FLAG_HIDDEN_ITEM_ROUTE_124_HOUSE_LEFTOVERS            0x29B
#define FLAG_HIDDEN_ITEM_ROUTE_124_HOUSE_GOLD_BOTTLE_CAP      0x29C
#define FLAG_UNUSED_0x29D  0x29D // Unused Flag
#define FLAG_UNUSED_0x29E  0x29E // Unused Flag
#define FLAG_UNUSED_0x29F  0x29F // Unused Flag
#define FLAG_UNUSED_0x2A0  0x2A0 // Unused Flag
#define FLAG_UNUSED_0x2A1  0x2A1 // Unused Flag
#define FLAG_UNUSED_0x2A2  0x2A2 // Unused Flag
#define FLAG_UNUSED_0x2A3  0x2A3 // Unused Flag
#define FLAG_UNUSED_0x2A4  0x2A4 // Unused Flag
#define FLAG_UNUSED_0x2A5  0x2A5 // Unused Flag
#define FLAG_UNUSED_0x2A6  0x2A6 // Unused Flag
#define FLAG_UNUSED_0x2A7  0x2A7 // Unused Flag
#define FLAG_UNUSED_0x2A8  0x2A8 // Unused Flag
#define FLAG_UNUSED_0x2A9  0x2A9 // Unused Flag
#define FLAG_UNUSED_0x2AA  0x2AA // Unused Flag
#define FLAG_UNUSED_0x2AB  0x2AB // Unused Flag
#define FLAG_UNUSED_0x2AC  0x2AC // Unused Flag
#define FLAG_UNUSED_0x2AD  0x2AD // Unused Flag
#define FLAG_UNUSED_0x2AE  0x2AE // Unused Flag
#define FLAG_UNUSED_0x2AF  0x2AF // Unused Flag
#define FLAG_UNUSED_0x2B0  0x2B0 // Unused Flag
#define FLAG_UNUSED_0x2B1  0x2B1 // Unused Flag
#define FLAG_UNUSED_0x2B2  0x2B2 // Unused Flag
#define FLAG_UNUSED_0x2B3  0x2B3 // Unused Flag
#define FLAG_UNUSED_0x2B4  0x2B4 // Unused Flag
#define FLAG_UNUSED_0x2B5  0x2B5 // Unused Flag
#define FLAG_UNUSED_0x2B6  0x2B6 // Unused Flag
#define FLAG_UNUSED_0x2B7  0x2B7 // Unused Flag
#define FLAG_UNUSED_0x2B8  0x2B8 // Unused Flag
#define FLAG_UNUSED_0x2B9  0x2B9 // Unused Flag
#define FLAG_UNUSED_0x2BA  0x2BA // Unused Flag
#define FLAG_HIDDEN_ITEM_NAVEL_ROCK_TOP_SACRED_ASH                  0x2BB

// Event Flags
#define FLAG_UNUSED_0x2BC                                           0x2BC
#define FLAG_UNUSED_0x2BD                                           0x2BD
#define FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN                0x2BE
#define FLAG_HIDE_UNION_ROOM_PLAYER_1                               0x2BF
#define FLAG_HIDE_UNION_ROOM_PLAYER_2                               0x2C0
#define FLAG_HIDE_UNION_ROOM_PLAYER_3                               0x2C1
#define FLAG_HIDE_UNION_ROOM_PLAYER_4                               0x2C2
#define FLAG_HIDE_UNION_ROOM_PLAYER_5                               0x2C3
#define FLAG_HIDE_UNION_ROOM_PLAYER_6                               0x2C4
#define FLAG_HIDE_UNION_ROOM_PLAYER_7                               0x2C5
#define FLAG_HIDE_UNION_ROOM_PLAYER_8                               0x2C6
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1               0x2C7
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2               0x2C8
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3               0x2C9
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4               0x2CA
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5               0x2CB
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6               0x2CC
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1           0x2CD
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2           0x2CE
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT                             0x2CF
#define FLAG_HIDE_APPRENTICE                                        0x2D0
#define FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT              0x2D1
#define FLAG_HIDE_BATTLE_TOWER_REPORTER                             0x2D2
#define FLAG_HIDE_ROUTE_104_MR_BRINEY                               0x2D3
#define FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY                           0x2D4
#define FLAG_HIDE_BRINEYS_HOUSE_PEEKO                               0x2D5
#define FLAG_UNUSED_0x2D6                                           0x2D6
#define FLAG_UNUSED_0x2D7                                           0x2D7
#define FLAG_UNUSED_0x2D8                                           0x2D8
#define FLAG_UNUSED_0x2D9                                           0x2D9
#define FLAG_UNUSED_0x2DA                                           0x2DA
#define FLAG_UNUSED_0x2DB                                           0x2DB
#define FLAG_UNUSED_0x2DC                                           0x2DC
#define FLAG_UNUSED_0x2DD                                           0x2DD
#define FLAG_UNUSED_0x2DE                                           0x2DE
#define FLAG_UNUSED_0x2DF                                           0x2DF

//Secret stash flags
#define FLAG_HIDE_SECRET_STASH_MOSSDEEP_CITY                        0x2E0
#define FLAG_HIDE_SECRET_STASH_GRANITE_CAVE                         0x2E1
#define FLAG_HIDE_SECRET_STASH_ROUTE_119                            0x2E2
#define FLAG_HIDE_SECRET_STASH_MT_PYRE                              0x2E3
#define FLAG_HIDE_SECRET_STASH_FORINA                               0x2E4
#define FLAG_HIDE_SECRET_STASH_SEAFLOOR_CAVERN                      0x2E5
#define FLAG_HIDE_SECRET_STASH_FOREST_HEART                         0x2E6
#define FLAG_HIDE_SECRET_STASH_METEOR_FALLS                         0x2E7
#define FLAG_HIDE_SECRET_STASH_JAGGED_PASS                          0x2E8
#define FLAG_HIDE_SECRET_STASH_DEWDROP_GLEN                         0x2E9
#define FLAG_HIDE_SECRET_STASH_SANDSWEPT_OASIS                      0x2EA
#define FLAG_HIDE_SECRET_STASH_ROUTE_115                            0x2EB
#define FLAG_HIDE_SECRET_STASH_CHAMPIONS_CUT                        0x2EC
#define FLAG_HIDE_SECRET_STASH_DESERT_UNDERPASS                     0x2ED
#define FLAG_HIDE_SECRET_STASH_REGI                                 0x2EE
#define FLAG_HIDE_SECRET_STASH_ROUTE_111                            0x2EF
#define FLAG_HIDE_SECRET_STASH_ROUTE_122                            0x2F0
#define FLAG_HIDE_SECRET_STASH_OLDALE_RUINS                         0x2F1
#define FLAG_HIDE_SECRET_STASH_SAFARI_ZONE                          0x2F2
#define FLAG_UNUSED_0x2F3                                           0x2F3
#define FLAG_UNUSED_0x2F4                                           0x2F4
#define FLAG_UNUSED_0x2F5                                           0x2F5
#define FLAG_UNUSED_0x2F6                                           0x2F6
#define FLAG_UNUSED_0x2F7                                           0x2F7
#define FLAG_UNUSED_0x2F8                                           0x2F8
#define FLAG_UNUSED_0x2F9                                           0x2F9
#define FLAG_UNUSED_0x2FA                                           0x2FA

// Event Flags cont'd
#define FLAG_HIDE_FANCLUB_OLD_LADY                                  0x2FB
#define FLAG_HIDE_FANCLUB_BOY                                       0x2FC
#define FLAG_HIDE_FANCLUB_LITTLE_BOY                                0x2FD
#define FLAG_HIDE_FANCLUB_LADY                                      0x2FE
#define FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER                     0x2FF
#define FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE                        0x300
#define FLAG_HIDE_ROUTE_111_WINSTRATE_FAMILY                        0x301
#define FLAG_HIDE_CONTEST_POKE_BALL                                 0x302
#define FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON          0x303
#define FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN      0x304
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER                    0x305
#define FLAG_HIDE_LILYCOVE_MOTEL_GAME_DESIGNERS                     0x306
#define FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR                           0x307
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1                          0x308
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2                          0x309
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3                          0x30A
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4                          0x30B
#define FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS                          0x30C
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER                0x30D
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT    0x30E
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1         0x30F
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2         0x310
#define FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN                          0x311
#define FLAG_HIDE_TRICK_HOUSE_END_MAN                               0x312
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1                          0x313
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2                          0x314
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3                          0x315
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1                          0x316
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2                          0x317
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3                          0x318
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1                          0x319
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2                          0x31A


//Big chunk of unused flags
#define FLAG_UNUSED_0x31B                                           0x31B
#define FLAG_UNUSED_0x31C                                           0x31C
#define FLAG_UNUSED_0x31D                                           0x31D
#define FLAG_UNUSED_0x31E                                           0x31E
#define FLAG_UNUSED_0x31F                                           0x31F
#define FLAG_UNUSED_0x320                                           0x320
#define FLAG_UNUSED_0x321                                           0x321
#define FLAG_UNUSED_0x322                                           0x322
#define FLAG_UNUSED_0x323                                           0x323
#define FLAG_UNUSED_0x324                                           0x324
#define FLAG_UNUSED_0x325                                           0x325
#define FLAG_UNUSED_0x326                                           0x326
#define FLAG_UNUSED_0x327                                           0x327
#define FLAG_UNUSED_0x328                                           0x328
#define FLAG_UNUSED_0x329                                           0x329
#define FLAG_UNUSED_0x32A                                           0x32A
#define FLAG_UNUSED_0x32B                                           0x32B
#define FLAG_UNUSED_0x32C                                           0x32C
#define FLAG_UNUSED_0x32D                                           0x32D
#define FLAG_UNUSED_0x32E                                           0x32E
#define FLAG_UNUSED_0x32F                                           0x32F
#define FLAG_UNUSED_0x330                                           0x330
#define FLAG_UNUSED_0x331                                           0x331
#define FLAG_UNUSED_0x332                                           0x332
#define FLAG_UNUSED_0x333                                           0x333
#define FLAG_UNUSED_0x334                                           0x334
#define FLAG_UNUSED_0x335                                           0x335
#define FLAG_UNUSED_0x336                                           0x336
#define FLAG_UNUSED_0x337                                           0x337
#define FLAG_UNUSED_0x338                                           0x338
#define FLAG_UNUSED_0x339                                           0x339
#define FLAG_UNUSED_0x33A                                           0x33A
#define FLAG_UNUSED_0x33B                                           0x33B
#define FLAG_UNUSED_0x33C                                           0x33C
#define FLAG_UNUSED_0x33D                                           0x33D
#define FLAG_UNUSED_0x33E                                           0x33E
#define FLAG_UNUSED_0x33F                                           0x33F
#define FLAG_UNUSED_0x340                                           0x340
#define FLAG_UNUSED_0x341                                           0x341
#define FLAG_UNUSED_0x342                                           0x342
#define FLAG_UNUSED_0x343                                           0x343
#define FLAG_UNUSED_0x344                                           0x344
#define FLAG_UNUSED_0x345                                           0x345
#define FLAG_UNUSED_0x346                                           0x346
#define FLAG_UNUSED_0x347                                           0x347
#define FLAG_UNUSED_0x348                                           0x348
#define FLAG_UNUSED_0x349                                           0x349
#define FLAG_UNUSED_0x34A                                           0x34A
#define FLAG_UNUSED_0x34B                                           0x34B
#define FLAG_UNUSED_0x34C                                           0x34C
#define FLAG_UNUSED_0x34D                                           0x34D
#define FLAG_UNUSED_0x34E                                           0x34E
#define FLAG_UNUSED_0x34F                                           0x34F
#define FLAG_UNUSED_0x350                                           0x350
#define FLAG_UNUSED_0x351                                           0x351
#define FLAG_UNUSED_0x352                                           0x352
#define FLAG_UNUSED_0x353                                           0x353
#define FLAG_UNUSED_0x354                                           0x354
#define FLAG_UNUSED_0x355                                           0x355
#define FLAG_UNUSED_0x356                                           0x356
#define FLAG_UNUSED_0x357                                           0x357
#define FLAG_UNUSED_0x358                                           0x358
#define FLAG_UNUSED_0x359                                           0x359
#define FLAG_UNUSED_0x35A                                           0x35A
#define FLAG_UNUSED_0x35B                                           0x35B
#define FLAG_UNUSED_0x35C                                           0x35C
#define FLAG_UNUSED_0x35D                                           0x35D
#define FLAG_UNUSED_0x35E                                           0x35E
#define FLAG_UNUSED_0x35F                                           0x35F
#define FLAG_UNUSED_0x360                                           0x360
#define FLAG_UNUSED_0x361                                           0x361
#define FLAG_UNUSED_0x362                                           0x362
#define FLAG_UNUSED_0x363                                           0x363
#define FLAG_UNUSED_0x364                                           0x364
#define FLAG_UNUSED_0x365                                           0x365
#define FLAG_UNUSED_0x366                                           0x366
#define FLAG_UNUSED_0x367                                           0x367
#define FLAG_UNUSED_0x368                                           0x368
#define FLAG_UNUSED_0x369                                           0x369
#define FLAG_UNUSED_0x36A                                           0x36A
#define FLAG_UNUSED_0x36B                                           0x36B
#define FLAG_UNUSED_0x36C                                           0x36C
#define FLAG_UNUSED_0x36D                                           0x36D
#define FLAG_UNUSED_0x36E                                           0x36E
#define FLAG_UNUSED_0x36F                                           0x36F
#define FLAG_UNUSED_0x370                                           0x370
#define FLAG_UNUSED_0x371                                           0x371
#define FLAG_UNUSED_0x372                                           0x372
#define FLAG_UNUSED_0x373                                           0x373
#define FLAG_UNUSED_0x374                                           0x374
#define FLAG_UNUSED_0x375                                           0x375
#define FLAG_UNUSED_0x376                                           0x376
#define FLAG_UNUSED_0x377                                           0x377
#define FLAG_UNUSED_0x378                                           0x378
#define FLAG_UNUSED_0x379                                           0x379
#define FLAG_UNUSED_0x37A                                           0x37A
#define FLAG_UNUSED_0x37B                                           0x37B
#define FLAG_UNUSED_0x37C                                           0x37C
#define FLAG_UNUSED_0x37D                                           0x37D
#define FLAG_UNUSED_0x37E                                           0x37E
#define FLAG_UNUSED_0x37F                                           0x37F
#define FLAG_UNUSED_0x380                                           0x380
#define FLAG_UNUSED_0x381                                           0x381
#define FLAG_UNUSED_0x382                                           0x382
#define FLAG_UNUSED_0x383                                           0x383
#define FLAG_UNUSED_0x384                                           0x384
#define FLAG_UNUSED_0x385                                           0x385
#define FLAG_UNUSED_0x386                                           0x386
#define FLAG_UNUSED_0x387                                           0x387
#define FLAG_UNUSED_0x388                                           0x388
#define FLAG_UNUSED_0x389                                           0x389
#define FLAG_UNUSED_0x38A                                           0x38A
#define FLAG_UNUSED_0x38B                                           0x38B
#define FLAG_UNUSED_0x38C                                           0x38C
#define FLAG_UNUSED_0x38D                                           0x38D
#define FLAG_UNUSED_0x38E                                           0x38E
#define FLAG_UNUSED_0x38F                                           0x38F
#define FLAG_UNUSED_0x390                                           0x390
#define FLAG_UNUSED_0x391                                           0x391
#define FLAG_UNUSED_0x392                                           0x392
#define FLAG_UNUSED_0x393                                           0x393
#define FLAG_UNUSED_0x394                                           0x394
#define FLAG_UNUSED_0x395                                           0x395
#define FLAG_UNUSED_0x396                                           0x396
#define FLAG_UNUSED_0x397                                           0x397
#define FLAG_UNUSED_0x398                                           0x398


//hide flags to be removed if space needed
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380          0x399
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL                  0x39A
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA     0x39B
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL     0x39C
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE      0x39D
#define FLAG_HIDE_MAUVILLE_CITY_WALLY                               0x39E
#define FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY                       0x39F
#define FLAG_HIDE_DESERT_UNDERPASS_FOSSIL                           0x3A0
#define FLAG_HIDE_ROUTE_111_PLAYER_DESCENT                          0x3A1
#define FLAG_HIDE_ROUTE_111_DESERT_FOSSIL                           0x3A2
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_1                             0x3A3
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2                             0x3A4
#define FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL                      0x3A5
#define FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL                     0x3A6

//hide legendary flags
#define FLAG_HIDE_REGIROCK                                          0x3A7
#define FLAG_HIDE_REGICE                                            0x3A8
#define FLAG_HIDE_REGISTEEL                                         0x3A9
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL                     0x3AA
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA                           0x3AB
#define FLAG_HIDE_MARINE_CAVE_KYOGRE                                0x3AC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP              0x3AD
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE                     0x3AE
#define FLAG_HIDE_TERRA_CAVE_GROUDON                                0x3AF
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP                   0x3B0
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON                          0x3B1
#define FLAG_HIDE_DEOXYS                                            0x3B2
#define FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE                      0x3B3
#define FLAG_HIDE_MEW                                               0x3B4
#define FLAG_HIDE_LUGIA                                             0x3B5
#define FLAG_HIDE_HO_OH                                             0x3B6
#define FLAG_HIDE_LEGEND_MON_CAVE_OF_ORIGIN                         0x3B7

//Shoal cave flags
#define FLAG_RECEIVED_SHOAL_SALT_1                                  0x3B8
#define FLAG_RECEIVED_SHOAL_SALT_2                                  0x3B9
#define FLAG_RECEIVED_SHOAL_SALT_3                                  0x3BA
#define FLAG_RECEIVED_SHOAL_SALT_4                                  0x3BB
#define FLAG_RECEIVED_SHOAL_SHELL_1                                 0x3BC
#define FLAG_RECEIVED_SHOAL_SHELL_2                                 0x3BD
#define FLAG_RECEIVED_SHOAL_SHELL_3                                 0x3BE
#define FLAG_RECEIVED_SHOAL_SHELL_4                                 0x3BF

//Jinnora's additional trade flags
#define FLAG_RUSTBORO_HONEDGE_TRADE_COMPLETED                       0x3C0
#define FLAG_SLATEPORT_STUFFUL_TRADE_COMPLETED                      0x3C1
#define FLAG_SLATEPORT_PORYGON_TRADE_COMPLETED                      0x3C2
#define FLAG_SLATEPORT_FURFROU_TRADE_COMPLETED                      0x3C3
#define FLAG_MOSSDEEP_HAUNTER_TRADE_COMPLETED                       0x3C4
#define FLAG_LITTLEROOT_SHUCKLE_TRADE_COMPLETED                     0x3C5
#define FLAG_EVER_GRANDE_CHATOT_TRADE_COMPLETED                     0x3C6
#define FLAG_METEOR_VILLAGE_DRATINI_TRADE_COMPLETED                 0x3C7
#define FLAG_MILLENNIUM_FIELD_SNOM_TRADE_COMPLETED                  0x3C8
#define FLAG_MILLENNIUM_FIELD_MORPEKO_TRADE_COMPLETED               0x3C9
#define FLAG_MILLENNIUM_FIELD_TYROGUE_TRADE_COMPLETED               0x3CA
#define FLAG_PETALBURG_CHANSEY_TRADE_COMPLETED                      0x3CB
#define FLAG_PACIFIDLOG_SMEARGLE_TRADE_COMPLETED                    0x3CC
#define FLAG_FALLARBOR_DURANT_TRADE_COMPLETED                       0x3CD
#define FLAG_SHOAL_CAVE_SPHEAL_TRADE_COMPLETED                      0x3CE
#define FLAG_MAUVILLE_PACHIRISU_TRADE_COMPLETED                     0x3CF
#define FLAG_LILYCOVE_TAILLOW_TRADE_COMPLETED                       0x3D0
#define FLAG_LILYCOVE_CORSOLA_TRADE_COMPLETED                       0x3D1
#define FLAG_LILYCOVE_MUNNA_TRADE_COMPLETED                         0x3D2

//hide static encounter flags
#define FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO                         0x3D3
#define FLAG_UNUSED_0x3D4                                           0x3D4
#define FLAG_UNUSED_0x3D5                                           0x3D5
#define FLAG_UNUSED_0x3D6                                           0x3D6
#define FLAG_UNUSED_0x3D7                                           0x3D7
#define FLAG_UNUSED_0x3D8                                           0x3D8
#define FLAG_UNUSED_0x3D9                                           0x3D9
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1                            0x3DA
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2                            0x3DB
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3                            0x3DC
#define FLAG_HIDE_ROUTE_119_KECLEON_1                               0x3DD
#define FLAG_HIDE_ROUTE_119_KECLEON_2                               0x3DE
#define FLAG_UNUSED_0x3DF                                           0x3DF
#define FLAG_UNUSED_0x3E0                                           0x3E0
#define FLAG_UNUSED_0x3E1                                           0x3E1
#define FLAG_HIDE_FORTREE_CITY_KECLEON                              0x3E2
#define FLAG_HIDE_ROUTE_120_KECLEON_1                               0x3E3
#define FLAG_HIDE_ROUTE_120_KECLEON_2                               0x3E4
#define FLAG_HIDE_ROUTE_120_KECLEON_3                               0x3E5
#define FLAG_HIDE_ROUTE_120_KECLEON_4                               0x3E6
#define FLAG_HIDE_ROUTE_120_KECLEON_5                               0x3E7

// TM Flags, could mostly be replaced with item checks if need be
#define FLAG_ITEM_TM01      0x3E8
#define FLAG_ITEM_TM02      0x3E9
#define FLAG_ITEM_TM03      0x3EA
#define FLAG_ITEM_TM04      0x3EB
#define FLAG_ITEM_TM05      0x3EC
#define FLAG_ITEM_TM06      0x3ED
#define FLAG_ITEM_TM07      0x3EE
#define FLAG_ITEM_TM08      0x3EF
#define FLAG_ITEM_TM09      0x3F0
#define FLAG_ITEM_TM10      0x3F1
#define FLAG_ITEM_TM11      0x3F2
#define FLAG_ITEM_TM12      0x3F3
#define FLAG_ITEM_TM13      0x3F4
#define FLAG_ITEM_TM14      0x3F5
#define FLAG_ITEM_TM15      0x3F6
#define FLAG_ITEM_TM16      0x3F7
#define FLAG_ITEM_TM17      0x3F8
#define FLAG_ITEM_TM18      0x3F9
#define FLAG_ITEM_TM19      0x3FA
#define FLAG_ITEM_TM20      0x3FB
#define FLAG_ITEM_TM21      0x3FC
#define FLAG_ITEM_TM22      0x3FD
#define FLAG_ITEM_TM23      0x3FE
#define FLAG_ITEM_TM24      0x3FF
#define FLAG_ITEM_TM25      0x400
#define FLAG_ITEM_TM26      0x401
#define FLAG_ITEM_TM27      0x402
#define FLAG_ITEM_TM28      0x403
#define FLAG_ITEM_TM29      0x404
#define FLAG_ITEM_TM30      0x405
#define FLAG_ITEM_TM31      0x406
#define FLAG_ITEM_TM32      0x407
#define FLAG_ITEM_TM33      0x408
#define FLAG_ITEM_TM34      0x409
#define FLAG_ITEM_TM35      0x40A
#define FLAG_ITEM_TM36      0x40B
#define FLAG_ITEM_TM37      0x40C
#define FLAG_ITEM_TM38      0x40D
#define FLAG_ITEM_TM39      0x40E
#define FLAG_ITEM_TM40      0x40F
#define FLAG_ITEM_TM41      0x410
#define FLAG_ITEM_TM42      0x411
#define FLAG_ITEM_TM43      0x412
#define FLAG_ITEM_TM44      0x413
#define FLAG_ITEM_TM45      0x414
#define FLAG_ITEM_TM46      0x415
#define FLAG_ITEM_TM47      0x416
#define FLAG_ITEM_TM48      0x417
#define FLAG_ITEM_TM49      0x418
#define FLAG_ITEM_TM50      0x419
#define FLAG_ITEM_TM51      0x41A
#define FLAG_ITEM_TM52      0x41B
#define FLAG_ITEM_TM53      0x41C
#define FLAG_ITEM_TM54      0x41D
#define FLAG_ITEM_TM55      0x41E
#define FLAG_ITEM_TM56      0x41F
#define FLAG_ITEM_TM57      0x420
#define FLAG_ITEM_TM58      0x421
#define FLAG_ITEM_TM59      0x422
#define FLAG_ITEM_TM60      0x423
#define FLAG_ITEM_TM61      0x424
#define FLAG_ITEM_TM62      0x425
#define FLAG_ITEM_TM63      0x426
#define FLAG_ITEM_TM64      0x427
#define FLAG_ITEM_TM65      0x428
#define FLAG_ITEM_TM66      0x429
#define FLAG_ITEM_TM67      0x42A
#define FLAG_ITEM_TM68      0x42B
#define FLAG_ITEM_TM69      0x42C
#define FLAG_ITEM_TM70      0x42D
#define FLAG_ITEM_TM71      0x42E
#define FLAG_ITEM_TM72      0x42F
#define FLAG_ITEM_TM73      0x430
#define FLAG_ITEM_TM74      0x431
#define FLAG_ITEM_TM75      0x432
#define FLAG_ITEM_TM76      0x433
#define FLAG_ITEM_TM77      0x434
#define FLAG_ITEM_TM78      0x435
#define FLAG_ITEM_TM79      0x436
#define FLAG_ITEM_TM80      0x437
#define FLAG_ITEM_TM81      0x438
#define FLAG_ITEM_TM82      0x439
#define FLAG_ITEM_TM83      0x43A
#define FLAG_ITEM_TM84      0x43B
#define FLAG_ITEM_TM85      0x43C
#define FLAG_ITEM_TM86      0x43D
#define FLAG_ITEM_TM87      0x43E
#define FLAG_ITEM_TM88      0x43F
#define FLAG_ITEM_TM89      0x440
#define FLAG_ITEM_TM90      0x441
#define FLAG_ITEM_TM91      0x442
#define FLAG_ITEM_TM92      0x443
#define FLAG_ITEM_TM93      0x444
#define FLAG_ITEM_TM94      0x445
#define FLAG_ITEM_TM95      0x446
#define FLAG_ITEM_TM96      0x447
#define FLAG_ITEM_TM97      0x448
#define FLAG_ITEM_TM98      0x449
#define FLAG_ITEM_TM99      0x44A
#define FLAG_ITEM_TM100     0x44B

// Item Ball Flags
#define FLAG_ITEM_ABANDONED_SHIP_CAPTAINS_OFFICE_STORAGE_KEY        0x44C
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER        0x44D
#define FLAG_ITEM_PETALBURG_CITY_MAX_ELIXIR                         0x44E
#define FLAG_ITEM_SLATEPORT_CITY_LINKING_CORD                       0x44F
#define FLAG_ITEM_MAUVILLE_CITY_THUNDER_STONE                       0x450
#define FLAG_ITEM_RUSTBORO_CITY_ELIXIR                              0x451
#define FLAG_ITEM_LILYCOVE_CITY_PP_UP                               0x452
#define FLAG_ITEM_MOSSDEEP_CITY_RARE_CANDY                          0x453
#define FLAG_ITEM_SOOTOPOLIS_CITY_SHINY_STONE                       0x454
#define FLAG_ITEM_EVER_GRANDE_CITY_COMET_SHARD                      0x455
#define FLAG_ITEM_LITTLEROOT_TOWN_DAWN_STONE                        0x456
#define FLAG_ITEM_VERDANTURF_TOWN_LEAF_STONE                        0x457
#define FLAG_ITEM_ROUTE_101_LINKING_CORD                            0x458
#define FLAG_ITEM_ROUTE_101_MOON_STONE                              0x459
#define FLAG_ITEM_ROUTE_102_LUMINOUS_MOSS                           0x45A
#define FLAG_ITEM_ROUTE_102_ABSORB_BULB                             0x45B
#define FLAG_ITEM_ROUTE_102_FULL_RESTORE                            0x45C
#define FLAG_ITEM_ROUTE_103_ROCKY_HELMET                            0x45D
#define FLAG_ITEM_ROUTE_103_ELIXIR                                  0x45E
#define FLAG_ITEM_ROUTE_104_SHED_SHELL                              0x45F
#define FLAG_ITEM_ROUTE_104_RARE_CANDY                              0x460
#define FLAG_ITEM_ROUTE_106_RARE_CANDY                              0x461
#define FLAG_ITEM_ROUTE_108_CHOICE_SCARF                            0x462
#define FLAG_ITEM_ROUTE_110_GOLD_BOTTLE_CAP                         0x463
#define FLAG_ITEM_ROUTE_111_SMOOTH_ROCK                             0x464
#define FLAG_ITEM_ROUTE_111_RAZOR_FANG                              0x465
#define FLAG_ITEM_ROUTE_111_ASSAULT_VEST                            0x466
#define FLAG_ITEM_ROUTE_111_PP_UP                                   0x467
#define FLAG_ITEM_ROUTE_111_BIG_NUGGET                              0x468
#define FLAG_ITEM_ROUTE_112_FIRE_STONE                              0x469
#define FLAG_ITEM_ROUTE_113_SMOKE_BALL                              0x46A
#define FLAG_ITEM_ROUTE_113_COMET_SHARD                             0x46B
#define FLAG_ITEM_ROUTE_113_FULL_RESTORE                            0x46C
#define FLAG_ITEM_ROUTE_113_PP_UP                                   0x46D
#define FLAG_ITEM_ROUTE_114_GOLD_BOTTLE_CAP_1                       0x46E
#define FLAG_ITEM_ROUTE_114_GOLD_BOTTLE_CAP_2                       0x46F
#define FLAG_ITEM_ROUTE_114_MAX_ETHER                               0x470
#define FLAG_ITEM_ROUTE_114_MAX_ELIXIR                              0x471
#define FLAG_ITEM_ROUTE_115_EXPERT_BELT                             0x472
#define FLAG_ITEM_ROUTE_115_MUSCLE_BAND                             0x473
#define FLAG_ITEM_ROUTE_115_FULL_RESTORE                            0x474
#define FLAG_ITEM_ROUTE_116_WISE_GLASSES                            0x475
#define FLAG_ITEM_ROUTE_116_RARE_CANDY                              0x476
#define FLAG_ITEM_ROUTE_116_GOLD_BOTTLE_CAP                         0x477
#define FLAG_ITEM_ROUTE_117_MAX_REVIVE                              0x478
#define FLAG_ITEM_ROUTE_118_FULL_RESTORE                            0x479
#define FLAG_ITEM_ROUTE_119_DAMP_ROCK                               0x47A
#define FLAG_ITEM_ROUTE_119_GRIP_CLAW                               0x47B
#define FLAG_ITEM_ROUTE_119_BINDING_BAND                            0x47C
#define FLAG_ITEM_ROUTE_119_CLEAR_AMULET                            0x47D
#define FLAG_ITEM_ROUTE_119_ABILITY_CAPSULE                         0x47E
#define FLAG_ITEM_ROUTE_120_TERRAIN_EXTENDER                        0x47F
#define FLAG_ITEM_ROUTE_120_PP_MAX                                  0x480
#define FLAG_ITEM_ROUTE_120_ADRENALINE_ORB                          0x481
#define FLAG_ITEM_ROUTE_121_LUCKY_PUNCH                             0x482
#define FLAG_ITEM_ROUTE_121_LIGHT_BALL                              0x483
#define FLAG_ITEM_ROUTE_121_PP_UP                                   0x484
#define FLAG_ITEM_ROUTE_122_COVERT_CLOAK                            0x485
#define FLAG_ITEM_ROUTE_122_DUSK_STONE                              0x486
#define FLAG_ITEM_ROUTE_122_PP_MAX                                  0x487
#define FLAG_ITEM_ROUTE_123_WEAKNESS_POLICY                         0x488
#define FLAG_ITEM_ROUTE_124_FLOAT_STONE                             0x489
#define FLAG_ITEM_ROUTE_124_RARE_CANDY                              0x48A
#define FLAG_ITEM_ROUTE_124_PP_UP                                   0x48B
#define FLAG_ITEM_ROUTE_125_ABILITY_SHIELD                          0x48C
#define FLAG_ITEM_ROUTE_127_PEARL_STRING                            0x48D
#define FLAG_ITEM_ROUTE_128_MAX_ELIXIR                              0x48E
#define FLAG_ITEM_ROUTE_128_BRIGHT_POWDER                           0x48F
#define FLAG_ITEM_ROUTE_129_SOOTHE_BELL                             0x490
#define FLAG_ITEM_ROUTE_131_BIG_PEARL                               0x491
#define FLAG_ITEM_ROUTE_133_RING_TARGET                             0x492
#define FLAG_ITEM_ROUTE_133_PP_UP                                   0x493
#define FLAG_ITEM_ROUTE_134_RARE_CANDY                              0x494
#define FLAG_ITEM_ARRIVAL_FERRY_ROOM_POTION                         0x495
#define FLAG_ITEM_ARRIVAL_FERRY_ROOM_SUPER_POTION                   0x496
#define FLAG_ITEM_ARRIVAL_FERRY_ROOM_ESCAPE_ROPE                    0x497
#define FLAG_ITEM_EVER_GRANDE_CITY_HEADQUARTERS_3F_LINKING_CORD     0x498
#define FLAG_ITEM_DEWFORD_RESORT_RARE_CANDY                         0x499
#define FLAG_ITEM_VERDANT_FOREST_PP_UP                              0x49A
#define FLAG_ITEM_VERDANT_FOREST_SHINY_STONE                        0x49B
#define FLAG_ITEM_LITTLEROOT_SHORE_CHOICE_SPECS                     0x49C
#define FLAG_ITEM_FORINA_CHOICE_BAND                                0x49D
#define FLAG_ITEM_FORINA_MAX_ETHER                                  0x49E
#define FLAG_ITEM_VALLEY_OF_STEEL_LAGGING_TAIL                      0x49F
#define FLAG_ITEM_VALLEY_OF_STEEL_BLACK_SLUDGE                      0x4A0
#define FLAG_ITEM_VALLEY_OF_STEEL_IRON_BALL                         0x4A1
#define FLAG_ITEM_SANDSWEPT_DESERT_THICK_CLUB                       0x4A2
#define FLAG_ITEM_SOUTHERN_ISLAND_HEAVY_DUTY_BOOTS                  0x4A3
#define FLAG_ITEM_METEOR_FALLS_1F_1R_METAL_COAT                     0x4A4
#define FLAG_ITEM_METEOR_FALLS_B1F_1R_MAX_ELIXIR                    0x4A5
#define FLAG_ITEM_RUSTURF_TUNNEL_THROAT_SPRAY                       0x4A6
#define FLAG_ITEM_GRANITE_CAVE_B1F_MAX_ETHER                        0x4A7
#define FLAG_ITEM_PETALBURG_WOODS_TOXIC_ORB                         0x4A8
#define FLAG_ITEM_PETALBURG_WOODS_MAX_ELIXIR                        0x4A9
#define FLAG_ITEM_MT_CHIMNEY_PP_MAX                                 0x4AA
#define FLAG_ITEM_MT_CHIMNEY_MAGMARIZER                             0x4AB
#define FLAG_ITEM_JAGGED_PASS_FLAME_ORB                             0x4AC
#define FLAG_ITEM_MT_PYRE_2F_FULL_RESTORE                           0x4AD
#define FLAG_ITEM_MT_PYRE_2F_RARE_CANDY                             0x4AE
#define FLAG_ITEM_MT_PYRE_EXTERIOR_DUSK_STONE                       0x4AF
#define FLAG_ITEM_MT_PYRE_EXTERIOR_DAWN_STONE                       0x4B0
#define FLAG_ITEM_MT_PYRE_SUMMIT_METRONOME                          0x4B1
#define FLAG_ITEM_CAVE_OF_ORIGIN_LIFE_ORB                           0x4B2
#define FLAG_ITEM_VICTORY_ROAD_1F_MAX_ELIXIR                        0x4B3
#define FLAG_ITEM_VICTORY_ROAD_B1F_PP_MAX                           0x4B4
#define FLAG_ITEM_NEW_MAUVILLE_INSIDE_ELECTIRIZER                   0x4B5
#define FLAG_ITEM_NEW_MAUVILLE_INSIDE_CELL_BATTERY                  0x4B6
#define FLAG_ITEM_NEW_MAUVILLE_INSIDE_THUNDER_STONE                 0x4B7
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS_WATER_STONE     0x4B8
#define FLAG_ITEM_SHOAL_CAVE_LOW_TIDE_ICE_ROOM_ICY_ROCK             0x4B9
#define FLAG_ITEM_ALTERING_CAVE_MAX_ELIXIR                          0x4BA
#define FLAG_ITEM_OLDALE_GLADE_BIG_ROOT                             0x4BB
#define FLAG_ITEM_MOSSDEEP_CAVERNS_MEDITATION_POOL_LIGHT_CLAY       0x4BC
#define FLAG_ITEM_MOSSDEEP_CAVERNS_B1F_FOCUS_SASH                   0x4BD
#define FLAG_ITEM_MOSSDEEP_CAVERNS_B2F_KINGS_ROCK                   0x4BE
#define FLAG_ITEM_MOSSDEEP_CAVERNS_DIVE_CHAMBER_PROTECTOR           0x4BF
#define FLAG_ITEM_SCORCHED_SLAB_B1F_HEAT_ROCK                       0x4C0
#define FLAG_ITEM_GRANITE_CAVE_RESORT_EXITS_ABILITY_CAPSULE         0x4C1
#define FLAG_ITEM_FOREST_HEART_STICKY_BARB                          0x4C2
#define FLAG_ITEM_FOREST_HEART_WHITE_HERB                           0x4C3
#define FLAG_ITEM_FOREST_HEART_POWER_HERB                           0x4C4
#define FLAG_ITEM_FOREST_HEART_MIRROR_HERB                          0x4C5
#define FLAG_ITEM_ALTERING_CAVE_UPPER_FLOOR_1_ABILITY_CAPSULE       0x4C6
#define FLAG_ITEM_ALTERING_CAVE_UPPER_FLOOR_2_ABILITY_PATCH         0x4C7
#define FLAG_ITEM_OLDALE_RUINS_CHAMBER_1_THUNDER_STONE              0x4C8
#define FLAG_ITEM_OLDALE_RUINS_CHAMBER_1_YELLOW_SHARD               0x4C9
#define FLAG_ITEM_OLDALE_RUINS_CHAMBER_2_ICE_STONE                  0x4CA
#define FLAG_ITEM_OLDALE_RUINS_CHAMBER_2_BLUE_SHARD                 0x4CB
#define FLAG_ITEM_OLDALE_RUINS_CHAMBER_3_WATER_STONE                0x4CC
#define FLAG_ITEM_OLDALE_RUINS_CHAMBER_3_GREEN_SHARD                0x4CD
#define FLAG_ITEM_OLDALE_RUINS_CHAMBER_4_LEAF_STONE                 0x4CE
#define FLAG_ITEM_OLDALE_RUINS_CHAMBER_4_GREEN_SHARD                0x4CF
#define FLAG_ITEM_OLDALE_RUINS_CHAMBER_5_FIRE_STONE                 0x4D0
#define FLAG_ITEM_OLDALE_RUINS_CHAMBER_5_RED_SHARD                  0x4D1
#define FLAG_ITEM_ROUTE_121_ABILITY_PATCH                           0x4D2
#define FLAG_UNUSED_0x4D3                                           0x4D3
#define FLAG_UNUSED_0x4D4                                           0x4D4 // Unused Flag
#define FLAG_UNUSED_0x4D5                                           0x4D5 // Unused Flag
#define FLAG_UNUSED_0x4D6                                           0x4D6 // Unused Flag
#define FLAG_UNUSED_0x4D7                                           0x4D7 // Unused Flag
#define FLAG_UNUSED_0x4D8                                           0x4D8 // Unused Flag
#define FLAG_UNUSED_0x4D9                                           0x4D9 // Unused Flag
#define FLAG_UNUSED_0x4DA                                           0x4DA // Unused Flag
#define FLAG_UNUSED_0x4DB                                           0x4DB // Unused Flag
#define FLAG_UNUSED_0x4DC                                           0x4DC // Unused Flag
#define FLAG_UNUSED_0x4DD                                           0x4DD // Unused Flag
#define FLAG_UNUSED_0x4DE                                           0x4DE // Unused Flag
#define FLAG_UNUSED_0x4DF                                           0x4DF // Unused Flag
#define FLAG_UNUSED_0x4E0                                           0x4E0 // Unused Flag
#define FLAG_UNUSED_0x4E1                                           0x4E1 // Unused Flag
#define FLAG_UNUSED_0x4E2                                           0x4E2 // Unused Flag
#define FLAG_UNUSED_0x4E3                                           0x4E3 // Unused Flag
#define FLAG_UNUSED_0x4E4                                           0x4E4 // Unused Flag
#define FLAG_UNUSED_0x4E5                                           0x4E5 // Unused Flag
#define FLAG_UNUSED_0x4E6                                           0x4E6 // Unused Flag
#define FLAG_UNUSED_0x4E7                                           0x4E7 // Unused Flag
#define FLAG_UNUSED_0x4E8                                           0x4E8 // Unused Flag
#define FLAG_UNUSED_0x4E9                                           0x4E9 // Unused Flag
#define FLAG_UNUSED_0x4EA                                           0x4EA // Unused Flag
#define FLAG_UNUSED_0x4EB                                           0x4EB // Unused Flag
#define FLAG_UNUSED_0x4EC                                           0x4EC // Unused Flag
#define FLAG_UNUSED_0x4ED                                           0x4ED // Unused Flag
#define FLAG_UNUSED_0x4EE                                           0x4EE // Unused Flag
#define FLAG_UNUSED_0x4EF                                           0x4EF // Unused Flag

#define FLAG_DEFEATED_RUSTBORO_GYM                                  0x4F0
#define FLAG_DEFEATED_DEWFORD_GYM                                   0x4F1
#define FLAG_DEFEATED_MAUVILLE_GYM                                  0x4F2
#define FLAG_DEFEATED_LAVARIDGE_GYM                                 0x4F3
#define FLAG_DEFEATED_PETALBURG_GYM                                 0x4F4
#define FLAG_DEFEATED_FORTREE_GYM                                   0x4F5
#define FLAG_DEFEATED_MOSSDEEP_GYM                                  0x4F6
#define FLAG_DEFEATED_SOOTOPOLIS_GYM                                0x4F7

#define FLAG_UNUSED_0x4F8                                           0x4F8//was defeated meteor falls steven
#define FLAG_UNUSED_0x4F9                                           0x4F9 // Unused Flag
#define FLAG_UNUSED_0x4FA                                           0x4FA // Unused Flag

#define FLAG_DEFEATED_ELITE_4_SIDNEY                                0x4FB
#define FLAG_DEFEATED_ELITE_4_PHOEBE                                0x4FC
#define FLAG_DEFEATED_ELITE_4_GLACIA                                0x4FD
#define FLAG_DEFEATED_ELITE_4_DRAKE                                 0x4FE

#define FLAG_UNUSED_0x4FF                                           0x4FF // Unused Flag

// Trainer Flags
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                         0x500
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F

// System Flags

#define SYSTEM_FLAGS                                   (TRAINER_FLAGS_END + 1) // 0x860

#define FLAG_SYS_POKEMON_GET                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                         (SYSTEM_FLAGS + 0x2)
#define FLAG_UNUSED_0x863                            (SYSTEM_FLAGS + 0x3) // Unused Flag
#define FLAG_SYS_GAME_CLEAR                          (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_CHAT_USED                           (SYSTEM_FLAGS + 0x5)
#define FLAG_UNLOCKED_TRENDY_SAYINGS                 (SYSTEM_FLAGS + 0x6)

// Badges
#define FLAG_BADGE01_GET                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE02_GET                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE03_GET                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE04_GET                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE05_GET                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE06_GET                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE07_GET                             (SYSTEM_FLAGS + 0xD)
#define FLAG_BADGE08_GET                             (SYSTEM_FLAGS + 0xE)
#define NUM_BADGES                                   (1 + FLAG_BADGE08_GET - FLAG_BADGE01_GET)

// Towns and Cities
#define FLAG_VISITED_LITTLEROOT_TOWN                (SYSTEM_FLAGS + 0xF)
#define FLAG_VISITED_OLDALE_TOWN                    (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_DEWFORD_TOWN                   (SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_LAVARIDGE_TOWN                 (SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_FALLARBOR_TOWN                 (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_VERDANTURF_TOWN                (SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_PACIFIDLOG_TOWN                (SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_PETALBURG_CITY                 (SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_SLATEPORT_CITY                 (SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_MAUVILLE_CITY                  (SYSTEM_FLAGS + 0x18)
#define FLAG_VISITED_RUSTBORO_CITY                  (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_FORTREE_CITY                   (SYSTEM_FLAGS + 0x1A)
#define FLAG_VISITED_LILYCOVE_CITY                  (SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_MOSSDEEP_CITY                  (SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_SOOTOPOLIS_CITY                (SYSTEM_FLAGS + 0x1D)
#define FLAG_VISITED_EVER_GRANDE_CITY               (SYSTEM_FLAGS + 0x1E)

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1F) // Seems to be related to linking.
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x20)

#define FLAG_VISITED_METEOR_VILLAGE                 (SYSTEM_FLAGS + 0x21) //Jinnora added
#define FLAG_VISITED_EMERALD_CAPE                   (SYSTEM_FLAGS + 0x22) //Jinnora added
#define FLAG_VISITED_POKEMON_LEAGUE                 (SYSTEM_FLAGS + 0x23) //Jinnora added
#define FLAG_UNUSED_0x884                           (SYSTEM_FLAGS + 0x24) // Unused Flag
#define FLAG_UNUSED_0x885                           (SYSTEM_FLAGS + 0x25) // Unused Flag
#define FLAG_UNUSED_0x886                           (SYSTEM_FLAGS + 0x26) // Unused Flag
#define FLAG_UNUSED_0x887                           (SYSTEM_FLAGS + 0x27) // Unused Flag

#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x2D)

#define FLAG_UNUSED_0x88E                           (SYSTEM_FLAGS + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x88F                           (SYSTEM_FLAGS + 0x2F) // Unused Flag

#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x36)
#define FLAG_SYS_CAVE_SHIP                          (SYSTEM_FLAGS + 0x37) // Unused Flag, leftover from R/S debug, presumably used by Emerald's debug too
#define FLAG_SYS_CAVE_WONDER                        (SYSTEM_FLAGS + 0x38) // Unused Flag, same as above
#define FLAG_SYS_CAVE_BATTLE                        (SYSTEM_FLAGS + 0x39) // Unused Flag, same as above
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_MR_BRINEY_HOUSE               (SYSTEM_FLAGS + 0x3D)
#define FLAG_LANDMARK_ABANDONED_SHIP                (SYSTEM_FLAGS + 0x3E)
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x3F)
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x40)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x41)
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x42)
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x43)
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x44)
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x45)
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x46)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x4A)

#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x54)
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x56)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x57)
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x58)
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x59)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x5A)
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x5B)
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x5C)

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x5E)

#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x63)

#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)

#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)

#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)

#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)

#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x7D)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x7E)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x82)
#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x83)

#define FLAG_UNUSED_0x8E4                           (SYSTEM_FLAGS + 0x84) // Unused Flag
#define FLAG_UNUSED_0x8E5                           (SYSTEM_FLAGS + 0x85) // Unused Flag
#define FLAG_UNUSED_0x8E6                           (SYSTEM_FLAGS + 0x86) // Unused Flag
#define FLAG_UNUSED_0x8E7                           (SYSTEM_FLAGS + 0x87) // Unused Flag
#define FLAG_UNUSED_0x8E8                           (SYSTEM_FLAGS + 0x88) // Unused Flag
#define FLAG_UNUSED_0x8E9                           (SYSTEM_FLAGS + 0x89) // Unused Flag
#define FLAG_UNUSED_0x8EA                           (SYSTEM_FLAGS + 0x8A) // Unused Flag
#define FLAG_UNUSED_0x8EB                           (SYSTEM_FLAGS + 0x8B) // Unused Flag
#define FLAG_UNUSED_0x8EC                           (SYSTEM_FLAGS + 0x8C) // Unused Flag
#define FLAG_UNUSED_0x8ED                           (SYSTEM_FLAGS + 0x8D) // Unused Flag
#define FLAG_UNUSED_0x8EE                           (SYSTEM_FLAGS + 0x8E) // Unused Flag
#define FLAG_UNUSED_0x8EF                           (SYSTEM_FLAGS + 0x8F) // Unused Flag
#define FLAG_UNUSED_0x8F0                           (SYSTEM_FLAGS + 0x90) // Unused Flag
#define FLAG_UNUSED_0x8F1                           (SYSTEM_FLAGS + 0x91) // Unused Flag
#define FLAG_UNUSED_0x8F2                           (SYSTEM_FLAGS + 0x92) // Unused Flag
#define FLAG_UNUSED_0x8F3                           (SYSTEM_FLAGS + 0x93) // Unused Flag
#define FLAG_UNUSED_0x8F4                           (SYSTEM_FLAGS + 0x94) // Unused Flag
#define FLAG_UNUSED_0x8F5                           (SYSTEM_FLAGS + 0x95) // Unused Flag
#define FLAG_UNUSED_0x8F6                           (SYSTEM_FLAGS + 0x96) // Unused Flag
#define FLAG_UNUSED_0x8F7                           (SYSTEM_FLAGS + 0x97) // Unused Flag
#define FLAG_UNUSED_0x8F8                           (SYSTEM_FLAGS + 0x98) // Unused Flag
#define FLAG_UNUSED_0x8F9                           (SYSTEM_FLAGS + 0x99) // Unused Flag
#define FLAG_UNUSED_0x8FA                           (SYSTEM_FLAGS + 0x9A) // Unused Flag
#define FLAG_UNUSED_0x8FB                           (SYSTEM_FLAGS + 0x9B) // Unused Flag
#define FLAG_UNUSED_0x8FC                           (SYSTEM_FLAGS + 0x9C) // Unused Flag
#define FLAG_UNUSED_0x8FD                           (SYSTEM_FLAGS + 0x9D) // Unused Flag
#define FLAG_UNUSED_0x8FE                           (SYSTEM_FLAGS + 0x9E) // Unused Flag
#define FLAG_UNUSED_0x8FF                           (SYSTEM_FLAGS + 0x9F) // Unused Flag
#define FLAG_UNUSED_0x900                           (SYSTEM_FLAGS + 0xA0) // Unused Flag
#define FLAG_UNUSED_0x901                           (SYSTEM_FLAGS + 0xA1) // Unused Flag
#define FLAG_UNUSED_0x902                           (SYSTEM_FLAGS + 0xA2) // Unused Flag
#define FLAG_UNUSED_0x903                           (SYSTEM_FLAGS + 0xA3) // Unused Flag
#define FLAG_UNUSED_0x904                           (SYSTEM_FLAGS + 0xA4) // Unused Flag
#define FLAG_UNUSED_0x905                           (SYSTEM_FLAGS + 0xA5) // Unused Flag
#define FLAG_UNUSED_0x906                           (SYSTEM_FLAGS + 0xA6) // Unused Flag
#define FLAG_UNUSED_0x907                           (SYSTEM_FLAGS + 0xA7) // Unused Flag
#define FLAG_UNUSED_0x908                           (SYSTEM_FLAGS + 0xA8) // Unused Flag
#define FLAG_UNUSED_0x909                           (SYSTEM_FLAGS + 0xA9) // Unused Flag
#define FLAG_UNUSED_0x90A                           (SYSTEM_FLAGS + 0xAA) // Unused Flag
#define FLAG_UNUSED_0x90B                           (SYSTEM_FLAGS + 0xAB) // Unused Flag
#define FLAG_UNUSED_0x90C                           (SYSTEM_FLAGS + 0xAC) // Unused Flag
#define FLAG_UNUSED_0x90D                           (SYSTEM_FLAGS + 0xAD) // Unused Flag
#define FLAG_UNUSED_0x90E                           (SYSTEM_FLAGS + 0xAE) // Unused Flag
#define FLAG_UNUSED_0x90F                           (SYSTEM_FLAGS + 0xAF) // Unused Flag
#define FLAG_UNUSED_0x910                           (SYSTEM_FLAGS + 0xB0) // Unused Flag
#define FLAG_UNUSED_0x911                           (SYSTEM_FLAGS + 0xB1) // Unused Flag
#define FLAG_UNUSED_0x912                           (SYSTEM_FLAGS + 0xB2) // Unused Flag
#define FLAG_UNUSED_0x913                           (SYSTEM_FLAGS + 0xB3) // Unused Flag
#define FLAG_UNUSED_0x914                           (SYSTEM_FLAGS + 0xB4) // Unused Flag
#define FLAG_UNUSED_0x915                           (SYSTEM_FLAGS + 0xB5) // Unused Flag
#define FLAG_UNUSED_0x916                           (SYSTEM_FLAGS + 0xB6) // Unused Flag
#define FLAG_UNUSED_0x917                           (SYSTEM_FLAGS + 0xB7) // Unused Flag
#define FLAG_UNUSED_0x918                           (SYSTEM_FLAGS + 0xB8) // Unused Flag
#define FLAG_UNUSED_0x919                           (SYSTEM_FLAGS + 0xB9) // Unused Flag
#define FLAG_UNUSED_0x91A                           (SYSTEM_FLAGS + 0xBA) // Unused Flag
#define FLAG_UNUSED_0x91B                           (SYSTEM_FLAGS + 0xBB) // Unused Flag
#define FLAG_UNUSED_0x91C                           (SYSTEM_FLAGS + 0xBC) // Unused Flag
#define FLAG_UNUSED_0x91D                           (SYSTEM_FLAGS + 0xBD) // Unused Flag
#define FLAG_UNUSED_0x91E                           (SYSTEM_FLAGS + 0xBE) // Unused Flag
#define FLAG_UNUSED_0x91F                           (SYSTEM_FLAGS + 0xBF) // Unused Flag

// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_UNUSED_0x91F + (8 - FLAG_UNUSED_0x91F % 8))
#define FLAG_DAILY_PIKACHU_FAVOR                    (DAILY_FLAGS_START + 0x0)  //Jinnora added
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_DAILY_KECLEON_HUNT                     (DAILY_FLAGS_START + 0x3)  //Jinnora added
#define FLAG_DAILY_KECLEON_WON                      (DAILY_FLAGS_START + 0x4)  //Jinnora added
#define FLAG_DAILY_PETALBURG_WOODS_BALM_MUSHROOM    (DAILY_FLAGS_START + 0x5)  //Jinnora added
#define FLAG_DAILY_FOREST_HEART_BALM_MUSHROOM       (DAILY_FLAGS_START + 0x6)  //Jinnora added
#define FLAG_DAILY_SLATEPORT_BEACH_BOTTLE_CAP       (DAILY_FLAGS_START + 0x7)  //Jinnora added
#define FLAG_DAILY_ROUTE_104_BERRY                  (DAILY_FLAGS_START + 0x8)  //Jinnora added
#define FLAG_UNUSED_0x929                           (DAILY_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xB)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xC)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0xD)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xE)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0xF)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x10)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x11)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x12)
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13) // Unused Flag
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x14)

#define FLAG_UNUSED_0x935                           (DAILY_FLAGS_START + 0x15) // Unused Flag
#define FLAG_UNUSED_0x936                           (DAILY_FLAGS_START + 0x16) // Unused Flag
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17) // Unused Flag
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18) // Unused Flag
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19) // Unused Flag
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A) // Unused Flag
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B) // Unused Flag
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C) // Unused Flag
#define FLAG_UNUSED_0x93D                           (DAILY_FLAGS_START + 0x1D) // Unused Flag
#define FLAG_UNUSED_0x93E                           (DAILY_FLAGS_START + 0x1E) // Unused Flag
#define FLAG_UNUSED_0x93F                           (DAILY_FLAGS_START + 0x1F) // Unused Flag
#define FLAG_UNUSED_0x940                           (DAILY_FLAGS_START + 0x20) // Unused Flag
#define FLAG_UNUSED_0x941                           (DAILY_FLAGS_START + 0x21) // Unused Flag
#define FLAG_UNUSED_0x942                           (DAILY_FLAGS_START + 0x22) // Unused Flag
#define FLAG_UNUSED_0x943                           (DAILY_FLAGS_START + 0x23) // Unused Flag
#define FLAG_UNUSED_0x944                           (DAILY_FLAGS_START + 0x24) // Unused Flag
#define FLAG_UNUSED_0x945                           (DAILY_FLAGS_START + 0x25) // Unused Flag
#define FLAG_UNUSED_0x946                           (DAILY_FLAGS_START + 0x26) // Unused Flag
#define FLAG_UNUSED_0x947                           (DAILY_FLAGS_START + 0x27) // Unused Flag
#define FLAG_UNUSED_0x948                           (DAILY_FLAGS_START + 0x28) // Unused Flag
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29) // Unused Flag
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A) // Unused Flag
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B) // Unused Flag
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C) // Unused Flag
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D) // Unused Flag
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F) // Unused Flag
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30) // Unused Flag
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31) // Unused Flag
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32) // Unused Flag
#define FLAG_UNUSED_0x953                           (DAILY_FLAGS_START + 0x33) // Unused Flag
#define FLAG_UNUSED_0x954                           (DAILY_FLAGS_START + 0x34) // Unused Flag
#define FLAG_UNUSED_0x955                           (DAILY_FLAGS_START + 0x35) // Unused Flag
#define FLAG_UNUSED_0x956                           (DAILY_FLAGS_START + 0x36) // Unused Flag
#define FLAG_UNUSED_0x957                           (DAILY_FLAGS_START + 0x37) // Unused Flag
#define FLAG_UNUSED_0x958                           (DAILY_FLAGS_START + 0x38) // Unused Flag
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // Unused Flag
#define FLAG_UNUSED_0x95A                           (DAILY_FLAGS_START + 0x3A) // Unused Flag
#define FLAG_UNUSED_0x95B                           (DAILY_FLAGS_START + 0x3B) // Unused Flag
#define FLAG_UNUSED_0x95C                           (DAILY_FLAGS_START + 0x3C) // Unused Flag
#define FLAG_UNUSED_0x95D                           (DAILY_FLAGS_START + 0x3D) // Unused Flag
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // Unused Flag
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Unused Flag
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))
#define NUM_DAILY_FLAGS                             (DAILY_FLAGS_END - DAILY_FLAGS_START + 1)

#define FLAGS_COUNT (DAILY_FLAGS_END + 1)

// Special Flags (Stored in EWRAM (sSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                     0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3) // Unused Flag
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)
#define NUM_SPECIAL_FLAGS                       (SPECIAL_FLAGS_END - SPECIAL_FLAGS_START + 1)

// Temp flag aliases
#define FLAG_TEMP_SKIP_GABBY_INTERVIEW          FLAG_TEMP_1
#define FLAG_TEMP_REGICE_PUZZLE_STARTED         FLAG_TEMP_2
#define FLAG_TEMP_REGICE_PUZZLE_FAILED          FLAG_TEMP_3
#define FLAG_TEMP_HIDE_MIRAGE_ISLAND_BERRY_TREE FLAG_TEMP_11

#endif // GUARD_CONSTANTS_FLAGS_H
