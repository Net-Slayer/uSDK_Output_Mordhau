// Class Mordhau.MordhauInput

// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])

class UMordhauInput : public UObject

{

public:

	unsigned char                                      UnknownData_5T52[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	bool                                               bDefaultBindingsChecked;                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_4FEX[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FInputAxisConfigEntry>               AxisConfig;                                                // 0x0038(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	TArray<struct FInputActionKeyMapping>              ActionMappings;                                            // 0x0048(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                              // 0x0058(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	TArray<struct FKey>                                ConsoleKeys;                                               // 0x0068(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	int                                                ControlScheme;                                             // 0x0078(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	int                                                AngleAttacksWithMovement;                                  // 0x007C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	int                                                MouseXIsFlipAttackSide;                                    // 0x0080(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	int                                                InverseAttackDirectionX;                                   // 0x0084(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	int                                                InverseAttackDirectionY;                                   // 0x0088(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	int                                                AngleAttackAfterPress;                                     // 0x008C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	int                                                ToggleSprint;                                              // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	bool                                               bMouseXInverted;                                           // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_AU31[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              MouseXSensitivity;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	bool                                               bMouseYInverted;                                           // 0x009C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_G93C[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              MouseYSensitivity;                                         // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	bool                                               bGamepadLeftXInverted;                                     // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_L0BO[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              GamepadLeftXSensitivity;                                   // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	float                                              GamepadLeftXDeadzone;                                      // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	bool                                               bGamepadLeftYInverted;                                     // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_09U9[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              GamepadLeftYSensitivity;                                   // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	float                                              GamepadLeftYDeadzone;                                      // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	bool                                               bGamepadRightXInverted;                                    // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_8MDD[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              GamepadRightXSensitivity;                                  // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	float                                              GamepadRightXDeadzone;                                     // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	bool                                               bGamepadRightYInverted;                                    // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_8DN6[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              GamepadRightYSensitivity;                                  // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	float                                              GamepadRightYDeadzone;                                     // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_O1A9[0x14];                                    // 0x00D4(0x0014) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauInput");

		return ptr;

	}







	void SetToggleSprint(int NewToggleSprint);

	void SetMouseYSensitivity(float NewSensitivity);

	void SetMouseYInverted(bool bNewInverted);

	void SetMouseXSensitivity(float NewSensitivity);

	void SetMouseXIsFlipAttackSide(int NewIsFlipAttackSide);

	void SetMouseXInverted(bool bNewInverted);

	void SetInverseAttackDirectionY(int NewInverseAttackDirectionX);

	void SetInverseAttackDirectionX(int NewInverseAttackDirectionX);

	void SetGamepadRightYSensitivity(float NewSensitivity);

	void SetGamepadRightYInverted(bool bNewInverted);

	void SetGamepadRightYDeadzone(float NewDeadzone);

	void SetGamepadRightXSensitivity(float NewSensitivity);

	void SetGamepadRightXInverted(bool bNewInverted);

	void SetGamepadRightXDeadzone(float NewDeadzone);

	void SetGamepadLeftYSensitivity(float NewSensitivity);

	void SetGamepadLeftYInverted(bool bNewInverted);

	void SetGamepadLeftYDeadzone(float NewDeadzone);

	void SetGamepadLeftXSensitivity(float NewSensitivity);

	void SetGamepadLeftXInverted(bool bNewInverted);

	void SetGamepadLeftXDeadzone(float NewDeadzone);

	void SetControlScheme(int NewControlScheme);

	void SetAngleAttacksWithMovement(int NewAngleAttacksWithMovement);

	void SetAngleAttackAfterPress(int NewAngleAttackAfterPress);

	void SaveSettings();

	void RestoreDefaultSettings();

	int GetToggleSprint();

	struct FInputAxisKeyMapping GetSecondaryAxisKeyBinding(const struct FName& AxisName);

	struct FInputActionKeyMapping GetSecondaryActionKeyBinding(const struct FName& ActionName);

	struct FInputAxisKeyMapping GetPrimaryAxisKeyBinding(const struct FName& AxisName);

	struct FInputActionKeyMapping GetPrimaryActionKeyBinding(const struct FName& ActionName);

	float GetMouseYSensitivity();

	bool GetMouseYInverted();

	float GetMouseXSensitivity();

	int GetMouseXIsFlipAttackSide();

	bool GetMouseXInverted();

	struct FVector2D GetMouseSensitivityLimits();

	int GetInverseAttackDirectionY();

	int GetInverseAttackDirectionX();

	struct FVector2D GetGamepadSensitivityLimits();

	float GetGamepadRightYSensitivity();

	bool GetGamepadRightYInverted();

	float GetGamepadRightYDeadzone();

	float GetGamepadRightXSensitivity();

	bool GetGamepadRightXInverted();

	float GetGamepadRightXDeadzone();

	float GetGamepadLeftYSensitivity();

	bool GetGamepadLeftYInverted();

	float GetGamepadLeftYDeadzone();

	float GetGamepadLeftXSensitivity();

	bool GetGamepadLeftXInverted();

	float GetGamepadLeftXDeadzone();

	struct FVector2D GetGamepadDeadzoneLimits();

	int GetControlScheme();

	void GetConsoleKeyBindings(TArray<struct FKey>* ConsoleKeyBindings);

	float STATIC_GetAxisScale(const struct FInputAxisKeyMapping& AxisKeyBinding);

	struct FName STATIC_GetAxisOppositeDirectionName(const struct FName& AxisName);

	struct FName STATIC_GetAxisName(const struct FInputAxisKeyMapping& AxisKeyBinding);

	void GetAxisKeyBindings(TArray<struct FInputAxisKeyMapping>* AxisKeyBindings);

	struct FKey STATIC_GetAxisKey(const struct FInputAxisKeyMapping& AxisKeyBinding);

	int GetAngleAttacksWithMovement();

	int GetAngleAttackAfterPress();

	struct FName STATIC_GetActionName(const struct FInputActionKeyMapping& ActionKeyBinding);

	void GetActionKeyBindings(TArray<struct FInputActionKeyMapping>* ActionKeyBindings);

	struct FKey STATIC_GetActionKey(const struct FInputActionKeyMapping& ActionKeyBinding);

	void ClearKeyBindings();

	void ApplySettings();

	void AddConsoleKeyBinding(const struct FKey& Key);

	void AddAxisKeyBinding(const struct FName& AxisName, const struct FKey& Key);

	void AddActionKeyBinding(const struct FName& ActionName, const struct FKey& Key);

};



