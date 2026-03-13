#pragma once
#include "CoreMinimal.h"
#include "EGameVersionRestriction.generated.h"

UENUM(BlueprintType)
enum class EGameVersionRestriction : uint8 {
    GVR_NoRestriction,
    GVR_Base,
    GVR_Supporter,
    GVR_PreorderBonus,
    GVR_HomeInvasion,
    GVR_Maritime,
    GVR_ConsolePreOrderBonus,
    GVR_LosSuenosStories,
    GVR_BoilingPoint,
    GVR_MAX_DLC = GVR_BoilingPoint,
    GVR_Disabled = 254,
    GVR_Demo,
};

