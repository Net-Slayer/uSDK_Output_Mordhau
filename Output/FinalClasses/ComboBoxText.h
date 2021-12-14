#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "ComboBoxText.generated.h"
// Class Mordhau.ComboBoxText
class MORDHAU_API UComboBoxText  :  public UWidget
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(EditAnywhere)
	TArray<struct FText> DefaultOptions; // (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY(EditAnywhere)
	struct FText SelectedOption; // (Edit, NativeAccessSpecifierPrivate)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FComboBoxStyle WidgetStyle; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FTableRowStyle ItemStyle; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere)
	struct FMargin ContentPadding; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere, AdvancedDisplay)
	float MaxListHeight; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere, AdvancedDisplay)
	bool HasDownArrow; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere, AdvancedDisplay)
	bool EnableGamepadNavigationMode; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere)
	struct FSlateFontInfo Font; // (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere)
	struct FSlateColor ForegroundColor; // (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool bIsFocusable; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, Instanced)
	struct FScriptDelegate OnGenerateWidgetEvent; // (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnSelectionChanged; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnOpening; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void SetSelectedOption(const struct FText& Option);
UFUNCTION(BlueprintCallable)
	bool RemoveOption(const struct FText& Option);
UFUNCTION(BlueprintCallable)
	void RefreshOptions();
UFUNCTION()
	void OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
UFUNCTION()
	void OnOpeningEvent__DelegateSignature();
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FText GetSelectedOption() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetOptionCount() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FText GetOptionAtIndex(int Index) const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int FindOptionIndex(const struct FText& Option) const;
UFUNCTION(BlueprintCallable)
	void ClearSelection();
UFUNCTION(BlueprintCallable)
	void ClearOptions();
UFUNCTION(BlueprintCallable)
	void AddOption(const struct FText& Option);
};
