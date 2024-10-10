#include "global.h"
#include "battle.h"
#include "event_scripts.h"
#include "overworld.h"
#include "script.h"
#include "event_data.h"
#include "field_screen_effect.h"

EWRAM_DATA u32 gStepCounter = 0;

bool32 GetStepsZoneFlag(void)
{
    return FlagGet(FLAG_STEPS);
}

void SetStepsZoneFlag(void)
{
    FlagSet(FLAG_STEPS);
}