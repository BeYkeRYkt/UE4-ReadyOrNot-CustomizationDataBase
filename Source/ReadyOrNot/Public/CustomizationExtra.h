#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomizationExtra.generated.h"

class AReadyOrNotPlayerState;
class UCustomizationSocket;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API ACustomizationExtra : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomizationSocket* Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerState* LastPlayerState;
    
public:
    ACustomizationExtra(const FObjectInitializer& ObjectInitializer);

};

