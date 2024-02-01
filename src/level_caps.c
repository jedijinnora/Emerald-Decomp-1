#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "level_caps.h"
#include "pokemon.h"


u32 GetCurrentLevelCap(void)
{
    //vanilla caps
    static const u32 sLevelCapFlagMap[][2] =
    {
        {FLAG_BADGE01_GET, 15},
        {FLAG_BADGE02_GET, 19},
        {FLAG_BADGE03_GET, 24},
        {FLAG_BADGE04_GET, 29},
        {FLAG_BADGE05_GET, 31},
        {FLAG_BADGE06_GET, 33},
        {FLAG_BADGE07_GET, 42},
        {FLAG_BADGE08_GET, 46},
        {FLAG_IS_CHAMPION, 58},
    };

    u32 i;

    //Jinnora: my custom level cap table
    static const u32 sLevelCapCustomArray[13] = {16, 25, 34, 43, 52, 61, 70, 79, 85, 87, 90, 90, MAX_LEVEL};

    if (B_LEVEL_CAP_TYPE == LEVEL_CAP_FLAG_LIST)
    {
        for (i = 0; i < ARRAY_COUNT(sLevelCapFlagMap); i++)
        {
            if (!FlagGet(sLevelCapFlagMap[i][0]))
                return sLevelCapFlagMap[i][1];
        }
    }
    else if (B_LEVEL_CAP_TYPE == LEVEL_CAP_VARIABLE)
    {
        return VarGet(B_LEVEL_CAP_VARIABLE);
    }
    else if (B_LEVEL_CAP_TYPE == LEVEL_CAP_CUSTOM)
    {
        //if player is champion or locked on easy difficulty, no cap
        if (FlagGet(FLAG_SYS_GAME_CLEAR)) return MAX_LEVEL;
        if ((VarGet(VAR_DIFFICULTY_SETTING) == 1) && FlagGet(FLAG_DEPARTED_EVER_GRANDE)) return MAX_LEVEL;

        //cap is determined by game progress
        i = VarGet(VAR_NUM_BADGES);
        if (FlagGet(FLAG_ENTERED_VICTORY_ROAD)) i++;
        if (FlagGet(FLAG_ENTERED_ELITE_FOUR)) i++;
        if (FlagGet(FLAG_ENTERED_CHAMPION_ROOM)) i++;
        if (FlagGet(FLAG_USE_NEXT_LEVEL_CAP)) i++;
        if (i > 12) return MAX_LEVEL; //safety
        return sLevelCapCustomArray[i];
    }

    return MAX_LEVEL;
}

u32 GetSoftLevelCapExpValue(u32 level, u32 expValue)
{
    static const u32 sExpScalingDown[5] = { 4, 8, 16, 32, 64 };
    static const u32 sExpScalingUp[5]   = { 16, 8, 4, 2, 1 };

    u32 levelDifference;
    u32 currentLevelCap = GetCurrentLevelCap();

    //Jinnora: before I added the comparison between level and current level cap, always returned 0
    if (B_EXP_CAP_TYPE == EXP_CAP_NONE || level < currentLevelCap)
        return expValue;

    if (B_LEVEL_CAP_EXP_UP && level < currentLevelCap)
    {
        levelDifference = currentLevelCap - level;
        if (levelDifference > ARRAY_COUNT(sExpScalingDown))
            return expValue + (expValue / sExpScalingUp[ARRAY_COUNT(sExpScalingDown) - 1]);
        else
            return expValue + (expValue / sExpScalingUp[levelDifference]);
    }
    else if (B_EXP_CAP_TYPE == EXP_CAP_SOFT && level >= currentLevelCap)
    {
        levelDifference = level - currentLevelCap;
        if (levelDifference > ARRAY_COUNT(sExpScalingDown))
            return expValue / sExpScalingDown[ARRAY_COUNT(sExpScalingDown) - 1];
        else
            return expValue / sExpScalingDown[levelDifference];
    }
    else
        return 0;

}