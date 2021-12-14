#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Mordhau.generated.h"


UENUM(BlueprintType) // Enum Mordhau.EMordhauDamageType
enum class EMordhauDamageType : uint8
{
	Generic = 0,
	Melee = 1,
	Ranged = 2,
	Fall = 3,
	Fire = 4,
	EMordhauDamageType_MAX = 5,
};


UENUM(BlueprintType) // Enum Mordhau.EServerList
enum class EServerList : uint8
{
	Internet = 0,
	Favorites = 1,
	Recent = 2,
	Friends = 3,
	LAN = 4,
	EServerList_MAX = 5,
};


UENUM(BlueprintType) // Enum Mordhau.EAdvancedCharacterFlags
enum class EAdvancedCharacterFlags : uint8
{
	None = 0,
	Airborne = 1,
	Burning = 2,
	RagdollFalling = 3,
	Jumped = 4,
	EAdvancedCharacterFlags_MAX = 5,
};


UENUM(BlueprintType) // Enum Mordhau.EAttackType
enum class EAttackType : uint8
{
	Regular = 0,
	Riposte = 1,
	Combo = 2,
	PostClash = 3,
	Morph = 4,
	MissCombo = 5,
	EAttackType_MAX = 6,
};


UENUM(BlueprintType) // Enum Mordhau.EAttackStage
enum class EAttackStage : uint8
{
	Windup = 0,
	Release = 1,
	Recovery = 2,
	EAttackStage_MAX = 3,
};


UENUM(BlueprintType) // Enum Mordhau.EConfigValueType
enum class EConfigValueType : uint8
{
	bool_type = 0,
	int_type = 1,
	float_type = 2,
	vector_type = 3,
	vector2d_type = 4,
	rotator_type = 5,
	string_type = 6,
	color_type = 7,
	array_type = 8,
	EConfigValueType_MAX = 9,
};


UENUM(BlueprintType) // Enum Mordhau.ESwayMethod
enum class ESwayMethod : uint8
{
	Sin = 0,
	Constant = 1,
	ESwayMethod_MAX = 2,
};


UENUM(BlueprintType) // Enum Mordhau.EModeSwitchType
enum class EModeSwitchType : uint8
{
	Regular = 0,
	Simple = 1,
	LeftToRightHand = 2,
	RightToLeftHand = 3,
	EModeSwitchType_MAX = 4,
};


UENUM(BlueprintType) // Enum Mordhau.ESwitchStage
enum class ESwitchStage : uint8
{
	Reaching = 0,
	Drawing = 1,
	ESwitchStage_MAX = 2,
};


UENUM(BlueprintType) // Enum Mordhau.EFeintType
enum class EFeintType : uint8
{
	Regular = 0,
	Combo = 1,
	Chamber = 2,
	EFeintType_MAX = 3,
};


UENUM(BlueprintType) // Enum Mordhau.ERconLogTypes
enum class ERconLogTypes : uint8
{
	fatal = 0,
	error = 1,
	warning = 2,
	display = 3,
	log = 4,
	verbose = 5,
	very_verbose = 6,
	ERconLogTypes_MAX = 7,
};


UENUM(BlueprintType) // Enum Mordhau.EAIFacingMode
enum class EAIFacingMode : uint8
{
	Movement = 0,
	Location = 1,
	Actor = 2,
	Actor2D = 3,
	Bone = 4,
	EAIFacingMode_MAX = 5,
};


UENUM(BlueprintType) // Enum Mordhau.EBeaconRequest
enum class EBeaconRequest : uint8
{
	Ping = 0,
	ReserveSlots = 1,
	EBeaconRequest_MAX = 2,
};


UENUM(BlueprintType) // Enum Mordhau.EReservationStatus
enum class EReservationStatus : uint8
{
	Success = 0,
	Full = 1,
	Failure = 2,
	EReservationStatus_MAX = 3,
};


UENUM(BlueprintType) // Enum Mordhau.EHorseGear
enum class EHorseGear : uint8
{
	Walk = 0,
	Trot = 1,
	Canter = 2,
	Gallop = 3,
	Total = 4,
	EHorseGear_MAX = 5,
};


UENUM(BlueprintType) // Enum Mordhau.EMovementRestriction
enum class EMovementRestriction : uint8
{
	None = 0,
	PartialSprint = 1,
	Walk = 2,
	NoMovement = 3,
	EMovementRestriction_MAX = 4,
};


UENUM(BlueprintType) // Enum Mordhau.EPerk
enum class EPerk : uint8
{
	Pugilist = 0,
	Acrobat = 1,
	Fury = 2,
	Peasant = 3,
	Fireproof = 4,
	Huntsman = 5,
	Tank = 6,
	Rat = 7,
	Cat = 8,
	Wrecker = 9,
	Smith = 10,
	Dwarf = 11,
	SecondWind = 12,
	Bloodlust = 13,
	Rush = 14,
	FleshWound = 15,
	Scavenger = 16,
	Dodge = 17,
	Ranger = 18,
	Mule = 19,
	Butcher = 20,
	Stun = 21,
	Supplied = 22,
	EPerk_MAX = 23,
};


UENUM(BlueprintType) // Enum Mordhau.EAttackMove
enum class EAttackMove : uint8
{
	RightStrike = 0,
	LeftStrike = 1,
	Stab = 2,
	AltStab = 3,
	Kick = 4,
	Bash = 5,
	Couch = 6,
	Ranged = 7,
	EAttackMove_MAX = 8,
};


UENUM(BlueprintType) // Enum Mordhau.EProfileValidationFailedReason
enum class EProfileValidationFailedReason : uint8
{
	Unset = 0,
	NotEnoughPoints = 1,
	SkillTooLow = 2,
	EProfileValidationFailedReason_MAX = 3,
};


UENUM(BlueprintType) // Enum Mordhau.EMainWearableSlot
enum class EMainWearableSlot : uint8
{
	Head = 0,
	UpperChest = 1,
	Legs = 2,
	EMainWearableSlot_MAX = 3,
};


UENUM(BlueprintType) // Enum Mordhau.EWearableSlot
enum class EWearableSlot : uint8
{
	Head = 0,
	Coif = 1,
	UpperChest = 2,
	LowerChest = 3,
	Shoulders = 4,
	Arms = 5,
	Hands = 6,
	Legs = 7,
	Feet = 8,
	Total = 9,
	Invalid = 10,
	EWearableSlot_MAX = 11,
};


UENUM(BlueprintType) // Enum Mordhau.EItemRarity
enum class EItemRarity : uint8
{
	Common = 0,
	Uncommon = 1,
	Rare = 2,
	Epic = 3,
	Legendary = 4,
	Exclusive = 5,
	EItemRarity_MAX = 6,
};


UENUM(BlueprintType) // Enum Mordhau.EEquipmentCategory
enum class EEquipmentCategory : uint8
{
	Undefined = 0,
	OneHanded = 1,
	TwoHanded = 2,
	Ranged = 3,
	Shield = 4,
	Utility = 5,
	EEquipmentCategory_MAX = 6,
};


UENUM(BlueprintType) // Enum Mordhau.EEquipmentType
enum class EEquipmentType : uint8
{
	Undefined = 0,
	MeleeNoAltMode = 1,
	MeleeWithAltMode = 2,
	MeleeThrownAltMode = 3,
	ProjectileWeapon = 4,
	Shield = 5,
	Thrown = 6,
	Utility = 7,
	EEquipmentType_MAX = 8,
};


UENUM(BlueprintType) // Enum Mordhau.EAuxiliaryMeshMode
enum class EAuxiliaryMeshMode : uint8
{
	None = 0,
	Arrow = 1,
	Bolt = 2,
	Scabbard = 3,
	Pommel = 4,
	EAuxiliaryMeshMode_MAX = 5,
};


UENUM(BlueprintType) // Enum Mordhau.EMatchmakingState
enum class EMatchmakingState : uint8
{
	Idle = 0,
	Searching = 1,
	Waiting = 2,
	Joining = 3,
	EMatchmakingState_MAX = 4,
};


UENUM(BlueprintType) // Enum Mordhau.ERichPresenceStatus
enum class ERichPresenceStatus : uint8
{
	MainMenu = 0,
	LocalMatch = 1,
	OnlineMatch = 2,
	ERichPresenceStatus_MAX = 3,
};


UENUM(BlueprintType) // Enum Mordhau.ELobbyMessage
enum class ELobbyMessage : uint8
{
	Invalid = 0,
	Kick = 1,
	Status = 2,
	Profile = 3,
	ELobbyMessage_MAX = 4,
};


UENUM(BlueprintType) // Enum Mordhau.EOfficialServerVisibility
enum class EOfficialServerVisibility : uint8
{
	ServerBrowser = 0,
	Matchmaking = 1,
	EOfficialServerVisibility_MAX = 2,
};


UENUM(BlueprintType) // Enum Mordhau.EClientRequestState
enum class EClientRequestState : uint8
{
	SessionTicket = 0,
	Stats = 1,
	Inventory = 2,
	Authenticating = 3,
	Done = 4,
	EClientRequestState_MAX = 5,
};


UENUM(BlueprintType) // Enum Mordhau.EServerFilterCategories
enum class EServerFilterCategories : uint8
{
	Server = 0,
	Population = 1,
	Modded = 2,
	Password = 3,
	EServerFilterCategories_MAX = 4,
};


UENUM(BlueprintType) // Enum Mordhau.EBlockedReason
enum class EBlockedReason : uint8
{
	Parry = 0,
	Chamber = 1,
	World = 2,
	Clash = 3,
	Hit = 4,
	EBlockedReason_MAX = 5,
};


UENUM(BlueprintType) // Enum Mordhau.EBlockType
enum class EBlockType : uint8
{
	Regular = 0,
	AltRegular = 1,
	ShieldWall = 2,
	EBlockType_MAX = 3,
};


UENUM(BlueprintType) // Enum Mordhau.EMovementModifier
enum class EMovementModifier : uint8
{
	Walk = 0,
	Strafe = 1,
	Backpedal = 2,
	PartialSprint = 3,
	Sprint = 4,
	Rush = 5,
	Chasing = 6,
	Supersprint = 7,
	EMovementModifier_MAX = 8,
};


UENUM(BlueprintType) // Enum Mordhau.EServerSort
enum class EServerSort : uint8
{
	ServerNameAscend = 0,
	ServerNameDescend = 1,
	MapNameAscend = 2,
	MapNameDescend = 3,
	CountAscend = 4,
	CountDescend = 5,
	PingAscend = 6,
	PingDescend = 7,
	EServerSort_MAX = 8,
};


UENUM(BlueprintType) // Enum Mordhau.ECommandType
enum class ECommandType : uint8
{
	Invalid = 0,
	AddAdmin = 1,
	RemoveAdmin = 2,
	Kick = 3,
	Ban = 4,
	Unban = 5,
	Mute = 6,
	Unmute = 7,
	LookupPlayer = 8,
	ECommandType_MAX = 9,
};


UENUM(BlueprintType) // Enum Mordhau.EScoreFeedReason
enum class EScoreFeedReason : uint8
{
	Kill = 0,
	TeamKill = 1,
	Assist = 2,
	Suicide = 3,
	PlayerDamage = 4,
	PlayerTeamDamage = 5,
	OtherDamage = 6,
	OtherTeamDamage = 7,
	Capturing = 8,
	Captured = 9,
	Neutralizing = 10,
	Neutralized = 11,
	Objective = 12,
	Heal = 13,
	WaveCleared = 14,
	Repair = 15,
	VehicleDamage = 16,
	VehicleTeamDamage = 17,
	Spawn = 18,
	EScoreFeedReason_MAX = 19,
};


UENUM(BlueprintType) // Enum Mordhau.ECameraStyle
enum class ECameraStyle : uint8
{
	FirstPerson = 0,
	ThirdPerson = 1,
	Fixed = 2,
	ECameraStyle_MAX = 3,
};


UENUM(BlueprintType) // Enum Mordhau.EBanType
enum class EBanType : uint8
{
	VoteKick = 0,
	TeamKills = 1,
	EBanType_MAX = 2,
};


UENUM(BlueprintType) // Enum Mordhau.EAntiCheat
enum class EAntiCheat : uint8
{
	Secure_Only = 0,
	Insecure_Only = 1,
	Both = 2,
	EAntiCheat_MAX = 3,
};


UENUM(BlueprintType) // Enum Mordhau.EStatSetBy
enum class EStatSetBy : uint8
{
	Client = 0,
	Server = 1,
	EStatSetBy_MAX = 2,
};


UENUM(BlueprintType) // Enum Mordhau.EBroadcastTypes
enum class EBroadcastTypes : uint8
{
	None = 0,
	Chat = 1,
	Killfeed = 2,
	Scorefeed = 3,
	MatchState = 4,
	Login = 5,
	Custom = 6,
	Punishment = 7,
	EBroadcastTypes_MAX = 8,
};


UENUM(BlueprintType) // Enum Mordhau.EDownloadableContent
enum class EDownloadableContent : uint8
{
	SupporterPack = 0,
	EDownloadableContent_MAX = 1,
};


UENUM(BlueprintType) // Enum Mordhau.EInputMode
enum class EInputMode : uint8
{
	GAME_AND_UI = 0,
	Game = 1,
	UI_ONLY = 2,
	NONE_SPECIFIED = 3,
	EInputMode_MAX = 4,
};


UENUM(BlueprintType) // Enum Mordhau.ECallResult
enum class ECallResult : uint8
{
	Success = 0,
	Failure = 1,
	ECallResult_MAX = 2,
};


UENUM(BlueprintType) // Enum Mordhau.ESoundMix
enum class ESoundMix : uint8
{
	Master = 0,
	Effects = 1,
	Music = 2,
	Voice = 3,
	Instruments = 4,
	ESoundMix_MAX = 5,
};


UENUM(BlueprintType) // Enum Mordhau.EBudgetType
enum class EBudgetType : uint8
{
	Particle = 0,
	Total = 1,
	EBudgetType_MAX = 2,
};


UENUM(BlueprintType) // Enum Mordhau.ECameraShakeType
enum class ECameraShakeType : uint8
{
	Default = 0,
	Movement = 1,
	Combat = 2,
	ECameraShakeType_MAX = 3,
};


UENUM(BlueprintType) // Enum Mordhau.EDismembermentType
enum class EDismembermentType : uint8
{
	None = 0,
	Blunt = 1,
	Pierce = 2,
	Cut = 3,
	EDismembermentType_MAX = 4,
};


UENUM(BlueprintType) // Enum Mordhau.EMotionType
enum class EMotionType : uint8
{
	Idle = 0,
	Attack = 1,
	Parry = 2,
	Flinched = 3,
	Stunned = 4,
	Feinted = 5,
	Blocked = 6,
	Disarmed = 7,
	EquipmentSwitch = 8,
	DropEquipment = 9,
	Emote = 10,
	EquipmentModeSwitch = 11,
	RangedDraw = 12,
	RangedRelease = 13,
	QuickthrowDraw = 14,
	QuickthrowRelease = 15,
	InteractWith = 16,
	Reload = 17,
	RangedCancel = 18,
	CouchedAttack = 19,
	PommelDraw = 20,
	PommelThrow = 21,
	EmoteCancel = 22,
	Holster = 23,
	EnterVehicle = 24,
	LeaveVehicle = 25,
	RagdollFalling = 26,
	Climbing = 27,
	Ability = 28,
	EMotionType_MAX = 29,
};


UENUM(BlueprintType) // Enum Mordhau.EParryRecoveryType
enum class EParryRecoveryType : uint8
{
	Success = 0,
	Fail = 1,
	Miss = 2,
	EParryRecoveryType_MAX = 3,
};


UENUM(BlueprintType) // Enum Mordhau.EParryStage
enum class EParryStage : uint8
{
	Parry = 0,
	Recovery = 1,
	EParryStage_MAX = 2,
};


UENUM(BlueprintType) // Enum Mordhau.EWeaponState
enum class EWeaponState : uint8
{
	Loaded = 0,
	Releasing = 1,
	Recovery = 2,
	Loading = 3,
	Building = 4,
	EWeaponState_MAX = 5,
};


UENUM(BlueprintType) // Enum Mordhau.EVehicleFlags
enum class EVehicleFlags : uint8
{
	None = 0,
	Burning = 1,
	EVehicleFlags_MAX = 2,
};
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.RconParameter
struct FRconParameter
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString ParameterName; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString ParameterDescription; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bRequiredParameter; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<PlayFab_EPFJson> ExpectedJsonType; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.RconCommandInfo
struct FRconCommandInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString Name; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString Description; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString Author; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FString> Aliases; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FRconParameter> Parameters; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PrePhysTickFunction
struct FPrePhysTickFunction : public FTickFunction
{
GENERATED_USTRUCT_BODY()
public:
// Variables
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.SphericalLimbBounds
struct FSphericalLimbBounds
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName StartSocket; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName EndSocket; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Radius; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName AttachSocket; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector BoneStartCached; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector BoneEndCached; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.NetDamage
struct FNetDamage
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	uint8 PackedType; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 bone; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 PackedFlags; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector_NetQuantize Point; // (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AActor> DamageSource; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AActor> DamageAgent; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 Version; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.FloatAndVector
struct FFloatAndVector
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	float Float; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector Vector; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.DismemberedBoneData
struct FDismemberedBoneData
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FName BoneName; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bIsPartial; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bIsBluntForce; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector ForceDir; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AActor> Agent; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.DismemberedQueue
struct FDismemberedQueue
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	uint8 BoneSet[0x50]; // UNKNOWN PROPERTY: SetProperty
UPROPERTY()
	TArray<struct FDismemberedBoneData> DismemberedBonesQueue; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PatternInfo
struct FPatternInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTexture2D* Texture; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHasColor1; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHasColor2; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHasColor3; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PerspectiveFloat
struct FPerspectiveFloat
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PerspectiveAnimSequence
struct FPerspectiveAnimSequence
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimSequence* ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimSequence* FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PerspectiveCurveFloat
struct FPerspectiveCurveFloat
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PerspectiveBool
struct FPerspectiveBool
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PerspectiveAnimSequenceBase
struct FPerspectiveAnimSequenceBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimSequenceBase* ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimSequenceBase* FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PerspectiveAnimMontage
struct FPerspectiveAnimMontage
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimMontage* ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimMontage* FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.WoundInfo
struct FWoundInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D WoundType; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector WoundSize; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AttackInfo
struct FAttackInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanCombo; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanMissCombo; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bForcesRearingFromFront; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bNoFlinch; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bNoReleaseFlinch; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FlinchSpeedModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FlinchDurationModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Windup; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ComboWindupIncrease; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MissComboExtraWindupIncrease; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Release; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FeintLockOut; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int FeintCost; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ChamberFeintCost; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ChamberCost; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MorphCost; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D TurnCaps; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* TurnCapCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* HitEffectIKWeightCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitEffectSpeedUpExponent; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StaminaDrain; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ExtraStaminaDrainVsHeldBlock; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StaminaDamage; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> Damage; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> HeadBonus; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> LegBonus; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float WoodDamage; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StoneDamage; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bStopOnHit; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDrainAllStamOnBlock; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bRagdollOnBlock; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ChipDamagePercentageOnBlock; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWillClashWhenParried; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bRagdollOnHit; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDismountsHorseRider; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDismountsLadderUser; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MissStaminaCost; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitStaminaReward; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MissRecovery; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitKockbackFactor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FollowAttackDirectionFactor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FWoundInfo> WoundInfoArray; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* HitShake; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* HitStopShake; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 IgnoreBones[0x50]; // UNKNOWN PROPERTY: SetProperty
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PerspectiveAnimSequenceBaseArray
struct FPerspectiveAnimSequenceBaseArray
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FPerspectiveAnimSequenceBase> Array; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.BlockResult
struct FBlockResult
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EBlockedReason Reason; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsStun; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsDisarm; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsRanged; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCancel; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bPartyFlag; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bRequiresSelfBlockEvent; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Surface; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.WearableCustomization
struct FWearableCustomization
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ID; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8> Colors; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8> Team1Colors; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8> Team2Colors; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Pattern; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.EquipmentCustomization
struct FEquipmentCustomization
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ID; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8> Colors; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8> Parts; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Pattern; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Skin; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AppearanceCustomization
struct FAppearanceCustomization
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Emblem; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8> EmblemColors; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 MetalRoughnessScale; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 MetalTint; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Age; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Voice; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 VoicePitch; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsFemale; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Fat; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Skinny; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Strong; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 SkinColor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Face; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 EyeColor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 HairColor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Hair; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 FacialHair; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Eyebrows; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.FaceCustomization
struct FFaceCustomization
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	TArray<uint16_t> Translate; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<uint16_t> Rotate; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<uint16_t> Scale; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.SkillsCustomization
struct FSkillsCustomization
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	uint32_t Perks; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.SpawnablePlaneInfo
struct FSpawnablePlaneInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Forward; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Backward; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Left; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Right; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RightXAxisPercentage; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LeftXAxisPercentage; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.SpawnableObjectInfo
struct FSpawnableObjectInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStaticMesh* Preview; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USkeletalMesh* PreviewSkeletal; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Cost; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator RotationOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator RotationOffsetPreview; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator NotHitRotationPreviewOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector NotHitLocationPreviewOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector ScalePreview; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* ActorClass; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName DisplayName; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName PlacableLimitName; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int PlaceableLimitMax; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector SpawnActorOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDoNotAttach; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector BoxCheckExtents; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector BoxCheckOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.NetState
struct FNetState
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	float Timestamp; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float LocalTimestamp; // (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector_NetQuantize100 Position; // (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FRotator Rotation; // (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY()
	uint16_t Pitch; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint16_t Yaw; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 Roll; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.FootGroundingLimb
struct FFootGroundingLimb
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName TraceEndBone; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName TraceStartBone; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TraceDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D UpValueLimits; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FHitResult TraceResult; // (BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
UPROPERTY()
	float RootSpaceImpactZ; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator RotationOffset; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector InternalTranslationOffset; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector TranslationOffset; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.RepFaceArrayShortWithVersion
struct FRepFaceArrayShortWithVersion
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	TArray<uint16_t> Array; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 Version; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.RepArrayByteWithVersion
struct FRepArrayByteWithVersion
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	TArray<uint8> Array; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 Version; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.RepArraySkillsWithVersion
struct FRepArraySkillsWithVersion
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FSkillsCustomization Skills; // (NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 Version; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.RepArrayAppearanceWithVersion
struct FRepArrayAppearanceWithVersion
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FAppearanceCustomization Appearance; // (NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 Version; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ECSDuringPhysicsTickFunction
struct FECSDuringPhysicsTickFunction : public FTickFunction
{
GENERATED_USTRUCT_BODY()
public:
// Variables
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ECSPostPhysicsTickFunction
struct FECSPostPhysicsTickFunction : public FTickFunction
{
GENERATED_USTRUCT_BODY()
public:
// Variables
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.Stat
struct FStat
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName Name; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EStatSetBy SetBy; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.EquipmentPartEntry
struct FEquipmentPartEntry
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FText PartName; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> Parts; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.EmoteEntry
struct FEmoteEntry
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* EmoteMotion; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ActorSetAndArray
struct FActorSetAndArray
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	uint8 Set[0x50]; // UNKNOWN PROPERTY: SetProperty
UPROPERTY()
	TArray<class AActor*> Array; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ActorTraceEntry
struct FActorTraceEntry
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	class AActor* Actor; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	uint8 BonesHit[0x50]; // UNKNOWN PROPERTY: SetProperty
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PlayerCountArray
struct FPlayerCountArray
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> Values; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.HorseGearInfo
struct FHorseGearInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxSpeed; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxAcceleration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAllowJump; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanRiderRegenHealth; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanRiderRegenStamina; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanHorseRegen; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* HeadBobShake; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.GameServerFilter
struct FGameServerFilter
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsNotFull; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHasPlayers; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsEmpty; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsNotPasswordProtected; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsOfficial; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsModded; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MinOpenSlots; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString QueueName; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString ServerName; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString GameMode; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	MordhauOnlineSubsystem_EServerRegion Region; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNodePackedDismemberment
struct FAnimNodePackedDismemberment
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	TArray<int> DismemberedBonesIndices; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.DamageRecord
struct FDamageRecord
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	TWeakObjectPtr<class AController> Source; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float Time; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float Damage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.NetBlock
struct FNetBlock
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	uint8 BlockedReason; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 Flags; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 BlockedMove; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 Surface; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AActor> BlockingActor; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 Version; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.NetMotion
struct FNetMotion
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 ID; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 MotionType; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 MotionParam0; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 MotionParam1; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 MotionParam2; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 MotionDynamicParam; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.SessionSearchResult
struct FSessionSearchResult
{
GENERATED_USTRUCT_BODY()
public:
// Variables
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ServerSearchResult
struct FServerSearchResult : public FSessionSearchResult
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	EServerList ServerList; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.BasicServerInfo
struct FBasicServerInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString ServerName; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MaxPlayers; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PlayerMessageStruct
struct FPlayerMessageStruct
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString MessageBody; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString MessagePrefix; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int PlayerTeam; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.RconEventStruct
struct FRconEventStruct
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString EventName; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ChatCommandStruct
struct FChatCommandStruct
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString Name; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName Type; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bRequiresAdmin; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bBroadcastCommand; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.RconFlag
struct FRconFlag
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	TArray<class URconCommand*> CommandObjects; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.GameStateLastDemotableTickFunction
struct FGameStateLastDemotableTickFunction : public FTickFunction
{
GENERATED_USTRUCT_BODY()
public:
// Variables
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.GameStatePostPhysicsTickFunction
struct FGameStatePostPhysicsTickFunction : public FTickFunction
{
GENERATED_USTRUCT_BODY()
public:
// Variables
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.CapturePointGroup
struct FCapturePointGroup
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class AControlPoint*> CapturePoints; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.GroupSoundPlayer
struct FGroupSoundPlayer
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class UAudioComponent> CurrentlyPlayingSound; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector Location; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Entries; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.GroupSoundEntry
struct FGroupSoundEntry
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FVector Location; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float Time; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.GroupSoundGroup
struct FGroupSoundGroup
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FGroupSoundPlayer> GroupSoundPlayers; // (BlueprintVisible, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TMap<class AActor*, struct FGroupSoundEntry> SoundEntries; // (NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int SoundGroupsNum; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float EntryMaxAge; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MinEntriesToPlaySound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* SoundCue; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FadeOutDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SoundGroupMergeDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ServerStats
struct FServerStats
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	uint8 TargetTickRate; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 MinTickRate; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 MaxTickRate; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 AvgTickRate; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint32_t InBytesPerSecond; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint32_t OutBytesPerSecond; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint32_t ConfiguredInternetSpeed; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint32_t NumPlayers; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint32_t MaxPlayers; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PlayerCommand
struct FPlayerCommand
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	ECommandType Type; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString UniquePlayerID; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int IntParam; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString StringParam; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ReplicatedProjectileInfo
struct FReplicatedProjectileInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector_NetQuantize100 Location; // (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector_NetQuantize100 Orientation; // (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector_NetQuantizeNormal HitNormal; // (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BounceForce; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TWeakObjectPtr<class AActor> Creator; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 HitSurface; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHasStopped; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHasHitWorld; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 HitCounter; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.FindServerSessionsFilter
struct FFindServerSessionsFilter
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsNotFull; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHasPlayers; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsEmpty; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsNotPasswordProtected; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsDevBuild; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsOfficial; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsMatchmaking; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsModded; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EAntiCheat AntiCheat; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MinOpenSlots; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MinSlots; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MaxSlots; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MaxPing; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString ServerName; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString GameMode; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	MordhauOnlineSubsystem_EServerRegion Region; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.SpineSpaceAdditive
struct FSpineSpaceAdditive
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator head; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator Neck; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator Spine1; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator LeftShoulder; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator LeftArm; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator LeftForearm; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator LeftHand; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator RightShoulder; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator RightArm; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator RightForearm; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator RightHand; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.HighMidLowSpineSpaceAdditive
struct FHighMidLowSpineSpaceAdditive
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FSpineSpaceAdditive High; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FSpineSpaceAdditive Mid; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FSpineSpaceAdditive Low; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PerspectiveHighMidLowSpineSpaceAdditive
struct FPerspectiveHighMidLowSpineSpaceAdditive
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FHighMidLowSpineSpaceAdditive ThirdPerson; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FHighMidLowSpineSpaceAdditive FirstPerson; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.FacialBoneSetup
struct FFacialBoneSetup
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName BoneName; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName SelectionBoneOverride; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsSymmetrical; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SelectionBiasFactor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FName> ChildBones; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Level; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int SymmetryTwinBoneIndex; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName SymmetryTwinBoneName; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int BoneIndex; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D TranslateXRange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D TranslateYRange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D TranslateZRange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D ScaleXRange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D ScaleYRange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D ScaleZRange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D RotateXRange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D RotateYRange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D RotateZRange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNodePackedFaceCustomization
struct FAnimNodePackedFaceCustomization
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	TArray<struct FFacialBoneSetup> FaceCustomizationSetup; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FTransform> FaceCustomizationBonesTransforms; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PerspectiveVector2D
struct FPerspectiveVector2D
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.CharacterGearCustomization
struct FCharacterGearCustomization
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FWearableCustomization> Wearables; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FEquipmentCustomization> Equipment; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnglingSpineSpaceAdditive
struct FAnglingSpineSpaceAdditive
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FHighMidLowSpineSpaceAdditive Right; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FHighMidLowSpineSpaceAdditive Left; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.CharacterProfile
struct FCharacterProfile
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FText Name; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FCharacterGearCustomization GearCustomization; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAppearanceCustomization AppearanceCustomization; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FFaceCustomization FaceCustomization; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FSkillsCustomization SkillsCustomization; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString Category; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Transient)
	struct FString PlayFabId; // (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.CharMove
struct FCharMove
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FVector TargetLocation; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.CharPhysics
struct FCharPhysics
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FVector Location; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector Velocity; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FRotator Rotation; // (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ActorTraceData
struct FActorTraceData
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	bool bIgnoreFurtherTraces; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	bool bIsAllowedToAddForce; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	uint8 Set[0x50]; // UNKNOWN PROPERTY: SetProperty
UPROPERTY()
	TArray<struct FActorTraceEntry> ActorTraceEntryArray; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.EquipmentSkinEntry
struct FEquipmentSkinEntry
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FText SkinName; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FEquipmentPartEntry> PartTypes; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8> ColorTables; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FPatternInfo> Patterns; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPhysicsAsset* ShadowPhAt; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.EquipmentHolsterInfo
struct FEquipmentHolsterInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName HolsterSocket; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHidden; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHiddenIn1P; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimMontage* DrawAnimation; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimMontage* DrawAnimation1P; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimMontage* AltModeDrawAnimation1P; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FTransform Offset; // (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PlayerChatMessagesContainer
struct FPlayerChatMessagesContainer
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FPlayerMessageStruct> Messages; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.GameplayTagCondition
struct FGameplayTagCondition
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FGameplayTagContainer RequiredTags; // (BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FGameplayTagContainer BlockedTags; // (BlueprintVisible, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.GameplayTagConditionDelegate
struct FGameplayTagConditionDelegate
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FGameplayTagCondition Condition; // (BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
	struct FScriptMulticastDelegate Delegate; // (BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bIsConditionSatisfied; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.MordhauDamageInfo
struct FMordhauDamageInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FHitResult Hit; // (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EMordhauDamageType Type; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 SubType; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class AActor* DamageSource; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class AActor* DamageAgent; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWantsFlinchAnimation; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.SteamPlayFabConversionResult
struct FSteamPlayFabConversionResult
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<struct FString, struct FString> SteamIDPlayFabIDMap; // (BlueprintVisible, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ServerRestrictionInfo
struct FServerRestrictionInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsBanned; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int BanDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsMuted; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MuteDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNode_AttackAngling
struct FAnimNode_AttackAngling : public FAnimNode_SkeletalControlBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FSpineSpaceAdditive SpineSpaceAdditivePose; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference head; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference Neck; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference Spine; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LeftShoulder; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LeftArm; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LeftForearm; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LeftHand; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightShoulder; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightArm; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightForearm; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightHand; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNode_BlendBetweenBones
struct FAnimNode_BlendBetweenBones : public FAnimNode_SkeletalControlBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference BoneToModify; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference BlendBoneA; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference BlendBoneB; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference ReferenceBlendBone; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BlendBetweenAlpha; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNode_Dismemberment
struct FAnimNode_Dismemberment : public FAnimNode_SkeletalControlBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAnimNodePackedDismemberment Dismemberment; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNode_FaceCustomization
struct FAnimNode_FaceCustomization : public FAnimNode_SkeletalControlBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAnimNodePackedFaceCustomization FaceCustomization; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.LineTraceMemoryEntry
struct FLineTraceMemoryEntry
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FVector TraceStart; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector TraceEnd; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float DestroyTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AActor> Owner; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.DecalInfo
struct FDecalInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterialInterface* Material; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector Size; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ServerAddress
struct FServerAddress
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	uint32_t IP; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint16_t Port; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.MordhauColorItemTable
struct FMordhauColorItemTable
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FText TableName; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> Entries; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.Achievement
struct FAchievement
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FName Name; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PerspectiveBlendSpaceBase
struct FPerspectiveBlendSpaceBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UBlendSpaceBase* ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UBlendSpaceBase* FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNode_MordhauSpringBone
struct FAnimNode_MordhauSpringBone : public FAnimNode_SkeletalControlBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference bone; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsRotationSpring; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsRotationFlipped; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector BoneOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsBoneOffsetInComponentSpace; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BoneOffsetRotationProjection; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpringStiffness; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpringDamping; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpringMass; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxDisplacement; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUseDisplacementLimits; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector DisplacementLimitsMin; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector DisplacementLimitsMax; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TeleportThreshold; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector BoneLocation; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVectorSpringState SpringState; // (NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY()
	float DeltaTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNode_RotateAroundPivot
struct FAnimNode_RotateAroundPivot : public FAnimNode_SkeletalControlBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<Engine_EBoneControlSpace> Space; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference BoneToModify; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator Rotation; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector Pivot; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNode_SpeedWarping
struct FAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference Hips; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LeftLegTarget; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LeftUpLeg; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LeftFoot; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightLegTarget; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightUpLeg; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightFoot; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Speed; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TotalLegLength; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector Axis; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FFloatSpringState SpringState; // (NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpringStiffness; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpringDamping; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpringMass; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D HipsOffsetRemapIn; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D HipsOffsetRemapOut; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D HipsOffsetClamp; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float HipsZOffset; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float DeltaTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNode_SpineSpreader
struct FAnimNode_SpineSpreader : public FAnimNode_SkeletalControlBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpreadPercentage; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference Spine1; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightShoulder; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightArm; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightForearm; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightHand; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNode_StopBounces
struct FAnimNode_StopBounces : public FAnimNode_SkeletalControlBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference Hips; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LeftUpLeg; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LeftLeg; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LeftFoot; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightUpLeg; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightLeg; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightFoot; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LowerBack; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference Spine; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference Spine1; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference Neck; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference head; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LeftShoulder; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightShoulder; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference LeftArm; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference RightArm; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector BounceDuckWithBounceWeight; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator StopBounce; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float NotFirstPersonWithAtmosphericsAndAnimLOD1; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector RotateAroundHipsPivot; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector LeftFootTranslation; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector RightFootTranslation; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StopBounceMediumWeight; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StopBounceLightWeight; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float InverseHeadWeight; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNode_TwoBoneIKOffset
struct FAnimNode_TwoBoneIKOffset : public FAnimNode_TwoBoneIK
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector OffsetVector; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector RotateEndBonePivot; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator RotateEndBoneOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUseParentZLimit; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ParentZLimitOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bEffectorLocationIsOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNode_TwoHandedIK
struct FAnimNode_TwoHandedIK : public FAnimNode_SkeletalControlBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(EditAnywhere)
	struct FBoneReference IKBone; // (Edit, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 bAllowStretching : 1; // BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere)
	float StartStretchRatio; // (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere)
	float MaxStretchScale; // (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere)
	struct FBoneSocketTarget JointTarget; // (Edit, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector JointTargetLocation; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere)
	TEnumAsByte<Engine_EBoneControlSpace> JointTargetLocationSpace; // (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 bMaintainEffectorRelRot : 1; // BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsUsingFixedTarget; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FTransform SlidingTransform; // (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D SlidingStretchBlendLimits; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector FixedTarget; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference MainHandWeaponBone; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference MainHandBone; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference OffhandThumbFingerBone; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference OffhandIndexFingerBone; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference MainHandMiddleFingerBone; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AnimNode_WeightShift
struct FAnimNode_WeightShift : public FAnimNode_SkeletalControlBase
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<Engine_EBoneControlSpace> Space; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference BoneToModify; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference Bone1ToMaintain; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBoneReference Bone2ToMaintain; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator Rotation; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector Pivot; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.SpawnablePlaneTraceResult
struct FSpawnablePlaneTraceResult
{
GENERATED_USTRUCT_BODY()
public:
// Variables
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.SpawnablePlaneTraceSettings
struct FSpawnablePlaneTraceSettings
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> CheckActorsOnPlaneTraceHit; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TEnumAsByte<Engine_EObjectTypeQuery>> HitTraceObjectTypes; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ForwadDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BackDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LeftDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RightDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RightForwardPercentage; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LeftForwardPercentage; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector TraceAmount; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.CharState
struct FCharState
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	uint8 State; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.CharLook
struct FCharLook
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	uint8 FacingMode; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector2D Offset2D; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PerceptionInfo
struct FPerceptionInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSight; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHearing; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDamage; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 Team; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	float UpdateTime; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.CharacterInventory
struct FCharacterInventory
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class AMordhauEquipment* RightHand; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class AMordhauEquipment* LeftHand; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class AMordhauEquipment*> Equipment; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.VehicleTransitionInfo
struct FVehicleTransitionInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimSequence* Animation; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Duration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BlendTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PlayerProfile
struct FPlayerProfile
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Rank; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 RankDisplayType; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Banner; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FCharacterProfile Character; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.MatchmakingTicket
struct FMatchmakingTicket
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString QueueName; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString TicketId; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.RichPresence
struct FRichPresence
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	ERichPresenceStatus Status; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString GameMode; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString MapName; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.MatchRewards
struct FMatchRewards
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FPlayFabMatch Match; // (NativeAccessSpecifierPublic)
UPROPERTY()
	int Gold; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int XP; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.UnlockRecipe
struct FUnlockRecipe
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString ItemId; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int RequiredGold; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int RequiredXP; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FString> RequiredItems; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FString> UnlockedItems; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.CondensedUserLagReport
struct FCondensedUserLagReport
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	int GroupCount; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int64_t GroupTimestamp; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint64_t CombinedInBytesPerSec; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint64_t CombinedOutBytesPerSec; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint16_t CombinedTickRate; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint16_t CombinedPlayerCount; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int MaxTimeDifference; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.UserLagReport
struct FUserLagReport
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	int64_t Timestamp; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint32_t InBytesPerSecond; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint32_t OutBytesPerSecond; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 AvgTickRate; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 PlayerCount; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.AdminFlag
struct FAdminFlag
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FString Name; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString Flag; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString Description; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FString> Commands; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ServerInfo
struct FServerInfo : public FBasicServerInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FString HostName; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString GameMode; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString MapName; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString DockerHost; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString DockerServer; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.LobbySearchResult
struct FLobbySearchResult : public FSessionSearchResult
{
GENERATED_USTRUCT_BODY()
public:
// Variables
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.VisibilityMap
struct FVisibilityMap
{
GENERATED_USTRUCT_BODY()
public:
// Variables
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.VisibilityList
struct FVisibilityList
{
GENERATED_USTRUCT_BODY()
public:
// Variables
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ColorTableEntry
struct FColorTableEntry
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FText EntryName; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FLinearColor Color; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FLinearColor DisplayedColor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.MordhauColorTable
struct FMordhauColorTable
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FText TableName; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FColorTableEntry> Entries; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.MapInfo
struct FMapInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadOnly)
	struct FString GameModeMapName; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	class UGameModeMetadata* GameModeMetadata; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	class UMapMetadata* MapMetadata; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.SoundClassInfo
struct FSoundClassInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	class USoundClass* SoundClass; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<class USoundMix*> SoundMixes; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.SoundMixInfo
struct FSoundMixInfo
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	class USoundMix* SoundMix; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<class USoundClass*> SoundClasses; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.WoundMaterialData
struct FWoundMaterialData
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FVector Location; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector UpVector; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector RightVector; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector ForwardVector; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector2D WoundType; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.MordhauDamageEvent
struct FMordhauDamageEvent : public FPointDamageEvent
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	EMordhauDamageType Type; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 SubType; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AActor> DamageSource; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AActor> DamageAgent; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bWantsFlinchAnimation; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PermutationValuePair
struct FPermutationValuePair
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	int Permutation; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float Value; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ArrayOfActor
struct FArrayOfActor
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class AActor*> Actors; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PerspectiveAnglingSpineSpaceAdditive
struct FPerspectiveAnglingSpineSpaceAdditive
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAnglingSpineSpaceAdditive ThirdPerson; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAnglingSpineSpaceAdditive FirstPerson; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.RconResponseStruct
struct FRconResponseStruct
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPlayFabJsonObject* RootObject; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPlayFabJsonObject* DataObject; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString CommandName; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString Type; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSuccess; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString FailureReason; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PlayerlistPlayer
struct FPlayerlistPlayer
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FString Name; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int Team; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString PlayFabId; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString Platform; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bIsABot; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PlayerlistResponse
struct FPlayerlistResponse
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FRconResponseStruct BaseResponse; // (NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FPlayerlistPlayer> Players; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int PlayerCount; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int BotCount; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bVerbose; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bIncludeBots; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.RconRequestInfoResponse
struct FRconRequestInfoResponse
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRconCommandInfo CommandInfo; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSuccess; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.EmbedFooterField
struct FEmbedFooterField
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FString Text; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.EmbedAuthorField
struct FEmbedAuthorField
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FString Name; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.EmbedFieldField
struct FEmbedFieldField
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FString Name; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString Value; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bInline; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.DiscordEmbed
struct FDiscordEmbed
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FString Title; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString Description; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString Color; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString Timestamp; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FEmbedFooterField Footer; // (NativeAccessSpecifierPublic)
UPROPERTY()
	struct FEmbedAuthorField Author; // (NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FEmbedFieldField> Fields; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.DiscordMessage
struct FDiscordMessage
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	TArray<struct FDiscordEmbed> Embeds; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString Content; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString Username; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.ReportMessage
struct FReportMessage
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FString Body; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString Prefix; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int Team; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};


USTRUCT(BlueprintType, Blueprintable) // ScriptStruct Mordhau.PlayerReport
struct FPlayerReport
{
GENERATED_USTRUCT_BODY()
public:
// Variables
UPROPERTY()
	struct FString PlayerName; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString ReporteePlayFabID; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString ReporterPlayFabID; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString ReportType; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString Timestamp; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString ServerName; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString ScreenshotFilename; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<float> KillsDeathsTksTD; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FReportMessage> Messages; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
