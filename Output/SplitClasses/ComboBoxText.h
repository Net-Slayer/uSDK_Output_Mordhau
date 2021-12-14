// Class Mordhau.ComboBoxText

// 0x0CE8 (FullSize[0x0DF0] - InheritedSize[0x0108])

class UComboBoxText : public UWidget

{

public:

	TArray<struct FText>                               DefaultOptions;                                            // 0x0108(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FText                                       SelectedOption;                                            // 0x0118(0x0018) (Edit, NativeAccessSpecifierPrivate)

	struct FComboBoxStyle                              WidgetStyle;                                               // 0x0130(0x03F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FTableRowStyle                              ItemStyle;                                                 // 0x0520(0x07C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FMargin                                     ContentPadding;                                            // 0x0CE8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	float                                              MaxListHeight;                                             // 0x0CF8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               HasDownArrow;                                              // 0x0CFC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               EnableGamepadNavigationMode;                               // 0x0CFD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_XOS4[0x2];                                     // 0x0CFE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FSlateFontInfo                              Font;                                                      // 0x0D00(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FSlateColor                                 ForegroundColor;                                           // 0x0D50(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	bool                                               bIsFocusable;                                              // 0x0D78(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_WW3O[0x3];                                     // 0x0D79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FScriptDelegate                             OnGenerateWidgetEvent;                                     // 0x0D7C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_WYM0[0x4];                                     // 0x0D8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0D90(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnOpening;                                                 // 0x0DA0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_DEPM[0x40];                                    // 0x0DB0(0x0040) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.ComboBoxText");

		return ptr;

	}







	void SetSelectedOption(const struct FText& Option);

	bool RemoveOption(const struct FText& Option);

	void RefreshOptions();

	void OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);

	void OnOpeningEvent__DelegateSignature();

	struct FText GetSelectedOption();

	int GetOptionCount();

	struct FText GetOptionAtIndex(int Index);

	int FindOptionIndex(const struct FText& Option);

	void ClearSelection();

	void ClearOptions();

	void AddOption(const struct FText& Option);

};



