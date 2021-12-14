// Class Mordhau.Interactable

// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])

class UInteractable : public UInterface

{

public:





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.Interactable");

		return ptr;

	}







	void UnHighlight();

	void OnInteractPassively(class AMordhauCharacter* Character);

	void OnInteractionStart(class AMordhauCharacter* Character);

	void OnInteractionMaintained(class AMordhauCharacter* Character);

	void OnInteractionEnd();

	void OnHighlightStart();

	void OnHighlightMaintained(class AMordhauCharacter* Character);

	void OnHighlightEnd();

	void OnHeldInteractionStart(class AMordhauCharacter* Character);

	void InteractPassively(class AMordhauCharacter* Character);

	void InteractionStart(class AMordhauCharacter* Character);

	void InteractionMaintained(class AMordhauCharacter* Character);

	void InteractionEnd();

	void Highlight();

	void HeldInteractionStart(class AMordhauCharacter* Character);

	float GetMaxInteractionHoldTime();

	bool CanInteractPassively(class AMordhauCharacter* Character);

	bool CanInteract(class AMordhauCharacter* Character);

	bool CanHeldInteract(class AMordhauCharacter* Character);

};



