#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauInput.generated.h"
// Class Mordhau.MordhauInput
class MORDHAU_API UMordhauInput  :  public UObject
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	bool bDefaultBindingsChecked; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	TArray<struct FInputAxisConfigEntry> AxisConfig; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	TArray<struct FInputActionKeyMapping> ActionMappings; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	TArray<struct FInputAxisKeyMapping> AxisMappings; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	TArray<struct FKey> ConsoleKeys; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int ControlScheme; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int AngleAttacksWithMovement; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int MouseXIsFlipAttackSide; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int InverseAttackDirectionX; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int InverseAttackDirectionY; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int AngleAttackAfterPress; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int ToggleSprint; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	bool bMouseXInverted; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	float MouseXSensitivity; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	bool bMouseYInverted; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	float MouseYSensitivity; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	bool bGamepadLeftXInverted; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	float GamepadLeftXSensitivity; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	float GamepadLeftXDeadzone; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	bool bGamepadLeftYInverted; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	float GamepadLeftYSensitivity; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	float GamepadLeftYDeadzone; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	bool bGamepadRightXInverted; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	float GamepadRightXSensitivity; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	float GamepadRightXDeadzone; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	bool bGamepadRightYInverted; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	float GamepadRightYSensitivity; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	float GamepadRightYDeadzone; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	void SetToggleSprint(int NewToggleSprint);
UFUNCTION(BlueprintCallable)
	void SetMouseYSensitivity(float NewSensitivity);
UFUNCTION(BlueprintCallable)
	void SetMouseYInverted(bool bNewInverted);
UFUNCTION(BlueprintCallable)
	void SetMouseXSensitivity(float NewSensitivity);
UFUNCTION(BlueprintCallable)
	void SetMouseXIsFlipAttackSide(int NewIsFlipAttackSide);
UFUNCTION(BlueprintCallable)
	void SetMouseXInverted(bool bNewInverted);
UFUNCTION(BlueprintCallable)
	void SetInverseAttackDirectionY(int NewInverseAttackDirectionX);
UFUNCTION(BlueprintCallable)
	void SetInverseAttackDirectionX(int NewInverseAttackDirectionX);
UFUNCTION(BlueprintCallable)
	void SetGamepadRightYSensitivity(float NewSensitivity);
UFUNCTION(BlueprintCallable)
	void SetGamepadRightYInverted(bool bNewInverted);
UFUNCTION(BlueprintCallable)
	void SetGamepadRightYDeadzone(float NewDeadzone);
UFUNCTION(BlueprintCallable)
	void SetGamepadRightXSensitivity(float NewSensitivity);
UFUNCTION(BlueprintCallable)
	void SetGamepadRightXInverted(bool bNewInverted);
UFUNCTION(BlueprintCallable)
	void SetGamepadRightXDeadzone(float NewDeadzone);
UFUNCTION(BlueprintCallable)
	void SetGamepadLeftYSensitivity(float NewSensitivity);
UFUNCTION(BlueprintCallable)
	void SetGamepadLeftYInverted(bool bNewInverted);
UFUNCTION(BlueprintCallable)
	void SetGamepadLeftYDeadzone(float NewDeadzone);
UFUNCTION(BlueprintCallable)
	void SetGamepadLeftXSensitivity(float NewSensitivity);
UFUNCTION(BlueprintCallable)
	void SetGamepadLeftXInverted(bool bNewInverted);
UFUNCTION(BlueprintCallable)
	void SetGamepadLeftXDeadzone(float NewDeadzone);
UFUNCTION(BlueprintCallable)
	void SetControlScheme(int NewControlScheme);
UFUNCTION(BlueprintCallable)
	void SetAngleAttacksWithMovement(int NewAngleAttacksWithMovement);
UFUNCTION(BlueprintCallable)
	void SetAngleAttackAfterPress(int NewAngleAttackAfterPress);
UFUNCTION(BlueprintCallable)
	void SaveSettings();
UFUNCTION(BlueprintCallable)
	void RestoreDefaultSettings();
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetToggleSprint() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FInputAxisKeyMapping GetSecondaryAxisKeyBinding(const struct FName& AxisName);
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FInputActionKeyMapping GetSecondaryActionKeyBinding(const struct FName& ActionName);
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FInputAxisKeyMapping GetPrimaryAxisKeyBinding(const struct FName& AxisName);
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FInputActionKeyMapping GetPrimaryActionKeyBinding(const struct FName& ActionName);
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetMouseYSensitivity() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetMouseYInverted() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetMouseXSensitivity() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetMouseXIsFlipAttackSide() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetMouseXInverted() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetMouseSensitivityLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetInverseAttackDirectionY() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetInverseAttackDirectionX() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetGamepadSensitivityLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetGamepadRightYSensitivity() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetGamepadRightYInverted() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetGamepadRightYDeadzone() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetGamepadRightXSensitivity() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetGamepadRightXInverted() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetGamepadRightXDeadzone() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetGamepadLeftYSensitivity() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetGamepadLeftYInverted() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetGamepadLeftYDeadzone() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetGamepadLeftXSensitivity() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetGamepadLeftXInverted() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetGamepadLeftXDeadzone() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetGamepadDeadzoneLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetControlScheme() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	void GetConsoleKeyBindings(TArray<struct FKey>* ConsoleKeyBindings);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static float GetAxisScale(const struct FInputAxisKeyMapping& AxisKeyBinding);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FName GetAxisOppositeDirectionName(const struct FName& AxisName);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FName GetAxisName(const struct FInputAxisKeyMapping& AxisKeyBinding);
UFUNCTION(BlueprintCallable, BlueprintPure)
	void GetAxisKeyBindings(TArray<struct FInputAxisKeyMapping>* AxisKeyBindings);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FKey GetAxisKey(const struct FInputAxisKeyMapping& AxisKeyBinding);
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetAngleAttacksWithMovement() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetAngleAttackAfterPress() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FName GetActionName(const struct FInputActionKeyMapping& ActionKeyBinding);
UFUNCTION(BlueprintCallable, BlueprintPure)
	void GetActionKeyBindings(TArray<struct FInputActionKeyMapping>* ActionKeyBindings);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FKey GetActionKey(const struct FInputActionKeyMapping& ActionKeyBinding);
UFUNCTION(BlueprintCallable)
	void ClearKeyBindings();
UFUNCTION(BlueprintCallable)
	void ApplySettings();
UFUNCTION(BlueprintCallable)
	void AddConsoleKeyBinding(const struct FKey& Key);
UFUNCTION(BlueprintCallable)
	void AddAxisKeyBinding(const struct FName& AxisName, const struct FKey& Key);
UFUNCTION(BlueprintCallable)
	void AddActionKeyBinding(const struct FName& ActionName, const struct FKey& Key);
};
