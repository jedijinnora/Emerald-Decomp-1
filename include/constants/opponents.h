#ifndef GUARD_CONSTANTS_OPPONENTS_H
#define GUARD_CONSTANTS_OPPONENTS_H

#include "constants/battle_partner.h"

#define TRAINER_NONE                        0

//Elite Four and Champion
#define LEAGUE_TRAINERS_START               1
#define TRAINER_BRANDON_1                   (LEAGUE_TRAINERS_START + 0)
#define TRAINER_LUCY_1                      (LEAGUE_TRAINERS_START + 1)
#define TRAINER_GLACIA_1                    (LEAGUE_TRAINERS_START + 2)
#define TRAINER_DRAKE_1                     (LEAGUE_TRAINERS_START + 3)

#define TRAINER_ANABEL_1                    (LEAGUE_TRAINERS_START + 4)
#define TRAINER_ANABEL_2                    (LEAGUE_TRAINERS_START + 5)
#define TRAINER_ANABEL_3                    (LEAGUE_TRAINERS_START + 6)
#define TRAINER_ANABEL_4                    (LEAGUE_TRAINERS_START + 7)
#define LEAGUE_TRAINERS_END                 TRAINER_ANABEL_4


//Gym Leaders
#define GYM_LEADERS_START                   (LEAGUE_TRAINERS_END + 1)

//Rustboro
#define TRAINER_NOLAND_1                    (GYM_LEADERS_START + 0)
#define TRAINER_NOLAND_2                    (GYM_LEADERS_START + 1)
#define TRAINER_NOLAND_3                    (GYM_LEADERS_START + 2)

//Dewford
#define TRAINER_SIDNEY_1                    (GYM_LEADERS_START + 3)
#define TRAINER_SIDNEY_2                    (GYM_LEADERS_START + 4)
#define TRAINER_SIDNEY_3                    (GYM_LEADERS_START + 5)

//Mauville
#define TRAINER_WATTSON_1                   (GYM_LEADERS_START + 6)
#define TRAINER_WATTSON_2                   (GYM_LEADERS_START + 7)
#define TRAINER_WATTSON_3                   (GYM_LEADERS_START + 8)

//Lavaridge
#define TRAINER_MOORE_1                     (GYM_LEADERS_START + 9)
#define TRAINER_MOORE_2                     (GYM_LEADERS_START + 10)
#define TRAINER_MOORE_3                     (GYM_LEADERS_START + 11)

//Petalburg
#define TRAINER_GRETA_1                     (GYM_LEADERS_START + 12)
#define TRAINER_GRETA_2                     (GYM_LEADERS_START + 13)
#define TRAINER_GRETA_3                     (GYM_LEADERS_START + 14)

//Fortree
#define TRAINER_SPENSER_1                   (GYM_LEADERS_START + 15)
#define TRAINER_SPENSER_2                   (GYM_LEADERS_START + 16)
#define TRAINER_SPENSER_3                   (GYM_LEADERS_START + 17)

//Mossdeep
#define TRAINER_SABITHA_1                   (GYM_LEADERS_START + 18)
#define TRAINER_SABITHA_2                   (GYM_LEADERS_START + 19)
#define TRAINER_SABITHA_3                   (GYM_LEADERS_START + 20)

//Sootopolis
#define TRAINER_JUAN_1                      (GYM_LEADERS_START + 21)
#define TRAINER_JUAN_2                      (GYM_LEADERS_START + 22)
#define TRAINER_JUAN_3                      (GYM_LEADERS_START + 23)
#define GYM_LEADERS_END                     TRAINER_JUAN_3

//Gym Trainers
#define GYM_TRAINERS_START                  (GYM_LEADERS_END + 1)
//Rustboro
#define TRAINER_TOMMY                       (GYM_TRAINERS_START + 0) // School Kid-M Tommy, may double with Marc
#define TRAINER_MARC                        (GYM_TRAINERS_START + 1) // Hiker Marc, may double with Tommy
#define TRAINER_JOSH                        (GYM_TRAINERS_START + 2) // Youngster Josh

//Dewford
#define TRAINER_LAURA                       (GYM_TRAINERS_START + 3) // Battle Girl Laura
#define TRAINER_LILITH                      (GYM_TRAINERS_START + 4) // Lass Lilith, may double with Brenden
#define TRAINER_BRENDEN                     (GYM_TRAINERS_START + 5) // Sailor Brenden, may double with Lilith
#define TRAINER_CRISTIAN                    (GYM_TRAINERS_START + 6) // Psychic-M Cristian
#define TRAINER_TAKAO                       (GYM_TRAINERS_START + 7) // Black Belt Takao
#define TRAINER_JOCELYN                     (GYM_TRAINERS_START + 8) // Lady Jocelyn

//Mauville
#define TRAINER_SHAWN                       (GYM_TRAINERS_START + 9) // Guitarist Shawn
#define TRAINER_VIVIAN                      (GYM_TRAINERS_START + 10) // Battle Girl Vivian, may double with Kirk
#define TRAINER_KIRK                        (GYM_TRAINERS_START + 11) // Guitarist Kirk, may double with Vivian
#define TRAINER_BEN                         (GYM_TRAINERS_START + 12) // Youngster Ben
#define TRAINER_ANGELO                      (GYM_TRAINERS_START + 13) // Bug Maniac Angelo

//Lavaridge
#define TRAINER_JEFF                        (GYM_TRAINERS_START + 14) // B1F, Kindler Jeff
#define TRAINER_COLE                        (GYM_TRAINERS_START + 15) // 1F, Kindler Cole, may double with Gerald
#define TRAINER_GERALD                      (GYM_TRAINERS_START + 16) // 1F, Cooltrainer-M Gerald, may double with Cole
#define TRAINER_AXLE                        (GYM_TRAINERS_START + 17) // 1F, Kindler Axle
#define TRAINER_DANIELLE                    (GYM_TRAINERS_START + 18) // 1F, Battle Girl Danielle
#define TRAINER_KEEGAN                      (GYM_TRAINERS_START + 19) // B1F, Kindler Keegan
#define TRAINER_JACE                        (GYM_TRAINERS_START + 20) // B1F, Kindler Jace, may double with Eli
#define TRAINER_ELI                         (GYM_TRAINERS_START + 21) // B1F, Hiker Eli, may double with Jace

//Petalburg
#define TRAINER_MARY                        (GYM_TRAINERS_START + 22) // Technician Room, Cooltrainer-F Mary
#define TRAINER_RANDALL                     (GYM_TRAINERS_START + 23) // Speed Room, Cooltrainer-M Randall
#define TRAINER_PARKER                      (GYM_TRAINERS_START + 24) // Trickery Room, Cooltrainer-M Parker
#define TRAINER_ALEXIA                      (GYM_TRAINERS_START + 25) // Defense Room, Cooltrainer-F Alexia
#define TRAINER_GEORGE                      (GYM_TRAINERS_START + 26) // Recovery Room, Cooltrainer-M George
#define TRAINER_JODY                        (GYM_TRAINERS_START + 27) // Guts Room, Cooltrainer-F Jody
#define TRAINER_BERKE                       (GYM_TRAINERS_START + 28) // Power Room, Cooltrainer-M Berke

//Fortree
#define TRAINER_HUMBERTO                    (GYM_TRAINERS_START + 29) // Ninja Boy Humberto
#define TRAINER_JARED                       (GYM_TRAINERS_START + 30) // Camper Jared, may double with Ashley
#define TRAINER_ASHLEY                      (GYM_TRAINERS_START + 31) // Picnicker Ashley, may double with Ashley
#define TRAINER_FLINT                       (GYM_TRAINERS_START + 32) // Camper Flint, may double with Edwina
#define TRAINER_EDWINA                      (GYM_TRAINERS_START + 33) // Aroma Lady Edwina, may double with Flint
#define TRAINER_CECILIA                     (GYM_TRAINERS_START + 34) // Aroma Lady Cecilia

//Mossdeep
#define TRAINER_PRESTON                     (GYM_TRAINERS_START + 35) // Psychic-M Preston (yellow tiles), may double with Maura
#define TRAINER_MAURA                       (GYM_TRAINERS_START + 36) // Psychic-F Maura (yellow tiles), may double with Preston
#define TRAINER_BLAKE                       (GYM_TRAINERS_START + 37) // Psychic-M Blake (yellow tiles), may double with Samantha
#define TRAINER_SAMANTHA                    (GYM_TRAINERS_START + 38) // Psychic-F Samantha, may double with Blake
#define TRAINER_NATE                        (GYM_TRAINERS_START + 39) // Gentleman Nate (blue tiles), may double with Virgil
#define TRAINER_VIRGIL                      (GYM_TRAINERS_START + 40) // Psychic-M Virgil (blue tiles), may double with Nate
#define TRAINER_SYLVIA                      (GYM_TRAINERS_START + 41) // Hex Maniac Sylvia (orange tiles), may double with Hannah
#define TRAINER_HANNAH                      (GYM_TRAINERS_START + 42) // Psychic-F Hannah, may double with Sylvia
#define TRAINER_CLIFFORD                    (GYM_TRAINERS_START + 43) // Gentleman Clifford (pink tiles), may double with Kathleen or Macey
#define TRAINER_KATHLEEN                    (GYM_TRAINERS_START + 44) // Hex Maniac Kathleen (pink tiles), may double with Clifford or Nikolai
#define TRAINER_NIKOLAI                     (GYM_TRAINERS_START + 45) // Psychic-M Nikolai (pink tiles), may double with Nikolai
#define TRAINER_MACEY                       (GYM_TRAINERS_START + 46) // Psychic-F Macey, may double with Clifford

//Sootopolis                                                          // Listed left-to-right within each puzzle
#define TRAINER_ANDREA                      (GYM_TRAINERS_START + 47) // Puzzle 1, Lass Andrea
#define TRAINER_CONNIE                      (GYM_TRAINERS_START + 48) // Puzzle 1, Beauty Connie
#define TRAINER_DAPHNE                      (GYM_TRAINERS_START + 49) // Puzzle 2, Lady Daphne
#define TRAINER_ANNIKA                      (GYM_TRAINERS_START + 50) // Puzzle 2, Pokefan-F Annika
#define TRAINER_CRISSY                      (GYM_TRAINERS_START + 51) // Puzzle 3, Lass Crissy
#define TRAINER_TIFFANY                     (GYM_TRAINERS_START + 52) // Puzzle 3, Beauty Tiffany
#define TRAINER_BETHANY                     (GYM_TRAINERS_START + 53) // Puzzle 3, Pokefan F Bethany
#define TRAINER_OLIVIA                      (GYM_TRAINERS_START + 54) // Puzzle 3, Beauty Olivia
#define TRAINER_BRIDGET                     (GYM_TRAINERS_START + 55) // Puzzle 3, Beauty Bridget
#define TRAINER_BRIANNA                     (GYM_TRAINERS_START + 56) // Puzzle 3, Lady Brianna
#define GYM_TRAINERS_END                    TRAINER_BRIANNA

//Type Tutors
#define TYPE_TUTORS_START                   (GYM_TRAINERS_END + 1)
#define TRAINER_NORMAN_INITIAL              (TYPE_TUTORS_START + 0)
#define TRAINER_NORMAN_INVERSE              (TYPE_TUTORS_START + 1)
#define TRAINER_NORMAN_CHALLENGE            (TYPE_TUTORS_START + 2)
#define TRAINER_BRAWLY_INITIAL              (TYPE_TUTORS_START + 3)
#define TRAINER_BRAWLY_INVERSE              (TYPE_TUTORS_START + 4)
#define TRAINER_BRAWLY_CHALLENGE            (TYPE_TUTORS_START + 5)
#define TRAINER_WINONA_INITIAL              (TYPE_TUTORS_START + 6)
#define TRAINER_WINONA_INVERSE              (TYPE_TUTORS_START + 7)
#define TRAINER_WINONA_CHALLENGE            (TYPE_TUTORS_START + 8)
#define TRAINER_CLAUDIUS_INITIAL            (TYPE_TUTORS_START + 9)
#define TRAINER_CLAUDIUS_INVERSE            (TYPE_TUTORS_START + 10)
#define TRAINER_CLAUDIUS_CHALLENGE          (TYPE_TUTORS_START + 11)
#define TRAINER_ANTON_INITIAL               (TYPE_TUTORS_START + 12)
#define TRAINER_ANTON_INVERSE               (TYPE_TUTORS_START + 13)
#define TRAINER_ANTON_CHALLENGE             (TYPE_TUTORS_START + 14)
#define TRAINER_ROXANNE_INITIAL             (TYPE_TUTORS_START + 15)
#define TRAINER_ROXANNE_INVERSE             (TYPE_TUTORS_START + 16)
#define TRAINER_ROXANNE_CHALLENGE           (TYPE_TUTORS_START + 17)
#define TRAINER_HEBERT_INITIAL              (TYPE_TUTORS_START + 18)
#define TRAINER_HEBERT_INVERSE              (TYPE_TUTORS_START + 19)
#define TRAINER_HEBERT_CHALLENGE            (TYPE_TUTORS_START + 20)
#define TRAINER_PHOEBE_INITIAL              (TYPE_TUTORS_START + 21)
#define TRAINER_PHOEBE_INVERSE              (TYPE_TUTORS_START + 22)
#define TRAINER_PHOEBE_CHALLENGE            (TYPE_TUTORS_START + 23)
#define TRAINER_STEVEN_INITIAL              (TYPE_TUTORS_START + 24)
#define TRAINER_STEVEN_INVERSE              (TYPE_TUTORS_START + 25)
#define TRAINER_STEVEN_CHALLENGE            (TYPE_TUTORS_START + 26)
#define TRAINER_FLANNERY_INITIAL            (TYPE_TUTORS_START + 27)
#define TRAINER_FLANNERY_INVERSE            (TYPE_TUTORS_START + 28)
#define TRAINER_FLANNERY_CHALLENGE          (TYPE_TUTORS_START + 29)
#define TRAINER_WALLACE_INITIAL             (TYPE_TUTORS_START + 30)
#define TRAINER_WALLACE_INVERSE             (TYPE_TUTORS_START + 31)
#define TRAINER_WALLACE_CHALLENGE           (TYPE_TUTORS_START + 32)
#define TRAINER_QUINN_INITIAL               (TYPE_TUTORS_START + 33)
#define TRAINER_QUINN_INVERSE               (TYPE_TUTORS_START + 34)
#define TRAINER_QUINN_CHALLENGE             (TYPE_TUTORS_START + 35)
#define TRAINER_SCOTTY_INITIAL              (TYPE_TUTORS_START + 36)
#define TRAINER_SCOTTY_INVERSE              (TYPE_TUTORS_START + 37)
#define TRAINER_SCOTTY_CHALLENGE            (TYPE_TUTORS_START + 38)
#define TRAINER_TATE_AND_LIZA_INITIAL       (TYPE_TUTORS_START + 39)
#define TRAINER_TATE_AND_LIZA_INVERSE       (TYPE_TUTORS_START + 40)
#define TRAINER_TATE_AND_LIZA_CHALLENGE     (TYPE_TUTORS_START + 41)
#define TRAINER_ELLIE_INITIAL               (TYPE_TUTORS_START + 42)
#define TRAINER_ELLIE_INVERSE               (TYPE_TUTORS_START + 43)
#define TRAINER_ELLIE_CHALLENGE             (TYPE_TUTORS_START + 44)
#define TRAINER_ASTER_INITIAL               (TYPE_TUTORS_START + 45)
#define TRAINER_ASTER_INVERSE               (TYPE_TUTORS_START + 46)
#define TRAINER_ASTER_CHALLENGE             (TYPE_TUTORS_START + 47)
#define TRAINER_MEGAERA_INITIAL             (TYPE_TUTORS_START + 48)
#define TRAINER_MEGAERA_INVERSE             (TYPE_TUTORS_START + 49)
#define TRAINER_MEGAERA_CHALLENGE           (TYPE_TUTORS_START + 50)
#define TRAINER_BELLATRIX_INITIAL           (TYPE_TUTORS_START + 51)
#define TRAINER_BELLATRIX_INVERSE           (TYPE_TUTORS_START + 52)
#define TRAINER_BELLATRIX_CHALLENGE         (TYPE_TUTORS_START + 53)
#define TYPE_TUTORS_END                     TRAINER_BELLATRIX_CHALLENGE

//Other Tutors
#define OTHER_TUTORS_START                  (TYPE_TUTORS_END + 1)
#define TRAINER_WEATHER_TUTOR_RAIN          (OTHER_TUTORS_START + 0)
#define TRAINER_WEATHER_TUTOR_SUN           (OTHER_TUTORS_START + 1)
#define TRAINER_WEATHER_TUTOR_HAIL          (OTHER_TUTORS_START + 2)
#define TRAINER_WEATHER_TUTOR_SAND          (OTHER_TUTORS_START + 3)
#define TRAINER_TERRAIN_TUTOR_ELECTRIC      (OTHER_TUTORS_START + 4)
#define TRAINER_TERRAIN_TUTOR_GRASSY        (OTHER_TUTORS_START + 5)
#define TRAINER_TERRAIN_TUTOR_MISTY         (OTHER_TUTORS_START + 6)
#define TRAINER_TERRAIN_TUTOR_PSYCHIC       (OTHER_TUTORS_START + 7)
#define TRAINER_CRITICAL_TUTOR              (OTHER_TUTORS_START + 8)
#define TRAINER_BITE_TUTOR                  (OTHER_TUTORS_START + 9)
#define TRAINER_PUNCH_TUTOR                 (OTHER_TUTORS_START + 10)
#define TRAINER_MULTI_HIT_TUTOR             (OTHER_TUTORS_START + 11)
#define TRAINER_KOBAYASHI                   (OTHER_TUTORS_START + 12)
#define OTHER_TUTORS_END                    TRAINER_KOBAYASHI

//Winstrates
#define WINSTRATE_TRAINERS_START            (OTHER_TUTORS_END + 1)
#define TRAINER_VICTOR                      (WINSTRATE_TRAINERS_START + 0)
#define TRAINER_VICTORIA                    (WINSTRATE_TRAINERS_START + 1)
#define TRAINER_VIVI                        (WINSTRATE_TRAINERS_START + 2)
#define TRAINER_VITO                        (WINSTRATE_TRAINERS_START + 3)
#define TRAINER_VICKY                       (WINSTRATE_TRAINERS_START + 4)
#define TRAINER_VIVI_CHALLENGE              (WINSTRATE_TRAINERS_START + 5)
#define TRAINER_VITO_CHALLENGE              (WINSTRATE_TRAINERS_START + 6)
#define WINSTRATE_TRAINERS_END              TRAINER_VITO_CHALLENGE

//Gabby and Ty
#define GABBY_AND_TY_START                  (WINSTRATE_TRAINERS_END + 1)
#define TRAINER_GABBY_AND_TY_111            (GABBY_AND_TY_START + 0)
#define TRAINER_GABBY_AND_TY_118            (GABBY_AND_TY_START + 1)
#define TRAINER_GABBY_AND_TY_120            (GABBY_AND_TY_START + 2)
#define GABBY_AND_TY_END                    TRAINER_GABBY_AND_TY_120

//Beach Battle
#define BEACH_BATTLE_TRAINERS_START         (GABBY_AND_TY_END + 1)
#define TRAINER_BB_MISCHA                   (BEACH_BATTLE_TRAINERS_START + 0)
#define TRAINER_BB_MIRABELLE                (BEACH_BATTLE_TRAINERS_START + 1)
#define TRAINER_BB_ANTONIO                  (BEACH_BATTLE_TRAINERS_START + 2)
#define TRAINER_BB_LUISA                    (BEACH_BATTLE_TRAINERS_START + 3)
#define TRAINER_BB_JULIETA                  (BEACH_BATTLE_TRAINERS_START + 4)
#define TRAINER_BB_CAMILO                   (BEACH_BATTLE_TRAINERS_START + 5)
#define TRAINER_BB_PEDRO                    (BEACH_BATTLE_TRAINERS_START + 6)
#define TRAINER_BB_ALMA                     (BEACH_BATTLE_TRAINERS_START + 7)
#define TRAINER_BB_BRAWLY                   (BEACH_BATTLE_TRAINERS_START + 8)
#define TRAINER_BB_PHOEBE                   (BEACH_BATTLE_TRAINERS_START + 9)
#define BEACH_BATTLE_TRAINERS_END           TRAINER_BB_PHOEBE

//Blocking Rivals
#define BLOCKING_RIVAL_TRAINERS_START       (BEACH_BATTLE_TRAINERS_END + 1)
#define TRAINER_RIVAL_LEAF                  (BLOCKING_RIVAL_TRAINERS_START + 0)
#define TRAINER_RIVAL_KRIS                  (BLOCKING_RIVAL_TRAINERS_START + 1)
#define TRAINER_RIVAL_DAWN                  (BLOCKING_RIVAL_TRAINERS_START + 2)
#define TRAINER_RIVAL_REI                   (BLOCKING_RIVAL_TRAINERS_START + 3)
#define TRAINER_RIVAL_HILBERT               (BLOCKING_RIVAL_TRAINERS_START + 4)
#define TRAINER_RIVAL_CALEM                 (BLOCKING_RIVAL_TRAINERS_START + 5)
#define BLOCKING_RIVAL_TRAINERS_END         TRAINER_RIVAL_CALEM

//Victory Road Rivals
#define VICTORY_ROAD_RIVAL_TRAINERS_START   (BLOCKING_RIVAL_TRAINERS_END + 1)
#define TRAINER_RIVAL_JINNORA               (VICTORY_ROAD_RIVAL_TRAINERS_START + 0)
#define TRAINER_RIVAL_1                     (VICTORY_ROAD_RIVAL_TRAINERS_START + 1)
#define TRAINER_RIVAL_2                     (VICTORY_ROAD_RIVAL_TRAINERS_START + 2)
#define TRAINER_RIVAL_3                     (VICTORY_ROAD_RIVAL_TRAINERS_START + 3)
#define TRAINER_RIVAL_4                     (VICTORY_ROAD_RIVAL_TRAINERS_START + 4)
#define TRAINER_RIVAL_5                     (VICTORY_ROAD_RIVAL_TRAINERS_START + 5)
#define TRAINER_RIVAL_6                     (VICTORY_ROAD_RIVAL_TRAINERS_START + 6)
#define TRAINER_RIVAL_7                     (VICTORY_ROAD_RIVAL_TRAINERS_START + 7)
#define TRAINER_RIVAL_8                     (VICTORY_ROAD_RIVAL_TRAINERS_START + 8)
#define TRAINER_RIVAL_9                     (VICTORY_ROAD_RIVAL_TRAINERS_START + 9)
#define VICTORY_ROAD_RIVAL_TRAINERS_END     TRAINER_RIVAL_9

//TPP Trainers
#define TPP_TRAINERS_START                  (VICTORY_ROAD_RIVAL_TRAINERS_END + 1)
#define TRAINER_TPP_RED                     (TPP_TRAINERS_START + 0)
#define TRAINER_TPP_AJ                      (TPP_TRAINERS_START + 1)
#define TRAINER_TPP_DOM                     (TPP_TRAINERS_START + 2)
#define TPP_TRAINERS_END                    TRAINER_TPP_DOM


//Regular Trainers
#define REGULAR_TRAINERS_START              (TPP_TRAINERS_END + 1)

//Route 101
#define ROUTE_101_TRAINERS_START            (REGULAR_TRAINERS_START + 0)
#define TRAINER_BREYDEN                     (ROUTE_101_TRAINERS_START + 0) // Youngster Breyden
#define TRAINER_VANCE                       (ROUTE_101_TRAINERS_START + 1) // Bug Catcher Vance
#define TRAINER_STEPHANIE                   (ROUTE_101_TRAINERS_START + 2) // Running Triathlete-F Stephanie
#define TRAINER_ABRAHAM                     (ROUTE_101_TRAINERS_START + 3) // Ruin Maniac Abraham
#define ROUTE_101_TRAINERS_END              TRAINER_ABRAHAM

//Route 102
#define ROUTE_102_TRAINERS_START            (ROUTE_101_TRAINERS_END + 1)
#define TRAINER_CALVIN                      (ROUTE_102_TRAINERS_START + 0) // Youngster Calvin
#define TRAINER_RICK                        (ROUTE_102_TRAINERS_START + 1) // Bug Catcher Rick
#define TRAINER_ALLEN                       (ROUTE_102_TRAINERS_START + 2) // Bird Keeper Allen
#define TRAINER_TIANA                       (ROUTE_102_TRAINERS_START + 3) // Lass Tiana
#define TRAINER_EVA                         (ROUTE_102_TRAINERS_START + 4) // Ranger-F Eva
#define TRAINER_GLORIA                      (ROUTE_102_TRAINERS_START + 5) // Beauty Gloria
#define ROUTE_102_TRAINERS_END              TRAINER_GLORIA

//Route 103
#define ROUTE_103_TRAINERS_START            (ROUTE_102_TRAINERS_END + 1)
#define TRAINER_DAISY                       (ROUTE_103_TRAINERS_START + 0) // Aroma Lady Daisy
#define TRAINER_AMY_AND_LIV                 (ROUTE_103_TRAINERS_START + 1) // Twins Amy & Liv, always double
#define TRAINER_ANDREW                      (ROUTE_103_TRAINERS_START + 2) // Fisherman Andrew
#define TRAINER_MIGUEL                      (ROUTE_103_TRAINERS_START + 3) // Pokefan-M Miguel
#define TRAINER_RHETT                       (ROUTE_103_TRAINERS_START + 4) // Black Belt Rhett, may double with Marcos
#define TRAINER_MARCOS                      (ROUTE_103_TRAINERS_START + 5) // Guitarist Marcos, may double with Rhett
#define TRAINER_ISABELLE                    (ROUTE_103_TRAINERS_START + 6) // Swimmer-F Isabelle, may double with Pete
#define TRAINER_PETE                        (ROUTE_103_TRAINERS_START + 7) // Swimmer-M Pete, may double with Isabelle
#define ROUTE_103_TRAINERS_END              TRAINER_PETE

//Route 104
#define ROUTE_104_TRAINERS_START            (ROUTE_103_TRAINERS_END + 1)
#define TRAINER_HALEY                       (ROUTE_104_TRAINERS_START + 0) // Lass Haley
#define TRAINER_IVAN                        (ROUTE_104_TRAINERS_START + 1) // Fisherman Ivan (by the pond)
#define TRAINER_GINA_AND_MIA                (ROUTE_104_TRAINERS_START + 2) // Twins Gina & Mia, always double
#define TRAINER_WINSTON                     (ROUTE_104_TRAINERS_START + 3) // Rich Boy Winston
#define TRAINER_CINDY                       (ROUTE_104_TRAINERS_START + 4) // Lady Cindy
#define TRAINER_BILLY                       (ROUTE_104_TRAINERS_START + 5) // Youngster Billy
#define TRAINER_DARIAN                      (ROUTE_104_TRAINERS_START + 6) // Fisherman Darian (on the beach)
#define ROUTE_104_TRAINERS_END              TRAINER_DARIAN

//Route 105
#define ROUTE_105_TRAINERS_START            (ROUTE_104_TRAINERS_END + 1)
#define TRAINER_LUIS                        (ROUTE_105_TRAINERS_START + 0) // Swimmer-M Luis (south end of the route)
#define TRAINER_DOMINIK                     (ROUTE_105_TRAINERS_START + 1) // Swimmer-M Dominik (middle of the route)
#define TRAINER_BEVERLY                     (ROUTE_105_TRAINERS_START + 2) // Swimmer-F Beverly (south of Island Cave)
#define TRAINER_IMANI                       (ROUTE_105_TRAINERS_START + 3) // Swimmer-F Imani (north part of the route)
#define TRAINER_FOSTER                      (ROUTE_105_TRAINERS_START + 4) // Ruin Maniac Foster (on the big island)
#define TRAINER_JOSUE                       (ROUTE_105_TRAINERS_START + 5) // Bird Keeper Josue, may double with Andres
#define TRAINER_ANDRES                      (ROUTE_105_TRAINERS_START + 6) // Ruin Maniac Andres, may double with Josue
#define ROUTE_105_TRAINERS_END              TRAINER_ANDRES

//Route 106
#define ROUTE_106_TRAINERS_START            (ROUTE_105_TRAINERS_END + 1)
#define TRAINER_DOUGLAS                     (ROUTE_106_TRAINERS_START + 0) // Swimmer-M Douglas
#define TRAINER_KYLA                        (ROUTE_106_TRAINERS_START + 1) // Swimmer-F Kyla
#define TRAINER_ELLIOT                      (ROUTE_106_TRAINERS_START + 2) // Fisherman Ned (spinner)
#define TRAINER_NED                         (ROUTE_106_TRAINERS_START + 3) // Fisherman Elliot (by Granite Cave)
#define TRAINER_OWEN                        (ROUTE_106_TRAINERS_START + 4) // Ninja Boy Owen
#define TRAINER_MICHELLE                    (ROUTE_106_TRAINERS_START + 5) // Beauty Michelle
#define ROUTE_106_TRAINERS_END              TRAINER_MICHELLE

//Route 107
#define ROUTE_107_TRAINERS_START            (ROUTE_106_TRAINERS_END + 1)
#define TRAINER_DARRIN                      (ROUTE_107_TRAINERS_START + 0) // Swimmer-M Darrin (center)
#define TRAINER_TONY                        (ROUTE_107_TRAINERS_START + 1) // Swimmer-M Tony (west side)
#define TRAINER_DENISE                      (ROUTE_107_TRAINERS_START + 2) // Swimmer-F Denise (east side)
#define TRAINER_BETH                        (ROUTE_107_TRAINERS_START + 3) // Swimmer-F Beth, may double with Camron
#define TRAINER_LISA_AND_RAY                (ROUTE_107_TRAINERS_START + 4) // Sis and Bro Lisa & Ray, always double
#define TRAINER_CAMRON                      (ROUTE_107_TRAINERS_START + 5) // Swimming Triathlete-M Camron
#define TRAINER_KENNETH                     (ROUTE_107_TRAINERS_START + 6) // Fisherman Kenneth, may double with Beth
#define ROUTE_107_TRAINERS_END              TRAINER_KENNETH

//Route 108
#define ROUTE_108_TRAINERS_START            (ROUTE_107_TRAINERS_END + 1)
#define TRAINER_JEROME                      (ROUTE_108_TRAINERS_START + 0) // Swimmer-M Jerome (moves in a square)
#define TRAINER_TARA                        (ROUTE_108_TRAINERS_START + 1) // Swimmer-F Tara (by Abandoned Ship)
#define TRAINER_MATTHEW                     (ROUTE_108_TRAINERS_START + 2) // Swimmer-M Matthew (spinner, east side)
#define TRAINER_MISSY                       (ROUTE_108_TRAINERS_START + 3) // Swimmer-F Missy (middle of the route)
#define TRAINER_CAROLINA                    (ROUTE_108_TRAINERS_START + 4) // Cooltrainer-F Carolina, may double with Cory
#define TRAINER_CORY                        (ROUTE_108_TRAINERS_START + 5) // Sailor Cory, may double with Carolina
#define TRAINER_FELIX                       (ROUTE_108_TRAINERS_START + 6) // Running Triathlete-M Felix
#define ROUTE_108_TRAINERS_END              TRAINER_FELIX

//Route 109
#define ROUTE_109_TRAINERS_START            (ROUTE_108_TRAINERS_END + 1)
#define TRAINER_DAVID                       (ROUTE_109_TRAINERS_START + 0) // Swimmer-M David (moves in a square)
#define TRAINER_ALICE                       (ROUTE_109_TRAINERS_START + 1) // Swimmer-F Alice (moves vertically)
#define TRAINER_HUEY                        (ROUTE_109_TRAINERS_START + 2) // Sailor Huey (on the west island)
#define TRAINER_EDMOND                      (ROUTE_109_TRAINERS_START + 3) // Sailor Edmond, may double with Elijah
#define TRAINER_RICKY                       (ROUTE_109_TRAINERS_START + 4) // Tuber-M Ricky
#define TRAINER_LOLA                        (ROUTE_109_TRAINERS_START + 5) // Tuber-F Lola
#define TRAINER_GWEN                        (ROUTE_109_TRAINERS_START + 6) // Swimmer-F Gwen (southwest)
#define TRAINER_AUSTINA                     (ROUTE_109_TRAINERS_START + 7) // Swimmer-F Austina (spinner)
#define TRAINER_CARTER                      (ROUTE_109_TRAINERS_START + 8) // Fisherman Carter
#define TRAINER_MEL_AND_PAUL                (ROUTE_109_TRAINERS_START + 9) // Young Couple Mel & Paul, always double
#define TRAINER_HAILEY                      (ROUTE_109_TRAINERS_START + 10) // Swimming Triathlete-F Hailey (on the east dive spots)
#define TRAINER_CHANDLER                    (ROUTE_109_TRAINERS_START + 11) // Swimmer-M Chandler (spinner in the rock maze)
#define TRAINER_ELIJAH                      (ROUTE_109_TRAINERS_START + 12) // Bird Keeper Elijah, may double with Edmond
#define ROUTE_109_TRAINERS_END              TRAINER_ELIJAH

//Route 110
#define ROUTE_110_TRAINERS_START            (ROUTE_109_TRAINERS_END + 1)
#define TRAINER_JASMINE                     (ROUTE_110_TRAINERS_START + 0) // Biking Triathlete-F Jasmine (south)
#define TRAINER_ANTHONY                     (ROUTE_110_TRAINERS_START + 1) // Biking Triathlete-M Anthony (moves horizontally)
#define TRAINER_ABIGAIL                     (ROUTE_110_TRAINERS_START + 2) // Biking Triathlete-F Abigail (furthest north)
#define TRAINER_BENJAMIN                    (ROUTE_110_TRAINERS_START + 3) // Biking Triathlete-M Anthony (moves in a square)
#define TRAINER_EDWARD                      (ROUTE_110_TRAINERS_START + 4) // Psychic-M Edward, may double with Alyssa
#define TRAINER_JACLYN                      (ROUTE_110_TRAINERS_START + 5) // Psychic-F Jaclyn (cycling road trees)
#define TRAINER_EDWIN                       (ROUTE_110_TRAINERS_START + 6) // Collector Edwin, may double with Joseph
#define TRAINER_DALE                        (ROUTE_110_TRAINERS_START + 7) // Fisherman Dale
#define TRAINER_JACOB                       (ROUTE_110_TRAINERS_START + 8) // Biking Triathlete-M Jacob (furthest south)
#define TRAINER_TIMMY                       (ROUTE_110_TRAINERS_START + 9) // Youngster Timmy
#define TRAINER_ISABEL                      (ROUTE_110_TRAINERS_START + 10) // Pokefan-F Isabel, may double with Kaleb
#define TRAINER_KALEB                       (ROUTE_110_TRAINERS_START + 11) // Pokefan-M Kaleb, may double with Isabel
#define TRAINER_ALYSSA                      (ROUTE_110_TRAINERS_START + 12) // Biking Triathlete-F Alyssa, may double with Edward
#define TRAINER_JOSEPH                      (ROUTE_110_TRAINERS_START + 13) // Guitarist Joseph, may double with Edwin
#define ROUTE_110_TRAINERS_END              TRAINER_JOSEPH

//Route 111 (Gabby & Ty are in their own section)
#define ROUTE_111_TRAINERS_START            (ROUTE_110_TRAINERS_END + 1)
#define TRAINER_HEIDI                       (ROUTE_111_TRAINERS_START + 0) // Picnicker Heidi (north of desert)
#define TRAINER_DREW                        (ROUTE_111_TRAINERS_START + 1) // Camper Drew (north of desert)
#define TRAINER_DUSTY                       (ROUTE_111_TRAINERS_START + 2) // Ruin Maniac Dusty
#define TRAINER_BEAU                        (ROUTE_111_TRAINERS_START + 3) // Camper Beau (south desert entrance)
#define TRAINER_BECKY                       (ROUTE_111_TRAINERS_START + 4) // Picnicker Becky (north desert entrance)
#define TRAINER_IRENE                       (ROUTE_111_TRAINERS_START + 5) // Picnicker Irene (just south of Gabby & Ty)
#define TRAINER_TRAVIS                      (ROUTE_111_TRAINERS_START + 6) // Camper Travis, south of the desert
#define TRAINER_DAISUKE                     (ROUTE_111_TRAINERS_START + 7) // Black Belt Daisuke
#define TRAINER_BROOKE                      (ROUTE_111_TRAINERS_START + 8) // Cooltrainer-F Brooke
#define TRAINER_WILTON                      (ROUTE_111_TRAINERS_START + 9) // Cooltrainer-M Wilton
#define TRAINER_TYRON                       (ROUTE_111_TRAINERS_START + 10) // Camper Tyron, may double with Celina
#define TRAINER_CELINA                      (ROUTE_111_TRAINERS_START + 11) // Aroma Lady Celina, may double with Tyron
#define TRAINER_BIANCA                      (ROUTE_111_TRAINERS_START + 12) // Picnicker Bianca, may double with Hayden
#define TRAINER_HAYDEN                      (ROUTE_111_TRAINERS_START + 13) // Kindler Hayden, may double with Bianca
#define TRAINER_BRYAN                       (ROUTE_111_TRAINERS_START + 14) // Ruin Maniac Bryan, may double with Celia or Branden
#define TRAINER_CELIA                       (ROUTE_111_TRAINERS_START + 15) // Picnicker Celia, may double with Bryan
#define TRAINER_BRANDEN                     (ROUTE_111_TRAINERS_START + 16) // Camper Branden, may double with Bryan
#define ROUTE_111_TRAINERS_END              TRAINER_BRANDEN

//Route 112
#define ROUTE_112_TRAINERS_START            (ROUTE_111_TRAINERS_END + 1)
#define TRAINER_LARRY                       (ROUTE_112_TRAINERS_START + 0) // Camper Larry
#define TRAINER_CAROL                       (ROUTE_112_TRAINERS_START + 1) // Picnicker Carol
#define TRAINER_TRENT                       (ROUTE_112_TRAINERS_START + 2) // Hiker Trent (by entrance to Valley of Steel)
#define ROUTE_112_TRAINERS_END              TRAINER_TRENT

//Route 113
#define ROUTE_113_TRAINERS_START            (ROUTE_112_TRAINERS_END + 1)
#define TRAINER_JAYLEN                      (ROUTE_113_TRAINERS_START + 0) // Youngster Jaylen (east, by Route 111)
#define TRAINER_DILLON                      (ROUTE_113_TRAINERS_START + 1) // Youngster Dillon (west, by Fallarbor)
#define TRAINER_MADELINE                    (ROUTE_113_TRAINERS_START + 2) // Parasol Lady Madeline
#define TRAINER_LAO                         (ROUTE_113_TRAINERS_START + 3) // Ninja Boy Lao (by Glass Workshop)
#define TRAINER_LUNG                        (ROUTE_113_TRAINERS_START + 4) // Ninja Boy Lung (by the Comet Shard)
#define TRAINER_TORI_AND_TIA                (ROUTE_113_TRAINERS_START + 5) // Twins Tori & Tia, always double
#define TRAINER_WYATT                       (ROUTE_113_TRAINERS_START + 6) // Pokemaniac Wyatt, may double with Lawrence (stands on top of hidden Rare Candy!)
#define TRAINER_LAWRENCE                    (ROUTE_113_TRAINERS_START + 7) // Camper Lawrence, may double with Wyatt
#define TRAINER_SOPHIE                      (ROUTE_113_TRAINERS_START + 8) // Picnicker Sophie, may double with Coby
#define TRAINER_COBY                        (ROUTE_113_TRAINERS_START + 9) // Bird Keeper Coby, may double with Sophie
#define TRAINER_IKE                         (ROUTE_113_TRAINERS_START + 10) // Bug Catcher Ike
#define ROUTE_113_TRAINERS_END              TRAINER_IKE

//Route 114
#define ROUTE_114_TRAINERS_START            (ROUTE_113_TRAINERS_END + 1)
#define TRAINER_LENNY                       (ROUTE_114_TRAINERS_START + 0) // Hiker Lenny
#define TRAINER_LUCAS                       (ROUTE_114_TRAINERS_START + 1) // Hiker Lucas, may double with Angelina
#define TRAINER_SHANE                       (ROUTE_114_TRAINERS_START + 2) // Camper Shane, may double with Nolan
#define TRAINER_NANCY                       (ROUTE_114_TRAINERS_START + 3) // Picnicker Nancy, may double with Steve
#define TRAINER_STEVE                       (ROUTE_114_TRAINERS_START + 4) // Pokemaniac Steve, may double with Nancy
#define TRAINER_NOLAN                       (ROUTE_114_TRAINERS_START + 5) // Fisherman Nolan, may double with Shane
#define TRAINER_CLAUDE                      (ROUTE_114_TRAINERS_START + 6) // Fisherman Claude (on the bridge)
#define TRAINER_BERNIE                      (ROUTE_114_TRAINERS_START + 7) // Kindler Bernie
#define TRAINER_TYRA_AND_IVY                (ROUTE_114_TRAINERS_START + 8) // Senior and Junior Tyra & Ivy, always double
#define TRAINER_CHARLOTTE                   (ROUTE_114_TRAINERS_START + 9) // Picnicker Charlotte, may double with Kai
#define TRAINER_ANGELINA                    (ROUTE_114_TRAINERS_START + 10) // Picnicker Angelina, may double with Lucas
#define TRAINER_KAI                         (ROUTE_114_TRAINERS_START + 11) // Fisherman Kai, may double with Charlotte
#define ROUTE_114_TRAINERS_END              TRAINER_KAI

//Route 115
#define ROUTE_115_TRAINERS_START            (ROUTE_114_TRAINERS_END + 1)
#define TRAINER_TIMOTHY                     (ROUTE_115_TRAINERS_START + 0) // Expert-M Timothy, may double with Jaiden
#define TRAINER_NOB                         (ROUTE_115_TRAINERS_START + 1) // Black Belt Nob, may double with Marlene
#define TRAINER_CYNDY                       (ROUTE_115_TRAINERS_START + 2) // Battle Girl Cyndy
#define TRAINER_KOICHI                      (ROUTE_115_TRAINERS_START + 3) // Black Belt Koichi
#define TRAINER_HECTOR                      (ROUTE_115_TRAINERS_START + 4) // Collector Hector
#define TRAINER_KYRA                        (ROUTE_115_TRAINERS_START + 5) // Running Triathlete-F Kyra
#define TRAINER_JAIDEN                      (ROUTE_115_TRAINERS_START + 6) // Ninja Boy Jaiden, may double with Timothy
#define TRAINER_ALIX                        (ROUTE_115_TRAINERS_START + 7) // Psychic-F Alix, may double with Helene
#define TRAINER_HELENE                      (ROUTE_115_TRAINERS_START + 8) // Battle Girl Helene, may double with Alix
#define TRAINER_MARLENE                     (ROUTE_115_TRAINERS_START + 9) // Psychic-F Marlene, may double with Nob
#define ROUTE_115_TRAINERS_END              TRAINER_MARLENE

//Route 116
#define ROUTE_116_TRAINERS_START            (ROUTE_115_TRAINERS_END + 1)
#define TRAINER_JOEY                        (ROUTE_116_TRAINERS_START + 0) // Youngster Joey, may double with Karen
#define TRAINER_JOSE                        (ROUTE_116_TRAINERS_START + 1) // Bug Catcher Jose
#define TRAINER_CLARK                       (ROUTE_116_TRAINERS_START + 2) // Hiker Clark (by Hyper Beam TM)
#define TRAINER_JANICE                      (ROUTE_116_TRAINERS_START + 3) // Lass Janice, may double with Jerry
#define TRAINER_KAREN                       (ROUTE_116_TRAINERS_START + 4) // School Kid-F Karen, may double with Joey
#define TRAINER_JERRY                       (ROUTE_116_TRAINERS_START + 5) // School Kid-M Jerry, may double with Janice
#define TRAINER_SARAH                       (ROUTE_116_TRAINERS_START + 6) // Lady Sarah, may double with Dawson
#define TRAINER_DAWSON                      (ROUTE_116_TRAINERS_START + 7) // Rich Boy Dawson, may double with Sarah
#define TRAINER_JOHNSON                     (ROUTE_116_TRAINERS_START + 8) // Youngster Johnson
#define TRAINER_DEVAN                       (ROUTE_116_TRAINERS_START + 9) // Hiker Devan (spinner in the center of the route)
#define TRAINER_GIORGIO                     (ROUTE_116_TRAINERS_START + 10) // Pokemaniac Giorgio
#define ROUTE_116_TRAINERS_END              TRAINER_GIORGIO

//Route 117
#define ROUTE_117_TRAINERS_START            (ROUTE_116_TRAINERS_END + 1)
#define TRAINER_DYLAN                       (ROUTE_117_TRAINERS_START + 0) // Running Triathlete-M Dylan
#define TRAINER_MARIA                       (ROUTE_117_TRAINERS_START + 1) // Running Triathlete-F Maria
#define TRAINER_LYDIA                       (ROUTE_117_TRAINERS_START + 2) // Breeder-F Lydia
#define TRAINER_ISAAC                       (ROUTE_117_TRAINERS_START + 3) // Breeder-M Isaac
#define TRAINER_DEREK                       (ROUTE_117_TRAINERS_START + 4) // Bug Maniac Derek, may double with Melina
#define TRAINER_ANNA_AND_MEG                (ROUTE_117_TRAINERS_START + 5) // Senior and Junior Anna & Meg, always double
#define TRAINER_BRANDI                      (ROUTE_117_TRAINERS_START + 6) // Psychic-F Brandi, may double with Aisha
#define TRAINER_AISHA                       (ROUTE_117_TRAINERS_START + 7) // Battle Girl Aisha, may double with Brandi
#define TRAINER_MELINA                      (ROUTE_117_TRAINERS_START + 8) // Running Triathlete-F Melina, may double with Derek
#define ROUTE_117_TRAINERS_END              TRAINER_MELINA

//Route 118 (Gabby & Ty are in their own section)
#define ROUTE_118_TRAINERS_START            (ROUTE_117_TRAINERS_END + 1)
#define TRAINER_PERRY                       (ROUTE_118_TRAINERS_START + 0) // Bird Keeper Perry (below the ledge)
#define TRAINER_ROSE                        (ROUTE_118_TRAINERS_START + 1) // Aroma Lady Rose, may double with Deandre
#define TRAINER_WADE                        (ROUTE_118_TRAINERS_START + 2) // Fisherman Wade (west beach)
#define TRAINER_CHESTER                     (ROUTE_118_TRAINERS_START + 3) // Bird Keeper Chester (above the ledge)
#define TRAINER_BARNY                       (ROUTE_118_TRAINERS_START + 4) // Fisherman Barny (east of Good Rod fisherman)
#define TRAINER_DALTON                      (ROUTE_118_TRAINERS_START + 5) // Guitarist Dalton
#define TRAINER_DEANDRE                     (ROUTE_118_TRAINERS_START + 6) // Youngster Deandre, may double with Rose
#define ROUTE_118_TRAINERS_END              TRAINER_DEANDRE

//Route 119 (Kobayashi the Status Ninja is in the Tutors section)
#define ROUTE_119_TRAINERS_START            (ROUTE_118_TRAINERS_END + 1)
#define TRAINER_GREG                        (ROUTE_119_TRAINERS_START + 0) // Bug Catcher Greg (mimic circle)
#define TRAINER_TAYLOR                      (ROUTE_119_TRAINERS_START + 1) // Bug Maniac Taylor (mimic circle)
#define TRAINER_DONALD                      (ROUTE_119_TRAINERS_START + 2) // Bug Maniac Donald (mimic circle)
#define TRAINER_BRENT                       (ROUTE_119_TRAINERS_START + 3) // Bug Maniac Brent (mimic circle)
#define TRAINER_DOUG                        (ROUTE_119_TRAINERS_START + 4) // Bug Catcher Doug (mimic circle)
#define TRAINER_KENT                        (ROUTE_119_TRAINERS_START + 5) // Bug Catcher Kent (mimic circle)
#define TRAINER_JACKSON                     (ROUTE_119_TRAINERS_START + 6) // Ranger-M Jackson
#define TRAINER_CATHERINE                   (ROUTE_119_TRAINERS_START + 7) // Ranger-F Catherine
#define TRAINER_YASU                        (ROUTE_119_TRAINERS_START + 8) // Ninja Boy Yasu, may double with Hugh
#define TRAINER_TAKASHI                     (ROUTE_119_TRAINERS_START + 9) // Ninja Boy Takashi, may double with Dayton
#define TRAINER_HUGH                        (ROUTE_119_TRAINERS_START + 10) // Bird Keeper Hugh, may double with Yasu
#define TRAINER_PHIL                        (ROUTE_119_TRAINERS_START + 11) // Bird Keeper Phil, may double with Rachel
#define TRAINER_HIDEO                       (ROUTE_119_TRAINERS_START + 12) // Ninja Boy Hideo (down the waterfall)
#define TRAINER_CHRIS                       (ROUTE_119_TRAINERS_START + 13) // Fisherman Chris
#define TRAINER_RACHEL                      (ROUTE_119_TRAINERS_START + 14) // Parasol Lady Rachel, may double with Phil
#define TRAINER_DAYTON                      (ROUTE_119_TRAINERS_START + 15) // Kindler Dayton, may double with Takashi
#define TRAINER_FABIAN                      (ROUTE_119_TRAINERS_START + 16) // Guitarist Fabian (By Thunder TM, battle is always thunderstorm weather)
#define ROUTE_119_TRAINERS_END              TRAINER_FABIAN

//Route 120
#define ROUTE_120_TRAINERS_START            (ROUTE_119_TRAINERS_END + 1)
#define TRAINER_COLIN                       (ROUTE_120_TRAINERS_START + 0) // Bird Keeper Colin (west of brige)
#define TRAINER_ROBERT                      (ROUTE_120_TRAINERS_START + 1) // Bird Keeper Robert (east of bridge)
#define TRAINER_LORENZO                     (ROUTE_120_TRAINERS_START + 2) // Ranger-M Lorenzo
#define TRAINER_JENNA                       (ROUTE_120_TRAINERS_START + 3) // Ranger-F Jenna (battles if you try to sneak behind)
#define TRAINER_JEFFREY                     (ROUTE_120_TRAINERS_START + 4) // Bug Maniac Jeffrey
#define TRAINER_JENNIFER                    (ROUTE_120_TRAINERS_START + 5) // Cooltrainer-F Jennifer
#define TRAINER_CHIP                        (ROUTE_120_TRAINERS_START + 6) // Ruin Maniac Chip
#define TRAINER_CLARISSA                    (ROUTE_120_TRAINERS_START + 7) // Parasol Lady Clarissa
#define TRAINER_ANGELICA                    (ROUTE_120_TRAINERS_START + 8) // Parasol Lady Angelica, may double with Leonel
#define TRAINER_KEIGO                       (ROUTE_120_TRAINERS_START + 9) // Ninja Boy Keigo (near Ancient Tomb)
#define TRAINER_RILEY                       (ROUTE_120_TRAINERS_START + 10) // Ninja Boy Riley, may double with Callie
#define TRAINER_CALLIE                      (ROUTE_120_TRAINERS_START + 11) // Battle Girl Callie, may double with Riley
#define TRAINER_LEONEL                      (ROUTE_120_TRAINERS_START + 12) // Cooltrainer-M Leonel, may double with Angelica
#define ROUTE_120_TRAINERS_END              TRAINER_LEONEL

//Route 121
#define ROUTE_121_TRAINERS_START            (ROUTE_120_TRAINERS_END + 1)
#define TRAINER_KATE_AND_JOY                (ROUTE_121_TRAINERS_START + 0) // Senior and Junior Kate & Joy, always double
#define TRAINER_VANESSA                     (ROUTE_121_TRAINERS_START + 1) // Pokefan-F Vanessa
#define TRAINER_WALTER                      (ROUTE_121_TRAINERS_START + 2) // Gentleman Walter
#define TRAINER_TAMMY                       (ROUTE_121_TRAINERS_START + 3) // Hex Maniac Tammy, may double with Cale
#define TRAINER_JESSICA                     (ROUTE_121_TRAINERS_START + 4) // Beauty Jessica
#define TRAINER_CALE                        (ROUTE_121_TRAINERS_START + 5) // Bug Maniac Cale, may double with Tammy
#define TRAINER_MYLES                       (ROUTE_121_TRAINERS_START + 6) // Breeder-M Myles, may double with Pat
#define TRAINER_PAT                         (ROUTE_121_TRAINERS_START + 7) // Breeder-F Pat, may double with Myles
#define TRAINER_MARCEL                      (ROUTE_121_TRAINERS_START + 8) // Youngster Marcel
#define TRAINER_CRISTIN                     (ROUTE_121_TRAINERS_START + 9) // School Kid-F Cristin
#define ROUTE_121_TRAINERS_END              TRAINER_CRISTIN

//Route 122
#define ROUTE_122_TRAINERS_START            (ROUTE_121_TRAINERS_END + 1)
#define TRAINER_MITCHELL                    (ROUTE_122_TRAINERS_START + 0) // Running Triathlete-M Mitchell
#define TRAINER_JULIE                       (ROUTE_122_TRAINERS_START + 1) // Swimming Triathlete-F Julie
#define TRAINER_HIROMICHI                   (ROUTE_122_TRAINERS_START + 2) // Ninja Boy Hiromichi (before the Cut tree)
#define TRAINER_TSUNAO                      (ROUTE_122_TRAINERS_START + 3) // Ninja Boy Tsunao (after the Cut tree)
#define TRAINER_MICAH                       (ROUTE_122_TRAINERS_START + 4) // Bug Catcher Micah
#define TRAINER_EDGAR                       (ROUTE_122_TRAINERS_START + 5) // Swimmer-M Edgar
#define ROUTE_122_TRAINERS_END              TRAINER_EDGAR

//Route 123
#define ROUTE_123_TRAINERS_START            (ROUTE_122_TRAINERS_END + 1)
#define TRAINER_WENDY                       (ROUTE_123_TRAINERS_START + 0) // Cooltrainer-F Wendy
#define TRAINER_BRAXTON                     (ROUTE_123_TRAINERS_START + 1) // Cooltrainer-M Braxton
#define TRAINER_VIOLET                      (ROUTE_123_TRAINERS_START + 2) // Aroma Lady Violet (by Berry Master's House)
#define TRAINER_MIU_AND_YUKI                (ROUTE_123_TRAINERS_START + 3) // Twins Miu & Yuki, always double
#define TRAINER_CAMERON                     (ROUTE_123_TRAINERS_START + 4) // Psychic-M Cameron, may double with Kayley
#define TRAINER_JACKI                       (ROUTE_123_TRAINERS_START + 5) // Psychic-F Jacki, may double with Frederick
#define TRAINER_KINDRA                      (ROUTE_123_TRAINERS_START + 6) // Hex Maniac Kindra, may double with Ed
#define TRAINER_JONAS                       (ROUTE_123_TRAINERS_START + 7) // Ninja Boy Jonas
#define TRAINER_KAYLEY                      (ROUTE_123_TRAINERS_START + 8) // Parasol Lady Kayley, may double with Cameron
#define TRAINER_ED                          (ROUTE_123_TRAINERS_START + 9) // Collector Ed, may double with Kindra
#define TRAINER_FERNANDO                    (ROUTE_123_TRAINERS_START + 10) // Guitarist Fernando, may double with Alberto
#define TRAINER_ALBERTO                     (ROUTE_123_TRAINERS_START + 11) // Bird Keeper Alberto, may double with Fernando
#define TRAINER_FREDERICK                   (ROUTE_123_TRAINERS_START + 12) // Expert-M Frederick, may double with Jacki
#define TRAINER_JAZMYN                      (ROUTE_123_TRAINERS_START + 13) // Cooltrainer-F Jazmyn, may double with Davis
#define TRAINER_DAVIS                       (ROUTE_123_TRAINERS_START + 14) // Youngster Davis, may double with Jazmyn
#define ROUTE_123_TRAINERS_END              TRAINER_DAVIS

//Route 124
#define ROUTE_124_TRAINERS_START            (ROUTE_123_TRAINERS_END + 1)
#define TRAINER_SPENCER                     (ROUTE_124_TRAINERS_START + 0) // Swimmer-M Spencer (blocks off a Dive spot)
#define TRAINER_ROLAND                      (ROUTE_124_TRAINERS_START + 1) // Swimmer-M Roland, may double with Isabella (by 126)
#define TRAINER_JENNY                       (ROUTE_124_TRAINERS_START + 2) // Swimmer-F Jenny (by the square Dive spot)
#define TRAINER_RISCHEL                     (ROUTE_124_TRAINERS_START + 3) // Swimmer-F Rischel, may double with Declan (by Lilycove)
#define TRAINER_CHAD                        (ROUTE_124_TRAINERS_START + 4) // Swimmer-M Chad (in the middle of the route)
#define TRAINER_LILA_AND_ROY                (ROUTE_124_TRAINERS_START + 5) // Sis and Bro Lila & Roy
#define TRAINER_DECLAN                      (ROUTE_124_TRAINERS_START + 6) // Swimmer-M Declan, may double with Rischel (by Lilycove)
#define TRAINER_ISABELLA                    (ROUTE_124_TRAINERS_START + 7) // Swimming Triathlete-F Isabella, may double with Roland (by 126)
#define TRAINER_GARRET                      (ROUTE_124_TRAINERS_START + 8) // Bird Keeper Garret
#define TRAINER_JOSIE                       (ROUTE_124_TRAINERS_START + 9) // Cooltrainer-F Josie
#define ROUTE_124_TRAINERS_END              TRAINER_JOSIE

//Route 125
#define ROUTE_125_TRAINERS_START            (ROUTE_124_TRAINERS_END + 1)
#define TRAINER_NOLEN                       (ROUTE_125_TRAINERS_START + 0) // Swimmer-M Nolen (moves vertically)
#define TRAINER_STAN                        (ROUTE_125_TRAINERS_START + 1) // Swimmer-M Stan
#define TRAINER_TANYA                       (ROUTE_125_TRAINERS_START + 2) // Swimmer-F Tanya
#define TRAINER_SHARON                      (ROUTE_125_TRAINERS_START + 3) // Lass Sharon
#define TRAINER_ERNEST                      (ROUTE_125_TRAINERS_START + 4) // Sailor Ernest
#define TRAINER_KIM_AND_IRIS                (ROUTE_125_TRAINERS_START + 5) // Senior and Junior Kim & Iris
#define TRAINER_PRESLEY                     (ROUTE_125_TRAINERS_START + 6) // Bird Keeper Presley
#define TRAINER_AURON                       (ROUTE_125_TRAINERS_START + 7) // Expert-M Auron
#define TRAINER_TERRY                       (ROUTE_125_TRAINERS_START + 8) // Camper Terry
#define TRAINER_HOLLY                       (ROUTE_125_TRAINERS_START + 9) // Tuber-F Holly
#define TRAINER_COLTON                      (ROUTE_125_TRAINERS_START + 10) // Tuber-M Colton
#define ROUTE_125_TRAINERS_END              TRAINER_COLTON

//Route 126
#define ROUTE_126_TRAINERS_START            (ROUTE_125_TRAINERS_END + 1)
#define TRAINER_BARRY                       (ROUTE_126_TRAINERS_START + 0) // Swimmer-M Barry (south of Sootopolis)
#define TRAINER_DEAN                        (ROUTE_126_TRAINERS_START + 1) // Swimmer-M Dean (north of Sootopolis)
#define TRAINER_NIKKI                       (ROUTE_126_TRAINERS_START + 2) // Swimmer-F Nikki (east side)
#define TRAINER_BRENDA                      (ROUTE_126_TRAINERS_START + 3) // Swimmer-F Brenda (by the west-most Dive spot)
#define TRAINER_SIENNA                      (ROUTE_126_TRAINERS_START + 4) // Swimmer-F Sienna, may double with Pablo (SW corner)
#define TRAINER_PABLO                       (ROUTE_126_TRAINERS_START + 5) // Swimming Triathlete-M Pablo, may double with Sienna (SW corner)
#define TRAINER_ISOBEL                      (ROUTE_126_TRAINERS_START + 6) // Swimming Triathlete-F Isobel, may double with Leonardo (by 125)
#define TRAINER_LEONARDO                    (ROUTE_126_TRAINERS_START + 7) // Swimmer-M Leonardo, may double with Isobel (by 125)
#define ROUTE_126_TRAINERS_END              TRAINER_LEONARDO

//Route 127
#define ROUTE_127_TRAINERS_START            (ROUTE_126_TRAINERS_END + 1)
#define TRAINER_CAMDEN                      (ROUTE_127_TRAINERS_START + 0) // Swimming Triathlete-M Camden, may double with Donny (by 126)
#define TRAINER_DONNY                       (ROUTE_127_TRAINERS_START + 1) // Swimming Triathlete-F Donny, may double with Camden (by 126)
#define TRAINER_JONAH                       (ROUTE_127_TRAINERS_START + 2) // Fisherman Jonah (west)
#define TRAINER_ROGER                       (ROUTE_127_TRAINERS_START + 3) // Fisherman Roger (east)
#define TRAINER_HENRY                       (ROUTE_127_TRAINERS_START + 4) // Fisherman Henry (north)
#define TRAINER_AIDAN                       (ROUTE_127_TRAINERS_START + 5) // Bird Keeper Aidan, may double with Athena
#define TRAINER_KOJI                        (ROUTE_127_TRAINERS_START + 6) // Black Belt Koji
#define TRAINER_ATHENA                      (ROUTE_127_TRAINERS_START + 7) // Cooltrainer-F Athena, may double with Aidan
#define ROUTE_127_TRAINERS_END              TRAINER_ATHENA

//Route 128
#define ROUTE_128_TRAINERS_START            (ROUTE_127_TRAINERS_END + 1)
#define TRAINER_ISAIAH                      (ROUTE_128_TRAINERS_START + 0) // Swimming Triathlete-M Isaiah (south of Seafloor Cavern)
#define TRAINER_KATELYN                     (ROUTE_128_TRAINERS_START + 1) // Swimming Triathlete-F Katelyn (moves horizontally)
#define TRAINER_WAYNE                       (ROUTE_128_TRAINERS_START + 2) // Fisherman Wayne
#define TRAINER_RUBEN                       (ROUTE_128_TRAINERS_START + 3) // Cooltrainer-M Ruben
#define TRAINER_ALEXA                       (ROUTE_128_TRAINERS_START + 4) // Cooltrainer-F Alexa
#define TRAINER_CARLEE                      (ROUTE_128_TRAINERS_START + 5) // Swimmer-F Carlee, may double with Harrison
#define TRAINER_HARRISON                    (ROUTE_128_TRAINERS_START + 6) // Swimmer-M Harrison, may double with Carlee
#define TRAINER_LEONARD                     (ROUTE_128_TRAINERS_START + 7) // Running Triathlete-M Leonard
#define ROUTE_128_TRAINERS_END              TRAINER_LEONARD

//Route 129
#define ROUTE_129_TRAINERS_START            (ROUTE_128_TRAINERS_END + 1)
#define TRAINER_CHASE                       (ROUTE_129_TRAINERS_START + 0) // Swimming Triathlete-M Chase
#define TRAINER_ALLISON                     (ROUTE_129_TRAINERS_START + 1) // Swimming Triathlete-F Allison, may double with Reed (spinner)
#define TRAINER_TISHA                       (ROUTE_129_TRAINERS_START + 2) // Swimmer-F Tisha, may double with Clarence (by 130)
#define TRAINER_REED                        (ROUTE_129_TRAINERS_START + 3) // Swimmer-M Reed, may double with Allison (spinner)
#define TRAINER_CLARENCE                    (ROUTE_129_TRAINERS_START + 4) // Swimmer-M Clarence, may double with Tisha (by 130)
#define TRAINER_EMMA_AND_LIL                (ROUTE_129_TRAINERS_START + 5) // Twins Emma & Lil, always double
#define TRAINER_SHANNON                     (ROUTE_129_TRAINERS_START + 6) // Ranger-F Shannon
#define ROUTE_129_TRAINERS_END              TRAINER_SHANNON

//Route 130
#define ROUTE_130_TRAINERS_START            (ROUTE_129_TRAINERS_END + 1)
#define TRAINER_RODNEY                      (ROUTE_130_TRAINERS_START + 0) // Swimmer-M Rodney
#define TRAINER_KATIE                       (ROUTE_130_TRAINERS_START + 1) // Swimmer-F Katie, may double with Santiago
#define TRAINER_SANTIAGO                    (ROUTE_130_TRAINERS_START + 2) // Swimmer-M Santiago, may double with Katie
#define ROUTE_130_TRAINERS_END              TRAINER_SANTIAGO

//Route 131
#define ROUTE_131_TRAINERS_START            (ROUTE_130_TRAINERS_END + 1)
#define TRAINER_RICHARD                     (ROUTE_131_TRAINERS_START + 0) // Bird Keeper Richard
#define TRAINER_HERMAN                      (ROUTE_131_TRAINERS_START + 1) // Swimmer-M Herman, may double with Susie (130 side)
#define TRAINER_SUSIE                       (ROUTE_131_TRAINERS_START + 2) // Swimmer-F Susie, may double with Herman (130 side)
#define TRAINER_KARA                        (ROUTE_131_TRAINERS_START + 3) // Running Triathlete-F Kara
#define TRAINER_RELI_AND_IAN                (ROUTE_131_TRAINERS_START + 4) // Sis and Bro Reli & Ian, always double
#define TRAINER_KEVIN                       (ROUTE_131_TRAINERS_START + 5) // Swimmer-M Kevin, may double with Talia (Pacifidlog side)
#define TRAINER_TALIA                       (ROUTE_131_TRAINERS_START + 6) // Swimming Triathlete-F Talia, may double with Kevin (Pacifidlog side)
#define ROUTE_131_TRAINERS_END              TRAINER_TALIA

//Route 132 (TPP meme trainers are in their own section)
#define ROUTE_132_TRAINERS_START            (ROUTE_131_TRAINERS_END + 1)
#define TRAINER_PAXTON                      (ROUTE_132_TRAINERS_START + 0) // Expert-M Paxton, may double with Makayla
#define TRAINER_MAKAYLA                     (ROUTE_132_TRAINERS_START + 1) // Expert-F Makayla, may double with Paxton
#define TRAINER_DARCY                       (ROUTE_132_TRAINERS_START + 2) // Cooltrainer-F Darcy
#define TRAINER_GILBERT                     (ROUTE_132_TRAINERS_START + 3) // Swimmer-M Gilbert, may double with Dana
#define TRAINER_DANA                        (ROUTE_132_TRAINERS_START + 4) // Swimmer-F Dana, may double with Gilbert
#define TRAINER_KIYO                        (ROUTE_132_TRAINERS_START + 5) // Black Belt Kiyo
#define TRAINER_RONALD                      (ROUTE_132_TRAINERS_START + 6) // Fisherman Ronald
#define TRAINER_JONATHAN                    (ROUTE_132_TRAINERS_START + 7) // Cooltrainer-M Jonathan
#define ROUTE_132_TRAINERS_END              TRAINER_JONATHAN

//Route 133
#define ROUTE_133_TRAINERS_START            (ROUTE_132_TRAINERS_END + 1)
#define TRAINER_FRANKLIN                    (ROUTE_133_TRAINERS_START + 0) // Swimmer-M Franklin (inside the lagoon)
#define TRAINER_LINDA                       (ROUTE_133_TRAINERS_START + 1) // Swimmer-F Linda (south)
#define TRAINER_DEBRA                       (ROUTE_133_TRAINERS_START + 2) // Swimmer-F Debra (north)
#define TRAINER_BECK                        (ROUTE_133_TRAINERS_START + 3) // Bird Keeper Beck, may double with Dianne
#define TRAINER_WARREN                      (ROUTE_133_TRAINERS_START + 4) // Cooltrainer-M Warren
#define TRAINER_MOLLIE                      (ROUTE_133_TRAINERS_START + 5) // Expert-F Mollie, may double with Conor
#define TRAINER_CONOR                       (ROUTE_133_TRAINERS_START + 6) // Expert-M Conor, may double with Mollie
#define TRAINER_DIANNE                      (ROUTE_133_TRAINERS_START + 7) // Picnicker Dianne, may double with Beck
#define TRAINER_CAROLINE                    (ROUTE_133_TRAINERS_START + 8) // Beauty Caroline
#define ROUTE_133_TRAINERS_END              TRAINER_CAROLINE

//Route 134
#define ROUTE_134_TRAINERS_START            (ROUTE_133_TRAINERS_END + 1)
#define TRAINER_JACK                        (ROUTE_134_TRAINERS_START + 0) // Swimmer-M Jack, may double with Laurel
#define TRAINER_LAUREL                      (ROUTE_134_TRAINERS_START + 1) // Swimmer-F Laurel, may double with Jack
#define TRAINER_AARON                       (ROUTE_134_TRAINERS_START + 2) // Dragon Tamer Aaron
#define TRAINER_ALEX                        (ROUTE_134_TRAINERS_START + 3) // Bird Keeper Alex, may double with Hudson
#define TRAINER_HITOSHI                     (ROUTE_134_TRAINERS_START + 4) // Black Belt Hitoshi, may double with Reyna
#define TRAINER_MARLEY                      (ROUTE_134_TRAINERS_START + 5) // Cooltrainer-F Marley
#define TRAINER_KELVIN                      (ROUTE_134_TRAINERS_START + 6) // Sailor Kelvin (east side)
#define TRAINER_REYNA                       (ROUTE_134_TRAINERS_START + 7) // Battle Girl Reyna, may double with Hitoshi
#define TRAINER_HUDSON                      (ROUTE_134_TRAINERS_START + 8) // Sailor Hudson, may double with Alex
#define ROUTE_134_TRAINERS_END              TRAINER_HUDSON

//Granite Cave
#define GRANITE_CAVE_TRAINERS_START         (ROUTE_134_TRAINERS_END + 1)
#define TRAINER_THOMAS                      (GRANITE_CAVE_TRAINERS_START + 0) // Camper Thomas, B1F
#define TRAINER_KAYLEE                      (GRANITE_CAVE_TRAINERS_START + 1) // Hex Maniac Kaylee, B2F
#define GRANITE_CAVE_TRAINERS_END           TRAINER_KAYLEE

//Mt. Chimney
#define MT_CHIMNEY_TRAINERS_START           (GRANITE_CAVE_TRAINERS_END + 1)
#define TRAINER_SHELBY                      (MT_CHIMNEY_TRAINERS_START + 0) // Expert-F Shelby
#define TRAINER_MELISSA                     (MT_CHIMNEY_TRAINERS_START + 1) // Beauty Melissa, may double with Sawyer
#define TRAINER_SHEILA                      (MT_CHIMNEY_TRAINERS_START + 2) // Beauty Sheila, may double with Shirley
#define TRAINER_SHIRLEY                     (MT_CHIMNEY_TRAINERS_START + 3) // Beauty Shirley, may double with Sheila
#define TRAINER_SAWYER                      (MT_CHIMNEY_TRAINERS_START + 4) // Hiker Sawyer, may double with Melissa
#define TRAINER_BRICE                       (MT_CHIMNEY_TRAINERS_START + 5) // Hiker Brice (by Cable Car)
#define TRAINER_BRYANT                      (MT_CHIMNEY_TRAINERS_START + 6) // Kindler Bryant, may double with Shayla
#define TRAINER_SHAYLA                      (MT_CHIMNEY_TRAINERS_START + 7) // Aroma Lady Shayla, may double with Bryant
#define MT_CHIMNEY_TRAINERS_END             TRAINER_SHAYLA

//Petalburg Woods
#define PETALBURG_WOODS_TRAINERS_START      (MT_CHIMNEY_TRAINERS_END + 1)
#define TRAINER_LYLE                        (PETALBURG_WOODS_TRAINERS_START + 0) // Bug Catcher Lyle (south)
#define TRAINER_JAMES                       (PETALBURG_WOODS_TRAINERS_START + 1) // Bug Catcher James (north)
#define PETALBURG_WOODS_TRAINERS_END        TRAINER_JAMES

//Rusturf Tunnel
#define RUSTURF_TUNNEL_TRAINERS_START       (PETALBURG_WOODS_TRAINERS_END + 1)
#define TRAINER_MIKE                        (RUSTURF_TUNNEL_TRAINERS_START + 0) // Hiker Mike
#define RUSTURF_TUNNEL_TRAINERS_END         TRAINER_MIKE

//Abandoned Ship
#define ABANDONED_SHIP_TRAINERS_START       (RUSTURF_TUNNEL_TRAINERS_END + 1)
#define TRAINER_CHARLIE                     (ABANDONED_SHIP_TRAINERS_START + 0) // Tuber-M Charlie (1F corridors)
#define TRAINER_THALIA                      (ABANDONED_SHIP_TRAINERS_START + 1) // Beauty Thalia, may double with Demetrius (1F rooms)
#define TRAINER_DEMETRIUS                   (ABANDONED_SHIP_TRAINERS_START + 2) // Youngster Demetrius, may double with Thalia (1F rooms)
#define TRAINER_DUNCAN                      (ABANDONED_SHIP_TRAINERS_START + 3) // Sailor Duncan (B1F corridors)
#define TRAINER_KIRA_AND_DAN                (ABANDONED_SHIP_TRAINERS_START + 4) // Young Couple Kira & Dan (1F rooms)
#define TRAINER_GARRISON                    (ABANDONED_SHIP_TRAINERS_START + 5) // Ruin Maniac Garrison, may double with Jani (1F rooms)
#define TRAINER_JANI                        (ABANDONED_SHIP_TRAINERS_START + 6) // Tuber-F Jani, may double with Garrison (1F rooms)
#define ABANDONED_SHIP_TRAINERS_END         TRAINER_JANI

//Meteor Falls
#define METEOR_FALLS_TRAINERS_START         (ABANDONED_SHIP_TRAINERS_END + 1)
#define TRAINER_BILL                        (METEOR_FALLS_TRAINERS_START + 0) // Dragon Tamer Bill (114/115 entrance room)
#define TRAINER_NICOLAS                     (METEOR_FALLS_TRAINERS_START + 1) // Dragon Tamer (ledge puzzle room)
#define TRAINER_JOHN_AND_JAY                (METEOR_FALLS_TRAINERS_START + 2) // Old Couple John & Jay, always double (ledge puzzle room)
#define TRAINER_GINNY                       (METEOR_FALLS_TRAINERS_START + 3) // Lass Ginny (basement/Meteor Village entrance room)
#define TRAINER_CHARLES                     (METEOR_FALLS_TRAINERS_START + 4) // Dragon Tamer Charles (basement/Meteor Village entrance room)
#define TRAINER_TESS                        (METEOR_FALLS_TRAINERS_START + 5) // Battle Girl Tess (basement/Meteor Village entrance room)
#define METEOR_FALLS_TRAINERS_END           TRAINER_TESS

//Mt. Pyre
#define MT_PYRE_TRAINERS_START              (METEOR_FALLS_TRAINERS_END + 1)
#define TRAINER_MARK                        (MT_PYRE_TRAINERS_START + 0) // 2F Pokemaniac Mark, may double with Leah
#define TRAINER_DEZ_AND_LUKE                (MT_PYRE_TRAINERS_START + 1) // 2F Young Couple Dez & Luke, always double
#define TRAINER_ZANDER                      (MT_PYRE_TRAINERS_START + 2) // 2F Black Belt Zander, may double with Leah
#define TRAINER_LEAH                        (MT_PYRE_TRAINERS_START + 3) // 2F Hex Maniac Leah, may double with Mark or Zander
#define TRAINER_WILLIAM                     (MT_PYRE_TRAINERS_START + 4) // 3F Psychic-M William, may double with Gabrielle
#define TRAINER_KAYLA                       (MT_PYRE_TRAINERS_START + 5) // 3F Psychic-F Kayla, may double with Gabrielle
#define TRAINER_GABRIELLE                   (MT_PYRE_TRAINERS_START + 6) // 3F Breeder-F Gabrielle, may double with William or Kayla
#define TRAINER_TASHA                       (MT_PYRE_TRAINERS_START + 7) // 4F Hex Maniac Tasha
#define TRAINER_ATSUSHI                     (MT_PYRE_TRAINERS_START + 8) // 5F Black Belt Atsushi
#define TRAINER_VALERIE                     (MT_PYRE_TRAINERS_START + 9) // 6F Hex Maniac Valerie, may double with Cedric
#define TRAINER_CEDRIC                      (MT_PYRE_TRAINERS_START + 10) // 6F Psychic-M Cedric, may double with Valerie
#define MT_PYRE_TRAINERS_END                TRAINER_CEDRIC

//Victory Road (Victory Road Rivals are in their own section)
#define VICTORY_ROAD_TRAINERS_START         (MT_PYRE_TRAINERS_END + 1)
#define TRAINER_MANO                        (VICTORY_ROAD_TRAINERS_START + 0) // Cooltrainer-M Mano (1F, west of bridge)
#define TRAINER_TSUJI                       (VICTORY_ROAD_TRAINERS_START + 1) // Cooltrainer-M Tsuji (1F, guards ladder down)
#define TRAINER_RIZZO                       (VICTORY_ROAD_TRAINERS_START + 2) // Cooltrainer-M Rizzo (B1F, guards ladder down)
#define TRAINER_GLICK                       (VICTORY_ROAD_TRAINERS_START + 3) // Cooltrainer-M Glick (B2F, guards west ladder)
#define TRAINER_ARASH                       (VICTORY_ROAD_TRAINERS_START + 4) // Cooltrainer-M Arash (B2F, guards east ladder)
#define TRAINER_PARK                        (VICTORY_ROAD_TRAINERS_START + 5) // Cooltrainer-M Park (B1F, first after coming up)
#define TRAINER_SHOMA                       (VICTORY_ROAD_TRAINERS_START + 6) // Cooltrainer-M Shoma (B1F, first after coming up)
#define TRAINER_WOLFE                       (VICTORY_ROAD_TRAINERS_START + 7) // Cooltrainer-M Wolfe (1F, first after coming up)
#define TRAINER_RYOTA                       (VICTORY_ROAD_TRAINERS_START + 8) // Cooltrainer-M Ryota (1F, second after coming up)
#define TRAINER_RUIZ                        (VICTORY_ROAD_TRAINERS_START + 9) // Cooltrainer-M Ruiz (1F, third after coming up)
#define TRAINER_SHIRONA                     (VICTORY_ROAD_TRAINERS_START + 10) // Cooltrainer-F Shirona (B2F, ruins area)
#define TRAINER_KATELYNN                    (VICTORY_ROAD_TRAINERS_START + 11) // Cooltrainer-F Katelynn (B1F, guards eastern bridge)
#define TRAINER_EIFIE                       (VICTORY_ROAD_TRAINERS_START + 12) // Cooltrainer-F Eifie (B1F, guards bonus item)
#define TRAINER_HOPE                        (VICTORY_ROAD_TRAINERS_START + 13) // Cooltrainer-F Hope (B2F, above the waterfalls)
#define TRAINER_GRACE                       (VICTORY_ROAD_TRAINERS_START + 14) // Cooltrainer-F Grace (B2F, on the bridge)
#define VICTORY_ROAD_TRAINERS_END           TRAINER_GRACE

//Southern Island
#define SOUTHERN_ISLAND_TRAINERS_START      (VICTORY_ROAD_TRAINERS_END + 1)
#define TRAINER_NAOMI                       (SOUTHERN_ISLAND_TRAINERS_START + 0) // Aroma Lady Naomi
#define SOUTHERN_ISLAND_TRAINERS_END        TRAINER_NAOMI

//Littleroot Shore
#define LITTLEROOT_SHORE_TRAINERS_START     (SOUTHERN_ISLAND_TRAINERS_END + 1)
#define TRAINER_SAMUEL                      (LITTLEROOT_SHORE_TRAINERS_START + 0) // Psychic-M Samuel
#define TRAINER_PHILLIP                     (LITTLEROOT_SHORE_TRAINERS_START + 1) // Fisherman Phillip
#define TRAINER_HILLARY                     (LITTLEROOT_SHORE_TRAINERS_START + 2) // Swimmer-F Hillary
#define LITTLEROOT_SHORE_TRAINERS_END       TRAINER_HILLARY

//Jagged Pass
#define JAGGED_PASS_TRAINERS_START          (LITTLEROOT_SHORE_TRAINERS_END + 1)
#define TRAINER_ERIC                        (JAGGED_PASS_TRAINERS_START + 0) // Hiker Eric
#define TRAINER_ETHAN                       (JAGGED_PASS_TRAINERS_START + 1) // Camper Ethan
#define TRAINER_DIANA                       (JAGGED_PASS_TRAINERS_START + 2) // Picnicker Diana
#define TRAINER_AUTUMN                      (JAGGED_PASS_TRAINERS_START + 3) // Picnicker Autumn, may double with Julio
#define TRAINER_JULIO                       (JAGGED_PASS_TRAINERS_START + 4) // Biking Triathlete-M Julio, may double with Autumn
#define JAGGED_PASS_TRAINERS_END            TRAINER_JULIO

//Dewdrop Glen
#define DEWDROP_GLEN_TRAINERS_START         (JAGGED_PASS_TRAINERS_END + 1)
#define TRAINER_ALBERT                      (DEWDROP_GLEN_TRAINERS_START + 0) // Ranger-M Albert
#define TRAINER_QUINCY                      (DEWDROP_GLEN_TRAINERS_START + 1) // Youngster Quincy
#define TRAINER_DUDLEY                      (DEWDROP_GLEN_TRAINERS_START + 2) // Fisherman Dudley
#define DEWDROP_GLEN_TRAINERS_END           TRAINER_DUDLEY

//Sky Pillar
#define SKY_PILLAR_TRAINERS_START           (DEWDROP_GLEN_TRAINERS_END + 1)
#define TRAINER_ASHE                        (SKY_PILLAR_TRAINERS_START + 0) // 1F, Dragon Tamer Ashe
#define TRAINER_KAYANO                      (SKY_PILLAR_TRAINERS_START + 1) // 3F, Dragon Tamer Kayano
#define TRAINER_SHIGERU                     (SKY_PILLAR_TRAINERS_START + 2) // 5F, Dragon Tamer Shigeru
#define SKY_PILLAR_TRAINERS_END             TRAINER_SHIGERU

//Dewford Resort
#define DEWFORD_RESORT_TRAINERS_START       (SKY_PILLAR_TRAINERS_END + 1)
#define TRAINER_PHELPS                      (DEWFORD_RESORT_TRAINERS_START + 0) // Tuber-M Phelps
#define TRAINER_TATJANA                     (DEWFORD_RESORT_TRAINERS_START + 1) // Tuber-F Tatjana
#define TRAINER_MAC                         (DEWFORD_RESORT_TRAINERS_START + 2) // Fisherman Mac
#define TRAINER_KONDO                       (DEWFORD_RESORT_TRAINERS_START + 3) // Sailor Kondo
#define TRAINER_LEDECKY                     (DEWFORD_RESORT_TRAINERS_START + 4) // Swimmer-F Ledecky
#define TRAINER_LEA_AND_JED                 (DEWFORD_RESORT_TRAINERS_START + 5) // Young Couple Lea & Jed, always double
#define DEWFORD_RESORT_TRAINERS_END         TRAINER_LEA_AND_JED

//Verdant Forest
#define VERDANT_FOREST_TRAINERS_START       (DEWFORD_RESORT_TRAINERS_END + 1)
#define TRAINER_DRESDEN                     (VERDANT_FOREST_TRAINERS_START + 0) // Pokemaniac Dresden
#define TRAINER_CHAPMAN                     (VERDANT_FOREST_TRAINERS_START + 1) // Kindler Chapman
#define TRAINER_CARRIE                      (VERDANT_FOREST_TRAINERS_START + 2) // Aroma Lady Carrie
#define VERDANT_FOREST_TRAINERS_END         TRAINER_CARRIE

//Mossdeep Caverns
#define MOSSDEEP_CAVERNS_TRAINERS_START     (VERDANT_FOREST_TRAINERS_END + 1)
#define TRAINER_NORAN                       (MOSSDEEP_CAVERNS_TRAINERS_START + 0) // 1F, Hiker Noran
#define TRAINER_COOPER                      (MOSSDEEP_CAVERNS_TRAINERS_START + 1) // B1F, Psychic-M Cooper
#define TRAINER_EDMUND                      (MOSSDEEP_CAVERNS_TRAINERS_START + 2) // B1F, Camper Edmund
#define MOSSDEEP_CAVERNS_TRAINERS_END       TRAINER_EDMUND

//Valley of Steel
#define VALLEY_OF_STEEL_TRAINERS_START      (MOSSDEEP_CAVERNS_TRAINERS_END + 1)
#define TRAINER_PEPPER                      (VALLEY_OF_STEEL_TRAINERS_START + 0) // Ranger-F Pepper
#define TRAINER_STARK                       (VALLEY_OF_STEEL_TRAINERS_START + 1) // Ranger-M Stark, may double with Vinsen
#define TRAINER_YINSEN                      (VALLEY_OF_STEEL_TRAINERS_START + 2) // Ninja Boy Vinsen, may double with Stark
#define TRAINER_VANKO                       (VALLEY_OF_STEEL_TRAINERS_START + 3) // Ninja Boy Vanko
#define VALLEY_OF_STEEL_TRAINERS_END        TRAINER_VANKO

//Sandswept Oasis
#define SANDSWEPT_OASIS_TRAINERS_START      (VALLEY_OF_STEEL_TRAINERS_END + 1)
#define TRAINER_NEAL                        (SANDSWEPT_OASIS_TRAINERS_START + 0) // Hiker Neal, may double with Raoul
#define TRAINER_RAOUL                       (SANDSWEPT_OASIS_TRAINERS_START + 1) // Ranger-M Raoul, may double with Neal
#define TRAINER_CLEO                        (SANDSWEPT_OASIS_TRAINERS_START + 2) // Parasol Lady Cleo
#define SANDSWEPT_OASIS_TRAINERS_END        TRAINER_CLEO

//Forina
#define FORINA_TRAINERS_START               (SANDSWEPT_OASIS_TRAINERS_END + 1)
#define TRAINER_KEL                         (FORINA_TRAINERS_START + 0) // Ranger-F Kel, may double with Domitan
#define TRAINER_DOMITAN                     (FORINA_TRAINERS_START + 1) // Guitarist Domitan, may double with Kel
#define TRAINER_DAVIDE                      (FORINA_TRAINERS_START + 2) // Psychic-M Davide
#define TRAINER_FINLEY                      (FORINA_TRAINERS_START + 3) // Fisherman FInley
#define TRAINER_SUMNER                      (FORINA_TRAINERS_START + 4) // Black Belt Sumner
#define TRAINER_ABNER                       (FORINA_TRAINERS_START + 5) // Bug Catcher Abner
#define TRAINER_LANCE                       (FORINA_TRAINERS_START + 6) // Running Triathlete-M Lance
#define TRAINER_ARTEMIS                     (FORINA_TRAINERS_START + 7) // Biking Triathlete-F Artemis
#define TRAINER_HALLIE                      (FORINA_TRAINERS_START + 8) // Parasol Lady Hallie
#define FORINA_TRAINERS_END                 TRAINER_HALLIE  

//Slateport Beach
#define SLATEPORT_BEACH_TRAINERS_START      (FORINA_TRAINERS_END + 1)
#define TRAINER_LUTHER                      (SLATEPORT_BEACH_TRAINERS_START + 0) // Sailor Luther
#define TRAINER_HANK                        (SLATEPORT_BEACH_TRAINERS_START + 1) // Tuber-M Hank, may double with Hali
#define TRAINER_HALI                        (SLATEPORT_BEACH_TRAINERS_START + 2) // Tuber-F Hali, may double with Hank
#define TRAINER_HALLE                       (SLATEPORT_BEACH_TRAINERS_START + 3) // Expert-F Halle
#define TRAINER_SHEAFFER                    (SLATEPORT_BEACH_TRAINERS_START + 4) // Fisherman Sheaffer
#define TRAINER_ASHLIN                      (SLATEPORT_BEACH_TRAINERS_START + 5) // Battle Girl Ashlin
#define TRAINER_SIMONE                      (SLATEPORT_BEACH_TRAINERS_START + 6) // Beauty Simone
#define TRAINER_ELLIS                       (SLATEPORT_BEACH_TRAINERS_START + 7) // Bug Catcher Ellie
#define TRAINER_KINSLEY                     (SLATEPORT_BEACH_TRAINERS_START + 8) // Swimmer-M Kinsley
#define SLATEPORT_BEACH_TRAINERS_END        TRAINER_KINSLEY

//Seashore House
#define SEASHORE_HOUSE_TRAINERS_START       (SLATEPORT_BEACH_TRAINERS_END + 1)
#define TRAINER_SIMON                       (SEASHORE_HOUSE_TRAINERS_START + 0) // Tuber-M Simon
#define TRAINER_JOHANNA                     (SEASHORE_HOUSE_TRAINERS_START + 1) // Beauty Johanna
#define TRAINER_DWAYNE                      (SEASHORE_HOUSE_TRAINERS_START + 2) // Sailor Dwayne
#define SEASHORE_HOUSE_TRAINERS_END         TRAINER_DWAYNE

//Power Plant
#define POWER_PLANT_TRAINERS_START          (SEASHORE_HOUSE_TRAINERS_END + 1)
#define TRAINER_ARIARNE                     (POWER_PLANT_TRAINERS_START + 0) // Swimmer-F Ariarne
#define TRAINER_TIMIN                       (POWER_PLANT_TRAINERS_START + 1) // Fisherman Timin
#define TRAINER_BENITO                      (POWER_PLANT_TRAINERS_START + 2) // Ninja Boy Benito
#define POWER_PLANT_TRAINERS_END            TRAINER_BENITO

//Summer Sea
#define SUMMER_SEA_TRAINERS_START           (POWER_PLANT_TRAINERS_END + 1)
#define TRAINER_STANLY                      (SUMMER_SEA_TRAINERS_START + 0) // Sailor Stanly, may double with Theodore
#define TRAINER_REGAN                       (SUMMER_SEA_TRAINERS_START + 1) // Swimmer-F Regan
#define TRAINER_TYA_AND_MADI                (SUMMER_SEA_TRAINERS_START + 2) // Senior and Junior Tya & Madi, always double
#define TRAINER_VERNON                      (SUMMER_SEA_TRAINERS_START + 3) // Fisherman Vernon
#define TRAINER_BORIS                       (SUMMER_SEA_TRAINERS_START + 4) // Bird Keeper Boris
#define TRAINER_THEODORE                    (SUMMER_SEA_TRAINERS_START + 5) // Expert-M Theodore, may double with Stanly
#define TRAINER_HOWIE                       (SUMMER_SEA_TRAINERS_START + 6) // Swimmer-M Howie
#define SUMMER_SEA_TRAINERS_END             TRAINER_HOWIE

//Trick House
#define TRICK_HOUSE_TRAINERS_START          (SUMMER_SEA_TRAINERS_END + 1)
#define TRAINER_SALLY                       (TRICK_HOUSE_TRAINERS_START + 0) // Puzzle 1, Lass Sally (by the entrance)
#define TRAINER_EDDIE                       (TRICK_HOUSE_TRAINERS_START + 1) // Puzzle 1, Youngster Eddie
#define TRAINER_ROBIN                       (TRICK_HOUSE_TRAINERS_START + 2) // Puzzle 1, Lass Robin (by the scroll)
#define TRAINER_TED                         (TRICK_HOUSE_TRAINERS_START + 3) // Puzzle 2, School Kid-M Ted (near the scroll)
#define TRAINER_PAUL                        (TRICK_HOUSE_TRAINERS_START + 4) // Puzzle 2, School Kid-M Paul (in front of the item)
#define TRAINER_GEORGIA                     (TRICK_HOUSE_TRAINERS_START + 5) // Puzzle 2, School Kid-F Georgia
#define TRAINER_JUSTIN                      (TRICK_HOUSE_TRAINERS_START + 6) // Puzzle 3, Camper Justin
#define TRAINER_MARTHA                      (TRICK_HOUSE_TRAINERS_START + 7) // Puzzle 3, Picnicker Martha
#define TRAINER_ALAN                        (TRICK_HOUSE_TRAINERS_START + 8) // Puzzle 3, Hiker Alan
#define TRAINER_CORA                        (TRICK_HOUSE_TRAINERS_START + 9) // Puzzle 4, Battle Girl Cora (against the north wall)
#define TRAINER_PAULA                       (TRICK_HOUSE_TRAINERS_START + 10) // Puzzle 4, Battle Girl Paula (against the east wall)
#define TRAINER_YUJI                        (TRICK_HOUSE_TRAINERS_START + 11) // Puzzle 4, Black Belt Yuji
#define TRAINER_IRVIN                       (TRICK_HOUSE_TRAINERS_START + 12) // Puzzle 5, Bug Catcher Irvin
#define TRAINER_KELSEY                      (TRICK_HOUSE_TRAINERS_START + 13) // Puzzle 5, Battle Girl Kelsey
#define TRAINER_TOBY                        (TRICK_HOUSE_TRAINERS_START + 14) // Puzzle 5, Bird Keeper Toby
#define TRAINER_ALICIA                      (TRICK_HOUSE_TRAINERS_START + 15) // Puzzle 5, Cooltrainer-F Alicia
#define TRAINER_OLIVER                      (TRICK_HOUSE_TRAINERS_START + 16) // Puzzle 5, Cooltrainer-M Oliver
#define TRAINER_SOPHIA                      (TRICK_HOUSE_TRAINERS_START + 17) // Puzzle 6, Ranger-F Sophia
#define TRAINER_BENNY                       (TRICK_HOUSE_TRAINERS_START + 18) // Puzzle 6, Bird Keeper Benny
#define TRAINER_SEBASTIAN                   (TRICK_HOUSE_TRAINERS_START + 19) // Puzzle 6, Ranger-M Sebastian
#define TRAINER_JOSHUA                      (TRICK_HOUSE_TRAINERS_START + 20) // Puzzle 7, Psychic-M Joshua, may double with Patricia (yellow tiles)
#define TRAINER_ALEXIS                      (TRICK_HOUSE_TRAINERS_START + 21) // Puzzle 7, Psychic-F Alexis, may double with Alvaro (pink tiles)
#define TRAINER_PATRICIA                    (TRICK_HOUSE_TRAINERS_START + 22) // Puzzle 7, Hex Maniac Patricia, may double with Joshua (yellow tiles)
#define TRAINER_MARIELA                     (TRICK_HOUSE_TRAINERS_START + 23) // Puzzle 7, Psychic-F Mariela, may double with Everett
#define TRAINER_ALVARO                      (TRICK_HOUSE_TRAINERS_START + 24) // Puzzle 7, Psychic-M Alvaro, may double with Alexis
#define TRAINER_EVERETT                     (TRICK_HOUSE_TRAINERS_START + 25) // Puzzle 7, Gentleman Everett, may double with Mariela
#define TRAINER_VINCENT                     (TRICK_HOUSE_TRAINERS_START + 26) // Puzzle 8, Cooltrainer-M Vincent (in the jars, halfway through the north puzzle)
#define TRAINER_LEROY                       (TRICK_HOUSE_TRAINERS_START + 27) // Puzzle 8, Cooltrainer-M Leroy (just before the exit)
#define TRAINER_KEIRA                       (TRICK_HOUSE_TRAINERS_START + 28) // Puzzle 8, Cooltrainer-F Keira
#define TRICK_HOUSE_TRAINERS_END            TRAINER_KEIRA

#define REGULAR_TRAINERS_END                TRICK_HOUSE_TRAINERS_END



//Safety trainers preserve vanilla functionality
#define SAFETY_TRAINERS_START               (REGULAR_TRAINERS_END + 1)

//Vanilla Frontier Brains
#define TRAINER_ANABEL                      (SAFETY_TRAINERS_START + 0)
#define TRAINER_TUCKER                      (SAFETY_TRAINERS_START + 1)
#define TRAINER_SPENSER                     (SAFETY_TRAINERS_START + 2)
#define TRAINER_GRETA                       (SAFETY_TRAINERS_START + 3)
#define TRAINER_NOLAND                      (SAFETY_TRAINERS_START + 4)
#define TRAINER_LUCY                        (SAFETY_TRAINERS_START + 5)
#define TRAINER_BRANDON                     (SAFETY_TRAINERS_START + 6)

//Link Battle Placeholders
#define TRAINER_RED                         (SAFETY_TRAINERS_START + 7)
#define TRAINER_LEAF                        (SAFETY_TRAINERS_START + 8)
#define TRAINER_BRENDAN_PLACEHOLDER         (SAFETY_TRAINERS_START + 9)
#define TRAINER_MAY_PLACEHOLDER             (SAFETY_TRAINERS_START + 10)

//Steven was needed for weird functions because of the Mossdeep tag battle from vanilla
//now used for the Meteor Falls trainer battle
#define TRAINER_STEVEN                      (SAFETY_TRAINERS_START + 11) // Meteor Falls Steven

#define SAFETY_TRAINERS_END                 TRAINER_STEVEN

#define TRAINERS_COUNT                      (SAFETY_TRAINERS_END + 1)
//I think it's currently 662 (661 + TRAINER_NONE)

// NOTE: Because each Trainer uses a flag to determine when they are defeated, there is only space for 863 trainers before trainer flag space overflows
//       More space can be made by shifting flags around in constants/flags.h or changing how trainer flags are handled
//       MAX_TRAINERS_COUNT can be increased but will take up additional saveblock space

#define MAX_TRAINERS_COUNT                  864
#define TRAINER_PARTNER(partner)           (MAX_TRAINERS_COUNT + partner)

#endif  // GUARD_CONSTANTS_OPPONENTS_H
