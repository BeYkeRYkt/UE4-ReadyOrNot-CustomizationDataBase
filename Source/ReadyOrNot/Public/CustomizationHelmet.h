#pragma once
#include "CoreMinimal.h"
#include "CustomizationSkeletalMesh.h"
#include "CustomizationHelmet.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UCustomizationHelmet : public UCustomizationSkeletalMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceHideHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HeadsetMaterialSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CompatibleHelmetTags;
    
    UCustomizationHelmet();

};

