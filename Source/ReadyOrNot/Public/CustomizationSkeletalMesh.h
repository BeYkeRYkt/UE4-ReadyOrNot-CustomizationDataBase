#pragma once
#include "CoreMinimal.h"
#include "CustomizationDataBase.h"
#include "CustomizationMaterialSlot.h"
#include "CustomizationSkeletalMesh.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class READYORNOT_API UCustomizationSkeletalMesh : public UCustomizationDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMasterPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHeadSkelMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationMaterialSlot> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> SocketOverridesMap;
    
    UCustomizationSkeletalMesh();

};

