// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Effects/AFEffectApplicationRequirement.h"
#include "AFAttributeStongerOverride.generated.h"

/**
 * USe only with Duration Based application.
 * Effect will be applied if the attribute modifier is stronger than the current one on Attribute.
 */
UCLASS(BlueprintType, meta = (DisplayName = "Attribute Stronger"))
class ABILITYFRAMEWORK_API UAFAttributeStongerOverride : public UAFEffectApplicationRequirement
{
	GENERATED_BODY()
public:
	virtual bool CanApply(FGAEffect* EffectIn, FGAEffectProperty& InProperty,
		struct FGAEffectContainer* InContainer,
		const FGAEffectContext& InContext,
		const FGAEffectHandle& InHandle) override;
	
	
};
