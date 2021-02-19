#pragma once

// RealmRoyale (0.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_TgClient_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TgClient.TgBrowserManager
// 0x0158 (0x01B8 - 0x0060)
class UTgBrowserManager : public UObject
{
public:
	struct FString                                     URLGold;                                                  // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     URLAlert;                                                 // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     URLStore;                                                 // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     URLBooster;                                               // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     URLSupport;                                               // 0x00A0(0x0010) (NeedCtorLink)
	struct FString                                     URLProfile;                                               // 0x00B0(0x0010) (NeedCtorLink)
	struct FString                                     URLRedirect;                                              // 0x00C0(0x0010) (NeedCtorLink)
	struct FString                                     URLActivateKey;                                           // 0x00D0(0x0010) (NeedCtorLink)
	struct FString                                     URLCreateAccount;                                         // 0x00E0(0x0010) (NeedCtorLink)
	struct FString                                     URLRecoverPassword;                                       // 0x00F0(0x0010) (NeedCtorLink)
	struct FString                                     URLRecoverUsername;                                       // 0x0100(0x0010) (NeedCtorLink)
	struct FString                                     URLGodPack;                                               // 0x0110(0x0010) (NeedCtorLink)
	struct FString                                     URLRanked;                                                // 0x0120(0x0010) (NeedCtorLink)
	struct FString                                     URLFacebookPromo;                                         // 0x0130(0x0010) (NeedCtorLink)
	struct FString                                     URLTwitterPromo;                                          // 0x0140(0x0010) (NeedCtorLink)
	struct FString                                     URLRecruitPromo;                                          // 0x0150(0x0010) (NeedCtorLink)
	struct FString                                     URLPlayerStats;                                           // 0x0160(0x0010) (NeedCtorLink)
	struct FString                                     URLTwitchSignup;                                          // 0x0170(0x0010) (NeedCtorLink)
	struct FString                                     URLTwitchHelp;                                            // 0x0180(0x0010) (NeedCtorLink)
	struct FString                                     URLLaunchTournament;                                      // 0x0190(0x0010) (NeedCtorLink)
	struct FString                                     URLLinkAccount;                                           // 0x01A0(0x0010) (NeedCtorLink)
	class UUIWebBrowser*                               m_pContainer;                                             // 0x01B0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgBrowserManager");
		return ptr;
	}


	void AccountLink();
	void LaunchTournament();
	void TwitchSignup();
	void TwitchHelp();
	void PlayerStats(const struct FString& sPlayerName);
	void RecruitPromo();
	void TwitterPromo();
	void FacebookPromo();
	void RankedRules();
	void GodPack();
	void SubmitBugReport(const struct FString& sPlayerName);
	void RecoverUsername();
	void RecoverPassword();
	void CreateAccount();
	void ActivateKey();
	void Profile();
	void Support();
	void Booster();
	void Store();
	void Gold();
	void Alert();
	void STATIC_SetContainer(class UUIWebBrowser* pContainer);
	void STATIC_ResizeView();
	void STATIC_Close();
	void STATIC_OpenVideo(const struct FString& URL, bool bAddName);
	void STATIC_OpenURL(const struct FString& URL, bool bShowNavButtons);
	void STATIC_ExternalOpenURL(const struct FString& URL, bool bAddLang);
	bool STATIC_IsBrowserLoaded();
};


// Class TgClient.TgChatData
// 0x0064 (0x00C4 - 0x0060)
class UTgChatData : public UObject
{
public:
	int                                                m_nId;                                                    // 0x0060(0x0004)
	int                                                m_nSoundId;                                               // 0x0064(0x0004)
	int                                                m_nChannel;                                               // 0x0068(0x0004)
	unsigned long                                      m_bFeedback : 1;                                          // 0x006C(0x0004)
	unsigned long                                      m_bSenderIsVIP : 1;                                       // 0x006C(0x0004)
	unsigned long                                      m_bIsVGS : 1;                                             // 0x006C(0x0004)
	struct FString                                     m_sSender;                                                // 0x0070(0x0010) (NeedCtorLink)
	struct Fdword                                      m_dwSenderVIPTier;                                        // 0x0080(0x0004)
	struct FString                                     m_sMessage;                                               // 0x0084(0x0010) (NeedCtorLink)
	struct FString                                     m_sSenderColor;                                           // 0x0094(0x0010) (NeedCtorLink)
	struct FString                                     m_sSenderClass;                                           // 0x00A4(0x0010) (NeedCtorLink)
	struct FString                                     m_sMessageColor;                                          // 0x00B4(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgChatData");
		return ptr;
	}

};


// Class TgClient.TgClientHUD
// 0x008C (0x062C - 0x05A0)
class ATgClientHUD : public ATgHUD
{
public:
	int                                                m_nMapId;                                                 // 0x05A0(0x0004)
	unsigned char                                      m_eState;                                                 // 0x05A4(0x0001)
	unsigned char                                      m_ePromptType;                                            // 0x05A5(0x0001)
	unsigned char                                      m_eCaptureState;                                          // 0x05A6(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05A7(0x0001) MISSED OFFSET
	unsigned long                                      m_bCommitMap : 1;                                         // 0x05A8(0x0004)
	unsigned long                                      m_bShowCursor : 1;                                        // 0x05A8(0x0004)
	unsigned long                                      m_bCaptureKeys : 1;                                       // 0x05A8(0x0004)
	float                                              m_fFadeTime;                                              // 0x05AC(0x0004)
	float                                              m_fFadeTimer;                                             // 0x05B0(0x0004)
	float                                              m_fReturnTime;                                            // 0x05B4(0x0004)
	float                                              m_fReturnTimer;                                           // 0x05B8(0x0004)
	float                                              m_fControllerTime;                                        // 0x05BC(0x0004)
	float                                              m_fControllerTimer;                                       // 0x05C0(0x0004)
	class UUIGameMoviePlayer*                          m_pMovie;                                                 // 0x05C4(0x0008)
	TArray<struct FString>                             m_sNeededScenes;                                          // 0x05CC(0x0010) (NeedCtorLink)
	TArray<struct FSceneInfo>                          m_ScenePreloads;                                          // 0x05DC(0x0010) (NeedCtorLink)
	TArray<class UTgGfxScene*>                         m_SceneStack;                                             // 0x05EC(0x0010) (NeedCtorLink)
	TArray<class UTgGfxScene*>                         m_PopupStack;                                             // 0x05FC(0x0010) (NeedCtorLink)
	TArray<class UUIMoviePlayer*>                      m_MoviePlayers;                                           // 0x060C(0x0010) (AlwaysInit, NeedCtorLink)
	class UUIGAPeachStartup*                           m_GAPeach;                                                // 0x061C(0x0008) (AlwaysInit)
	class UTgDevMenuMoviePlayer*                       m_DevMenu;                                                // 0x0624(0x0008) (AlwaysInit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgClientHUD");
		return ptr;
	}


	void Tick(float DeltaTime);
	void PostBeginPlay();
	void STATIC_TogglePushToTalk(bool bEnable);
	void STATIC_ToggleDevMenu();
	void STATIC_ToggleHUD();
	void STATIC_TestDidIt(int nActivityId, int nCount);
	void STATIC_ResetViewCenterPoint();
	bool STATIC_RemoveSceneFromStack(class UTgGfxScene* pScene, bool bPopAll);
	bool STATIC_PushScene(const struct FString& sName, bool bSkipPrivilegeCheck);
	bool STATIC_PopScene(int nIndex);
	void STATIC_ClearScenes(unsigned char ePreviousState, unsigned char eTargetState);
	void STATIC_ShowSubtitle(int nMessage, float fTime);
	void ShowHit(class AActor* Target, float fDamageAmount, bool bIsShieldHit, struct FExtraDamageInfo* ExtraInfo);
	void ShowCursor(bool bShow);
	void Initialize();
	bool STATIC_IsLoggedIn();
	bool STATIC_IsInGame();
};


// Class TgClient.TgData_Cards
// 0x0008 (0x0068 - 0x0060)
class UTgData_Cards : public UTgObject
{
public:
	class UUIGameMoviePlayer*                          m_pMovie;                                                 // 0x0060(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgData_Cards");
		return ptr;
	}


	void Initialize(class UUIGameMoviePlayer* pMoviePlayer);
};


// Class TgClient.TgDataChunk
// 0x0054 (0x016C - 0x0118)
class UTgDataChunk : public UGFxObject
{
public:
	class UTgDataHandler*                              m_DataHandler;                                            // 0x0118(0x0008)
	class UTgDataChunk*                                m_ParentChunk;                                            // 0x0120(0x0008)
	TArray<struct FDataField>                          m_DataList;                                               // 0x0128(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UTgDataChunk*>                        m_ChildChunks;                                            // 0x0138(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      m_bIsDirty : 1;                                           // 0x0148(0x0004)
	unsigned long                                      m_bIsSubscribed : 1;                                      // 0x0148(0x0004)
	unsigned long                                      m_bClearOnMapChange : 1;                                  // 0x0148(0x0004)
	struct FScriptDelegate                             __usc_Subscribe_Delegate__Delegate;                       // 0x014C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __usc_Unsubscribe_Delegate__Delegate;                     // 0x015C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgDataChunk");
		return ptr;
	}


	void STATIC_usc_Unsubscribe();
	void STATIC_usc_Subscribe();
	void usc_Unsubscribe_Delegate();
	void usc_Subscribe_Delegate();
	class ATgPlayerController* STATIC_GetPlayerController();
	void STATIC_NotifyMapChange();
	bool STATIC_IsSubscribed();
	void SetDirty();
	bool STATIC_GetField(const struct FString& FieldName, struct FASValue* NewValue);
	bool STATIC_SetField(const struct FString& FieldName, bool bCreateIfMissing, struct FASValue* NewValue);
	void STATIC_AddField(const struct FString& FieldName, struct FASValue* NewValue);
	void STATIC_ClearDelegates();
	void STATIC_SetDelegates();
	void STATIC_RemoveChild(class UTgDataChunk* Child, bool bClearDelegates);
	void STATIC_AddChild(class UTgDataChunk* Child);
	void STATIC_DataUpdateEvent();
	void STATIC_Update(float DeltaTime, bool bSkipCallback);
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgDataHandler
// 0x0018 (0x0130 - 0x0118)
class UTgDataHandler : public UGFxObject
{
public:
	class UUIMoviePlayer*                              m_MP;                                                     // 0x0118(0x0008)
	TArray<class UTgDataChunk*>                        m_DataChunkList;                                          // 0x0120(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgDataHandler");
		return ptr;
	}


	void STATIC_NotifyMapChange();
	void STATIC_Update(float DeltaTime);
	void STATIC_InitializeDataHandler(class UUIMoviePlayer* mp);
};


// Class TgClient.TgDataManager
// 0x0038 (0x0098 - 0x0060)
class UTgDataManager : public UObject
{
public:
	class UTgData_EOM*                                 m_EOMData;                                                // 0x0060(0x0008)
	class UTgData_Cards*                               m_CardData;                                               // 0x0068(0x0008)
	class UTgData_Notifications*                       m_NotificationData;                                       // 0x0070(0x0008)
	TArray<class UTgDataObject*>                       m_DataSets;                                               // 0x0078(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UTgDataObject*>                       m_Callbacks;                                              // 0x0088(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgDataManager");
		return ptr;
	}

};


// Class TgClient.TgGameLaunch
// 0x0024 (0x04F0 - 0x04CC)
class ATgGameLaunch : public AGameInfo
{
public:
	struct FString                                     LoginName;                                                // 0x04CC(0x0010) (Config, GlobalConfig, NeedCtorLink)
	struct FString                                     LoginPwd;                                                 // 0x04DC(0x0010) (Config, GlobalConfig, NeedCtorLink)
	unsigned long                                      SaveLoginName : 1;                                        // 0x04EC(0x0004) (Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameLaunch");
		return ptr;
	}

};


// Class TgClient.TgGameViewportClient
// 0x0024 (0x01E8 - 0x01C4)
class UTgGameViewportClient : public UPComGameViewportClient
{
public:
	TArray<class UTgObjectReferencer*>                 m_DeferredManifests;                                      // 0x01C4(0x0010) (NeedCtorLink)
	unsigned long                                      m_dragging : 1;                                           // 0x01D4(0x0004)
	unsigned long                                      m_wasMaximized : 1;                                       // 0x01D4(0x0004)
	unsigned long                                      bReadLeftStickAxis : 1;                                   // 0x01D4(0x0004) (Transient)
	unsigned long                                      bReadRightStickAxis : 1;                                  // 0x01D4(0x0004) (Transient)
	float                                              fRawLeftStickAxis;                                        // 0x01D8(0x0004) (Transient)
	float                                              fRawRightStickAxis;                                       // 0x01DC(0x0004) (Transient)
	float                                              fRawRightStickX;                                          // 0x01E0(0x0004) (Transient)
	float                                              fRawRightStickY;                                          // 0x01E4(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameViewportClient");
		return ptr;
	}


	bool Init(struct FString* OutError);
	void STATIC_LayoutPlayers();
	void STATIC_GetSubtitleRegion(struct FVector2D* MinPos, struct FVector2D* MaxPos);
	void STATIC_GameSessionEnded();
	void STATIC_InitTgGameViewportClient();
	bool STATIC_IsGfxMovieCapturingMouseInput();
	void STATIC_NativeGameSessionEnded();
	void DrawTransition(class UCanvas* Canvas);
};


// Class TgClient.TgSeasonTicketManager
// 0x00A8 (0x012C - 0x0084)
class UTgSeasonTicketManager : public UPComUIManagerBase
{
public:
	class UUIGameMoviePlayer*                          m_pMovie;                                                 // 0x0084(0x0008)
	TArray<class UUIData_EsportsDisplayGroup*>         m_DisplayGroups;                                          // 0x008C(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x009C(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.TgSeasonTicketManager.m_MatchupDescriptions
	unsigned char                                      UnknownData01[0x48];                                      // 0x00E4(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.TgSeasonTicketManager.m_TeamImages

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgSeasonTicketManager");
		return ptr;
	}

};


// Class TgClient.TgSynchronizedTimer
// 0x0014 (0x012C - 0x0118)
class UTgSynchronizedTimer : public UGFxObject
{
public:
	unsigned long                                      m_bPausedByGame : 1;                                      // 0x0118(0x0004)
	unsigned long                                      m_bSuppressCallback : 1;                                  // 0x0118(0x0004)
	unsigned long                                      m_bRunning : 1;                                           // 0x0118(0x0004)
	unsigned long                                      m_bPaused : 1;                                            // 0x0118(0x0004)
	class UUIMoviePlayer*                              m_MP;                                                     // 0x011C(0x0008)
	class UTgTimerManager*                             m_TimerManager;                                           // 0x0124(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgSynchronizedTimer");
		return ptr;
	}


	bool STATIC_IsPaused();
	bool STATIC_IsRunning();
	void STATIC_EventCallback(int nTimerId, TEnumAsByte<ETGT_EVENT> eEvent);
	void STATIC_ExpireTimer(bool bFromCallback);
	void STATIC_UpdateTimer(float fElapsed, float fTotal, bool bPaused, bool bFromCallback);
	void STATIC_StartTimer(float fSeconds);
};


// Class TgClient.UIDataShop
// 0x0214 (0x0274 - 0x0060)
class UUIDataShop : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0060(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataShop.m_LootTableItems
	unsigned char                                      UnknownData01[0x48];                                      // 0x00A8(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataShop.m_Vendors
	unsigned char                                      UnknownData02[0x48];                                      // 0x00F0(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataShop.m_RealMoneyItems
	unsigned char                                      UnknownData03[0x48];                                      // 0x0138(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataShop.m_Items
	unsigned char                                      UnknownData04[0x48];                                      // 0x0180(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataShop.m_SKUtoLootId
	TArray<struct FMarketplaceProductDetails>          m_MarketplaceProducts;                                    // 0x01C8(0x0010) (NeedCtorLink)
	struct FMultiMap_Mirror                            m_RequiredItemReverseLookup;                              // 0x01D8(0x0048) (Native)
	TArray<struct Fdword>                              m_dwContinuousRequestVendors;                             // 0x0220(0x0010) (NeedCtorLink)
	float                                              m_fContinuousRequestTimer;                                // 0x0230(0x0004)
	TArray<struct Fdword>                              m_dwInfoVendors;                                          // 0x0234(0x0010) (NeedCtorLink)
	TArray<struct Fdword>                              m_dwStoreVendors;                                         // 0x0244(0x0010) (NeedCtorLink)
	TArray<struct Fdword>                              m_dwRealMoneyVendors;                                     // 0x0254(0x0010) (NeedCtorLink)
	unsigned long                                      m_bAllStoreVendorsLoaded : 1;                             // 0x0264(0x0004)
	unsigned long                                      m_bFinishedStoringRealMoneyItemData : 1;                  // 0x0264(0x0004)
	struct Fdword                                      m_dwVendorRequestId;                                      // 0x0268(0x0004)
	struct Fdword                                      m_dwContinuousVendorsRequestId;                           // 0x026C(0x0004)
	struct Fdword                                      m_dwRealMoneyVendorsRequestId;                            // 0x0270(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataShop");
		return ptr;
	}


	void GetMarketplaceProductsByType(class UUIGameMoviePlayer* pMoviePlayer, TEnumAsByte<EMediaItemType> MediaType, TArray<struct FMarketplaceProductDetails>* AvailableProducts);
	void STATIC_StoreRealMoneyItemData();
};


// Class TgClient.UILandingPanelManager
// 0x0060 (0x00E4 - 0x0084)
class UUILandingPanelManager : public UPComUIManagerBase
{
public:
	struct FPointer                                    VfTable_ITgCallbackInterface;                             // 0x0084(0x0008) (Const, Native, NoExport)
	class UUIGameMoviePlayer*                          m_pMovie;                                                 // 0x008C(0x0008)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0094(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UILandingPanelManager.m_JsonDiscountData
	class UTgCallbackContainer*                        m_CallbackContainer;                                      // 0x00DC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UILandingPanelManager");
		return ptr;
	}

};


// Class TgClient.UIMoviePlayer
// 0x00A8 (0x02A0 - 0x01F8)
class UUIMoviePlayer : public UGFxMoviePlayer
{
public:
	int                                                m_nLastTimerIndex;                                        // 0x01F8(0x0004)
	unsigned long                                      m_bInitialized : 1;                                       // 0x01FC(0x0004)
	unsigned long                                      m_bInTransition : 1;                                      // 0x01FC(0x0004)
	unsigned long                                      m_bResizeForSafeZones : 1;                                // 0x01FC(0x0004)
	class UGFxObject*                                  m_mcRoot;                                                 // 0x0200(0x0008)
	class UGFxObject*                                  m_mcGlobal;                                               // 0x0208(0x0008)
	class UTgDataHandler*                              m_DataHandler;                                            // 0x0210(0x0008)
	class UTgTimerManager*                             m_TimerManager;                                           // 0x0218(0x0008)
	class UClass*                                      m_DataHandlerClass;                                       // 0x0220(0x0008)
	struct FPointer                                    m_pTgCallbackDevice;                                      // 0x0228(0x0008) (Native)
	struct FPointer                                    m_pKeybindLookup;                                         // 0x0230(0x0008) (Native)
	class UOnlineSubsystem*                            OnlineSub;                                                // 0x0238(0x0008)
	TScriptInterface<class UOnlineGameInterface>       GameInterface;                                            // 0x0240(0x0010)
	TScriptInterface<class UOnlineVoiceInterface>      VoiceInterface;                                           // 0x0250(0x0010)
	TScriptInterface<class UOnlinePlayerInterface>     PlayerInterface;                                          // 0x0260(0x0010)
	TScriptInterface<class UOnlineContentInterface>    ContentInterface;                                         // 0x0270(0x0010)
	TScriptInterface<class UOnlinePlayerInterfaceEx>   PlayerInterfaceEx;                                        // 0x0280(0x0010)
	TScriptInterface<class UOnlineMarketplaceInterface> MarketplaceInterface;                                     // 0x0290(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIMoviePlayer");
		return ptr;
	}


	void ShowEmptyStoreDialog();
	void SetMarketplaceVisibility(bool Visible, unsigned char IconPosition);
	void STATIC_usc_ClipboardCopy(const struct FString& Str);
	struct FString STATIC_usc_ClipboardPaste();
	void STATIC_InitOSSRef();
	void Init(class ULocalPlayer* LocPlay);
	void Tick(float DeltaTime);
	bool STATIC_usc_IME_Exists();
	bool STATIC_usc_IME_SetEnabled(bool bEnabled);
	struct FString STATIC_usc_TranslateMsg(const struct FString& Identifier, const struct FString& SectionName);
	struct FString STATIC_usc_TranslateMsgId(int nId);
	void STATIC_ShowTransitionScene(bool bShow);
	void STATIC_usc_toggle_arrow_key_navigation(bool bAllowNav);
	void STATIC_usc_toggle_key_capture(bool bCapture);
	void STATIC_usc_toggle_cursor(bool bShow);
	void STATIC_usc_Console_Command(const struct FString& Cmd);
	void STATIC_usc_Data_Handler_Created();
	void STATIC_QuitGame();
	void UnregisterEngineCallbacks();
	void RegisterEngineCallbacks();
	struct FString STATIC_GetTranslatedKeyBind(const struct FString& Command, int nAlternate, bool bLocalizeKB, bool bLocalizeMouse, bool bLocalizeGamepad);
	void STATIC_UpdateViewportForSafeAreas();
	void STATIC_NativeTick(float DeltaTime);
	void STATIC_InitializeDataHandler();
	void STATIC_PostInit();
	void STATIC_OnClose();
	class ATgPlayerController* GetPlayerOwner();
	class ATgClientHUD* STATIC_GetHUD();
};


// Class TgClient.TgDevMenuMoviePlayer
// 0x0008 (0x02A8 - 0x02A0)
class UTgDevMenuMoviePlayer : public UUIMoviePlayer
{
public:
	class UGFxObject*                                  m_DevMenu;                                                // 0x02A0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgDevMenuMoviePlayer");
		return ptr;
	}


	bool STATIC_FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> Event);
	void STATIC_OnClose();
	void STATIC_PostInit();
	void STATIC_usc_FillCommands(const struct FString& MenuName);
	void STATIC_AddSubMenu(const struct FString& Section, const struct FString& submenuname, const struct FString& DisplayName);
	void STATIC_AddCommand(const struct FString& Section, const struct FString& Command, const struct FString& DisplayName);
	void STATIC_FillSubMenuCommands(const struct FString& submenuname);
	void STATIC_FillMenuCommands();
};


// Class TgClient.UIGAPeachStartup
// 0x0010 (0x02B0 - 0x02A0)
class UUIGAPeachStartup : public UUIMoviePlayer
{
public:
	float                                              m_fHirezAnimTimer;                                        // 0x02A0(0x0004)
	float                                              m_fPeachAnimTimer;                                        // 0x02A4(0x0004)
	float                                              m_fSkipDelay;                                             // 0x02A8(0x0004)
	float                                              m_fSkipDelayTimer;                                        // 0x02AC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIGAPeachStartup");
		return ptr;
	}


	void STATIC_OnClose();
	void STATIC_PostInit();
	void Init(class ULocalPlayer* LocPlay);
	void STATIC_UpdateViewportForSafeAreas();
};


// Class TgClient.UIObject
// 0x0000 (0x0118 - 0x0118)
class UUIObject : public UGFxObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIObject");
		return ptr;
	}

};


// Class TgClient.UIPatchNotesJsonManager
// 0x0080 (0x0104 - 0x0084)
class UUIPatchNotesJsonManager : public UPComUIManagerBase
{
public:
	class UUIGameMoviePlayer*                          m_pMovie;                                                 // 0x0084(0x0008)
	struct FPatchNotesData                             m_PatchData;                                              // 0x008C(0x0068)
	TArray<class UTexture2DDynamic*>                   m_PatchImages;                                            // 0x00F4(0x0010) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIPatchNotesJsonManager");
		return ptr;
	}

};


// Class TgClient.UIData
// 0x0000 (0x0060 - 0x0060)
class UUIData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData");
		return ptr;
	}

};


// Class TgClient.TgDataObject
// 0x005C (0x00BC - 0x0060)
class UTgDataObject : public UUIData
{
public:
	unsigned long                                      m_bDirty : 1;                                             // 0x0060(0x0004)
	unsigned long                                      m_bCallback : 1;                                          // 0x0060(0x0004)
	TArray<TEnumAsByte<EUIID>>                         m_Laundry;                                                // 0x0064(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0074(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.TgDataObject.m_Data

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgDataObject");
		return ptr;
	}

};


// Class TgClient.TgData_EOM
// 0x00CC (0x0188 - 0x00BC)
class UTgData_EOM : public UTgDataObject
{
public:
	int                                                m_nKills;                                                 // 0x00BC(0x0004)
	int                                                m_nPlace;                                                 // 0x00C0(0x0004)
	int                                                m_nGameId;                                                // 0x00C4(0x0004)
	int                                                m_nProfile;                                               // 0x00C8(0x0004)
	int                                                m_nQueueId;                                               // 0x00CC(0x0004)
	int                                                m_nGameTime;                                              // 0x00D0(0x0004)
	int                                                m_nLocalTF;                                               // 0x00D4(0x0004)
	int                                                m_nWinningTF;                                             // 0x00D8(0x0004)
	int                                                m_nClassXPTotal;                                          // 0x00DC(0x0004)
	int                                                m_nClassXPTimeAlive;                                      // 0x00E0(0x0004)
	int                                                m_nClassXPPlacement;                                      // 0x00E4(0x0004)
	int                                                m_nClassXPElims;                                          // 0x00E8(0x0004)
	float                                              m_fClassXPMultiplier;                                     // 0x00EC(0x0004)
	int                                                m_nBattlepassXPTotal;                                     // 0x00F0(0x0004)
	int                                                m_nBattlepassXPTimeAlive;                                 // 0x00F4(0x0004)
	int                                                m_nBattlepassXPPlacement;                                 // 0x00F8(0x0004)
	int                                                m_nBattlepassXPElims;                                     // 0x00FC(0x0004)
	float                                              m_fBattlepassXPMultiplier;                                // 0x0100(0x0004)
	int                                                m_nQuestsCompletedThisSession;                            // 0x0104(0x0004)
	int                                                m_nXPBonus;                                               // 0x0108(0x0004)
	int                                                m_nXPEarned;                                              // 0x010C(0x0004)
	int                                                m_nCharacterXPEarned;                                     // 0x0110(0x0004)
	int                                                m_nCharacterXPBonus;                                      // 0x0114(0x0004)
	int                                                m_nTokens;                                                // 0x0118(0x0004)
	int                                                m_nTokensFound;                                           // 0x011C(0x0004)
	int                                                m_nTokensKills;                                           // 0x0120(0x0004)
	int                                                m_nTokensBonus;                                           // 0x0124(0x0004)
	int                                                m_nTokensQuests;                                          // 0x0128(0x0004)
	int                                                m_nTokensVictory;                                         // 0x012C(0x0004)
	TArray<class UUIData_PlayerMatchRecord*>           m_Players;                                                // 0x0130(0x0010) (NeedCtorLink)
	TArray<class UUIData_Quest*>                       m_AlreadyCompletedQuests;                                 // 0x0140(0x0010) (NeedCtorLink)
	TArray<struct FCurrencyEntry>                      m_vCurrencyEntries;                                       // 0x0150(0x0010) (NeedCtorLink)
	struct FCurrencyEntry                              m_NullCurrency;                                           // 0x0160(0x0028) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgData_EOM");
		return ptr;
	}

};


// Class TgClient.TgData_Notifications
// 0x0010 (0x00CC - 0x00BC)
class UTgData_Notifications : public UTgDataObject
{
public:
	TArray<struct FNotification>                       m_Notifications;                                          // 0x00BC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgData_Notifications");
		return ptr;
	}

};


// Class TgClient.UIData_Actor
// 0x0008 (0x0068 - 0x0060)
class UUIData_Actor : public UUIData
{
public:
	class AActor*                                      m_pActor;                                                 // 0x0060(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_Actor");
		return ptr;
	}

};


// Class TgClient.UIData_BattlePassLevel
// 0x0010 (0x0070 - 0x0060)
class UUIData_BattlePassLevel : public UUIData
{
public:
	int                                                m_nLevel;                                                 // 0x0060(0x0004)
	class UUIData_LootTableItem*                       m_pLTI;                                                   // 0x0064(0x0008)
	unsigned long                                      m_bUnlocked : 1;                                          // 0x006C(0x0004)
	unsigned long                                      m_bPremium : 1;                                           // 0x006C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_BattlePassLevel");
		return ptr;
	}

};


// Class TgClient.UIData_BattlePassTier
// 0x001C (0x007C - 0x0060)
class UUIData_BattlePassTier : public UUIData
{
public:
	int                                                m_nTier;                                                  // 0x0060(0x0004)
	struct Fdword                                      m_dwPlayerBPXP;                                           // 0x0064(0x0004)
	TArray<class UUIData*>                             m_pLevelRewards;                                          // 0x0068(0x0010) (NeedCtorLink)
	unsigned long                                      m_bHasBonusRewards : 1;                                   // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_BattlePassTier");
		return ptr;
	}

};


// Class TgClient.UIData_Challenge
// 0x004C (0x00AC - 0x0060)
class UUIData_Challenge : public UUIData
{
public:
	struct Fdword                                      m_dwActivityId;                                           // 0x0060(0x0004)
	struct Fdword                                      m_eStatus;                                                // 0x0064(0x0004)
	unsigned long                                      m_bIsDirty : 1;                                           // 0x0068(0x0004)
	unsigned long                                      m_bCompletionAck : 1;                                     // 0x0068(0x0004)
	unsigned long                                      m_bGoalsInitialized : 1;                                  // 0x0068(0x0004)
	TArray<class UUIData_Goal*>                        m_pPrimaryGoals;                                          // 0x006C(0x0010) (NeedCtorLink)
	TArray<class UUIData_Goal*>                        m_pGatingGoals;                                           // 0x007C(0x0010) (NeedCtorLink)
	TArray<class UUIData_Goal*>                        m_pAllDoneGoals;                                          // 0x008C(0x0010) (NeedCtorLink)
	TArray<class UUIData_Goal*>                        m_pAuxiliaryGoals;                                        // 0x009C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_Challenge");
		return ptr;
	}

};


// Class TgClient.UIData_ChampionChests
// 0x0010 (0x0070 - 0x0060)
class UUIData_ChampionChests : public UUIData
{
public:
	TArray<class UUIData_ChestExtended*>               m_Chests;                                                 // 0x0060(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_ChampionChests");
		return ptr;
	}

};


// Class TgClient.UIData_ChestExtended
// 0x003C (0x009C - 0x0060)
class UUIData_ChestExtended : public UUIData
{
public:
	int                                                nItemId;                                                  // 0x0060(0x0004)
	int                                                nBotRefId;                                                // 0x0064(0x0004)
	int                                                nVendorId;                                                // 0x0068(0x0004)
	int                                                nSortOrder;                                               // 0x006C(0x0004)
	int                                                nRarity;                                                  // 0x0070(0x0004)
	int                                                nBundleVendorId;                                          // 0x0074(0x0004)
	int                                                nBundleCount;                                             // 0x0078(0x0004)
	int                                                nBundleLootIds[0x4];                                      // 0x007C(0x0004)
	int                                                nBundleItemCounts[0x4];                                   // 0x008C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_ChestExtended");
		return ptr;
	}

};


// Class TgClient.UIData_CustomGame
// 0x0040 (0x00A0 - 0x0060)
class UUIData_CustomGame : public UUIData
{
public:
	struct Fdword                                      m_dwOriginalQueueId;                                      // 0x0060(0x0004)
	struct Fdword                                      m_dwMatchId;                                              // 0x0064(0x0004)
	struct FString                                     m_sQueueName;                                             // 0x0068(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      m_dwOwnerPlayerId;                                        // 0x0078(0x0004)
	struct FString                                     m_sOwnerName;                                             // 0x007C(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      m_bHasPassword : 1;                                       // 0x008C(0x0004)
	struct Fdword                                      m_dwSiteId;                                               // 0x0090(0x0004)
	int                                                m_nMinPlayers;                                            // 0x0094(0x0004)
	int                                                m_nMaxPlayers;                                            // 0x0098(0x0004)
	int                                                m_nNumPlayers;                                            // 0x009C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_CustomGame");
		return ptr;
	}

};


// Class TgClient.UIData_CustomGameManager
// 0x0024 (0x0084 - 0x0060)
class UUIData_CustomGameManager : public UUIData
{
public:
	struct FString                                     sName;                                                    // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDesc;                                                    // 0x0070(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nIcon;                                                    // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_CustomGameManager");
		return ptr;
	}

};


// Class TgClient.UIData_CustomPlayer
// 0x0008 (0x0068 - 0x0060)
class UUIData_CustomPlayer : public UUIData
{
public:
	int                                                m_nTaskForce;                                             // 0x0060(0x0004)
	struct Fdword                                      m_dwPlayerId;                                             // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_CustomPlayer");
		return ptr;
	}

};


// Class TgClient.UIData_CustomQueue
// 0x002C (0x008C - 0x0060)
class UUIData_CustomQueue : public UUIData
{
public:
	struct Fdword                                      m_dwQueueId;                                              // 0x0060(0x0004)
	struct FString                                     m_sDesc;                                                  // 0x0064(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sShortDesc;                                             // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                m_nTaskforceSize;                                         // 0x0084(0x0004)
	int                                                m_nSortOrder;                                             // 0x0088(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_CustomQueue");
		return ptr;
	}

};


// Class TgClient.UIData_DailyRewardDay
// 0x000C (0x006C - 0x0060)
class UUIData_DailyRewardDay : public UUIData
{
public:
	int                                                m_nDayIndex;                                              // 0x0060(0x0004)
	int                                                m_nCurrentDay;                                            // 0x0064(0x0004)
	unsigned long                                      m_bClaimed : 1;                                           // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_DailyRewardDay");
		return ptr;
	}

};


// Class TgClient.UIData_Deck
// 0x0060 (0x00C0 - 0x0060)
class UUIData_Deck : public UUIData
{
public:
	class UUIDataItem*                                 m_pDeckItems[0x5];                                        // 0x0060(0x0008)
	int                                                m_nId;                                                    // 0x0088(0x0004)
	unsigned long                                      m_bIsTemplate : 1;                                        // 0x008C(0x0004)
	struct FString                                     m_sName;                                                  // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     m_sDisplayName;                                           // 0x00A0(0x0010) (NeedCtorLink)
	struct FString                                     m_sDescription;                                           // 0x00B0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_Deck");
		return ptr;
	}

};


// Class TgClient.UIData_Default
// 0x0000 (0x0060 - 0x0060)
class UUIData_Default : public UUIData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_Default");
		return ptr;
	}

};


// Class TgClient.UIData_EsportsDisplayGroup
// 0x0020 (0x0080 - 0x0060)
class UUIData_EsportsDisplayGroup : public UUIData
{
public:
	struct FString                                     m_sName;                                                  // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        m_nGroupIds;                                              // 0x0070(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_EsportsDisplayGroup");
		return ptr;
	}

};


// Class TgClient.UIData_Float
// 0x0004 (0x0064 - 0x0060)
class UUIData_Float : public UUIData
{
public:
	float                                              m_fValue;                                                 // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_Float");
		return ptr;
	}

};


// Class TgClient.UIData_Goal
// 0x000C (0x006C - 0x0060)
class UUIData_Goal : public UUIData
{
public:
	struct Fdword                                      m_dwActivityId;                                           // 0x0060(0x0004)
	struct Fdword                                      m_dwGoalGroupId;                                          // 0x0064(0x0004)
	struct Fdword                                      m_dwGoalId;                                               // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_Goal");
		return ptr;
	}

};


// Class TgClient.UIData_HeaderTab
// 0x0014 (0x0074 - 0x0060)
class UUIData_HeaderTab : public UUIData
{
public:
	struct FString                                     m_sTitle;                                                 // 0x0060(0x0010) (NeedCtorLink)
	int                                                m_nCTACount;                                              // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_HeaderTab");
		return ptr;
	}

};


// Class TgClient.UIData_Index
// 0x0004 (0x0064 - 0x0060)
class UUIData_Index : public UUIData
{
public:
	struct Fdword                                      m_dwValue;                                                // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_Index");
		return ptr;
	}

};


// Class TgClient.UIData_LeaderboardPlayer
// 0x0040 (0x00A0 - 0x0060)
class UUIData_LeaderboardPlayer : public UUIData
{
public:
	struct FString                                     sName;                                                    // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	struct FQWord                                      qwPortalUserId;                                           // 0x0070(0x0008)
	float                                              fRank;                                                    // 0x0078(0x0004)
	int                                                nLevel;                                                   // 0x007C(0x0004)
	int                                                nWins;                                                    // 0x0080(0x0004)
	int                                                nLosses;                                                  // 0x0084(0x0004)
	int                                                nPerk;                                                    // 0x0088(0x0004)
	int                                                nRegion;                                                  // 0x008C(0x0004)
	int                                                nTitle;                                                   // 0x0090(0x0004)
	int                                                nPosition;                                                // 0x0094(0x0004)
	class UUIDataChampion*                             pChampion;                                                // 0x0098(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_LeaderboardPlayer");
		return ptr;
	}

};


// Class TgClient.UIData_LeagueEOM
// 0x002C (0x008C - 0x0060)
class UUIData_LeagueEOM : public UUIData
{
public:
	class UUIDataLeague*                               m_pLeague;                                                // 0x0060(0x0008)
	class UUIDataLeagueTier*                           m_pTier;                                                  // 0x0068(0x0008)
	int                                                m_nPointChange;                                           // 0x0070(0x0004)
	int                                                m_nCurrentPoints;                                         // 0x0074(0x0004)
	int                                                m_nWins;                                                  // 0x0078(0x0004)
	int                                                m_nLosses;                                                // 0x007C(0x0004)
	int                                                m_nMatchesPlayed;                                         // 0x0080(0x0004)
	class UUIData_LeagueTierChange*                    m_TierChange;                                             // 0x0084(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_LeagueEOM");
		return ptr;
	}

};


// Class TgClient.UIData_LeagueTierChange
// 0x0019 (0x0079 - 0x0060)
class UUIData_LeagueTierChange : public UUIData
{
public:
	class UUIDataLeague*                               m_League;                                                 // 0x0060(0x0008)
	class UUIDataLeagueTier*                           m_PrevTier;                                               // 0x0068(0x0008)
	class UUIDataLeagueTier*                           m_NextTier;                                               // 0x0070(0x0008)
	TEnumAsByte<EUIDLTC_PromotionType>                 m_ePromotionType;                                         // 0x0078(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_LeagueTierChange");
		return ptr;
	}

};


// Class TgClient.UIData_List
// 0x0010 (0x0070 - 0x0060)
class UUIData_List : public UUIData
{
public:
	TArray<class UUIData*>                             pData;                                                    // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_List");
		return ptr;
	}

};


// Class TgClient.UIData_List_TitleIcon
// 0x0014 (0x0084 - 0x0070)
class UUIData_List_TitleIcon : public UUIData_List
{
public:
	int                                                nIcon;                                                    // 0x0070(0x0004)
	TArray<struct FString>                             sTitles;                                                  // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_List_TitleIcon");
		return ptr;
	}

};


// Class TgClient.UIData_LobbySlotItem
// 0x0010 (0x0070 - 0x0060)
class UUIData_LobbySlotItem : public UUIData
{
public:
	TEnumAsByte<EUIChampionCustomizeState>             eState;                                                   // 0x0060(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FPointer                                    pItemInfo;                                                // 0x0064(0x0008) (Native)
	unsigned long                                      bActive : 1;                                              // 0x006C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_LobbySlotItem");
		return ptr;
	}

};


// Class TgClient.UIData_LootTableItem
// 0x0024 (0x0084 - 0x0060)
class UUIData_LootTableItem : public UUIData
{
public:
	struct Fdword                                      m_dwLootId;                                               // 0x0060(0x0004)
	class UUIData_Vendor*                              m_pParentVendor;                                          // 0x0064(0x0008)
	TArray<class UUIDataPrice*>                        m_Prices;                                                 // 0x006C(0x0010) (NeedCtorLink)
	struct Fdword                                      m_dwPrevRequiredItemId;                                   // 0x007C(0x0004)
	unsigned long                                      m_bIsDynamicStoreBundle : 1;                              // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_LootTableItem");
		return ptr;
	}

};


// Class TgClient.UIData_LTIAggregate
// 0x0010 (0x0070 - 0x0060)
class UUIData_LTIAggregate : public UUIData
{
public:
	TArray<class UUIData_LootTableItem*>               m_Items;                                                  // 0x0060(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_LTIAggregate");
		return ptr;
	}

};


// Class TgClient.UIData_MapMarker
// 0x0014 (0x0074 - 0x0060)
class UUIData_MapMarker : public UUIData
{
public:
	unsigned long                                      m_bActive : 1;                                            // 0x0060(0x0004)
	float                                              m_fTimer;                                                 // 0x0064(0x0004)
	struct FVector                                     m_vLocation;                                              // 0x0068(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_MapMarker");
		return ptr;
	}

};


// Class TgClient.UIData_MasteryReward
// 0x001C (0x007C - 0x0060)
class UUIData_MasteryReward : public UUIData
{
public:
	struct Fdword                                      m_dwLevel;                                                // 0x0060(0x0004)
	class UUIData_LootTableItem*                       m_pLTIGiven;                                              // 0x0064(0x0008)
	class UUIDataItem*                                 m_pItem;                                                  // 0x006C(0x0008)
	class UUIDataChampion*                             m_pChampion;                                              // 0x0074(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_MasteryReward");
		return ptr;
	}

};


// Class TgClient.UIData_MatchBoosterActivated
// 0x0018 (0x0078 - 0x0060)
class UUIData_MatchBoosterActivated : public UUIData
{
public:
	struct Fdword                                      dwSourcePlayerId;                                         // 0x0060(0x0004)
	struct Fdword                                      dwTaskForce;                                              // 0x0064(0x0004)
	struct Fdword                                      eItemBoosterSubtype;                                      // 0x0068(0x0004)
	float                                              fMultiplier;                                              // 0x006C(0x0004)
	class UUIDataItem*                                 pBoosterItem;                                             // 0x0070(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_MatchBoosterActivated");
		return ptr;
	}

};


// Class TgClient.UIData_MatchInvitePlayerState
// 0x0001 (0x0061 - 0x0060)
class UUIData_MatchInvitePlayerState : public UUIData
{
public:
	TEnumAsByte<EMatchInvitePlayerState>               m_eState;                                                 // 0x0060(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_MatchInvitePlayerState");
		return ptr;
	}

};


// Class TgClient.UIData_MatchMember
// 0x0030 (0x0090 - 0x0060)
class UUIData_MatchMember : public UUIData
{
public:
	struct FString                                     sName;                                                    // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      dwPlayerId;                                               // 0x0070(0x0004)
	struct FQWord                                      qwUserId;                                                 // 0x0074(0x0008)
	unsigned long                                      bIsVIP : 1;                                               // 0x007C(0x0004)
	unsigned long                                      bIsLocalTF : 1;                                           // 0x007C(0x0004)
	int                                                nTaskForce;                                               // 0x0080(0x0004)
	struct Fdword                                      dwVIPTier;                                                // 0x0084(0x0004)
	class UUIDataPlayer*                               pPlayerData;                                              // 0x0088(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_MatchMember");
		return ptr;
	}

};


// Class TgClient.UIData_MultiQueue
// 0x0034 (0x0094 - 0x0060)
class UUIData_MultiQueue : public UUIData
{
public:
	int                                                nIcon;                                                    // 0x0060(0x0004)
	struct FString                                     sName;                                                    // 0x0064(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDesc;                                                    // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UUIData_Queue*>                       pQueues;                                                  // 0x0084(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_MultiQueue");
		return ptr;
	}

};


// Class TgClient.UIData_Pair
// 0x0010 (0x0070 - 0x0060)
class UUIData_Pair : public UUIData
{
public:
	class UUIData*                                     m_pFirst;                                                 // 0x0060(0x0008)
	class UUIData*                                     m_pSecond;                                                // 0x0068(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_Pair");
		return ptr;
	}

};


// Class TgClient.UIData_PartyKick
// 0x000C (0x006C - 0x0060)
class UUIData_PartyKick : public UUIData
{
public:
	int                                                m_nRequiredPartySize;                                     // 0x0060(0x0004)
	class UObject*                                     m_pPostPartyKickResponse;                                 // 0x0064(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_PartyKick");
		return ptr;
	}

};


// Class TgClient.UIData_PlayerMatchRecord
// 0x00E4 (0x0144 - 0x0060)
class UUIData_PlayerMatchRecord : public UUIData
{
public:
	int                                                nBotId;                                                   // 0x0060(0x0004)
	int                                                nPlayerId;                                                // 0x0064(0x0004)
	struct Fdword                                      dwCharacterId;                                            // 0x0068(0x0004)
	int                                                nLevel;                                                   // 0x006C(0x0004)
	int                                                nKills;                                                   // 0x0070(0x0004)
	int                                                nDeaths;                                                  // 0x0074(0x0004)
	int                                                nAssists;                                                 // 0x0078(0x0004)
	int                                                nEarnedCredits;                                           // 0x007C(0x0004)
	int                                                nHealingPlayer;                                           // 0x0080(0x0004)
	int                                                nHealingBot;                                              // 0x0084(0x0004)
	int                                                nHealingTotal;                                            // 0x0088(0x0004)
	int                                                nSelfHealing;                                             // 0x008C(0x0004)
	int                                                nDmgTaken;                                                // 0x0090(0x0004)
	int                                                nDmgPlayer;                                               // 0x0094(0x0004)
	int                                                nDmgBot;                                                  // 0x0098(0x0004)
	int                                                nDmgTotal;                                                // 0x009C(0x0004)
	int                                                nSoloKills;                                               // 0x00A0(0x0004)
	int                                                nFlankKills;                                              // 0x00A4(0x0004)
	int                                                nMultikill;                                               // 0x00A8(0x0004)
	int                                                nKillstreak;                                              // 0x00AC(0x0004)
	int                                                nDmgStructure;                                            // 0x00B0(0x0004)
	int                                                nDmgMitigated;                                            // 0x00B4(0x0004)
	int                                                nObjectiveTime;                                           // 0x00B8(0x0004)
	int                                                nCards[0x5];                                              // 0x00BC(0x0004)
	int                                                nCardLevels[0x5];                                         // 0x00D0(0x0004)
	int                                                nLegendary;                                               // 0x00E4(0x0004)
	int                                                nLegendaryLevel;                                          // 0x00E8(0x0004)
	int                                                nPurchasedItems[0x4];                                     // 0x00EC(0x0004)
	int                                                nPurchasedItemLevels[0x4];                                // 0x00FC(0x0004)
	int                                                nMountItemId;                                             // 0x010C(0x0004)
	int                                                nEmoteItemId;                                             // 0x0110(0x0004)
	int                                                nMVPPoseItemId;                                           // 0x0114(0x0004)
	int                                                nSprayItemId;                                             // 0x0118(0x0004)
	int                                                nTitleItemId;                                             // 0x011C(0x0004)
	int                                                nTaskForce;                                               // 0x0120(0x0004)
	unsigned long                                      bAlly : 1;                                                // 0x0124(0x0004)
	unsigned long                                      bLocal : 1;                                               // 0x0124(0x0004)
	unsigned long                                      bReported : 1;                                            // 0x0124(0x0004)
	struct FString                                     sPlayer;                                                  // 0x0128(0x0010) (AlwaysInit, NeedCtorLink)
	struct FUniqueNetId                                ConsoleUniqueId;                                          // 0x0138(0x0008)
	struct Fdword                                      dwPortalId;                                               // 0x0140(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_PlayerMatchRecord");
		return ptr;
	}

};


// Class TgClient.UIData_PopupGeneric
// 0x00C0 (0x0120 - 0x0060)
class UUIData_PopupGeneric : public UUIData
{
public:
	struct FPointer                                    VfTable_ITgCallbackInterface;                             // 0x0060(0x0008) (Const, Native, NoExport)
	struct FString                                     sTitle[0x2];                                              // 0x0068(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nInitialIndex;                                            // 0x0088(0x0004)
	unsigned long                                      bUserMustClose : 1;                                       // 0x008C(0x0004)
	struct FString                                     sButtonName[0x8];                                         // 0x0090(0x0010) (AlwaysInit, NeedCtorLink)
	struct FPointer                                    pOtherSceneStompFunction;                                 // 0x0110(0x0008) (Native)
	class UTgCallbackContainer*                        m_CallbackContainer;                                      // 0x0118(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_PopupGeneric");
		return ptr;
	}

};


// Class TgClient.UIData_PopupInput
// 0x0060 (0x00C0 - 0x0060)
class UUIData_PopupInput : public UUIData
{
public:
	struct FPointer                                    VfTable_ITgCallbackInterface;                             // 0x0060(0x0008) (Const, Native, NoExport)
	struct FString                                     sTitle[0x2];                                              // 0x0068(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sButtonName[0x2];                                         // 0x0088(0x0010) (AlwaysInit, NeedCtorLink)
	struct FPointer                                    pButtonValidate[0x2];                                     // 0x00A8(0x0008) (Native)
	class UTgCallbackContainer*                        m_CallbackContainer;                                      // 0x00B8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_PopupInput");
		return ptr;
	}

};


// Class TgClient.UIData_Quest
// 0x0034 (0x0094 - 0x0060)
class UUIData_Quest : public UUIData
{
public:
	int                                                m_nQuestId;                                               // 0x0060(0x0004)
	struct Fdword                                      m_dwActivityId;                                           // 0x0064(0x0004)
	struct Fdword                                      m_dwPrevActivityId;                                       // 0x0068(0x0004)
	struct Fdword                                      m_dwGroupingNumber;                                       // 0x006C(0x0004)
	struct Fdword                                      m_eStatus;                                                // 0x0070(0x0004)
	struct FQWord                                      m_dtReceivedDatetime;                                     // 0x0074(0x0008)
	unsigned long                                      m_bIsDirty : 1;                                           // 0x007C(0x0004)
	unsigned long                                      m_bHasSeen : 1;                                           // 0x007C(0x0004)
	unsigned long                                      m_bIsNew : 1;                                             // 0x007C(0x0004)
	unsigned long                                      m_bCanAbandon : 1;                                        // 0x007C(0x0004)
	unsigned long                                      m_bCompletionAck : 1;                                     // 0x007C(0x0004)
	unsigned long                                      m_bGoalsInitialized : 1;                                  // 0x007C(0x0004)
	TEnumAsByte<EQuestType>                            m_eQuestType;                                             // 0x0080(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	TArray<class UUIData_Goal*>                        m_Goals;                                                  // 0x0084(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_Quest");
		return ptr;
	}

};


// Class TgClient.UIData_SpecialEvent
// 0x0024 (0x00B8 - 0x0094)
class UUIData_SpecialEvent : public UUIData_Quest
{
public:
	struct Fdword                                      m_dwCount;                                                // 0x0094(0x0004)
	struct Fdword                                      m_dwCompleteCount;                                        // 0x0098(0x0004)
	struct Fdword                                      m_dwLootTableItemId;                                      // 0x009C(0x0004)
	struct Fdword                                      m_dwEndSeconds;                                           // 0x00A0(0x0004)
	struct Fdword                                      m_dwNameMsgId;                                            // 0x00A4(0x0004)
	struct Fdword                                      m_dwDescMsgId;                                            // 0x00A8(0x0004)
	struct Fdword                                      m_dwIconId;                                               // 0x00AC(0x0004)
	struct Fdword                                      m_dwGoalId;                                               // 0x00B0(0x0004)
	struct Fdword                                      m_dwGoalActivityType;                                     // 0x00B4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_SpecialEvent");
		return ptr;
	}

};


// Class TgClient.UIData_ItemQuest
// 0x0004 (0x00BC - 0x00B8)
class UUIData_ItemQuest : public UUIData_SpecialEvent
{
public:
	struct Fdword                                      m_dwPurchasePortion;                                      // 0x00B8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_ItemQuest");
		return ptr;
	}

};


// Class TgClient.UIData_Queue
// 0x001C (0x007C - 0x0060)
class UUIData_Queue : public UUIData
{
public:
	TArray<struct Fdword>                              dwQueues;                                                 // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nForcedBotId;                                             // 0x0070(0x0004)
	TEnumAsByte<EUIDQCallToAction>                     eCTA;                                                     // 0x0074(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	unsigned long                                      bSelected : 1;                                            // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_Queue");
		return ptr;
	}

};


// Class TgClient.UIData_RealMoneyItem
// 0x00C0 (0x0120 - 0x0060)
class UUIData_RealMoneyItem : public UUIData
{
public:
	struct Fdword                                      m_dwPrice;                                                // 0x0060(0x0004)
	unsigned long                                      m_bIsOwned : 1;                                           // 0x0064(0x0004)
	struct FString                                     m_sProductName;                                           // 0x0068(0x0010) (NeedCtorLink)
	struct FString                                     m_sProductSKU;                                            // 0x0078(0x0010) (NeedCtorLink)
	struct FString                                     m_sConsoleDescription;                                    // 0x0088(0x0010) (NeedCtorLink)
	struct FString                                     m_sProductImage;                                          // 0x0098(0x0010) (NeedCtorLink)
	struct FString                                     m_sIncludeTaxMessage;                                     // 0x00A8(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_sDisplayListPrice;                                      // 0x00B8(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_sDisplayPrice;                                          // 0x00C8(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_sCurrencyCode;                                          // 0x00D8(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_sSignedOffer;                                           // 0x00E8(0x0010) (NeedCtorLink)
	TArray<float>                                      m_fListPrice;                                             // 0x00F8(0x0010) (NeedCtorLink)
	TArray<float>                                      m_fPrice;                                                 // 0x0108(0x0010) (NeedCtorLink)
	class UUIData_LootTableItem*                       m_pLootTableItem;                                         // 0x0118(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_RealMoneyItem");
		return ptr;
	}


	void GetInventoryItems(TArray<struct FMarketplaceInventoryItem>* InventoryItems);
};


// Class TgClient.UIData_RebindCommand
// 0x0008 (0x0068 - 0x0060)
class UUIData_RebindCommand : public UUIData
{
public:
	int                                                m_nCommandIndex;                                          // 0x0060(0x0004)
	int                                                m_nCaptureAlt;                                            // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_RebindCommand");
		return ptr;
	}

};


// Class TgClient.UIData_ReferralTimeRemaining
// 0x0000 (0x0060 - 0x0060)
class UUIData_ReferralTimeRemaining : public UUIData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_ReferralTimeRemaining");
		return ptr;
	}

};


// Class TgClient.UIData_SocialAction
// 0x0020 (0x0080 - 0x0060)
class UUIData_SocialAction : public UUIData
{
public:
	TArray<struct FString>                             m_sTitle;                                                 // 0x0060(0x0010) (NeedCtorLink)
	TEnumAsByte<ESAACT_ACTION>                         m_eAction;                                                // 0x0070(0x0001)
	TEnumAsByte<ESAL_LIST>                             m_eSourceList;                                            // 0x0071(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	struct FPointer                                    m_pSelectorFunc;                                          // 0x0074(0x0008) (Native)
	unsigned long                                      m_bCloseOnAction : 1;                                     // 0x007C(0x0004)
	unsigned long                                      m_bAllowSelectAll : 1;                                    // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_SocialAction");
		return ptr;
	}

};


// Class TgClient.UIData_SprayRental
// 0x0040 (0x00A0 - 0x0060)
class UUIData_SprayRental : public UUIData
{
public:
	class UUIData_ChestExtended*                       pChestData;                                               // 0x0060(0x0008)
	int                                                nSprayItemId;                                             // 0x0068(0x0004)
	int                                                nSprayVendorId;                                           // 0x006C(0x0004)
	int                                                nChestItemId;                                             // 0x0070(0x0004)
	int                                                nLootId;                                                  // 0x0074(0x0004)
	int                                                nBundleVendorId;                                          // 0x0078(0x0004)
	int                                                nBundleCount;                                             // 0x007C(0x0004)
	int                                                nBundleLootIds[0x4];                                      // 0x0080(0x0004)
	int                                                nBundleItemCounts[0x4];                                   // 0x0090(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_SprayRental");
		return ptr;
	}

};


// Class TgClient.UIData_StreamSettings
// 0x0008 (0x0068 - 0x0060)
class UUIData_StreamSettings : public UUIData
{
public:
	unsigned long                                      m_bIsStreaming : 1;                                       // 0x0060(0x0004)
	struct FPComOpenBroadcasterSettings                m_Settings;                                               // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_StreamSettings");
		return ptr;
	}

};


// Class TgClient.UIData_String
// 0x0010 (0x0070 - 0x0060)
class UUIData_String : public UUIData
{
public:
	struct FString                                     m_sValue;                                                 // 0x0060(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_String");
		return ptr;
	}

};


// Class TgClient.UIData_StringWithCount
// 0x0004 (0x0074 - 0x0070)
class UUIData_StringWithCount : public UUIData_String
{
public:
	int                                                m_nValue;                                                 // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_StringWithCount");
		return ptr;
	}

};


// Class TgClient.UIData_String_Localized
// 0x0024 (0x0084 - 0x0060)
class UUIData_String_Localized : public UUIData
{
public:
	struct FString                                     m_sSection;                                               // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     m_sKey;                                                   // 0x0070(0x0010) (NeedCtorLink)
	unsigned long                                      m_bCaps : 1;                                              // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_String_Localized");
		return ptr;
	}

};


// Class TgClient.UIData_StringList
// 0x0010 (0x0070 - 0x0060)
class UUIData_StringList : public UUIData
{
public:
	TArray<struct FString>                             sValues;                                                  // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_StringList");
		return ptr;
	}

};


// Class TgClient.UIData_TitleQuantity
// 0x0018 (0x0078 - 0x0060)
class UUIData_TitleQuantity : public UUIData
{
public:
	struct FString                                     m_sTitle;                                                 // 0x0060(0x0010) (NeedCtorLink)
	int                                                m_nQuantity;                                              // 0x0070(0x0004)
	int                                                m_nTotal;                                                 // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_TitleQuantity");
		return ptr;
	}

};


// Class TgClient.UIData_TreasureRoll
// 0x001C (0x007C - 0x0060)
class UUIData_TreasureRoll : public UUIData
{
public:
	class UUIDataItem*                                 m_pChestItem;                                             // 0x0060(0x0008)
	struct Fdword                                      m_dwRollDelay;                                            // 0x0068(0x0004)
	TArray<class UUIData_TreasureRoll_Item*>           m_pRolledItems;                                           // 0x006C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_TreasureRoll");
		return ptr;
	}

};


// Class TgClient.UIData_TreasureRoll_Item
// 0x0034 (0x0094 - 0x0060)
class UUIData_TreasureRoll_Item : public UUIData
{
public:
	class UUIData_LootTableItem*                       m_pRolledItem;                                            // 0x0060(0x0008)
	struct Fdword                                      m_dwRolledItemQuantity;                                   // 0x0068(0x0004)
	class UUIData_LootTableItem*                       m_pReplacementItem;                                       // 0x006C(0x0008)
	struct Fdword                                      m_dwReplacementItemQuantity;                              // 0x0074(0x0004)
	unsigned long                                      m_bIsUnreceivedBoostedItem : 1;                           // 0x0078(0x0004)
	TArray<class UUIData_TreasureRoll_Item*>           m_pRolledSubItems;                                        // 0x007C(0x0010) (NeedCtorLink)
	class UUIData_LTIAggregate*                        m_pSubItemReplacementAggregate;                           // 0x008C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_TreasureRoll_Item");
		return ptr;
	}

};


// Class TgClient.UIData_Vendor
// 0x005C (0x00BC - 0x0060)
class UUIData_Vendor : public UUIData
{
public:
	struct Fdword                                      m_dwVendorId;                                             // 0x0060(0x0004)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0064(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIData_Vendor.m_LootTableItems
	TArray<class UUIData_LootTableItem*>               m_AsArray;                                                // 0x00AC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_Vendor");
		return ptr;
	}

};


// Class TgClient.UIDataAcquisition
// 0x0005 (0x0065 - 0x0060)
class UUIDataAcquisition : public UUIData
{
public:
	struct Fdword                                      dwLocalAcquisitionId;                                     // 0x0060(0x0004)
	TEnumAsByte<EQuestOrigin>                          eQuestOrigin;                                             // 0x0064(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataAcquisition");
		return ptr;
	}

};


// Class TgClient.UIDataAcquisitionQueue
// 0x0010 (0x0070 - 0x0060)
class UUIDataAcquisitionQueue : public UUIData
{
public:
	TArray<class UUIDataAcquisition*>                  m_Acquisitions;                                           // 0x0060(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataAcquisitionQueue");
		return ptr;
	}

};


// Class TgClient.UIDataEsportsEvent
// 0x0138 (0x0198 - 0x0060)
class UUIDataEsportsEvent : public UUIData
{
public:
	struct Fdword                                      dwEventId;                                                // 0x0060(0x0004)
	struct Fdword                                      dwMaxPicks;                                               // 0x0064(0x0004)
	struct Fdword                                      dwTypeId;                                                 // 0x0068(0x0004)
	struct FString                                     sName;                                                    // 0x006C(0x0010) (NeedCtorLink)
	unsigned long                                      bActive : 1;                                              // 0x007C(0x0004)
	TArray<class UUIDataEsportsEventTeam*>             m_EventTeamArray;                                         // 0x0080(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataEsportsEvent.m_EventTeamsById
	unsigned char                                      UnknownData01[0x48];                                      // 0x00D8(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataEsportsEvent.m_EventTeams
	TArray<class UUIDataEsportsEventTeam*>             m_PickedTeams;                                            // 0x0120(0x0010) (NeedCtorLink)
	TArray<class UUIDataEsportsEventMatchup*>          m_EventMatchupArray;                                      // 0x0130(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0140(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataEsportsEvent.m_EventMatchups
	TArray<class UUIData_List_TitleIcon*>              m_WeekData;                                               // 0x0188(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataEsportsEvent");
		return ptr;
	}

};


// Class TgClient.UIDataEsportsEventMatchup
// 0x005C (0x00BC - 0x0060)
class UUIDataEsportsEventMatchup : public UUIData
{
public:
	class UUIDataEsportsEvent*                         pEvent;                                                   // 0x0060(0x0008)
	class UUIDataEsportsEventTeam*                     pTeam1;                                                   // 0x0068(0x0008)
	class UUIDataEsportsEventTeam*                     pTeam2;                                                   // 0x0070(0x0008)
	class UUIDataEsportsEventTeam*                     pSelectedTeam;                                            // 0x0078(0x0008)
	struct Fdword                                      dwGroupId;                                                // 0x0080(0x0004)
	struct Fdword                                      dwTeam1Wins;                                              // 0x0084(0x0004)
	struct Fdword                                      dwTeam2Wins;                                              // 0x0088(0x0004)
	struct Fdword                                      dwMatchCount;                                             // 0x008C(0x0004)
	unsigned long                                      bFeatured : 1;                                            // 0x0090(0x0004)
	struct FString                                     sURL;                                                     // 0x0094(0x0010) (NeedCtorLink)
	struct Fdword                                      dwRoundTypeId;                                            // 0x00A4(0x0004)
	struct FDateTimeWrapper                            dtStartTime;                                              // 0x00A8(0x0008)
	struct Fdword                                      dwRewardQuantity;                                         // 0x00B0(0x0004)
	class UUIData*                                     pReward;                                                  // 0x00B4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataEsportsEventMatchup");
		return ptr;
	}

};


// Class TgClient.UIDataEsportsEventTeam
// 0x0020 (0x0080 - 0x0060)
class UUIDataEsportsEventTeam : public UUIData
{
public:
	class UUIDataEsportsEvent*                         pEvent;                                                   // 0x0060(0x0008)
	class UUIDataEsportsTeam*                          pTeam;                                                    // 0x0068(0x0008)
	struct Fdword                                      dwEventTeamId;                                            // 0x0070(0x0004)
	struct Fdword                                      dwWins;                                                   // 0x0074(0x0004)
	struct Fdword                                      dwLosses;                                                 // 0x0078(0x0004)
	int                                                nSeed;                                                    // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataEsportsEventTeam");
		return ptr;
	}

};


// Class TgClient.UIDataEsportsTeam
// 0x0034 (0x0094 - 0x0060)
class UUIDataEsportsTeam : public UUIData
{
public:
	struct Fdword                                      dwTeamId;                                                 // 0x0060(0x0004)
	struct FString                                     sName;                                                    // 0x0064(0x0010) (NeedCtorLink)
	struct FString                                     sAbbr;                                                    // 0x0074(0x0010) (NeedCtorLink)
	struct FString                                     sTextureName;                                             // 0x0084(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataEsportsTeam");
		return ptr;
	}

};


// Class TgClient.UIDataItem
// 0x0080 (0x00E0 - 0x0060)
class UUIDataItem : public UUIData
{
public:
	struct FQWord                                      m_qwInventoryId;                                          // 0x0060(0x0008)
	int                                                m_nId;                                                    // 0x0068(0x0004)
	int                                                m_nIcon;                                                  // 0x006C(0x0004)
	int                                                m_nCooldown;                                              // 0x0070(0x0004)
	struct FString                                     m_sName;                                                  // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sDesc;                                                  // 0x0084(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sIcon;                                                  // 0x0094(0x0010) (AlwaysInit, NeedCtorLink)
	struct FName                                       m_nmIcon;                                                 // 0x00A4(0x0008) (AlwaysInit)
	struct FName                                       m_nmIconLocked;                                           // 0x00AC(0x0008) (AlwaysInit)
	struct FName                                       m_nmCardIcon;                                             // 0x00B4(0x0008) (AlwaysInit)
	int                                                nIndex;                                                   // 0x00BC(0x0004)
	TArray<class UUIDataItem*>                         m_SubItems;                                               // 0x00C0(0x0010) (NeedCtorLink)
	TArray<class UUIData_LootTableItem*>               m_StoreLTIs;                                              // 0x00D0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataItem");
		return ptr;
	}


	struct FName STATIC_GetChampionIconLockedName();
	struct FName STATIC_GetChampionIconName();
	void STATIC_OnTeamModelUpdated();
};


// Class TgClient.UIDataLeague
// 0x00B4 (0x0114 - 0x0060)
class UUIDataLeague : public UUIData
{
public:
	struct Fdword                                      dwLeagueId;                                               // 0x0060(0x0004)
	TArray<class UUIDataLeagueTier*>                   m_TierArray;                                              // 0x0064(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0074(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataLeague.m_Tiers
	TArray<class UUIDataLeaguePlayer*>                 m_PlayerArray;                                            // 0x00BC(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00CC(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataLeague.m_Players

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataLeague");
		return ptr;
	}

};


// Class TgClient.UIDataLeaguePlayer
// 0x0054 (0x00B4 - 0x0060)
class UUIDataLeaguePlayer : public UUIData
{
public:
	class UUIDataPlayer*                               pPlayer;                                                  // 0x0060(0x0008)
	class UUIDataLeague*                               pLeague;                                                  // 0x0068(0x0008)
	class UUIDataLeagueTier*                           pTier;                                                    // 0x0070(0x0008)
	class UUIDataLeagueTier*                           pHighestTier;                                             // 0x0078(0x0008)
	int                                                nPointsEarned;                                            // 0x0080(0x0004)
	int                                                nPointsTrend;                                             // 0x0084(0x0004)
	struct Fdword                                      dwRank;                                                   // 0x0088(0x0004)
	struct Fdword                                      dwRankPrev;                                               // 0x008C(0x0004)
	struct Fdword                                      dwWins;                                                   // 0x0090(0x0004)
	struct Fdword                                      dwLosses;                                                 // 0x0094(0x0004)
	struct Fdword                                      dwDodges;                                                 // 0x0098(0x0004)
	struct Fdword                                      dwMatchesPlayedInTier;                                    // 0x009C(0x0004)
	struct Fdword                                      dwRegion;                                                 // 0x00A0(0x0004)
	struct Fdword                                      dwRecommendedTierId;                                      // 0x00A4(0x0004)
	struct Fdword                                      dwTitleId;                                                // 0x00A8(0x0004)
	struct FDateTimeWrapper                            dtLastPlayed;                                             // 0x00AC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataLeaguePlayer");
		return ptr;
	}

};


// Class TgClient.UIDataLeagueTier
// 0x000C (0x006C - 0x0060)
class UUIDataLeagueTier : public UUIData
{
public:
	class UUIDataLeague*                               pLeague;                                                  // 0x0060(0x0008)
	struct Fdword                                      dwTierId;                                                 // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataLeagueTier");
		return ptr;
	}

};


// Class TgClient.UIDataObject
// 0x0010 (0x0070 - 0x0060)
class UUIDataObject : public UUIData
{
public:
	struct FPointer                                    VfTable_ITgCallbackInterface;                             // 0x0060(0x0008) (Const, Native, NoExport)
	class UTgCallbackContainer*                        m_CallbackContainer;                                      // 0x0068(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataObject");
		return ptr;
	}

};


// Class TgClient.UIData_Match
// 0x005C (0x00CC - 0x0070)
class UUIData_Match : public UUIDataObject
{
public:
	struct Fdword                                      dwMatchId;                                                // 0x0070(0x0004)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0074(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIData_Match.MatchMembersMap
	TArray<class UUIData_MatchMember*>                 MatchMembers;                                             // 0x00BC(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_Match");
		return ptr;
	}

};


// Class TgClient.UIData_PortalAccount
// 0x0008 (0x0078 - 0x0070)
class UUIData_PortalAccount : public UUIDataObject
{
public:
	struct Fdword                                      m_dwPortalId;                                             // 0x0070(0x0004)
	unsigned long                                      m_bLinked : 1;                                            // 0x0074(0x0004)
	unsigned long                                      m_bLinkSilentCheck : 1;                                   // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIData_PortalAccount");
		return ptr;
	}

};


// Class TgClient.UIDataAcquisitionManager
// 0x0000 (0x0070 - 0x0070)
class UUIDataAcquisitionManager : public UUIDataObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataAcquisitionManager");
		return ptr;
	}

};


// Class TgClient.UIDataChampion
// 0x015C (0x01CC - 0x0070)
class UUIDataChampion : public UUIDataObject
{
public:
	int                                                m_nBotId;                                                 // 0x0070(0x0004)
	int                                                m_nLevel;                                                 // 0x0074(0x0004)
	int                                                m_nArchetype;                                             // 0x0078(0x0004)
	struct FString                                     m_sName;                                                  // 0x007C(0x0010) (NeedCtorLink)
	struct FString                                     m_sDesc;                                                  // 0x008C(0x0010) (NeedCtorLink)
	struct FString                                     m_sLore;                                                  // 0x009C(0x0010) (NeedCtorLink)
	struct FString                                     m_sDamage;                                                // 0x00AC(0x0010) (NeedCtorLink)
	struct FString                                     m_sSpecial;                                               // 0x00BC(0x0010) (NeedCtorLink)
	int                                                m_nItemsTotal;                                            // 0x00CC(0x0004)
	int                                                m_nItemsOwned;                                            // 0x00D0(0x0004)
	float                                              m_fItemsPercent;                                          // 0x00D4(0x0004)
	int                                                m_nXPProgress;                                            // 0x00D8(0x0004)
	int                                                m_nXPRequired;                                            // 0x00DC(0x0004)
	float                                              m_fXPPercent;                                             // 0x00E0(0x0004)
	int                                                m_nActiveSet;                                             // 0x00E4(0x0004)
	int                                                m_nActiveTalent;                                          // 0x00E8(0x0004)
	int                                                m_nActiveDeck;                                            // 0x00EC(0x0004)
	int                                                m_nActiveSkin;                                            // 0x00F0(0x0004)
	int                                                m_nActiveHead;                                            // 0x00F4(0x0004)
	int                                                m_nActiveEmote;                                           // 0x00F8(0x0004)
	int                                                m_nActiveVoice;                                           // 0x00FC(0x0004)
	int                                                m_nActiveWeapon;                                          // 0x0100(0x0004)
	int                                                m_nActiveSpray;                                           // 0x0104(0x0004)
	int                                                m_nActiveMVPPose;                                         // 0x0108(0x0004)
	class UUIDataItem*                                 m_ClassItem;                                              // 0x010C(0x0008)
	class UUIData_LootTableItem*                       m_CharacterRotationLTI;                                   // 0x0114(0x0008)
	TArray<class UUIDataItem*>                         m_Sets;                                                   // 0x011C(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Cards;                                                  // 0x012C(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Heads;                                                  // 0x013C(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Skins;                                                  // 0x014C(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Skills;                                                 // 0x015C(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Weapons;                                                // 0x016C(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Emotes;                                                 // 0x017C(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Sprays;                                                 // 0x018C(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_MVPPoses;                                               // 0x019C(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Voices;                                                 // 0x01AC(0x0010) (NeedCtorLink)
	TArray<struct FUIDataDeck>                         m_Decks;                                                  // 0x01BC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataChampion");
		return ptr;
	}

};


// Class TgClient.UIDataChampions
// 0x00D0 (0x0140 - 0x0070)
class UUIDataChampions : public UUIDataObject
{
public:
	class UUIDataChampion*                             m_pActiveChampion;                                        // 0x0070(0x0008)
	TArray<class UUIDataChampion*>                     m_Champions;                                              // 0x0078(0x0010) (NeedCtorLink)
	TArray<class UUIDataChampion*>                     m_PvEChampions;                                           // 0x0088(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Collections;                                            // 0x0098(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00A8(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataChampions.m_PerChampionCollections
	unsigned char                                      UnknownData01[0x48];                                      // 0x00F0(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataChampions.m_ChampionIdToData
	struct Fdword                                      m_dwStoreVendorsRequestId;                                // 0x0138(0x0004)
	struct Fdword                                      m_dwRotationVendorRequestId;                              // 0x013C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataChampions");
		return ptr;
	}

};


// Class TgClient.UIDataChatManager
// 0x0024 (0x0094 - 0x0070)
class UUIDataChatManager : public UUIDataObject
{
public:
	unsigned long                                      m_bSentReplyHelp : 1;                                     // 0x0070(0x0004)
	unsigned long                                      m_bLoadedEOMLobby : 1;                                    // 0x0070(0x0004)
	TArray<struct FChannelChatData>                    m_AllChatData;                                            // 0x0074(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_ReplyTargets;                                           // 0x0084(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataChatManager");
		return ptr;
	}

};


// Class TgClient.UIDataCommon
// 0x01B8 (0x0228 - 0x0070)
class UUIDataCommon : public UUIDataObject
{
public:
	int                                                m_nLevel;                                                 // 0x0070(0x0004)
	int                                                m_nItemsTotal;                                            // 0x0074(0x0004)
	int                                                m_nItemsOwned;                                            // 0x0078(0x0004)
	int                                                m_nXPProgress;                                            // 0x007C(0x0004)
	int                                                m_nXPRequired;                                            // 0x0080(0x0004)
	int                                                m_nActiveMount;                                           // 0x0084(0x0004)
	float                                              m_fXPPercent;                                             // 0x0088(0x0004)
	float                                              m_fItemsPercent;                                          // 0x008C(0x0004)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataCommon.m_PortalAccounts
	TArray<class UUIDataItem*>                         m_BurnA;                                                  // 0x00D8(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_BurnB;                                                  // 0x00E8(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_BurnC;                                                  // 0x00F8(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_BurnD;                                                  // 0x0108(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_BurnConquestA;                                          // 0x0118(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_BurnConquestB;                                          // 0x0128(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_BurnConquestC;                                          // 0x0138(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_BurnConquestD;                                          // 0x0148(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Mounts;                                                 // 0x0158(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_EquipableTitles;                                        // 0x0168(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_AnnouncerPacks;                                         // 0x0178(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Chests;                                                 // 0x0188(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_MatchBoosters;                                          // 0x0198(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_AccountBoosters;                                        // 0x01A8(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Subscriptions;                                          // 0x01B8(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Currencies;                                             // 0x01C8(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Bundles;                                                // 0x01D8(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_WebBundles;                                             // 0x01E8(0x0010) (NeedCtorLink)
	TArray<class UUIDataItem*>                         m_Lore;                                                   // 0x01F8(0x0010) (NeedCtorLink)
	TArray<class UUIData_MatchBoosterActivated*>       m_ActivatedMatchBoosters;                                 // 0x0208(0x0010) (NeedCtorLink)
	struct Fdword                                      m_dwBattlePassPoints;                                     // 0x0218(0x0004)
	struct Fdword                                      m_dwBattlePassLevel;                                      // 0x021C(0x0004)
	struct Fdword                                      m_dwBattlePassTier;                                       // 0x0220(0x0004)
	struct Fdword                                      m_bBattlePassOwned;                                       // 0x0224(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataCommon");
		return ptr;
	}

};


// Class TgClient.UIDataDirector
// 0x0058 (0x00C8 - 0x0070)
class UUIDataDirector : public UUIDataObject
{
public:
	TArray<class UUIDataAcquisitionQueue*>             m_AcquisitionQueues;                                      // 0x0070(0x0010) (Const, NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0080(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataDirector.m_AcquisitionQueueMap

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataDirector");
		return ptr;
	}

};


// Class TgClient.UIDataEsportsManager
// 0x00A4 (0x0114 - 0x0070)
class UUIDataEsportsManager : public UUIDataObject
{
public:
	TArray<class UUIDataEsportsEvent*>                 m_EventArray;                                             // 0x0070(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0080(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataEsportsManager.m_Events
	unsigned char                                      UnknownData01[0x48];                                      // 0x00C8(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataEsportsManager.m_Teams
	struct Fdword                                      m_dwRewardMultiplier;                                     // 0x0110(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataEsportsManager");
		return ptr;
	}

};


// Class TgClient.UIDataGoals
// 0x017C (0x01EC - 0x0070)
class UUIDataGoals : public UUIDataObject
{
public:
	class UUIData_Goal*                                m_GoldLimit;                                              // 0x0070(0x0008)
	class UUIData_Goal*                                m_GoldLimitBoosted;                                       // 0x0078(0x0008)
	class UUIData_Goal*                                m_VIPLimit;                                               // 0x0080(0x0008)
	class UUIData_Goal*                                m_VIPLimitBoosted;                                        // 0x0088(0x0008)
	TArray<class UUIData_Goal*>                        m_Ranked;                                                 // 0x0090(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00A0(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataGoals.m_CurrencyStats
	unsigned char                                      UnknownData01[0x48];                                      // 0x00E8(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataGoals.m_WOTDByBotId
	class UUIData_Goal*                                m_PlayedRankedTracker;                                    // 0x0130(0x0008)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0138(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataGoals.m_Goals
	TArray<class UUIData_Challenge*>                   m_ChallengeList;                                          // 0x0180(0x0010) (NeedCtorLink)
	TArray<class UUIData_Quest*>                       m_QuestList;                                              // 0x0190(0x0010) (NeedCtorLink)
	class UUIData_Quest*                               m_ChampionQuest;                                          // 0x01A0(0x0008)
	class UUIData_Quest*                               m_DailyLoginsQuest;                                       // 0x01A8(0x0008)
	class UUIData_Quest*                               m_LoreQuest;                                              // 0x01B0(0x0008)
	TArray<class UUIData_Quest*>                       m_QuestsCompleted;                                        // 0x01B8(0x0010) (NeedCtorLink)
	unsigned long                                      m_bQuestsSeenToday : 1;                                   // 0x01C8(0x0004)
	unsigned long                                      m_bPlayerLoggedIn : 1;                                    // 0x01C8(0x0004)
	unsigned long                                      m_bRewardClaimedToday : 1;                                // 0x01C8(0x0004)
	unsigned long                                      m_bDayHasRolledOver : 1;                                  // 0x01C8(0x0004)
	unsigned long                                      m_bHasQuestProgress : 1;                                  // 0x01C8(0x0004)
	unsigned long                                      m_bHasQuestActivities : 1;                                // 0x01C8(0x0004)
	unsigned long                                      m_bHasQuestRewards : 1;                                   // 0x01C8(0x0004)
	unsigned long                                      m_bFirstSpecialEventUpdate : 1;                           // 0x01C8(0x0004)
	unsigned long                                      m_bFirstItemQuestUpdate : 1;                              // 0x01C8(0x0004)
	int                                                m_nConsecutiveRewardDays;                                 // 0x01CC(0x0004)
	int                                                m_nLengthOfDay;                                           // 0x01D0(0x0004)
	float                                              m_fTimeTillNextDay;                                       // 0x01D4(0x0004)
	float                                              m_fTimeTillNextMonth;                                     // 0x01D8(0x0004)
	struct FDateTimeWrapper                            m_dtLoginBonusReceived;                                   // 0x01DC(0x0008)
	struct Fdword                                      m_dwLastLoreQuestGoal;                                    // 0x01E4(0x0004)
	int                                                m_nPlayerLevel;                                           // 0x01E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataGoals");
		return ptr;
	}


	struct Fdword STATIC_GetLoreCompleteCount();
	struct Fdword STATIC_GetLoreProgress();
	int STATIC_GetDailyLoginBonusDay();
	int STATIC_GetDailyLoginsCount();
	int STATIC_GetDailyLoginsTier();
	class UUIData_Quest* STATIC_GetLoreQuest();
	class UUIData_Quest* STATIC_GetDailyLoginsQuest();
	class UUIData_Quest* STATIC_GetChampionQuest();
};


// Class TgClient.UIDataLeagueManager
// 0x0068 (0x00D8 - 0x0070)
class UUIDataLeagueManager : public UUIDataObject
{
public:
	TArray<class UUIDataLeague*>                       m_LeagueArray;                                            // 0x0070(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0080(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataLeagueManager.m_Leagues
	class UUIData_LeagueEOM*                           m_EOM;                                                    // 0x00C8(0x0008)
	class UUIData_LeagueTierChange*                    m_TierChange;                                             // 0x00D0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataLeagueManager");
		return ptr;
	}

};


// Class TgClient.UIDataManager
// 0x0078 (0x00E8 - 0x0070)
class UUIDataManager : public UUIDataObject
{
public:
	class UUIDataCommon*                               m_CommonData;                                             // 0x0070(0x0008)
	class UUIDataChampions*                            m_ChampionData;                                           // 0x0078(0x0008)
	class UUIDataSocial*                               m_Social;                                                 // 0x0080(0x0008)
	class UUIDataLeagueManager*                        m_LeagueMgr;                                              // 0x0088(0x0008)
	class UUIDataGoals*                                m_Goals;                                                  // 0x0090(0x0008)
	class UUIDataQueues*                               m_Queues;                                                 // 0x0098(0x0008)
	class UUIDataEsportsManager*                       m_Esports;                                                // 0x00A0(0x0008)
	class UUIDataChatManager*                          m_Chat;                                                   // 0x00A8(0x0008)
	class UUIData_Match*                               m_Match;                                                  // 0x00B0(0x0008)
	class UUIDataAcquisitionManager*                   m_AcquisitionMgr;                                         // 0x00B8(0x0008)
	class UUIDataDirector*                             m_DataDirector;                                           // 0x00C0(0x0008)
	TArray<class UUIDataObject*>                       m_Data;                                                   // 0x00C8(0x0010) (NeedCtorLink)
	TArray<int>                                        m_RestrictedClasses;                                      // 0x00D8(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataManager");
		return ptr;
	}


	void StoreOfflineData();
};


// Class TgClient.UIDataQueues
// 0x00F4 (0x0164 - 0x0070)
class UUIDataQueues : public UUIDataObject
{
public:
	class UUIData_List_TitleIcon*                      m_QueueData;                                              // 0x0070(0x0008)
	TArray<class UUIData*>                             m_DevQueues;                                              // 0x0078(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0088(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataQueues.m_Queues
	unsigned char                                      UnknownData01[0x48];                                      // 0x00D0(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataQueues.m_CustomQueues
	unsigned char                                      UnknownData02[0x48];                                      // 0x0118(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataQueues.m_CustomGames
	float                                              m_fStatusTimer;                                           // 0x0160(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataQueues");
		return ptr;
	}

};


// Class TgClient.UIDataSocial
// 0x0170 (0x01E0 - 0x0070)
class UUIDataSocial : public UUIDataObject
{
public:
	unsigned long                                      m_bPrefersMic : 1;                                        // 0x0070(0x0004)
	int                                                m_nOnlineFriendCount;                                     // 0x0074(0x0004)
	int                                                m_nConnectedFriendCount;                                  // 0x0078(0x0004)
	int                                                m_nPendingFriendInvites;                                  // 0x007C(0x0004)
	struct Fdword                                      m_dwLastUpdatePartyActiveCount;                           // 0x0080(0x0004)
	int                                                m_nReferralPeriodSeconds;                                 // 0x0084(0x0004)
	struct Fdword                                      m_dwReferredHighestLevel;                                 // 0x0088(0x0004)
	struct Fdword                                      m_dwReferredLongestPlayedMinutes;                         // 0x008C(0x0004)
	struct Fdword                                      m_dwReferredReachedTier2;                                 // 0x0090(0x0004)
	struct Fdword                                      m_dwLFGMinimumLevel;                                      // 0x0094(0x0004)
	struct Fdword                                      m_dwLFGMaximumLevel;                                      // 0x0098(0x0004)
	struct Fdword                                      m_dwCurrentTeamId;                                        // 0x009C(0x0004)
	struct FString                                     m_sLFGMessage;                                            // 0x00A0(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UUIDataPlayer*>                       m_AllFriends;                                             // 0x00B0(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UUIDataPlayer*>                       m_CrossPlatformFriends;                                   // 0x00C0(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UUIDataPlayer*>                       m_PortalFriends;                                          // 0x00D0(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UUIDataPlayer*>                       m_Party;                                                  // 0x00E0(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UUIDataPlayer*>                       m_Search;                                                 // 0x00F0(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UUIDataPlayer*>                       m_ReferredPlayers;                                        // 0x0100(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UUIDataPlayer*>                       m_Referrers;                                              // 0x0110(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UUIDataPlayer*>                       m_LFGPlayers;                                             // 0x0120(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct Fdword>                              m_LFGFilters;                                             // 0x0130(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct Fdword>                              m_LFGSelfFilters;                                         // 0x0140(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0150(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataSocial.m_Players
	unsigned char                                      UnknownData01[0x48];                                      // 0x0198(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIDataSocial.m_PlayerByUserId

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataSocial");
		return ptr;
	}

};


// Class TgClient.UIDataPlayer
// 0x0060 (0x00C0 - 0x0060)
class UUIDataPlayer : public UUIData
{
public:
	struct FString                                     sName;                                                    // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sLFPMessage;                                              // 0x0070(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nLevel;                                                   // 0x0080(0x0004)
	int                                                nMasteryLevel;                                            // 0x0084(0x0004)
	struct Fdword                                      dwVIPTier;                                                // 0x0088(0x0004)
	struct Fdword                                      dwPlayerId;                                               // 0x008C(0x0004)
	struct FQWord                                      qwUserId;                                                 // 0x0090(0x0008)
	struct Fdword                                      dwPortalId;                                               // 0x0098(0x0004)
	struct Fdword                                      dwAvatarId;                                               // 0x009C(0x0004)
	struct Fdword                                      dwTitleId;                                                // 0x00A0(0x0004)
	unsigned long                                      bIsSelf : 1;                                              // 0x00A4(0x0004)
	unsigned long                                      bIsPortalReservedPartySlot : 1;                           // 0x00A4(0x0004)
	unsigned long                                      bIsVIP : 1;                                               // 0x00A4(0x0004)
	struct Fdword                                      dwReferralPlayMinutes;                                    // 0x00A8(0x0004)
	struct Fdword                                      dwReferralId;                                             // 0x00AC(0x0004)
	TArray<class UUIDataLeaguePlayer*>                 pLeaguePlayers;                                           // 0x00B0(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataPlayer");
		return ptr;
	}

};


// Class TgClient.UIDataPrice
// 0x0024 (0x0084 - 0x0060)
class UUIDataPrice : public UUIData
{
public:
	int                                                m_nVendorId;                                              // 0x0060(0x0004)
	int                                                m_nLootId;                                                // 0x0064(0x0004)
	int                                                m_nItemId;                                                // 0x0068(0x0004)
	int                                                m_nPurchaseType;                                          // 0x006C(0x0004)
	int                                                m_nCurrencyType;                                          // 0x0070(0x0004)
	int                                                m_nQuantity;                                              // 0x0074(0x0004)
	int                                                m_nPrice;                                                 // 0x0078(0x0004)
	int                                                m_nDiscountPrice;                                         // 0x007C(0x0004)
	int                                                m_nOriginalPrice;                                         // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIDataPrice");
		return ptr;
	}

};


// Class TgClient.TgThreatModel
// 0x0054 (0x00B4 - 0x0060)
class UTgThreatModel : public UObject
{
public:
	TArray<class ATgPawn*>                             m_PawnsWithThreatLevels;                                  // 0x0060(0x0010) (NeedCtorLink)
	unsigned long                                      m_bThreatSystemEnabled : 1;                               // 0x0070(0x0004)
	unsigned long                                      m_bOcclusionSystemEnabled : 1;                            // 0x0070(0x0004)
	unsigned long                                      m_bDebugThreatSystem : 1;                                 // 0x0070(0x0004)
	float                                              m_fThreatCoefficientProximity;                            // 0x0074(0x0004) (Config)
	float                                              m_fThreatCoefficientOcclusion;                            // 0x0078(0x0004) (Config)
	float                                              m_fThreatCoefficientBinnedOcclusion;                      // 0x007C(0x0004) (Config)
	float                                              m_fThreatCoefficientUlt;                                  // 0x0080(0x0004) (Config)
	float                                              m_fThreatCoefficientShotAt;                               // 0x0084(0x0004) (Config)
	float                                              m_fThreatCoefficientSeenBy;                               // 0x0088(0x0004) (Config)
	float                                              m_fThreatCoefficientDamaged;                              // 0x008C(0x0004) (Config)
	float                                              m_fThreatCoefficientFocused;                              // 0x0090(0x0004) (Config)
	float                                              m_fThreatCoefficientFocusTarget;                          // 0x0094(0x0004) (Config)
	float                                              m_fThreatDecayCoefficientShotAt;                          // 0x0098(0x0004) (Config)
	float                                              m_fThreatDecayCoefficientSeenBy;                          // 0x009C(0x0004) (Config)
	float                                              m_fThreatDecayCoefficientUlt;                             // 0x00A0(0x0004) (Config)
	struct FString                                     m_DebugThreatSystemChannel;                               // 0x00A4(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgThreatModel");
		return ptr;
	}

};


// Class TgClient.InputContext
// 0x0024 (0x0084 - 0x0060)
class UInputContext : public UObject
{
public:
	struct FPointer                                    VfTable_ITgCallbackInterface;                             // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<class UInputAction*>                        m_InputActions;                                           // 0x0068(0x0010) (NeedCtorLink)
	class UTgCallbackContainer*                        m_CallbackContainer;                                      // 0x0078(0x0008)
	unsigned long                                      m_bPassInputToNextContext : 1;                            // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.InputContext");
		return ptr;
	}

};


// Class TgClient.InputContextManager
// 0x0020 (0x0080 - 0x0060)
class UInputContextManager : public UObject
{
public:
	struct FPointer                                    VfTable_ITgCallbackInterface;                             // 0x0060(0x0008) (Const, Native, NoExport)
	class UTgCallbackContainer*                        m_CallbackContainer;                                      // 0x0068(0x0008)
	TArray<class UInputContext*>                       m_ContextStack;                                           // 0x0070(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.InputContextManager");
		return ptr;
	}

};


// Class TgClient.InputGroup
// 0x008C (0x00EC - 0x0060)
class UInputGroup : public UObject
{
public:
	struct FPointer                                    VfTable_ITgCallbackInterface;                             // 0x0060(0x0008) (Const, Native, NoExport)
	int                                                m_nMinX;                                                  // 0x0068(0x0004)
	int                                                m_nMinY;                                                  // 0x006C(0x0004)
	int                                                m_nSizeX;                                                 // 0x0070(0x0004)
	int                                                m_nSizeY;                                                 // 0x0074(0x0004)
	int                                                m_nFocusX;                                                // 0x0078(0x0004)
	int                                                m_nFocusY;                                                // 0x007C(0x0004)
	int                                                m_nPrevFocusX;                                            // 0x0080(0x0004)
	int                                                m_nPrevFocusY;                                            // 0x0084(0x0004)
	unsigned long                                      m_bLoopX : 1;                                             // 0x0088(0x0004)
	unsigned long                                      m_bLoopY : 1;                                             // 0x0088(0x0004)
	unsigned long                                      m_bCursorUpdateX : 1;                                     // 0x0088(0x0004)
	unsigned long                                      m_bCursorUpdateY : 1;                                     // 0x0088(0x0004)
	unsigned long                                      m_bCursorUpdateWidth : 1;                                 // 0x0088(0x0004)
	unsigned long                                      m_bCursorUpdateHeight : 1;                                // 0x0088(0x0004)
	unsigned long                                      m_bAllowSelect : 1;                                       // 0x0088(0x0004)
	unsigned long                                      m_bAllowNavigation : 1;                                   // 0x0088(0x0004)
	unsigned long                                      m_bCallbacksRegistered : 1;                               // 0x0088(0x0004)
	int                                                m_nDefaultXFocus;                                         // 0x008C(0x0004)
	int                                                m_nDefaultYFocus;                                         // 0x0090(0x0004)
	class UInputAction*                                m_NavUp;                                                  // 0x0094(0x0008)
	class UInputAction*                                m_NavDown;                                                // 0x009C(0x0008)
	class UInputAction*                                m_NavLeft;                                                // 0x00A4(0x0008)
	class UInputAction*                                m_NavRight;                                               // 0x00AC(0x0008)
	class UInputAction*                                m_Select;                                                 // 0x00B4(0x0008)
	class UInputContext*                               m_InputContext;                                           // 0x00BC(0x0008)
	TArray<struct FUIGroupObject>                      m_Objects;                                                // 0x00C4(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcCursor;                                               // 0x00D4(0x0008)
	class UTgGfxScene*                                 m_pScene;                                                 // 0x00DC(0x0008)
	class UTgCallbackContainer*                        m_CallbackContainer;                                      // 0x00E4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.InputGroup");
		return ptr;
	}

};


// Class TgClient.SelectionInterface
// 0x0000 (0x0118 - 0x0118)
class USelectionInterface : public UGFxObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.SelectionInterface");
		return ptr;
	}


	bool SetFocusImpl(class UGFxObject* pObj);
	bool STATIC_SetFocus(class UGFxObject* pObj);
};


// Class TgClient.InputAction
// 0x0024 (0x0084 - 0x0060)
class UInputAction : public UUIData
{
public:
	struct FPointer                                    VfTable_ITgCallbackInterface;                             // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<struct FInputKeyEvent>                      m_Keys;                                                   // 0x0068(0x0010) (NeedCtorLink)
	class UTgCallbackContainer*                        m_CallbackContainer;                                      // 0x0078(0x0008)
	unsigned long                                      m_bAlwaysHandleInput : 1;                                 // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.InputAction");
		return ptr;
	}

};


// Class TgClient.TgGameHUD
// 0x0060 (0x068C - 0x062C)
class ATgGameHUD : public ATgClientHUD
{
public:
	int                                                m_nKillerPlayer;                                          // 0x062C(0x0004)
	int                                                m_nKillerDevice;                                          // 0x0630(0x0004)
	int                                                m_nRank;                                                  // 0x0634(0x0004)
	int                                                m_nWinner;                                                // 0x0638(0x0004)
	int                                                m_nPartyState;                                            // 0x063C(0x0004)
	unsigned long                                      m_bAlive : 1;                                             // 0x0640(0x0004)
	unsigned long                                      m_bGameWon : 1;                                           // 0x0640(0x0004)
	unsigned long                                      m_bGameOver : 1;                                          // 0x0640(0x0004)
	unsigned long                                      m_bDeployed : 1;                                          // 0x0640(0x0004)
	unsigned long                                      m_bSpectating : 1;                                        // 0x0640(0x0004)
	unsigned long                                      m_bTutorialCompleted : 1;                                 // 0x0640(0x0004)
	unsigned long                                      m_bClassMenuShownOnce : 1;                                // 0x0640(0x0004)
	unsigned long                                      m_bClassMenuRemovedOnce : 1;                              // 0x0640(0x0004)
	struct FString                                     m_sKillerName;                                            // 0x0644(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                m_fKillerConsoleUniqueId;                                 // 0x0654(0x0008)
	TArray<int>                                        m_nReportIds;                                             // 0x065C(0x0010) (NeedCtorLink)
	TArray<struct FUniqueNetId>                        m_fReportConsoleUniqueIds;                                // 0x066C(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_sReportNames;                                           // 0x067C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameHUD");
		return ptr;
	}


	void AddNamedAreas();
	void STATIC_PlayDeviceFailResponse(TEnumAsByte<EDeviceFailType> failType);
	void STATIC_PostRender();
	void PostBeginPlay();
	void STATIC_ToggleCosmeticWheel();
	void STATIC_OpenCosmeticWheel(bool bShouldOpen, int nPage);
	void STATIC_ViewScoreboard(bool bShow);
	void STATIC_ScoreboardToggle();
	void STATIC_ViewInventory();
	void STATIC_ViewVGS(bool bShow);
	void STATIC_ShowLootGoblinSpawned(class ATgPawn* DiscoveringPawn, class ATgPawn* TargetGoblin);
	void EndMission(bool bPlayerAttacker, TEnumAsByte<EGAME_WIN_STATE> finalWinState);
	void STATIC_AddNamedArea(class ATgNamedPOIActor* pPOI, int nCount);
	void STATIC_ShowScope(bool bValue, unsigned char eType);
	void UpdatePlayerReady(class ATgRepInfo_Player* pPRI);
	void STATIC_PostRenderDebugDraws();
	void STATIC_PostRenderMovies();
	void FinishIntro();
	void PlayIntro();
};


// Class TgClient.TgSpectatorHUD
// 0x0010 (0x069C - 0x068C)
class ATgSpectatorHUD : public ATgGameHUD
{
public:
	TArray<struct FWidgetClassReplacementPair>         m_WidgetReplacements;                                     // 0x068C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgSpectatorHUD");
		return ptr;
	}

};


// Class TgClient.TgDataGroup_Game
// 0x0030 (0x019C - 0x016C)
class UTgDataGroup_Game : public UTgDataChunk
{
public:
	class UTgGameDC_LocalPlayer*                       m_PlayerData;                                             // 0x016C(0x0008)
	class UTgGameDC_Target*                            m_TargetData;                                             // 0x0174(0x0008)
	class UTgGameDC_PlayerVitals*                      m_PlayerVitals;                                           // 0x017C(0x0008)
	class UTgGameDC_Game*                              m_GameData;                                               // 0x0184(0x0008)
	class UTgGameDC_DeviceList*                        m_DevicesData;                                            // 0x018C(0x0008)
	class UTgGameDC_EffectList*                        m_EffectData;                                             // 0x0194(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgDataGroup_Game");
		return ptr;
	}


	void STATIC_NotifyMapChange();
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDC_Device
// 0x0034 (0x01A0 - 0x016C)
class UTgGameDC_Device : public UTgDataChunk
{
public:
	int                                                m_nDeviceId;                                              // 0x016C(0x0004)
	int                                                m_nDeviceInstanceId;                                      // 0x0170(0x0004)
	int                                                m_nPointsAllocated;                                       // 0x0174(0x0004)
	class UTgSynchronizedTimer*                        m_CooldownTimer;                                          // 0x0178(0x0008)
	struct FScriptDelegate                             __usc_get_mode_tooltip_delegate__Delegate;                // 0x0180(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0180(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __usc_set_cast_mode_delegate__Delegate;                   // 0x0190(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0190(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_Device");
		return ptr;
	}


	void STATIC_usc_set_cast_mode(int nCastMode);
	void usc_set_cast_mode_delegate();
	void STATIC_usc_get_mode_tooltip(int nRank);
	void usc_get_mode_tooltip_delegate();
	void STATIC_NotifyMapChange();
	void STATIC_UpdateCastMode();
	void STATIC_UpdateInstanceCount(class ATgDevice* Dev);
	void STATIC_UpdatePtsAlloc(class ATgDevice* Dev);
	void STATIC_UpdateCooldown(class ATgDevice* Dev);
	void STATIC_UpdateCanFire(class ATgDevice* Dev);
	void STATIC_UpdateSelected(bool bSelected);
	void STATIC_UpdateValues(class ATgDevice* Dev);
	void STATIC_DeviceChangeEvent(class ATgDevice* Dev, TEnumAsByte<EDeviceChangeEvent> Event);
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDC_DeviceList
// 0x00C8 (0x0234 - 0x016C)
class UTgGameDC_DeviceList : public UTgDataChunk
{
public:
	class UTgGameDC_Device*                            m_DeviceList[0x19];                                       // 0x016C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_DeviceList");
		return ptr;
	}


	void STATIC_SetEmpty(TEnumAsByte<ETG_EQUIP_POINT> eSlot);
	void STATIC_UpdatePtsAlloc(class ATgDevice* Dev);
	void STATIC_UpdateSelected(class ATgDevice* Dev);
	void STATIC_UpdateDevice(class ATgDevice* Dev);
	void STATIC_DeviceChangeEvent(class ATgDevice* Dev, TEnumAsByte<EDeviceChangeEvent> Event);
	class UTgGameDC_Device* STATIC_GetDeviceChunk(class ATgDevice* Dev);
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDC_Effect
// 0x0050 (0x01BC - 0x016C)
class UTgGameDC_Effect : public UTgDataChunk
{
public:
	int                                                m_nGroup;                                                 // 0x016C(0x0004)
	int                                                m_nIcon;                                                  // 0x0170(0x0004)
	int                                                m_bBuff;                                                  // 0x0174(0x0004)
	int                                                m_bActive;                                                // 0x0178(0x0004)
	int                                                m_nStacks;                                                // 0x017C(0x0004)
	float                                              m_fTimer;                                                 // 0x0180(0x0004)
	struct FString                                     m_sIcon;                                                  // 0x0184(0x0010) (NeedCtorLink)
	struct FString                                     m_sName;                                                  // 0x0194(0x0010) (NeedCtorLink)
	struct FString                                     m_sDescription;                                           // 0x01A4(0x0010) (NeedCtorLink)
	class UTgSynchronizedTimer*                        m_lifeTimer;                                              // 0x01B4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_Effect");
		return ptr;
	}


	void STATIC_NotifyMapChange();
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDC_EffectList
// 0x0084 (0x01F0 - 0x016C)
class UTgGameDC_EffectList : public UTgDataChunk
{
public:
	unsigned long                                      m_bListUpdated : 1;                                       // 0x016C(0x0004)
	class UTgGameDC_Effect*                            m_EffectList[0x10];                                       // 0x0170(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_EffectList");
		return ptr;
	}


	void STATIC_UpdateEffects(class ATgEffectManager* effectManager, int indexChanged);
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDC_Game
// 0x0021 (0x018D - 0x016C)
class UTgGameDC_Game : public UTgDataChunk
{
public:
	class UTgSynchronizedTimer*                        m_GameTimer;                                              // 0x016C(0x0008)
	class UTgGameDC_Team*                              m_FriendTeamData;                                         // 0x0174(0x0008)
	class UTgGameDC_Team*                              m_EnemyTeamData;                                          // 0x017C(0x0008)
	class UTgGameDC_MapEntity*                         m_GoldFury;                                               // 0x0184(0x0008)
	TEnumAsByte<EGAME_MODE_TYPE>                       currentGameType;                                          // 0x018C(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_Game");
		return ptr;
	}


	void STATIC_UpdateGameCapturePoint(int Index, int Taskforce);
	void STATIC_UpdateGameClock();
	void STATIC_NotifyMapChange();
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDC_MapEntity
// 0x0004 (0x0170 - 0x016C)
class UTgGameDC_MapEntity : public UTgDataChunk
{
public:
	int                                                m_nPawnId;                                                // 0x016C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_MapEntity");
		return ptr;
	}


	void STATIC_NotifyMapChange();
	void STATIC_UpdateMapPosition(const struct FVector& Location, const struct FRotator& Rotation);
	void STATIC_UpdateActorMapPosition(class AActor* gameActor);
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDC_Guardian
// 0x0000 (0x0170 - 0x0170)
class UTgGameDC_Guardian : public UTgGameDC_MapEntity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_Guardian");
		return ptr;
	}

};


// Class TgClient.TgGameDC_Player
// 0x0048 (0x01B8 - 0x0170)
class UTgGameDC_Player : public UTgGameDC_MapEntity
{
public:
	int                                                m_nStatCount;                                             // 0x0170(0x0004)
	class UTgSynchronizedTimer*                        m_ReviveTimer;                                            // 0x0174(0x0008)
	class UTgSynchronizedTimer*                        m_UltimateTimer;                                          // 0x017C(0x0008)
	float                                              m_PrevUltTimer;                                           // 0x0184(0x0004)
	class UGFxObject*                                  m_StatsArray;                                             // 0x0188(0x0008)
	class UGFxObject*                                  m_ItemStoreArray;                                         // 0x0190(0x0008)
	class UGFxObject*                                  m_ActiveItemArray;                                        // 0x0198(0x0008)
	class UGFxObject*                                  m_ConsumableArray;                                        // 0x01A0(0x0008)
	struct FScriptDelegate                             __USC_ForceStatsUpdate_Delegate__Delegate;                // 0x01A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_Player");
		return ptr;
	}


	void STATIC_USC_ForceStatsUpdate();
	void USC_ForceStatsUpdate_Delegate();
	void STATIC_NotifyMapChange();
	void STATIC_UpdateItemStoreItems(class ATgRepInfo_Player* PRI);
	void STATIC_UpdateStats(class ATgPawn* changedPawn);
	void STATIC_UpdatePlayer(class ATgRepInfo_Player* PRI);
	void SetDirty();
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDC_LocalPlayer
// 0x0000 (0x01B8 - 0x01B8)
class UTgGameDC_LocalPlayer : public UTgGameDC_Player
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_LocalPlayer");
		return ptr;
	}


	void STATIC_UpdateSpectatorViewTarget(class UTgGameDC_MapEntity* entity);
	void STATIC_SetVendorItemList(TArray<int> nItemIds);
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDC_Minion
// 0x0000 (0x01B8 - 0x01B8)
class UTgGameDC_Minion : public UTgGameDC_Player
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_Minion");
		return ptr;
	}

};


// Class TgClient.TgGameDC_Turret
// 0x0000 (0x01B8 - 0x01B8)
class UTgGameDC_Turret : public UTgGameDC_Minion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_Turret");
		return ptr;
	}

};


// Class TgClient.TgGameDC_PlayerVitals
// 0x0050 (0x01C0 - 0x0170)
class UTgGameDC_PlayerVitals : public UTgGameDC_MapEntity
{
public:
	float                                              m_fHealth;                                                // 0x0170(0x0004)
	float                                              m_fHealthMax;                                             // 0x0174(0x0004)
	float                                              m_fEnergy;                                                // 0x0178(0x0004)
	float                                              m_fEnergyMax;                                             // 0x017C(0x0004)
	float                                              m_fBoost;                                                 // 0x0180(0x0004)
	float                                              m_fBoostMax;                                              // 0x0184(0x0004)
	float                                              m_fMana;                                                  // 0x0188(0x0004)
	float                                              m_fManaMax;                                               // 0x018C(0x0004)
	float                                              m_fHealthPct;                                             // 0x0190(0x0004)
	float                                              m_fEnergyPct;                                             // 0x0194(0x0004)
	float                                              m_fBoostPct;                                              // 0x0198(0x0004)
	float                                              m_fManaPct;                                               // 0x019C(0x0004)
	float                                              m_fXPPct;                                                 // 0x01A0(0x0004)
	int                                                m_nLevel;                                                 // 0x01A4(0x0004)
	class UTgSynchronizedTimer*                        m_ReviveTimer;                                            // 0x01A8(0x0008)
	class UTgSynchronizedTimer*                        m_RefireTimer;                                            // 0x01B0(0x0008)
	class UTgSynchronizedTimer*                        m_RecallTimer;                                            // 0x01B8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_PlayerVitals");
		return ptr;
	}


	void STATIC_UpdateCoreStats();
	void STATIC_UpdateDamageDone();
	void STATIC_NotifyMapChange();
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDC_RespawnLocation
// 0x0000 (0x0170 - 0x0170)
class UTgGameDC_RespawnLocation : public UTgGameDC_MapEntity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_RespawnLocation");
		return ptr;
	}

};


// Class TgClient.TgGameDC_Tower
// 0x0000 (0x0170 - 0x0170)
class UTgGameDC_Tower : public UTgGameDC_MapEntity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_Tower");
		return ptr;
	}


	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDC_Target
// 0x0000 (0x016C - 0x016C)
class UTgGameDC_Target : public UTgDataChunk
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_Target");
		return ptr;
	}


	bool STATIC_UpdateTarget(class AActor* NewTarget, bool bHovered);
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDC_Team
// 0x0088 (0x01F4 - 0x016C)
class UTgGameDC_Team : public UTgDataChunk
{
public:
	int                                                m_nTaskForce;                                             // 0x016C(0x0004)
	class UTgGameDC_Player*                            m_Members[0x5];                                           // 0x0170(0x0008)
	int                                                m_nMaxMemberCount;                                        // 0x0198(0x0004)
	class UTgGameDC_Guardian*                          m_Guardian;                                               // 0x019C(0x0008)
	class UTgGameDC_Tower*                             m_Towers[0x9];                                            // 0x01A4(0x0008)
	class UTgSynchronizedTimer*                        m_SurrenderTimer;                                         // 0x01EC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_Team");
		return ptr;
	}


	bool STATIC_UpdatePlayerSurrender(class ATgRepInfo_Player* PRI);
	bool STATIC_UpdatePlayerItemStoreItems(class ATgRepInfo_Player* PRI);
	void STATIC_UpdatePlayerStat(class ATgPawn* changedPawn);
	void STATIC_UpdateMembers(class ATgRepInfo_TaskForce* tfri);
	void STATIC_NotifyMapChange();
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGameDataHandler
// 0x0008 (0x0138 - 0x0130)
class UTgGameDataHandler : public UTgDataHandler
{
public:
	class UTgDataGroup_Game*                           m_Game;                                                   // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDataHandler");
		return ptr;
	}


	void STATIC_InitializeDataHandler(class UUIMoviePlayer* mp);
};


// Class TgClient.TgGameDC_Chat
// 0x007C (0x00DC - 0x0060)
class UTgGameDC_Chat : public UTgObject
{
public:
	struct FQueueMessage                               c_CurrentMessage;                                         // 0x0060(0x0030) (NeedCtorLink)
	TArray<struct FQueueMessage>                       c_QueuedMessages;                                         // 0x0090(0x0010) (NeedCtorLink)
	float                                              c_fProcessTime;                                           // 0x00A0(0x0004)
	TArray<class UTgChatData*>                         c_DeferredMessages;                                       // 0x00A4(0x0010) (NeedCtorLink)
	class UAkBaseSoundObject*                          m_scFirstBlood;                                           // 0x00B4(0x0008)
	TArray<struct FMessageToken>                       m_MessageTokens;                                          // 0x00BC(0x0010) (NeedCtorLink)
	float                                              m_fLastEnemyKilledAllyMessageTime;                        // 0x00CC(0x0004) (Transient)
	float                                              m_fMinEnemyKilledAllyMessageTime;                         // 0x00D0(0x0004)
	float                                              m_fLastAllyKilledEnemyMessageTime;                        // 0x00D4(0x0004) (Transient)
	float                                              m_fMinAllyKilledEnemyMessageTime;                         // 0x00D8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDC_Chat");
		return ptr;
	}


	struct FString TokenReplace(const struct FString& Message, const struct FString& Token, const struct FString& sValue);
	void STATIC_SubmitDeferredMessages(int nChannel);
	void STATIC_PlayAnnouncerSound(int nMsgId);
	void STATIC_PlayVGSPOTG(int nPackId, int nBotId, int nSkinId, const struct FString& customSuffix);
	void STATIC_PlayVGSSound(int nMsgId, int nPackId, int nBotId, int nSkinId, const struct FString& customSuffix, int nSourcePlayerId);
	void STATIC_PlayMessageSound(int nMsgId, TEnumAsByte<ETG_CHAT_PRIORITY> ePriority);
	void STATIC_AddAlert(const struct FString& Message);
	void STATIC_UpdateMessageSoundQueue();
	void STATIC_Update(float DeltaTime, bool bSkipCallback);
	void STATIC_AddPopupMsg(const struct FString& msg);
	void STATIC_AddCombatMsg(const struct FString& msg);
	void STATIC_AddLocalChatMsg(const struct FString& msg, const struct FString& senderName);
	void STATIC_AddChatMsg(const struct FString& msg, const struct FString& senderName, int nChannel, bool bIsFeedback, bool bIsVGS, int nMsgId);
	void STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgMiniMap
// 0x055C (0x05BC - 0x0060)
class UTgMiniMap : public UObject
{
public:
	int                                                m_nMiniMapMode;                                           // 0x0060(0x0004)
	unsigned long                                      m_bShouldDisplayMiniMap : 1;                              // 0x0064(0x0004)
	unsigned long                                      m_bHasMiniMapTexture : 1;                                 // 0x0064(0x0004)
	unsigned long                                      m_bRequiresLOS : 1;                                       // 0x0064(0x0004)
	unsigned long                                      m_bUseFlashSizing : 1;                                    // 0x0064(0x0004)
	unsigned long                                      m_bSpectating : 1;                                        // 0x0064(0x0004)
	float                                              m_fLastUpdateTime;                                        // 0x0068(0x0004)
	class UMaterialInstanceConstant*                   m_MiniMapBaseMIC;                                         // 0x006C(0x0008)
	class UMaterialInstanceConstant*                   m_MiniMapMIC;                                             // 0x0074(0x0008)
	class UTexture2DDynamic*                           m_DynamicMask;                                            // 0x007C(0x0008)
	int                                                m_nMaskSize;                                              // 0x0084(0x0004)
	float                                              m_fIconScale;                                             // 0x0088(0x0004)
	struct FVector2D                                   m_vMapLocation;                                           // 0x008C(0x0008)
	int                                                m_nMapSize;                                               // 0x0094(0x0004)
	struct FPointer                                    m_MiniMapRender;                                          // 0x0098(0x0008) (Const, Native, Transient)
	class ATgPlayerController*                         m_OwnerPC;                                                // 0x00A0(0x0008)
	int                                                m_nWorldMapSize;                                          // 0x00A8(0x0004)
	class UMaterialInstanceConstant*                   m_MICPinging;                                             // 0x00AC(0x0008)
	class UMaterialInstanceConstant*                   m_MICPingingEnemy;                                        // 0x00B4(0x0008)
	class UMaterialInstanceConstant*                   m_MICRetreat;                                             // 0x00BC(0x0008)
	class UMaterialInstanceConstant*                   m_MICRetreatEnemy;                                        // 0x00C4(0x0008)
	class UMaterialInstanceConstant*                   m_MICAlert;                                               // 0x00CC(0x0008)
	class UMaterialInstanceConstant*                   m_MICAlertEnemy;                                          // 0x00D4(0x0008)
	class UMaterialInstanceConstant*                   m_MICAlertSilent;                                         // 0x00DC(0x0008)
	class UMaterialInstanceConstant*                   m_MICLocalPlayer;                                         // 0x00E4(0x0008)
	class UMaterialInstanceConstant*                   m_MICLocalSpectator;                                      // 0x00EC(0x0008)
	TArray<class UTexture2D*>                          m_TextureRefs;                                            // 0x00F4(0x0010) (NeedCtorLink)
	class UMaterialInstanceConstant*                   m_MICPlayer[0x6];                                         // 0x0104(0x0008)
	class UMaterialInstanceConstant*                   m_MICMinion[0x6];                                         // 0x0134(0x0008)
	class UMaterialInstanceConstant*                   m_MICTower[0x6];                                          // 0x0164(0x0008)
	class UMaterialInstanceConstant*                   m_MICTitan[0x6];                                          // 0x0194(0x0008)
	class UMaterialInstanceConstant*                   m_MICPhoenix[0x6];                                        // 0x01C4(0x0008)
	class UMaterialInstanceConstant*                   m_MICCapturePoint[0x6];                                   // 0x01F4(0x0008)
	class UMaterialInstanceConstant*                   m_MICLanePusher[0x6];                                     // 0x0224(0x0008)
	class UMaterialInstanceConstant*                   m_MICTowerOlympus[0x3];                                   // 0x0254(0x0008)
	class UMaterialInstanceConstant*                   m_MICTitanOlympus[0x6];                                   // 0x026C(0x0008)
	class UMaterialInstanceConstant*                   m_MICPhoenixOlympus[0x3];                                 // 0x029C(0x0008)
	class UMaterialInstanceConstant*                   m_MICMonster;                                             // 0x02B4(0x0008)
	struct FLinearColor                                m_PortalLinkColor[0x6];                                   // 0x02BC(0x0010)
	struct FBuffMonsterMIC                             m_MICBuffMonster[0xE];                                    // 0x031C(0x0018)
	class UMaterialInstanceConstant*                   m_MICTowerDestroyed;                                      // 0x046C(0x0008)
	class UMaterialInstanceConstant*                   m_PlayerBackground[0x6];                                  // 0x0474(0x0008)
	class UMaterialInstanceConstant*                   m_TowerAttackBackground[0x6];                             // 0x04A4(0x0008)
	unsigned char                                      UnknownData00[0x48];                                      // 0x04D4(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.TgMiniMap.m_IconMap
	struct FBitArray_Mirror                            m_MaskPoints;                                             // 0x051C(0x0020) (Const, Native, Transient)
	TEnumAsByte<ETgMapOrientation>                     m_Orientation;                                            // 0x053C(0x0001)
	TEnumAsByte<ETgMapTeam>                            m_LocalTeam;                                              // 0x053D(0x0001)
	unsigned char                                      bUpdateCapturePoint[0x5];                                 // 0x053E(0x0001)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0543(0x0001) MISSED OFFSET
	unsigned char                                      UnknownData02[0x48];                                      // 0x0543(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.TgMiniMap.m_EntityMap
	TArray<struct FLayerIndex>                         m_PortalLayeringIdx;                                      // 0x058C(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FLayerIndex>                         m_LayeringIdx;                                            // 0x059C(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FMiniMapPingInfo>                    m_IndependentPings;                                       // 0x05AC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgMiniMap");
		return ptr;
	}


	bool CheckSpectatorState();
	void STATIC_UpdateMapSize(int newX);
	void STATIC_UpdateMiniMapTexture();
	void STATIC_CreateMiniMapTexture();
	void Clear();
	void RemoveAllEntities();
	bool STATIC_VerifyMapLocation(float X, float Y);
	void STATIC_GetRepInfosForLocation(const struct FVector& mapLoc, TArray<class AReplicationInfo*>* repInfos);
	struct FVector STATIC_WorldToMap(const struct FVector& Loc);
	struct FVector STATIC_MapToWorld(const struct FVector& Loc);
	void STATIC_ClearHover();
	void STATIC_HoverMap(float X, float Y);
	void PingMap(float X, float Y, TEnumAsByte<EPING_TYPE> Pt);
	bool STATIC_ShouldRender();
	void STATIC_PingWorldLocation(const struct FVector& PingLocation, TEnumAsByte<EPING_TYPE> Pt);
	void Init(class ATgPlayerController* PC);
	void STATIC_Draw(class UCanvas* theCanvas);
};


// Class TgClient.TgMiniMap_Targeting
// 0x0030 (0x05EC - 0x05BC)
class UTgMiniMap_Targeting : public UTgMiniMap
{
public:
	class UMaterialInstanceConstant*                   m_MICWardTarget[0x6];                                     // 0x05BC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgMiniMap_Targeting");
		return ptr;
	}

};


// Class TgClient.UIHudVGSData
// 0x004C (0x00AC - 0x0060)
class UUIHudVGSData : public UObject
{
public:
	int                                                m_nId;                                                    // 0x0060(0x0004)
	int                                                m_nParentId;                                              // 0x0064(0x0004)
	int                                                m_nScopeVal;                                              // 0x0068(0x0004)
	struct FString                                     m_sLabel;                                                 // 0x006C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sOutput;                                                // 0x007C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sKeybind;                                               // 0x008C(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UUIHudVGSData*>                       m_Children;                                               // 0x009C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudVGSData");
		return ptr;
	}

};


// Class TgClient.UIGameMoviePlayer
// 0x0240 (0x04E0 - 0x02A0)
class UUIGameMoviePlayer : public UUIMoviePlayer
{
public:
	struct FPointer                                    VfTable_ITgCallbackInterface;                             // 0x02A0(0x0008) (Const, Native, NoExport)
	struct FString                                     m_sDevJsonURL;                                            // 0x02A8(0x0010) (Config, NeedCtorLink)
	struct FString                                     m_sPTSJsonURL;                                            // 0x02B8(0x0010) (Config, NeedCtorLink)
	struct FString                                     m_sLiveJsonURL;                                           // 0x02C8(0x0010) (Config, NeedCtorLink)
	int                                                m_nResizeTicks;                                           // 0x02D8(0x0004)
	int                                                m_nChosenQueue;                                           // 0x02DC(0x0004)
	int                                                m_nPreviousRank;                                          // 0x02E0(0x0004)
	unsigned long                                      m_bVisible : 1;                                           // 0x02E4(0x0004)
	unsigned long                                      m_bGamepad : 1;                                           // 0x02E4(0x0004)
	unsigned long                                      m_bTimedQueue : 1;                                        // 0x02E4(0x0004)
	unsigned long                                      m_bHasNoPlayer : 1;                                       // 0x02E4(0x0004)
	unsigned long                                      m_bSkipTutorial : 1;                                      // 0x02E4(0x0004)
	unsigned long                                      m_bInLoginQueue : 1;                                      // 0x02E4(0x0004)
	unsigned long                                      m_bDirectionalNav : 1;                                    // 0x02E4(0x0004)
	unsigned long                                      m_bReceivedRatings : 1;                                   // 0x02E4(0x0004)
	unsigned long                                      m_bSummaryPurchase : 1;                                   // 0x02E4(0x0004)
	unsigned long                                      m_bPlayAnnouncerSample : 1;                               // 0x02E4(0x0004)
	float                                              m_fQueueTimer;                                            // 0x02E8(0x0004)
	float                                              m_fCameraFader;                                           // 0x02EC(0x0004)
	float                                              m_fLoginQueueTimer;                                       // 0x02F0(0x0004)
	float                                              m_fTransitionTimer;                                       // 0x02F4(0x0004)
	float                                              m_fTransitionFader;                                       // 0x02F8(0x0004)
	float                                              m_fVideoCompletedTimer;                                   // 0x02FC(0x0004)
	struct FString                                     m_sPass;                                                  // 0x0300(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sUserName;                                              // 0x0310(0x0010) (AlwaysInit, NeedCtorLink)
	class UGFxObject*                                  m_mcMapFrame;                                             // 0x0320(0x0008)
	class UGFxObject*                                  m_mcMapFrameLarge;                                        // 0x0328(0x0008)
	class UGFxObject*                                  m_mcKeyboardFocus;                                        // 0x0330(0x0008)
	class UUIComponent*                                m_KeyboardComponent;                                      // 0x0338(0x0008)
	class UTgGameDC_Chat*                              m_Chat;                                                   // 0x0340(0x0008)
	class UUIDataManager*                              m_UIDataManager;                                          // 0x0348(0x0008)
	struct FPointer                                    m_ConfigManager;                                          // 0x0350(0x0008) (Native)
	class UUILandingPanelManager*                      m_LandingPanelManager;                                    // 0x0358(0x0008)
	class UUIPatchNotesJsonManager*                    m_PatchNotesJsonManager;                                  // 0x0360(0x0008)
	class UTgSeasonTicketManager*                      m_SeasonTicketManager;                                    // 0x0368(0x0008)
	class UTgBrowserManager*                           m_WebBrowser;                                             // 0x0370(0x0008)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0378(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIGameMoviePlayer.m_Scenes
	unsigned char                                      UnknownData01[0x48];                                      // 0x03C0(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIGameMoviePlayer.m_OnlineProfiles
	struct FString                                     m_sPendingOnlineScene;                                    // 0x0408(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sDelayErrorTitle;                                       // 0x0418(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sDelayErrorDesc;                                        // 0x0428(0x0010) (AlwaysInit, NeedCtorLink)
	class UTextureRenderTarget2D*                      m_RenderTarget;                                           // 0x0438(0x0008)
	class UTexture*                                    m_BrowserTexture[0x4];                                    // 0x0440(0x0008)
	struct FString                                     m_Team1Name;                                              // 0x0460(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_Team2Name;                                              // 0x0470(0x0010) (AlwaysInit, NeedCtorLink)
	class UAkBaseSoundObject*                          m_akError;                                                // 0x0480(0x0008)
	class UAkBaseSoundObject*                          m_akJoinQueue;                                            // 0x0488(0x0008)
	class UTgManifestGroup*                            m_AnnouncerManifestGroup;                                 // 0x0490(0x0008)
	int                                                m_nAnnouncerItemId;                                       // 0x0498(0x0004)
	class UAkEvent*                                    m_akEquippedAnnouncerSound;                               // 0x049C(0x0008)
	class UTgManifestGroup*                            m_VoicePackManifestGroup;                                 // 0x04A4(0x0008)
	int                                                m_nVoicePackItemId;                                       // 0x04AC(0x0004)
	class UUIData_PopupGeneric*                        m_pQuitPromptData;                                        // 0x04B0(0x0008)
	class UTgCallbackContainer*                        m_CallbackContainer;                                      // 0x04B8(0x0008)
	TArray<struct FPropertyPair>                       m_Rankings;                                               // 0x04C0(0x0010) (NeedCtorLink)
	TArray<struct FPropertyPair>                       m_Experience;                                             // 0x04D0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIGameMoviePlayer");
		return ptr;
	}


	void CheckPermissionForOnlineScene(const struct FString& sScene, unsigned char ControlledId, TEnumAsByte<EFeaturePrivilegeLevel> Hint, bool bAttemptToResolve);
	void STATIC_OnPermissionForOnlineScene(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint);
	bool NativeOpenURL(const struct FString& URL);
	void STATIC_OnAccountPickerCompleteForLogin(bool bForceLogin);
	void STATIC_OnReadOnlinePlayerData(bool bWasSuccessful, TArray<struct FString> PlayerIDs, TArray<struct FOnlineProfile> OnlineProfiles);
	bool IsAccountPickerOpen();
	void ReadOnlinePlayerData(TArray<struct FString> PlayerIDs);
	void STATIC_OnUserAccountInfoRetrieved(bool bSuccessful, const struct FUserAccountInfo& AccountInfo);
	void GetAccountInfo();
	bool CanShowContentPurchaseUI();
	void ShowContentPurchaseUI(const struct FString& SingedOffer);
	void usc_ShowProductDetailsUI(const struct FString& ProductID);
	void usc_ShowGameDetailsUI();
	void usc_ShowContentMarketPlaceUIForProduct(int ParentProductType, int RequestedProductTypes, const struct FString& ProductID);
	void usc_ShowContentMarketPlaceUI(int ParentProductType, int RequestedProductTypes);
	void STATIC_updatePlayerMute(bool bWasSuccessful);
	void STATIC_ShowGamercard(const struct FUniqueNetId& PlayerID);
	void ShowGamerCardByUserName(const struct FString& UserName, const struct FUniqueNetId& PlayerID);
	bool IsPlayerMuted(const struct FUniqueNetId& ConsoleId);
	void UnmutePlayer(unsigned char LocalUserNum, const struct FUniqueNetId& ConsoleId);
	void MutePlayer(unsigned char LocalUserNum, const struct FUniqueNetId& ConsoleId);
	void UnregisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex);
	void RegisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex);
	bool STATIC_WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool STATIC_WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool CheckControllerConnected();
	void STATIC_OnComponentKeyboardInputComplete(bool bWasSuccessful);
	void STATIC_OnTextFieldKeyboardInputComplete(bool bWasSuccessful);
	void ShowComponentKeyboardUI(class UUIComponent* CallingComponent, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	void ShowKeyboardUI(class UGFxObject* FocusedTextField, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	void STATIC_OnAccountPickerCancelledWrapper();
	void STATIC_OnClose();
	void STATIC_InitOSSRef();
	void Init(class ULocalPlayer* LocPlay);
	void UnloadScene(const struct FString& sName);
	void LoadScene(const struct FString& sName, const struct FString& sPath, int nDepth);
	bool STATIC_ShowErrorMessage(const struct FString& sTitle, const struct FString& sError);
	void STATIC_OnAccountPickerCancelled();
	void STATIC_ShowPartyRequiresPremiumAccountWarning();
	void STATIC_ShowNoFriendsForProfileViewWarning();
	void STATIC_OnSuccessfulUserAccountInfoRetrieved(const struct FUserAccountInfo& AccountInfo);
	bool STATIC_IsItemOwned(int ItemId);
	class UTgGameDataHandler* STATIC_GetDataHandler();
	class UTgDataGroup_Game* STATIC_GetGameData();
	void STATIC_HideSubtitle();
	void STATIC_SwitchSubtitleText(const struct FString& sValue);
	void STATIC_ShowSubtitle(const struct FString& sValue, float fTime);
	bool STATIC_NativeWidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool STATIC_NativeWidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void STATIC_OnReadOnlinePlayerDataComplete(bool bWasSuccessful, TArray<struct FString> PlayerIDs, TArray<struct FOnlineProfile> OnlineProfiles);
	bool STATIC_HasPlayerDisplayName(const struct FString& OnlineID);
	struct FString STATIC_GetPlayerDisplayName(const struct FString& PlayerName, const struct FString& OnlineID);
	int STATIC_GetGamepadValueForKeyBind(const struct FString& KeyBind);
	void STATIC_NativeTick(float DeltaTime);
	void STATIC_ForceDirty();
	void STATIC_PostInit();
	void STATIC_InitAnnouncer();
	void STATIC_OnVoicePackLoaded();
	void STATIC_OnAnnouncerLoaded();
	void STATIC_SetLoginReady();
	void STATIC_UpdateGamepadIcons();
	void STATIC_CheckControllerDisconnected();
	void STATIC_AddInitialChatMessages();
	void STATIC_CloseChatTab(int nChannel, const struct FString& sSender);
	void STATIC_OpenChatTab(int nChannel, const struct FString& sName, bool bOpenWindow);
	void STATIC_UpdateViewportForSafeAreas();
	void STATIC_AttemptAutoLogin(bool bSkipServerStatusCheck);
	void STATIC_QuitGame();
	void STATIC_PromptToQuit();
	bool STATIC_SetRenderTargetEnabled(bool bEnabled, int surfaceId);
	bool STATIC_usc_resize_browser(int surfaceId, float X, float Y, float Width, float Height, float widthReal, float heightReal);
	void STATIC_usc_enable_browser_input(bool bEnable);
	void STATIC_usc_chat_close_tab(int nChannel, const struct FString& Sender);
	void STATIC_usc_resend_private_messages();
	void STATIC_usc_vgs_command(int nId, bool bSubMenu);
	void STATIC_usc_toggle_player_mute(const struct FString& sPlayerName);
	void STATIC_ToggleSkillScreen(bool bShow);
	void STATIC_DumpMctsEventProfiling();
};


// Class TgClient.TgLobbyHUD
// 0x00B0 (0x06DC - 0x062C)
class ATgLobbyHUD : public ATgClientHUD
{
public:
	unsigned long                                      m_bCurrentlyQueuedForInitialTutorial : 1;                 // 0x062C(0x0004)
	unsigned long                                      m_bJoiningTraining : 1;                                   // 0x062C(0x0004)
	unsigned long                                      m_bShouldResetCamera : 1;                                 // 0x062C(0x0004)
	int                                                m_nQueue;                                                 // 0x0630(0x0004)
	int                                                m_nQueueState;                                            // 0x0634(0x0004)
	int                                                m_nLobbyState;                                            // 0x0638(0x0004)
	int                                                m_nPlayerState;                                           // 0x063C(0x0004)
	int                                                m_nModelPose;                                             // 0x0640(0x0004)
	int                                                m_nModelSkin;                                             // 0x0644(0x0004)
	int                                                m_nModelHead;                                             // 0x0648(0x0004)
	int                                                m_nModelClass;                                            // 0x064C(0x0004)
	int                                                m_nModelDevice;                                           // 0x0650(0x0004)
	int                                                m_nModelDeviceSkin;                                       // 0x0654(0x0004)
	int                                                m_nModelContrailSkin;                                     // 0x0658(0x0004)
	class ATgLobbyCamera*                              c_CurrentCamera;                                          // 0x065C(0x0008)
	TArray<struct FString>                             m_sAdditionalNeededScenes;                                // 0x0664(0x0010) (NeedCtorLink)
	TArray<int>                                        m_CTAItemIds;                                             // 0x0674(0x0010) (Config, GlobalConfig, NeedCtorLink)
	struct FString                                     m_PlayerCTAName;                                          // 0x0684(0x0010) (Config, GlobalConfig, NeedCtorLink)
	struct FString                                     m_SavedLoginVersion;                                      // 0x0694(0x0010) (Config, GlobalConfig, NeedCtorLink)
	struct FString                                     m_LastLoginVersion;                                       // 0x06A4(0x0010) (NeedCtorLink)
	class ATgSkeletalMeshActor_Pedestal*               m_FrontLinePedestalMeshActor;                             // 0x06B4(0x0008)
	class ATgSkeletalMeshActor_Pedestal*               m_FlankPedestalMeshActor;                                 // 0x06BC(0x0008)
	class ATgSkeletalMeshActor_Pedestal*               m_SupportPedestalMeshActor;                               // 0x06C4(0x0008)
	class ATgSkeletalMeshActor_Pedestal*               m_DamagerPedestalMeshActor;                               // 0x06CC(0x0008)
	float                                              m_fOriginalCollisionHeight;                               // 0x06D4(0x0004)
	float                                              m_fOriginalCollisionRadius;                               // 0x06D8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgLobbyHUD");
		return ptr;
	}


	void STATIC_RequestCustomGames();
	void STATIC_ChangePedestalModel(TEnumAsByte<EPedestalType> PedestalType, int BotId, int SkinId, int HeadId, int DeviceID, int DeviceSkinId, int MVPId, int nContrailSkinId, int CharacterMastery);
	void StopSkydive();
	void StopMVP();
	void PlayMVP(int nDeviceId);
	void StopEmote();
	void PlayEmote(int nDeviceId);
	void STATIC_ChangeModel(int BotId, int SkinId, int HeadId, int DeviceID, int DeviceSkinId, int PedestalSkinId, int ContrailSkinId, unsigned char pose, TEnumAsByte<ELobbyCameraTag> CameraTag, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExp, TEnumAsByte<EModelHighlightType> HighlightType, int MVPDeviceId);
	void STATIC_SwitchToCards(bool bEnabled);
	void PostBeginPlay();
	void STATIC_TryPushScene(const struct FString& sName, bool bSkipPrivilegeCheck);
	void STATIC_TriggerLazyPrecache();
	void STATIC_DisplayCharacter();
	void STATIC_PreviewItem(TEnumAsByte<ELobbyCameraTag> CamTag, int nItemIdToPreview, int nTargetIndex);
	class ATgLobbyCamera* STATIC_SwitchToCamera(TEnumAsByte<ELobbyCameraTag> CamTag, TEnumAsByte<ECameraTransType> camDirection, bool bForce, bool bForceCameraReset, const struct FViewTargetTransitionParams& BlendParams);
	class ATgLobbyCamera* STATIC_GetCamera(TEnumAsByte<ELobbyCameraTag> CamTag);
	void STATIC_CleanupPedestalModels();
	void STATIC_ChangeTeamModel(bool bFriendly, int nIndex, int nClassID, int nSkinId, int nHeadId, int nDeviceId, int nDeviceSkinId, int nPedestalSkinId, TEnumAsByte<ELobbyAnimPose> pose, bool bAsync, TEnumAsByte<EModelHighlightType> HighlightType, int MVPDeviceId, int nContrailSkinId, int nCharacterXP, const struct FScriptDelegate& MeshUpdatedDelegate);
	bool RotateModel(float fValue);
	void STATIC_ChangeClassModel(bool bFriendly, int nIndex, int nClassID, int nSkinId, int nHeadId, int nDeviceId, int nDeployableId, int nMarkerId, int nDeviceSkinId, int nPedestalSkinId, TEnumAsByte<ELobbyAnimPose> pose, TEnumAsByte<ECameraTransType> camDirection, bool bAsync, TEnumAsByte<EModelHighlightType> HighlightType, int MVPDeviceId, int nContrailSkinId);
	void STATIC_SetUpEOMLobby();
	bool STATIC_HaveEOMLobbyData();
};


// Class TgClient.TgSetting
// 0x003C (0x009C - 0x0060)
class UTgSetting : public UTgObject
{
public:
	float                                              m_fDefault;                                               // 0x0060(0x0004)
	float                                              m_fConfigDefault;                                         // 0x0064(0x0004)
	float                                              m_fOriginal;                                              // 0x0068(0x0004)
	float                                              m_fMax;                                                   // 0x006C(0x0004)
	float                                              m_fMin;                                                   // 0x0070(0x0004)
	float                                              m_fTemp;                                                  // 0x0074(0x0004)
	float                                              m_fValue;                                                 // 0x0078(0x0004)
	float                                              m_fPrecision;                                             // 0x007C(0x0004)
	TEnumAsByte<ESETTING_TYPE>                         m_eType;                                                  // 0x0080(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	TArray<struct FOptionData>                         m_Options;                                                // 0x0084(0x0010) (NeedCtorLink)
	unsigned long                                      m_bCanPressAndHold : 1;                                   // 0x0094(0x0004)
	float                                              m_fPressAndHoldModifierAmount;                            // 0x0098(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgSetting");
		return ptr;
	}

};


// Class TgClient.TgSettingsManager
// 0x0068 (0x00C8 - 0x0060)
class UTgSettingsManager : public UTgObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0060(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.TgSettingsManager.m_Sets
	TArray<class UTgSetting*>                          m_Settings;                                               // 0x00A8(0x0010) (NeedCtorLink)
	TArray<struct FTgKeyCommand>                       m_Commands;                                               // 0x00B8(0x0010) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgSettingsManager");
		return ptr;
	}


	struct FString STATIC_GetKeybindExtended(const struct FString& sCommand, int nAlt, int nBotId);
};


// Class TgClient.AcquisitionHandler
// 0x0000 (0x0060 - 0x0060)
class UAcquisitionHandler : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.AcquisitionHandler");
		return ptr;
	}

};


// Class TgClient.DelayQueueInterface
// 0x0000 (0x0060 - 0x0060)
class UDelayQueueInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.DelayQueueInterface");
		return ptr;
	}

};


// Class TgClient.UIComponent
// 0x00B8 (0x0118 - 0x0060)
class UUIComponent : public UObject
{
public:
	struct FPointer                                    VfTable_ITgCallbackInterface;                             // 0x0060(0x0008) (Const, Native, NoExport)
	TEnumAsByte<EUICOMPONENTTYPE>                      m_ComponentType;                                          // 0x0068(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	class UUIComponent*                                m_Owner;                                                  // 0x006C(0x0008)
	class UGFxObject*                                  m_mcRoot;                                                 // 0x0074(0x0008)
	struct FString                                     m_sLoadName;                                              // 0x007C(0x0010) (NeedCtorLink)
	int                                                m_nLoadIndex;                                             // 0x008C(0x0004)
	struct FString                                     m_sConstructName;                                         // 0x0090(0x0010) (NeedCtorLink)
	unsigned long                                      m_bConstructed : 1;                                       // 0x00A0(0x0004)
	unsigned long                                      m_bCenteredHorizontally : 1;                              // 0x00A0(0x0004)
	unsigned long                                      m_bCenteredVertically : 1;                                // 0x00A0(0x0004)
	unsigned long                                      m_bShouldCreateInput : 1;                                 // 0x00A0(0x0004)
	unsigned long                                      m_bBlockInputFallThrough : 1;                             // 0x00A0(0x0004)
	unsigned long                                      m_bPushInputOnVisible : 1;                                // 0x00A0(0x0004)
	int                                                m_nDeferredUpdateCallbackHandle;                          // 0x00A4(0x0004)
	TArray<class UUIComponent*>                        m_Components;                                             // 0x00A8(0x0010) (Const, NeedCtorLink)
	struct FMultiMap_Mirror                            m_ComponentMap;                                           // 0x00B8(0x0048) (Const, Native)
	class UTgCallbackContainer*                        m_CallbackContainer;                                      // 0x0100(0x0008)
	int                                                m_nXBeforeCenter;                                         // 0x0108(0x0004)
	int                                                m_nYBeforeCenter;                                         // 0x010C(0x0004)
	class UInputContext*                               m_InputContext;                                           // 0x0110(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent");
		return ptr;
	}


	void STATIC_OnKeyboardUIComplete(const struct FString& sResult, unsigned char bCanceled);
	float STATIC_GetYMouse();
	float STATIC_GetXMouse();
	float HandleAnimEvent(int nEventType, TArray<float> fExtraData);
	void STATIC_ClearQueuedSounds(class UAkBaseSoundObject* akSound);
	void STATIC_QueueSound(class UAkBaseSoundObject* akSound, float fDelay);
	bool STATIC_IsSoundQueued(class UAkBaseSoundObject* akSound);
	void STATIC_EndAnim(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType);
	float STATIC_GetAnimationTarget(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType);
	bool STATIC_IsAnimating(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType);
	void STATIC_QueueAnim(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, unsigned char eQuad);
	void STATIC_Animate(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, float fDelay, unsigned char eQuad, bool bEndCurrentAnim);
	void FadeOut(class UGFxObject* pObj, float fTime, float fDelay);
	void FadeIn(class UGFxObject* pObj, float fTime, float fDelay);
	void STATIC_AnimateAsWell(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, float fDelay, unsigned char eQuad);
	void STATIC_FadeOutAsWell(class UGFxObject* pObj, float fTime, float fDelay);
	void STATIC_FadeInAsWell(class UGFxObject* pObj, float fTime, float fDelay);
};


// Class TgClient.UIComponent_Display
// 0x0008 (0x0120 - 0x0118)
class UUIComponent_Display : public UUIComponent
{
public:
	class UUIData*                                     m_pData;                                                  // 0x0118(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Display");
		return ptr;
	}

};


// Class TgClient.UIComponent_AbilityPointsPool
// 0x00A5 (0x01C5 - 0x0120)
class UUIComponent_AbilityPointsPool : public UUIComponent_Display
{
public:
	unsigned long                                      m_bDirty : 1;                                             // 0x0120(0x0004)
	int                                                m_nTickCallbackHandle;                                    // 0x0124(0x0004)
	class UGFxObject*                                  m_mcAbilityPointsPool;                                    // 0x0128(0x0008)
	class UGFxObject*                                  m_mcAbilityIcon[0x4];                                     // 0x0130(0x0008)
	class UGFxObject*                                  m_mcPointsFill[0x4];                                      // 0x0150(0x0008)
	class UGFxObject*                                  m_mcPointsText[0x4];                                      // 0x0170(0x0008)
	class UGFxObject*                                  m_mcTalentFocusFrame[0x4];                                // 0x0190(0x0008)
	float                                              m_fFillWidth;                                             // 0x01B0(0x0004)
	int                                                m_nPoints[0x4];                                           // 0x01B4(0x0004)
	TEnumAsByte<EAbilityModifiedByDevice>              m_eFocusedAbility;                                        // 0x01C4(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_AbilityPointsPool");
		return ptr;
	}

};


// Class TgClient.UIComponent_Avatar
// 0x0010 (0x0130 - 0x0120)
class UUIComponent_Avatar : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTexture;                                              // 0x0120(0x0008)
	class UGFxObject*                                  m_mcLoadingSpinner;                                       // 0x0128(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Avatar");
		return ptr;
	}

};


// Class TgClient.UIComponent_BattlePassChallenges
// 0x0018 (0x0138 - 0x0120)
class UUIComponent_BattlePassChallenges : public UUIComponent_Display
{
public:
	class UUIComponent_List*                           m_pChallengeList;                                         // 0x0120(0x0008)
	class UUIComponent_Interactable*                   m_pNextArrow;                                             // 0x0128(0x0008)
	class UUIComponent_Interactable*                   m_pPrevArrow;                                             // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_BattlePassChallenges");
		return ptr;
	}

};


// Class TgClient.UIComponent_BattlePassHome
// 0x00D0 (0x01F0 - 0x0120)
class UUIComponent_BattlePassHome : public UUIComponent_Display
{
public:
	class UUIComponent_BattlePassPurchasePanel*        m_pPurchasePanel;                                         // 0x0120(0x0008)
	class UUIComponent_BattlePassRewardsInfoPanel*     m_pInfoPanel;                                             // 0x0128(0x0008)
	class UUIComponent_ItemIcon*                       m_pItemInfo;                                              // 0x0130(0x0008)
	class UGFxObject*                                  m_mcLoadingFrame;                                         // 0x0138(0x0008)
	class UGFxObject*                                  m_mcAvatarContainer;                                      // 0x0140(0x0008)
	class UUIComponent_Avatar*                         m_Avatar;                                                 // 0x0148(0x0008)
	class UUIComponent_List*                           m_pTiers;                                                 // 0x0150(0x0008)
	class UUIComponent_Interactable*                   m_pNextReward;                                            // 0x0158(0x0008)
	class UUIComponent_Interactable*                   m_pPrevReward;                                            // 0x0160(0x0008)
	class UGFxObject*                                  m_mcTiersTF0;                                             // 0x0168(0x0008)
	class UGFxObject*                                  m_mcTiersTF1;                                             // 0x0170(0x0008)
	class UGFxObject*                                  m_mcBattlePassTrack;                                      // 0x0178(0x0008)
	class UGFxObject*                                  m_mcBattlePassTrackHeader;                                // 0x0180(0x0008)
	class UInputGroup*                                 m_grGroup;                                                // 0x0188(0x0008)
	int                                                m_nAcknowledgedTier;                                      // 0x0190(0x0004)
	int                                                m_nAcknowledgedLevel;                                     // 0x0194(0x0004)
	struct Fdword                                      m_dwAcknowledgedPoints;                                   // 0x0198(0x0004)
	unsigned long                                      m_bAcknowledgedPaid : 1;                                  // 0x019C(0x0004)
	unsigned long                                      m_bFirstPresentation : 1;                                 // 0x019C(0x0004)
	struct FVector                                     m_vBaseCameraOffset;                                      // 0x01A0(0x000C)
	struct FVector                                     m_vMountCameraOffset;                                     // 0x01AC(0x000C)
	struct FVector                                     m_vDeathStampCameraOffset;                                // 0x01B8(0x000C)
	class UInputAction*                                m_InputScrollLeft;                                        // 0x01C4(0x0008)
	class UInputAction*                                m_InputScrollRight;                                       // 0x01CC(0x0008)
	int                                                m_nOnTickCallbackHandle;                                  // 0x01D4(0x0004)
	class UUIComponent_GamepadKey*                     m_pPromptLeft;                                            // 0x01D8(0x0008)
	class UUIComponent_GamepadKey*                     m_pPromptRight;                                           // 0x01E0(0x0008)
	class UUIData_LootTableItem*                       m_pPreviewLTIRequested;                                   // 0x01E8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_BattlePassHome");
		return ptr;
	}

};


// Class TgClient.UIComponent_BattlePassPicks
// 0x0040 (0x0160 - 0x0120)
class UUIComponent_BattlePassPicks : public UUIComponent_Display
{
public:
	class UInputGroup*                                 m_grGroup;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcPicksHeader;                                          // 0x0128(0x0008)
	class UGFxObject*                                  m_mcBPActiveThrough;                                      // 0x0130(0x0008)
	class UGFxObject*                                  m_mcBonusLabel;                                           // 0x0138(0x0008)
	class UGFxObject*                                  m_mcBonusAmount;                                          // 0x0140(0x0008)
	class UUIComponent_Toggle*                         m_pSpoilerToggle;                                         // 0x0148(0x0008)
	class UUIComponent_List*                           m_pPickWeeks;                                             // 0x0150(0x0008)
	class UUIComponent_Interactable*                   m_pBecomeBP;                                              // 0x0158(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_BattlePassPicks");
		return ptr;
	}

};


// Class TgClient.UIComponent_BattlePassPurchasePanel
// 0x0070 (0x0190 - 0x0120)
class UUIComponent_BattlePassPurchasePanel : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcLevel;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcDiamond;                                              // 0x0128(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_mcRarity;                                               // 0x0138(0x0008)
	class UGFxObject*                                  m_mcDesc;                                                 // 0x0140(0x0008)
	class UGFxObject*                                  m_mcOwned;                                                // 0x0148(0x0008)
	class UGFxObject*                                  m_mcOwnedTF;                                              // 0x0150(0x0008)
	class UGFxObject*                                  m_mcUnlockCheck;                                          // 0x0158(0x0008)
	class UGFxObject*                                  m_mcTeaser;                                               // 0x0160(0x0008)
	class UUIInteractable_Button*                      m_pButton;                                                // 0x0168(0x0008)
	class UGFxObject*                                  m_mcButtonDiamond;                                        // 0x0170(0x0008)
	class UUIComponent_GamepadKey*                     m_pPrompt;                                                // 0x0178(0x0008)
	struct Fdword                                      m_dwRequiredLevel;                                        // 0x0180(0x0004)
	unsigned long                                      m_bPremium : 1;                                           // 0x0184(0x0004)
	class UInputAction*                                m_InputPurchase;                                          // 0x0188(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_BattlePassPurchasePanel");
		return ptr;
	}

};


// Class TgClient.UIComponent_BattlePassRewardJoinedLevels
// 0x0020 (0x0140 - 0x0120)
class UUIComponent_BattlePassRewardJoinedLevels : public UUIComponent_Display
{
public:
	TArray<class UUIComponent_BattlePassRewardLevel*>  m_pLevels;                                                // 0x0120(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcHeader;                                               // 0x0130(0x0008)
	class UGFxObject*                                  m_mcTierLock;                                             // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_BattlePassRewardJoinedLevels");
		return ptr;
	}

};


// Class TgClient.UIComponent_BattlePassRewardLevel
// 0x0020 (0x0140 - 0x0120)
class UUIComponent_BattlePassRewardLevel : public UUIComponent_Display
{
public:
	class UUIComponent_ItemIcon*                       m_pItemIcon;                                              // 0x0120(0x0008)
	class UUIComponent_Interactable*                   m_pButton;                                                // 0x0128(0x0008)
	class UGFxObject*                                  m_mcLock;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_mcCheck;                                                // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_BattlePassRewardLevel");
		return ptr;
	}

};


// Class TgClient.UIComponent_BattlePassRewardsInfoPanel
// 0x0028 (0x0148 - 0x0120)
class UUIComponent_BattlePassRewardsInfoPanel : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTitle;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcTimeLeft;                                             // 0x0128(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_pProgress;                                              // 0x0130(0x0008)
	class UGFxObject*                                  m_mcProgressLevel;                                        // 0x0138(0x0008)
	class UGFxObject*                                  m_mcProgressXP;                                           // 0x0140(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_BattlePassRewardsInfoPanel");
		return ptr;
	}

};


// Class TgClient.UIComponent_BattlePassRewardTier
// 0x0010 (0x0130 - 0x0120)
class UUIComponent_BattlePassRewardTier : public UUIComponent_Display
{
public:
	class UUIComponent_List*                           m_pLayoutNormal;                                          // 0x0120(0x0008)
	class UUIComponent_List*                           m_pLayoutBonus;                                           // 0x0128(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_BattlePassRewardTier");
		return ptr;
	}

};


// Class TgClient.UIComponent_BoosterItemBenefits
// 0x005C (0x017C - 0x0120)
class UUIComponent_BoosterItemBenefits : public UUIComponent_Display
{
public:
	int                                                m_nRowsSet;                                               // 0x0120(0x0004)
	class UGFxObject*                                  m_mcBenefitsTF[0xB];                                      // 0x0124(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_BoosterItemBenefits");
		return ptr;
	}

};


// Class TgClient.UIComponent_BoosterItemInfo
// 0x0038 (0x0158 - 0x0120)
class UUIComponent_BoosterItemInfo : public UUIComponent_Display
{
public:
	int                                                m_nDisplayedItemId;                                       // 0x0120(0x0004)
	unsigned long                                      m_bUseRentalOffset : 1;                                   // 0x0124(0x0004)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0128(0x0008)
	class UGFxObject*                                  m_mcTitleIcon;                                            // 0x0130(0x0008)
	class UGFxObject*                                  m_mcDesc;                                                 // 0x0138(0x0008)
	class UGFxObject*                                  m_mcRentalText;                                           // 0x0140(0x0008)
	class UGFxObject*                                  m_mcRentalDuration;                                       // 0x0148(0x0008)
	class UUIComponent_BoosterItemBenefits*            m_pBenefits;                                              // 0x0150(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_BoosterItemInfo");
		return ptr;
	}

};


// Class TgClient.UIComponent_BuyCrownsButton
// 0x0010 (0x0130 - 0x0120)
class UUIComponent_BuyCrownsButton : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTF;                                                   // 0x0120(0x0008)
	class UUIComponent_Interactable*                   m_pButton;                                                // 0x0128(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_BuyCrownsButton");
		return ptr;
	}

};


// Class TgClient.UIComponent_Card
// 0x0088 (0x01A8 - 0x0120)
class UUIComponent_Card : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcCTA;                                                  // 0x0120(0x0008)
	class UGFxObject*                                  m_mcChampion;                                             // 0x0128(0x0008)
	class UGFxObject*                                  m_mcChampionIcon;                                         // 0x0130(0x0008)
	class UGFxObject*                                  m_mcCooldown;                                             // 0x0138(0x0008)
	class UGFxObject*                                  m_mcCost;                                                 // 0x0140(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x0148(0x0008)
	class UGFxObject*                                  m_mcSkill;                                                // 0x0150(0x0008)
	class UGFxObject*                                  m_mcDesc;                                                 // 0x0158(0x0008)
	class UGFxObject*                                  m_mcRarity;                                               // 0x0160(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0168(0x0008)
	class UGFxObject*                                  m_mcCooldownTimer;                                        // 0x0170(0x0008)
	class UGFxObject*                                  m_mcProgressBack;                                         // 0x0178(0x0008)
	class UGFxObject*                                  m_mcProgressCover;                                        // 0x0180(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0188(0x0008)
	class UGFxObject*                                  m_mcRarityGlow;                                           // 0x0190(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_pProgress;                                              // 0x0198(0x0008)
	float                                              m_fOwnedOverride;                                         // 0x01A0(0x0004)
	unsigned long                                      m_bShowChampion : 1;                                      // 0x01A4(0x0004)
	unsigned long                                      m_bShowRarityGlow : 1;                                    // 0x01A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Card");
		return ptr;
	}

};


// Class TgClient.UIComponent_ChampionOverview
// 0x00C0 (0x01E0 - 0x0120)
class UUIComponent_ChampionOverview : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcDetailsTitle;                                         // 0x0120(0x0008)
	class UGFxObject*                                  m_mcDetailsSubtitle;                                      // 0x0128(0x0008)
	class UGFxObject*                                  m_mcDetailsClassIcon;                                     // 0x0130(0x0008)
	class UGFxObject*                                  m_mcDetailsChampionIcon;                                  // 0x0138(0x0008)
	class UGFxObject*                                  m_mcBioLock;                                              // 0x0140(0x0008)
	class UGFxObject*                                  m_mcBioText;                                              // 0x0148(0x0008)
	class UGFxObject*                                  m_mcBioLockText;                                          // 0x0150(0x0008)
	class UUIComponent_List*                           m_pCollectionOverview;                                    // 0x0158(0x0008)
	class UGFxObject*                                  m_mcRentalText;                                           // 0x0160(0x0008)
	class UGFxObject*                                  m_mcRentalTextLabel;                                      // 0x0168(0x0008)
	class UGFxObject*                                  m_mcRentalTextDuration;                                   // 0x0170(0x0008)
	class UGFxObject*                                  m_mcUnlockPanel;                                          // 0x0178(0x0008)
	class UGFxObject*                                  m_mcUnlockPanelPurchase;                                  // 0x0180(0x0008)
	class UGFxObject*                                  m_mcUnlockPanelPurchasePrice0;                            // 0x0188(0x0008)
	class UGFxObject*                                  m_mcUnlockPanelPurchasePrice0Currency;                    // 0x0190(0x0008)
	class UGFxObject*                                  m_mcUnlockPanelPurchasePrice1;                            // 0x0198(0x0008)
	class UGFxObject*                                  m_mcUnlockPanelPurchasePrice1Currency;                    // 0x01A0(0x0008)
	class UGFxObject*                                  m_mcUnlockPanelRent;                                      // 0x01A8(0x0008)
	class UGFxObject*                                  m_mcUnlockPanelRentPrice0;                                // 0x01B0(0x0008)
	class UGFxObject*                                  m_mcUnlockPanelRentPrice0Currency;                        // 0x01B8(0x0008)
	class UGFxObject*                                  m_mcUnlockPanelFreeRotation;                              // 0x01C0(0x0008)
	class UGFxObject*                                  m_mcUnlockPanelInputPrompt;                               // 0x01C8(0x0008)
	class UUIComponent_Interactable*                   m_pUnlockChampionButton;                                  // 0x01D0(0x0008)
	class UUIInteractable_Button_GamepadPrompt*        m_pLeaderboardButton;                                     // 0x01D8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ChampionOverview");
		return ptr;
	}

};


// Class TgClient.UIComponent_ChestPanelBase
// 0x0088 (0x01A8 - 0x0120)
class UUIComponent_ChestPanelBase : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x0128(0x0008)
	class UGFxObject*                                  m_mcType;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_mcDesc;                                                 // 0x0138(0x0008)
	class UGFxObject*                                  m_mcCount;                                                // 0x0140(0x0008)
	class UUIComponent_CTA*                            m_pCTA;                                                   // 0x0148(0x0008)
	class UUIInteractable_Button*                      m_pOpenChestButton;                                       // 0x0150(0x0008)
	class UInputGroup*                                 m_grChests;                                               // 0x0158(0x0008)
	int                                                m_nOwnedChests;                                           // 0x0160(0x0004)
	int                                                m_nOwnedItemCount;                                        // 0x0164(0x0004)
	int                                                m_nTotalItemCount;                                        // 0x0168(0x0004)
	TArray<class UUIDataItem*>                         m_pExclusiveItems;                                        // 0x016C(0x0010) (NeedCtorLink)
	struct FString                                     m_sOpenChestLoadName;                                     // 0x017C(0x0010) (NeedCtorLink)
	unsigned long                                      m_bLockedForDelay : 1;                                    // 0x018C(0x0004)
	struct FString                                     m_sSavedButtonText;                                       // 0x0190(0x0010) (NeedCtorLink)
	struct FPointer                                    m_pVendorItem;                                            // 0x01A0(0x0008) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ChestPanelBase");
		return ptr;
	}

};


// Class TgClient.UIComponent_ChestPanel
// 0x00B8 (0x0260 - 0x01A8)
class UUIComponent_ChestPanel : public UUIComponent_ChestPanelBase
{
public:
	int                                                m_nChestBundleIndex;                                      // 0x01A8(0x0004)
	int                                                m_nChestQuantity;                                         // 0x01AC(0x0004)
	int                                                m_nCouponItemId;                                          // 0x01B0(0x0004)
	struct Fdword                                      m_dwCrystalCost;                                          // 0x01B4(0x0004)
	struct Fdword                                      m_dwGoldCost;                                             // 0x01B8(0x0004)
	struct Fdword                                      m_dwVIPPointCost;                                         // 0x01BC(0x0004)
	struct Fdword                                      m_dwOriginalCrystalCost;                                  // 0x01C0(0x0004)
	class UGFxObject*                                  m_mcCursor;                                               // 0x01C4(0x0008)
	class UGFxObject*                                  m_mcPriceContainer;                                       // 0x01CC(0x0008)
	class UGFxObject*                                  m_mcDropdown;                                             // 0x01D4(0x0008)
	class UGFxObject*                                  m_mcDropdownMask;                                         // 0x01DC(0x0008)
	class UGFxObject*                                  m_mcDropdownFrame;                                        // 0x01E4(0x0008)
	class UGFxObject*                                  m_mcQuantityDropdownPrompt;                               // 0x01EC(0x0008)
	class UGFxObject*                                  m_mcQuantityDropdownPrompt_Inner;                         // 0x01F4(0x0008)
	class UInputGroup*                                 m_grDropdown;                                             // 0x01FC(0x0008)
	class UInputGroup*                                 m_grBundledChest;                                         // 0x0204(0x0008)
	class UUIInteractable_Button*                      m_mcPurchase;                                             // 0x020C(0x0008)
	class UUIInteractable_Button*                      m_mcPurchaseQuantity;                                     // 0x0214(0x0008)
	class UUIInteractable_Button*                      m_mcQuantityDropdownToggle;                               // 0x021C(0x0008)
	class UUIInteractable_Button*                      m_mcQuantityDropdownToggle_Inner;                         // 0x0224(0x0008)
	class UUIInteractable_Button*                      m_mcDropdownOptions[0x5];                                 // 0x022C(0x0008)
	class UInputAction*                                m_ToggleDropdownInputAction;                              // 0x0254(0x0008)
	unsigned long                                      m_bDropdownOpen : 1;                                      // 0x025C(0x0004)
	unsigned long                                      m_bDetailsIsOpenChest : 1;                                // 0x025C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ChestPanel");
		return ptr;
	}

};


// Class TgClient.UIComponent_ChestPanelChampion
// 0x0000 (0x0260 - 0x0260)
class UUIComponent_ChestPanelChampion : public UUIComponent_ChestPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ChestPanelChampion");
		return ptr;
	}

};


// Class TgClient.UIComponent_ChestPanelTencent
// 0x0064 (0x02C4 - 0x0260)
class UUIComponent_ChestPanelTencent : public UUIComponent_ChestPanel
{
public:
	class UUIData_SprayRental*                         m_pSprayData;                                             // 0x0260(0x0008)
	class UGFxObject*                                  m_mcSprayIcon;                                            // 0x0268(0x0008)
	class UGFxObject*                                  m_mcSprayIconGfx;                                         // 0x0270(0x0008)
	class UGFxObject*                                  m_mcSprayIconCard;                                        // 0x0278(0x0008)
	class UGFxObject*                                  m_mcSprayIconRarity;                                      // 0x0280(0x0008)
	class UGFxObject*                                  m_mcRentalLabel;                                          // 0x0288(0x0008)
	class UGFxObject*                                  m_mcRentalTime;                                           // 0x0290(0x0008)
	struct FString                                     m_sSprayName;                                             // 0x0298(0x0010) (NeedCtorLink)
	struct FString                                     m_sChestName;                                             // 0x02A8(0x0010) (NeedCtorLink)
	int                                                m_nSprayIconIndex;                                        // 0x02B8(0x0004)
	int                                                m_nSprayRarityIndex;                                      // 0x02BC(0x0004)
	int                                                m_nChestIconFrame;                                        // 0x02C0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ChestPanelTencent");
		return ptr;
	}

};


// Class TgClient.UIComponent_ClassSelectInfoPanel
// 0x0188 (0x02A8 - 0x0120)
class UUIComponent_ClassSelectInfoPanel : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcImage;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcTitleA;                                               // 0x0128(0x0008)
	class UGFxObject*                                  m_mcTitleB;                                               // 0x0130(0x0008)
	class UGFxObject*                                  m_mcInfoFrame;                                            // 0x0138(0x0008)
	class UGFxObject*                                  m_mcAbility;                                              // 0x0140(0x0008)
	class UGFxObject*                                  m_mcAbilityDesc;                                          // 0x0148(0x0008)
	class UGFxObject*                                  m_mcAbilityIcon;                                          // 0x0150(0x0008)
	class UGFxObject*                                  m_mcAbilityName;                                          // 0x0158(0x0008)
	class UGFxObject*                                  m_mcTalentGroup;                                          // 0x0160(0x0008)
	class UGFxObject*                                  m_mcTalent[0xA];                                          // 0x0168(0x0008)
	class UGFxObject*                                  m_mcTalentIcon[0xA];                                      // 0x01B8(0x0008)
	class UGFxObject*                                  m_mcTalentTitle[0xA];                                     // 0x0208(0x0008)
	class UGFxObject*                                  m_mcTalentDesc[0xA];                                      // 0x0258(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ClassSelectInfoPanel");
		return ptr;
	}

};


// Class TgClient.UIComponent_CountdownText
// 0x0004 (0x0124 - 0x0120)
class UUIComponent_CountdownText : public UUIComponent_Display
{
public:
	int                                                m_nTickHandle;                                            // 0x0120(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_CountdownText");
		return ptr;
	}

};


// Class TgClient.UIComponent_CrossPlayIcon
// 0x0000 (0x0120 - 0x0120)
class UUIComponent_CrossPlayIcon : public UUIComponent_Display
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_CrossPlayIcon");
		return ptr;
	}

};


// Class TgClient.UIComponent_CrownPack
// 0x002C (0x014C - 0x0120)
class UUIComponent_CrownPack : public UUIComponent_Display
{
public:
	int                                                m_nPackId;                                                // 0x0120(0x0004)
	class UGFxObject*                                  m_mcPurchaseAmount;                                       // 0x0124(0x0008)
	class UGFxObject*                                  m_mcBonusAmount;                                          // 0x012C(0x0008)
	class UUIComponent_Currency*                       m_pCrowns;                                                // 0x0134(0x0008)
	class UUIComponent_Currency*                       m_pPrice;                                                 // 0x013C(0x0008)
	class UUIComponent_Interactable*                   m_pFrameButton;                                           // 0x0144(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_CrownPack");
		return ptr;
	}

};


// Class TgClient.UIComponent_CTA
// 0x000C (0x012C - 0x0120)
class UUIComponent_CTA : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTF;                                                   // 0x0120(0x0008)
	unsigned long                                      m_bAnimOnHide : 1;                                        // 0x0128(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_CTA");
		return ptr;
	}

};


// Class TgClient.UIComponent_Currency
// 0x000E (0x012E - 0x0120)
class UUIComponent_Currency : public UUIComponent_Display
{
public:
	struct Fdword                                      eCurrencyCode;                                            // 0x0120(0x0004)
	struct Fdword                                      ePurchaseType;                                            // 0x0124(0x0004)
	unsigned long                                      bShowIfOwnedOrRented : 1;                                 // 0x0128(0x0004)
	unsigned long                                      bStrikeIfOwnedOrRented : 1;                               // 0x0128(0x0004)
	unsigned long                                      bDisplayIfZero : 1;                                       // 0x0128(0x0004)
	unsigned long                                      bShowVIPDiscount : 1;                                     // 0x0128(0x0004)
	TEnumAsByte<EUICCurr_DisplayType>                  eDisplayType;                                             // 0x012C(0x0001)
	TEnumAsByte<EUIALIGNINGTYPE>                       eAlignment;                                               // 0x012D(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Currency");
		return ptr;
	}

};


// Class TgClient.UIComponent_DailyRewardDay
// 0x0018 (0x0138 - 0x0120)
class UUIComponent_DailyRewardDay : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcDayTF;                                                // 0x0128(0x0008)
	class UGFxObject*                                  m_mcCheckmark;                                            // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_DailyRewardDay");
		return ptr;
	}

};


// Class TgClient.UIComponent_DailyRewardPanel
// 0x005C (0x017C - 0x0120)
class UUIComponent_DailyRewardPanel : public UUIComponent_Display
{
public:
	unsigned char                                      m_eState;                                                 // 0x0120(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	struct FString                                     m_sTimeLeft;                                              // 0x0124(0x0010) (NeedCtorLink)
	class UUIData_LootTableItem*                       m_pRewardLTI;                                             // 0x0134(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x013C(0x0008)
	class UGFxObject*                                  m_mcRewardTF;                                             // 0x0144(0x0008)
	class UGFxObject*                                  m_mcPriceTF;                                              // 0x014C(0x0008)
	class UGFxObject*                                  m_mcFlash;                                                // 0x0154(0x0008)
	class UGFxObject*                                  m_mcRewardClaimed;                                        // 0x015C(0x0008)
	class UUIComponent_List*                           m_pRewardDays;                                            // 0x0164(0x0008)
	class UAkBaseSoundObject*                          m_akRewardClaimSuccess;                                   // 0x016C(0x0008)
	class UAkBaseSoundObject*                          m_akRewardClaimFail;                                      // 0x0174(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_DailyRewardPanel");
		return ptr;
	}

};


// Class TgClient.UIComponent_DisplayDevice
// 0x003C (0x015C - 0x0120)
class UUIComponent_DisplayDevice : public UUIComponent_Display
{
public:
	struct Fdword                                      m_dwDeviceId;                                             // 0x0120(0x0004)
	class UGFxObject*                                  m_mcName;                                                 // 0x0124(0x0008)
	class UGFxObject*                                  m_mcDesc;                                                 // 0x012C(0x0008)
	class UGFxObject*                                  m_mcType;                                                 // 0x0134(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x013C(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0144(0x0008)
	class UGFxObject*                                  m_mcHighlight;                                            // 0x014C(0x0008)
	class UGFxObject*                                  m_mcHighlightIcon;                                        // 0x0154(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_DisplayDevice");
		return ptr;
	}

};


// Class TgClient.UIComponent_DisplayDeviceDetails
// 0x006C (0x018C - 0x0120)
class UUIComponent_DisplayDeviceDetails : public UUIComponent_Display
{
public:
	struct Fdword                                      m_dwDeviceId;                                             // 0x0120(0x0004)
	class UGFxObject*                                  m_mcName;                                                 // 0x0124(0x0008)
	class UGFxObject*                                  m_mcDesc;                                                 // 0x012C(0x0008)
	class UGFxObject*                                  m_mcType;                                                 // 0x0134(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x013C(0x0008)
	class UGFxObject*                                  m_mcRarity;                                               // 0x0144(0x0008)
	class UGFxObject*                                  m_mcIconA;                                                // 0x014C(0x0008)
	class UGFxObject*                                  m_mcIconAFrame;                                           // 0x0154(0x0008)
	class UGFxObject*                                  m_mcIconATexture;                                         // 0x015C(0x0008)
	class UGFxObject*                                  m_mcIconB;                                                // 0x0164(0x0008)
	class UGFxObject*                                  m_mcIconBFrame;                                           // 0x016C(0x0008)
	class UGFxObject*                                  m_mcIconBTexture;                                         // 0x0174(0x0008)
	class UUIComponent_List*                           m_pStatsList;                                             // 0x017C(0x0008)
	class UUIComponent_List*                           m_pPerksList;                                             // 0x0184(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_DisplayDeviceDetails");
		return ptr;
	}

};


// Class TgClient.UIComponent_DisplayPlayer
// 0x0078 (0x0198 - 0x0120)
class UUIComponent_DisplayPlayer : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcAvatarIcon;                                           // 0x0120(0x0008)
	class UGFxObject*                                  m_mcPlayerName;                                           // 0x0128(0x0008)
	class UGFxObject*                                  m_mcPlayerTitle;                                          // 0x0130(0x0008)
	class UGFxObject*                                  m_mcClassIcon;                                            // 0x0138(0x0008)
	class UGFxObject*                                  m_mcChickenIcon;                                          // 0x0140(0x0008)
	class UGFxObject*                                  m_mcDeathIcon;                                            // 0x0148(0x0008)
	class UGFxObject*                                  m_mcColorIcon;                                            // 0x0150(0x0008)
	class UGFxObject*                                  m_mcLives;                                                // 0x0158(0x0008)
	class UGFxObject*                                  m_mcKills;                                                // 0x0160(0x0008)
	class UGFxObject*                                  m_mcShards;                                               // 0x0168(0x0008)
	class UUIComponent_Interactable*                   m_pMuteButton;                                            // 0x0170(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_pArmorBar;                                              // 0x0178(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_pHealthBar;                                             // 0x0180(0x0008)
	class UUIComponent_List*                           m_pItems;                                                 // 0x0188(0x0008)
	class UUIComponent_Interactable*                   m_pFrameButton;                                           // 0x0190(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_DisplayPlayer");
		return ptr;
	}

};


// Class TgClient.UIComponent_DLCPack
// 0x00C4 (0x01E4 - 0x0120)
class UUIComponent_DLCPack : public UUIComponent_Display
{
public:
	TArray<class UGFxObject*>                          m_mcDetail;                                               // 0x0120(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcNew;                                                  // 0x0130(0x0008)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0138(0x0008)
	class UGFxObject*                                  m_mcSubtitle;                                             // 0x0140(0x0008)
	class UGFxObject*                                  m_mcPrice;                                                // 0x0148(0x0008)
	class UGFxObject*                                  m_mcConsolePrice;                                         // 0x0150(0x0008)
	class UGFxObject*                                  m_mcDollars;                                              // 0x0158(0x0008)
	class UGFxObject*                                  m_mcCents;                                                // 0x0160(0x0008)
	class UGFxObject*                                  m_mcCurrency;                                             // 0x0168(0x0008)
	class UGFxObject*                                  m_mcOneTimePurchase;                                      // 0x0170(0x0008)
	class UGFxObject*                                  m_mcBuyNowText;                                           // 0x0178(0x0008)
	class UGFxObject*                                  m_mcRefund;                                               // 0x0180(0x0008)
	class UGFxObject*                                  m_mcSaleBanner;                                           // 0x0188(0x0008)
	class UGFxObject*                                  m_mcDLCTexture;                                           // 0x0190(0x0008)
	class UUIComponent_Interactable*                   m_mcPurchaseButton;                                       // 0x0198(0x0008)
	class UUIComponent_Interactable*                   m_mcPanelButton;                                          // 0x01A0(0x0008)
	class UUIComponent_DualButtonPanel*                m_pPurchaseButton;                                        // 0x01A8(0x0008)
	class UUIComponent_Currency*                       m_pPrice;                                                 // 0x01B0(0x0008)
	class UUIInteractable_Button_GamepadPrompt*        m_mcGamepadPrompt;                                        // 0x01B8(0x0008)
	TEnumAsByte<EAdTextureSize>                        m_eTextureSize;                                           // 0x01C0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	unsigned long                                      m_bIsPortrait : 1;                                        // 0x01C4(0x0004)
	unsigned long                                      m_bIsPanelButton : 1;                                     // 0x01C4(0x0004)
	int                                                m_nPackId;                                                // 0x01C8(0x0004)
	struct FString                                     m_sPackPrefix;                                            // 0x01CC(0x0010) (NeedCtorLink)
	struct FName                                       m_sGamepadBuyKey;                                         // 0x01DC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_DLCPack");
		return ptr;
	}

};


// Class TgClient.UIComponent_EntryToggle
// 0x001C (0x013C - 0x0120)
class UUIComponent_EntryToggle : public UUIComponent_Display
{
public:
	unsigned long                                      m_bActive : 1;                                            // 0x0120(0x0004)
	unsigned long                                      m_bAllIsWell : 1;                                         // 0x0120(0x0004)
	class UGFxObject*                                  m_mcText;                                                 // 0x0124(0x0008)
	class UGFxObject*                                  m_mcToggle;                                               // 0x012C(0x0008)
	class UUIComponent_Interactable*                   m_Button;                                                 // 0x0134(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_EntryToggle");
		return ptr;
	}

};


// Class TgClient.UIComponent_GameMap
// 0x0148 (0x0268 - 0x0120)
class UUIComponent_GameMap : public UUIComponent_Display
{
public:
	int                                                m_nDepth;                                                 // 0x0120(0x0004)
	unsigned long                                      m_bSnapFog : 1;                                           // 0x0124(0x0004)
	unsigned long                                      m_bInitMap : 1;                                           // 0x0124(0x0004)
	unsigned long                                      m_bDirection : 1;                                         // 0x0124(0x0004)
	unsigned long                                      m_bMapHasFocus : 1;                                       // 0x0124(0x0004)
	float                                              m_fSize;                                                  // 0x0128(0x0004)
	float                                              m_fRadius;                                                // 0x012C(0x0004)
	float                                              m_fCursorX;                                               // 0x0130(0x0004)
	float                                              m_fCursorY;                                               // 0x0134(0x0004)
	float                                              m_fOffsetX;                                               // 0x0138(0x0004)
	float                                              m_fOffsetY;                                               // 0x013C(0x0004)
	float                                              m_fPulseTimer;                                            // 0x0140(0x0004)
	float                                              m_fChestPulseInTimer;                                     // 0x0144(0x0004)
	float                                              m_fChestPulseIOutTimer;                                   // 0x0148(0x0004)
	float                                              m_fGamepadCursorX;                                        // 0x014C(0x0004)
	float                                              m_fGamepadCursorY;                                        // 0x0150(0x0004)
	float                                              m_fCursorRate;                                            // 0x0154(0x0004)
	float                                              m_fCursorSafeBound;                                       // 0x0158(0x0004)
	float                                              m_fCursorPanBound;                                        // 0x015C(0x0004)
	float                                              m_fConvergeRadius;                                        // 0x0160(0x0004)
	float                                              m_fConvergeTarget;                                        // 0x0164(0x0004)
	float                                              m_fConvergeTargetX;                                       // 0x0168(0x0004)
	float                                              m_fConvergeTargetY;                                       // 0x016C(0x0004)
	struct FVector                                     m_vBoundsCenter;                                          // 0x0170(0x000C)
	struct FVector                                     m_vBoundsExtents;                                         // 0x017C(0x000C)
	class UGFxObject*                                  m_mcMap;                                                  // 0x0188(0x0008)
	class UGFxObject*                                  m_mcMapCursor;                                            // 0x0190(0x0008)
	class UGFxObject*                                  m_mcMapCursorLineX;                                       // 0x0198(0x0008)
	class UGFxObject*                                  m_mcMapCursorLineY;                                       // 0x01A0(0x0008)
	class UGFxObject*                                  m_mcMapFog;                                               // 0x01A8(0x0008)
	class UGFxObject*                                  m_mcMapMask;                                              // 0x01B0(0x0008)
	class UGFxObject*                                  m_mcMapInner;                                             // 0x01B8(0x0008)
	class UGFxObject*                                  m_mcMapOuter;                                             // 0x01C0(0x0008)
	class UGFxObject*                                  m_mcMapForges;                                            // 0x01C8(0x0008)
	class UGFxObject*                                  m_mcMapDirection;                                         // 0x01D0(0x0008)
	class UGFxObject*                                  m_mcMapDirectionAnim;                                     // 0x01D8(0x0008)
	class UGFxObject*                                  m_mcMapDirectionLine;                                     // 0x01E0(0x0008)
	class UGFxObject*                                  m_mcMapNamedAreas;                                        // 0x01E8(0x0008)
	class UGFxObject*                                  m_mcMapZeppelinLine;                                      // 0x01F0(0x0008)
	class UGFxObject*                                  m_mcMapZeppelinA;                                         // 0x01F8(0x0008)
	class UGFxObject*                                  m_mcMapZeppelinB;                                         // 0x0200(0x0008)
	class UUIComponent_List*                           m_pMapTextures;                                           // 0x0208(0x0008)
	class UUIComponent_List*                           m_pTeamMarkers;                                           // 0x0210(0x0008)
	class UUIComponent_List*                           m_pChestMarkers;                                          // 0x0218(0x0008)
	class UUIComponent_List*                           m_pForgeMarkers;                                          // 0x0220(0x0008)
	class UUIComponent_List*                           m_pCatapultMarkers;                                       // 0x0228(0x0008)
	class UUIComponent_List*                           m_pAllianceMarkers;                                       // 0x0230(0x0008)
	class UUIComponent_List*                           m_pWaypoints;                                             // 0x0238(0x0008)
	class UUIComponent_List*                           m_pNamedAreas;                                            // 0x0240(0x0008)
	class UUIComponent_MapTeamMarker*                  m_pLocalMarker;                                           // 0x0248(0x0008)
	class UUIComponent_Interactable*                   m_pMapInteractable;                                       // 0x0250(0x0008)
	class UInputAction*                                m_pPlaceWaypointAction;                                   // 0x0258(0x0008)
	class UInputAction*                                m_pRemoveWaypointAction;                                  // 0x0260(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_GameMap");
		return ptr;
	}

};


// Class TgClient.UIComponent_GenericTitleButtons
// 0x0078 (0x0198 - 0x0120)
class UUIComponent_GenericTitleButtons : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTitle[0x2];                                           // 0x0120(0x0008)
	class UUIInteractable_Button*                      m_Buttons[0x8];                                           // 0x0130(0x0008)
	int                                                m_ButtonClickHandles[0x8];                                // 0x0170(0x0004)
	class UInputGroup*                                 m_grButtons;                                              // 0x0190(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_GenericTitleButtons");
		return ptr;
	}

};


// Class TgClient.UIComponent_GenericTitleInputButtons
// 0x0050 (0x0170 - 0x0120)
class UUIComponent_GenericTitleInputButtons : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTitle[0x2];                                           // 0x0120(0x0008)
	class UGFxObject*                                  m_mcError;                                                // 0x0130(0x0008)
	class UUIInteractable_Button*                      m_Buttons[0x2];                                           // 0x0138(0x0008)
	int                                                m_ButtonClickHandles[0x2];                                // 0x0148(0x0004)
	class UGFxObject*                                  m_mcInputTF;                                              // 0x0150(0x0008)
	class UGFxObject*                                  m_mcInputFrame;                                           // 0x0158(0x0008)
	class UGFxObject*                                  m_mcInputFrameHighlight;                                  // 0x0160(0x0008)
	class UInputGroup*                                 m_grButtons;                                              // 0x0168(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_GenericTitleInputButtons");
		return ptr;
	}

};


// Class TgClient.UIComponent_HealFeed
// 0x0174 (0x0294 - 0x0120)
class UUIComponent_HealFeed : public UUIComponent_Display
{
public:
	TArray<class UUIComponent_HealFeedEntry*>          m_InactiveEntries;                                        // 0x0120(0x0010) (NeedCtorLink)
	struct FHealSource                                 m_HealSources[0x5];                                       // 0x0130(0x0034) (NeedCtorLink)
	class ATgPawn*                                     m_pViewTarget;                                            // 0x0234(0x0008)
	unsigned long                                      m_bIsVisible : 1;                                         // 0x023C(0x0004)
	float                                              m_fSourceHideDelay;                                       // 0x0240(0x0004)
	float                                              m_fUpdateDisplayTimer;                                    // 0x0244(0x0004)
	float                                              m_fUpdateDisplayRate;                                     // 0x0248(0x0004)
	unsigned char                                      UnknownData00[0x48];                                      // 0x024C(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIComponent_HealFeed.m_HealAmountMap

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_HealFeed");
		return ptr;
	}


	void HideHealSource(int nColumn);
	void ShowHealSource(int nColumn);
	void HideHealGlow(int nColumn);
	void ShowHealGlow(int nColumn);
};


// Class TgClient.UIComponent_HealFeedEntry
// 0x0015 (0x0135 - 0x0120)
class UUIComponent_HealFeedEntry : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcText;                                                 // 0x0120(0x0008)
	float                                              m_fRawAmount;                                             // 0x0128(0x0004)
	float                                              m_fChangeAmount;                                          // 0x012C(0x0004)
	unsigned long                                      m_bHealingReduced : 1;                                    // 0x0130(0x0004)
	TEnumAsByte<EHealDisplayType>                      m_eHealDisplayType;                                       // 0x0134(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_HealFeedEntry");
		return ptr;
	}


	void QueueAnimation(const struct FVector& vAnimOrigin);
};


// Class TgClient.UIComponent_HoldPrompt
// 0x0040 (0x0160 - 0x0120)
class UUIComponent_HoldPrompt : public UUIComponent_Display
{
public:
	class UUIComponent_GamepadKey*                     m_pGamepadKey;                                            // 0x0120(0x0008)
	class UGFxObject*                                  m_mcRadialMask;                                           // 0x0128(0x0008)
	class UGFxObject*                                  m_mcTF;                                                   // 0x0130(0x0008)
	float                                              m_fHoldTimer;                                             // 0x0138(0x0004)
	float                                              m_fHoldDuration;                                          // 0x013C(0x0004)
	float                                              m_fFadeOutDelay;                                          // 0x0140(0x0004)
	float                                              m_fFadeOutDuration;                                       // 0x0144(0x0004)
	float                                              m_fFadeOutTimer;                                          // 0x0148(0x0004)
	unsigned long                                      m_bHolding : 1;                                           // 0x014C(0x0004)
	unsigned long                                      m_bPrimed : 1;                                            // 0x014C(0x0004)
	class UInputAction*                                m_PressAction;                                            // 0x0150(0x0008)
	class UInputAction*                                m_ReleaseAction;                                          // 0x0158(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_HoldPrompt");
		return ptr;
	}

};


// Class TgClient.UIComponent_HudMenuClass
// 0x0018 (0x0138 - 0x0120)
class UUIComponent_HudMenuClass : public UUIComponent_Display
{
public:
	class UUIComponent_DisplayDevice*                  m_pInfo;                                                  // 0x0120(0x0008)
	class UUIComponent_List*                           m_pTalentList;                                            // 0x0128(0x0008)
	class UInputGroup*                                 m_grInput;                                                // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_HudMenuClass");
		return ptr;
	}

};


// Class TgClient.UIComponent_HudMenuInventory
// 0x0040 (0x0160 - 0x0120)
class UUIComponent_HudMenuInventory : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcShards;                                               // 0x0120(0x0008)
	class UUIComponent_List*                           m_pItemList;                                              // 0x0128(0x0008)
	class UUIComponent_DisplayDeviceDetails*           m_pDetails;                                               // 0x0130(0x0008)
	class UInputGroup*                                 m_grInput;                                                // 0x0138(0x0008)
	class UInputAction*                                m_pSwapActon;                                             // 0x0140(0x0008)
	class UAkBaseSoundObject*                          m_akDropWeapon;                                           // 0x0148(0x0008)
	class UAkBaseSoundObject*                          m_akDropAbility;                                          // 0x0150(0x0008)
	class UAkBaseSoundObject*                          m_akDropConsumable;                                       // 0x0158(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_HudMenuInventory");
		return ptr;
	}

};


// Class TgClient.UIComponent_HudMenuMap
// 0x0040 (0x0160 - 0x0120)
class UUIComponent_HudMenuMap : public UUIComponent_Display
{
public:
	unsigned long                                      m_bMapFocused : 1;                                        // 0x0120(0x0004)
	class UUIComponent_List*                           m_pPlayerList;                                            // 0x0124(0x0008)
	class UUIComponent_List*                           m_pQuestList;                                             // 0x012C(0x0008)
	class UUIComponent_GameMap*                        m_pMap;                                                   // 0x0134(0x0008)
	class UUIComponent_PlayerContextMenu*              m_pContextMenu;                                           // 0x013C(0x0008)
	class UUIComponent_PartyLobbyCustomPanel*          m_pSpectatorPlayers;                                      // 0x0144(0x0008)
	class UInputGroup*                                 m_grInput;                                                // 0x014C(0x0008)
	class UInputAction*                                m_pToggleFocusAction;                                     // 0x0154(0x0008)
	int                                                m_nViewTargetPlayerId;                                    // 0x015C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_HudMenuMap");
		return ptr;
	}

};


// Class TgClient.UIComponent_Item
// 0x006C (0x018C - 0x0120)
class UUIComponent_Item : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcName;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcType;                                                 // 0x0128(0x0008)
	class UGFxObject*                                  m_mcDescription;                                          // 0x0130(0x0008)
	class UGFxObject*                                  m_mcArtIcon;                                              // 0x0138(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0140(0x0008)
	class UUIDataItem*                                 m_Item;                                                   // 0x0148(0x0008)
	unsigned long                                      m_bCacheDirty : 1;                                        // 0x0150(0x0004)
	unsigned long                                      m_bDataDirty : 1;                                         // 0x0150(0x0004)
	unsigned long                                      m_bUseBaseName : 1;                                       // 0x0150(0x0004)
	struct FString                                     m_sDescription;                                           // 0x0154(0x0010) (NeedCtorLink)
	struct FString                                     m_sType;                                                  // 0x0164(0x0010) (NeedCtorLink)
	struct FString                                     m_sName;                                                  // 0x0174(0x0010) (NeedCtorLink)
	float                                              m_fDescriptionCenterOffset;                               // 0x0184(0x0004) (Const)
	int                                                m_nTickCallback;                                          // 0x0188(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Item");
		return ptr;
	}

};


// Class TgClient.UIComponent_Item_Card
// 0x0048 (0x01D4 - 0x018C)
class UUIComponent_Item_Card : public UUIComponent_Item
{
public:
	class UGFxObject*                                  m_mcCooldown;                                             // 0x018C(0x0008)
	class UGFxObject*                                  m_mcChampion;                                             // 0x0194(0x0008)
	class UGFxObject*                                  m_mcChampionIcon;                                         // 0x019C(0x0008)
	class UGFxObject*                                  m_mcRank;                                                 // 0x01A4(0x0008)
	class UGFxObject*                                  m_mcRarity;                                               // 0x01AC(0x0008)
	class UGFxObject*                                  m_mcProgressBack;                                         // 0x01B4(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_pProgress;                                              // 0x01BC(0x0008)
	unsigned long                                      m_bShowChampion : 1;                                      // 0x01C4(0x0004)
	int                                                m_nQuantityOverride;                                      // 0x01C8(0x0004)
	float                                              m_fAnimationProgress;                                     // 0x01CC(0x0004)
	int                                                m_nLastCachedLevel;                                       // 0x01D0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Item_Card");
		return ptr;
	}

};


// Class TgClient.UIComponent_ItemDisplay
// 0x0040 (0x0160 - 0x0120)
class UUIComponent_ItemDisplay : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_pRarityText;                                            // 0x0120(0x0008)
	class UGFxObject*                                  m_pTitle;                                                 // 0x0128(0x0008)
	class UGFxObject*                                  m_pChest;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_pIcon;                                                  // 0x0138(0x0008)
	class UGFxObject*                                  m_pRarityFrame;                                           // 0x0140(0x0008)
	class UGFxObject*                                  m_pCard;                                                  // 0x0148(0x0008)
	class UGFxObject*                                  m_pItem;                                                  // 0x0150(0x0008)
	class UGFxObject*                                  m_pChestQuantity;                                         // 0x0158(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemDisplay");
		return ptr;
	}

};


// Class TgClient.UIComponent_ItemGeneric
// 0x0048 (0x0168 - 0x0120)
class UUIComponent_ItemGeneric : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcName;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcOwned;                                                // 0x0128(0x0008)
	class UGFxObject*                                  m_mcSale;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_mcTexture;                                              // 0x0138(0x0008)
	class UGFxObject*                                  m_mcRarity;                                               // 0x0140(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0148(0x0008)
	class UGFxObject*                                  m_mcValueBanner;                                          // 0x0150(0x0008)
	class UUIComponent_List*                           m_pPrices;                                                // 0x0158(0x0008)
	class UUIComponent_Currency*                       m_pRealMoneyPrice;                                        // 0x0160(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemGeneric");
		return ptr;
	}

};


// Class TgClient.UIComponent_ItemIconInventory
// 0x0010 (0x0130 - 0x0120)
class UUIComponent_ItemIconInventory : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcQuantity;                                             // 0x0128(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemIconInventory");
		return ptr;
	}

};


// Class TgClient.UIComponent_ItemObtainabilityBanner
// 0x0001 (0x0121 - 0x0120)
class UUIComponent_ItemObtainabilityBanner : public UUIComponent_Display
{
public:
	TEnumAsByte<ESimplifiedItemObtainabilityValue>     m_eObtainability;                                         // 0x0120(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemObtainabilityBanner");
		return ptr;
	}

};


// Class TgClient.UIComponent_ItemPreviewStack
// 0x0024 (0x0144 - 0x0120)
class UUIComponent_ItemPreviewStack : public UUIComponent_Display
{
public:
	unsigned long                                      m_bHas3dPreview : 1;                                      // 0x0120(0x0004)
	class UGFxObject*                                  m_mcLoadingScreen;                                        // 0x0124(0x0008)
	class UGFxObject*                                  m_mcLoadingScreenTexture;                                 // 0x012C(0x0008)
	class UUIComponent_ItemGeneric*                    m_pItemGeneric;                                           // 0x0134(0x0008)
	class UTgManifestGroup*                            m_LoadingScreenManifestGroup;                             // 0x013C(0x0008) (ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemPreviewStack");
		return ptr;
	}


	void STATIC_OnLoadingScreenLoaded();
	void STATIC_PreviewLoadingScreen();
	void STATIC_InitLoadingScreenManifest();
};


// Class TgClient.UIComponent_ItemRadialMenuBase
// 0x0044 (0x0164 - 0x0120)
class UUIComponent_ItemRadialMenuBase : public UUIComponent_Display
{
public:
	int                                                m_nSlot;                                                  // 0x0120(0x0004)
	class UGFxObject*                                  m_mcSubEntry;                                             // 0x0124(0x0008)
	class UGFxObject*                                  m_mcTF;                                                   // 0x012C(0x0008)
	class UGFxObject*                                  m_mcItem;                                                 // 0x0134(0x0008)
	class UGFxObject*                                  m_mcItemIcon;                                             // 0x013C(0x0008)
	class UGFxObject*                                  m_mcHighlight;                                            // 0x0144(0x0008)
	class UGFxObject*                                  m_mcDisabledBG;                                           // 0x014C(0x0008)
	class UUIComponent_Interactable*                   m_pFrameButton;                                           // 0x0154(0x0008)
	class UAkEvent*                                    m_akSliceSelect;                                          // 0x015C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemRadialMenuBase");
		return ptr;
	}

};


// Class TgClient.UIComponent_ItemRadialMenu
// 0x0000 (0x0164 - 0x0164)
class UUIComponent_ItemRadialMenu : public UUIComponent_ItemRadialMenuBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemRadialMenu");
		return ptr;
	}

};


// Class TgClient.UIComponent_ItemRadialMenuLobby
// 0x0000 (0x0164 - 0x0164)
class UUIComponent_ItemRadialMenuLobby : public UUIComponent_ItemRadialMenuBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemRadialMenuLobby");
		return ptr;
	}

};


// Class TgClient.UIComponent_ItemStats
// 0x0010 (0x0130 - 0x0120)
class UUIComponent_ItemStats : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTitle;                                                // 0x0120(0x0008)
	class UUIComponent_List*                           m_ItemStatEntries;                                        // 0x0128(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemStats");
		return ptr;
	}

};


// Class TgClient.UIComponent_ItemStatsEntry
// 0x0080 (0x01A0 - 0x0120)
class UUIComponent_ItemStatsEntry : public UUIComponent_Display
{
public:
	struct FString                                     m_sItemStatsLabels[0x7];                                  // 0x0120(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0190(0x0008)
	class UGFxObject*                                  m_mcTF;                                                   // 0x0198(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemStatsEntry");
		return ptr;
	}

};


// Class TgClient.UIComponent_ItemTooltip
// 0x001C (0x013C - 0x0120)
class UUIComponent_ItemTooltip : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTitle;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcSubtitle;                                             // 0x0128(0x0008)
	class UGFxObject*                                  m_mcDescription;                                          // 0x0130(0x0008)
	int                                                m_nLastSetItemID;                                         // 0x0138(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemTooltip");
		return ptr;
	}

};


// Class TgClient.UIComponent_Loadout
// 0x008C (0x01AC - 0x0120)
class UUIComponent_Loadout : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_pGems[0x5];                                             // 0x0120(0x0008)
	class UGFxObject*                                  m_pCardIcons[0x5];                                        // 0x0148(0x0008)
	class UGFxObject*                                  m_pPowerLevel;                                            // 0x0170(0x0008)
	class UGFxObject*                                  m_pLock;                                                  // 0x0178(0x0008)
	class UGFxObject*                                  m_pNewLoadoutText;                                        // 0x0180(0x0008)
	class UGFxObject*                                  m_pLoadoutTypeIcon;                                       // 0x0188(0x0008)
	class UGFxObject*                                  m_pTitle;                                                 // 0x0190(0x0008)
	class UUIComponent_Interactable*                   m_pCancelButton;                                          // 0x0198(0x0008)
	class UUIComponent_Interactable*                   m_pSelectLoadoutButton;                                   // 0x01A0(0x0008)
	unsigned long                                      m_bShowDeleteButton : 1;                                  // 0x01A8(0x0004)
	unsigned long                                      m_bDisableEmptyDecks : 1;                                 // 0x01A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Loadout");
		return ptr;
	}

};


// Class TgClient.UIComponent_LootItem
// 0x0020 (0x0140 - 0x0120)
class UUIComponent_LootItem : public UUIComponent_Display
{
public:
	class UUIComponent_ItemGeneric*                    m_pItem;                                                  // 0x0120(0x0008)
	class UGFxObject*                                  m_mcXName;                                                // 0x0128(0x0008)
	class UGFxObject*                                  m_mcRentalIcon;                                           // 0x0130(0x0008)
	class UGFxObject*                                  m_mcRentalText;                                           // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_LootItem");
		return ptr;
	}

};


// Class TgClient.UIComponent_MapIconMarker
// 0x0000 (0x0120 - 0x0120)
class UUIComponent_MapIconMarker : public UUIComponent_Display
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_MapIconMarker");
		return ptr;
	}

};


// Class TgClient.UIComponent_MasteryRewards
// 0x0010 (0x0130 - 0x0120)
class UUIComponent_MasteryRewards : public UUIComponent_Display
{
public:
	class UUIComponent_List*                           m_pRewards;                                               // 0x0120(0x0008)
	class UInputAction*                                m_PurchaseAction;                                         // 0x0128(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_MasteryRewards");
		return ptr;
	}

};


// Class TgClient.UIComponent_MasteryRewardsEntry
// 0x0070 (0x0190 - 0x0120)
class UUIComponent_MasteryRewardsEntry : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcLockIcon;                                             // 0x0120(0x0008)
	class UGFxObject*                                  m_mcLevelText;                                            // 0x0128(0x0008)
	class UGFxObject*                                  m_mcRewardType;                                           // 0x0130(0x0008)
	class UGFxObject*                                  m_mcRewardName;                                           // 0x0138(0x0008)
	class UGFxObject*                                  m_mcRewardTitle;                                          // 0x0140(0x0008)
	class UGFxObject*                                  m_mcRewardChest;                                          // 0x0148(0x0008)
	class UGFxObject*                                  m_mcRewardCurrency;                                       // 0x0150(0x0008)
	class UGFxObject*                                  m_mcRewardCurrencyTF;                                     // 0x0158(0x0008)
	class UGFxObject*                                  m_mcCardIcon;                                             // 0x0160(0x0008)
	class UGFxObject*                                  m_mcItemIcon;                                             // 0x0168(0x0008)
	class UGFxObject*                                  m_mcTextureIcon;                                          // 0x0170(0x0008)
	class UGFxObject*                                  m_mcRarity;                                               // 0x0178(0x0008)
	class UUIComponent_Interactable*                   m_pFrameButton;                                           // 0x0180(0x0008)
	class UUIInteractable_Button_Price*                m_pPriceButton;                                           // 0x0188(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_MasteryRewardsEntry");
		return ptr;
	}

};


// Class TgClient.UIComponent_MatchDisplay
// 0x0019 (0x0139 - 0x0120)
class UUIComponent_MatchDisplay : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcBuildHeader;                                          // 0x0120(0x0008)
	class UGFxObject*                                  m_mcStatsHeader;                                          // 0x0128(0x0008)
	class UUIComponent_List*                           m_pList;                                                  // 0x0130(0x0008)
	TEnumAsByte<EUICMatchDisplayTabType>               m_eDisplayMode;                                           // 0x0138(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_MatchDisplay");
		return ptr;
	}

};


// Class TgClient.UIComponent_PartyLobbyCustomPanel
// 0x0080 (0x01A0 - 0x0120)
class UUIComponent_PartyLobbyCustomPanel : public UUIComponent_Display
{
public:
	TArray<class UUIData_CustomPlayer*>                m_CustomPlayersArray;                                     // 0x0120(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0130(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIComponent_PartyLobbyCustomPanel.m_CustomPlayers
	class UUIData_CustomGame*                          m_pCustomGame;                                            // 0x0178(0x0008)
	class UUIComponent_List*                           m_pList;                                                  // 0x0180(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x0188(0x0008)
	class UGFxObject*                                  m_mcPlayerCount;                                          // 0x0190(0x0008)
	float                                              m_fSpectatorUpdateTimer;                                  // 0x0198(0x0004)
	float                                              m_fSpectatorUpdateRate;                                   // 0x019C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PartyLobbyCustomPanel");
		return ptr;
	}

};


// Class TgClient.UIComponent_PartyLobbyInfoPanel
// 0x01E8 (0x0308 - 0x0120)
class UUIComponent_PartyLobbyInfoPanel : public UUIComponent_Display
{
public:
	int                                                m_nSelectedQueue;                                         // 0x0120(0x0004)
	unsigned long                                      m_bSelfReady : 1;                                         // 0x0124(0x0004)
	unsigned long                                      m_bInQueue : 1;                                           // 0x0124(0x0004)
	unsigned long                                      m_bSoloLTEActive : 1;                                     // 0x0124(0x0004)
	unsigned long                                      m_bDuoLTEActive : 1;                                      // 0x0124(0x0004)
	unsigned long                                      m_bSquadLTEActive : 1;                                    // 0x0124(0x0004)
	unsigned long                                      m_bLTEActive : 1;                                         // 0x0124(0x0004)
	unsigned long                                      m_bInitLTEInfo : 1;                                       // 0x0124(0x0004)
	unsigned long                                      m_bCanScroll : 1;                                         // 0x0124(0x0004)
	class UUIComponent_List*                           m_pDailyQuests;                                           // 0x0128(0x0008)
	class UGFxObject*                                  m_mcBattlePass;                                           // 0x0130(0x0008)
	class UGFxObject*                                  m_mcBattlePassName;                                       // 0x0138(0x0008)
	class UGFxObject*                                  m_mcBattlePassLevel;                                      // 0x0140(0x0008)
	class UGFxObject*                                  m_mcBattlePassIcon;                                       // 0x0148(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_pBattlePassProgress;                                    // 0x0150(0x0008)
	class UGFxObject*                                  m_mcClass;                                                // 0x0158(0x0008)
	class UGFxObject*                                  m_mcClassName;                                            // 0x0160(0x0008)
	class UGFxObject*                                  m_mcClassLevel;                                           // 0x0168(0x0008)
	class UGFxObject*                                  m_mcClassIcon;                                            // 0x0170(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_pClassProgress;                                         // 0x0178(0x0008)
	class UGFxObject*                                  m_mcQueueRank;                                            // 0x0180(0x0008)
	class UGFxObject*                                  m_mcQueueRankIcon;                                        // 0x0188(0x0008)
	class UGFxObject*                                  m_mcQueueRankKills;                                       // 0x0190(0x0008)
	class UGFxObject*                                  m_mcQueueRankWins;                                        // 0x0198(0x0008)
	class UGFxObject*                                  m_mcQueueRankName;                                        // 0x01A0(0x0008)
	class UGFxObject*                                  m_mcQueueButtonLabel;                                     // 0x01A8(0x0008)
	class UGFxObject*                                  m_mcQueueButtonTimer;                                     // 0x01B0(0x0008)
	class UUIInteractable_ButtonWithKey*               m_pQueueButton;                                           // 0x01B8(0x0008)
	class UUIInteractable_ButtonWithKey*               m_pPlayButton;                                            // 0x01C0(0x0008)
	class UGFxObject*                                  m_mcCrossplayTF;                                          // 0x01C8(0x0008)
	class UGFxObject*                                  m_mcFillTeamTF;                                           // 0x01D0(0x0008)
	class UGFxObject*                                  m_mcRegionTF;                                             // 0x01D8(0x0008)
	class UGFxObject*                                  m_mcErrorTF;                                              // 0x01E0(0x0008)
	class UInputAction*                                m_pSelectQueueAction;                                     // 0x01E8(0x0008)
	class UInputAction*                                m_pPlayAction;                                            // 0x01F0(0x0008)
	class UInputAction*                                m_pPlayCancelAction;                                      // 0x01F8(0x0008)
	class UInputAction*                                m_pReadyAction;                                           // 0x0200(0x0008)
	class UInputAction*                                m_pUnreadyAction;                                         // 0x0208(0x0008)
	class UInputAction*                                m_pCustomStartAction;                                     // 0x0210(0x0008)
	class UInputAction*                                m_pCustomQuitAction;                                      // 0x0218(0x0008)
	class UInputAction*                                m_pCustomCloseAction;                                     // 0x0220(0x0008)
	class UUIComponent_PartyLobbyCustomPanel*          m_pCustomPanel;                                           // 0x0228(0x0008)
	int                                                m_nOutputCount;                                           // 0x0230(0x0004)
	int                                                m_nScroll;                                                // 0x0234(0x0004)
	int                                                m_nLineNumber;                                            // 0x0238(0x0004)
	float                                              m_fOutputWidth;                                           // 0x023C(0x0004)
	struct FString                                     m_sRemaining;                                             // 0x0240(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_SoloLTEMessages;                                        // 0x0250(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_DuoLTEMessages;                                         // 0x0260(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_SquadLTEMessages;                                       // 0x0270(0x0010) (NeedCtorLink)
	struct FPointer                                    m_LTEMessages;                                            // 0x0280(0x0008) (Native, Transient)
	class UGFxObject*                                  m_mcLTEBanner;                                            // 0x0288(0x0008)
	class UGFxObject*                                  m_mcLTEDescription;                                       // 0x0290(0x0008)
	class UGFxObject*                                  m_mcLTETitle;                                             // 0x0298(0x0008)
	class UGFxObject*                                  m_mcLTEFrame;                                             // 0x02A0(0x0008)
	class UGFxObject*                                  m_mcLTEBuffer;                                            // 0x02A8(0x0008)
	class UGFxObject*                                  m_mcLTEScrollbar;                                         // 0x02B0(0x0008)
	class UGFxObject*                                  m_mcLTEOutput[0xA];                                       // 0x02B8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PartyLobbyInfoPanel");
		return ptr;
	}

};


// Class TgClient.UIComponent_PartyLobbyPlayerMenu
// 0x0018 (0x0138 - 0x0120)
class UUIComponent_PartyLobbyPlayerMenu : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcFrame;                                                // 0x0120(0x0008)
	class UUIComponent_List*                           m_pButtonList;                                            // 0x0128(0x0008)
	class UUIComponent_Interactable*                   m_pBlocker;                                               // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PartyLobbyPlayerMenu");
		return ptr;
	}

};


// Class TgClient.UIComponent_PityTimer
// 0x0000 (0x0120 - 0x0120)
class UUIComponent_PityTimer : public UUIComponent_Display
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PityTimer");
		return ptr;
	}

};


// Class TgClient.UIComponent_PlayerContextMenu
// 0x0018 (0x0138 - 0x0120)
class UUIComponent_PlayerContextMenu : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcFrame;                                                // 0x0120(0x0008)
	class UUIComponent_List*                           m_pOptionsList;                                           // 0x0128(0x0008)
	class UUIComponent_Interactable*                   m_pBlocker;                                               // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PlayerContextMenu");
		return ptr;
	}

};


// Class TgClient.UIComponent_PlayerCurrency
// 0x0020 (0x0140 - 0x0120)
class UUIComponent_PlayerCurrency : public UUIComponent_Display
{
public:
	TArray<class UGFxObject*>                          m_mcCurrencyIcon;                                         // 0x0120(0x0010) (NeedCtorLink)
	TArray<class UGFxObject*>                          m_mcCurrencyTF;                                           // 0x0130(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PlayerCurrency");
		return ptr;
	}

};


// Class TgClient.UIComponent_PromptRadialMenu
// 0x0020 (0x0140 - 0x0120)
class UUIComponent_PromptRadialMenu : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTF;                                                   // 0x0120(0x0008)
	class UGFxObject*                                  m_mcMouseWheel;                                           // 0x0128(0x0008)
	class UUIComponent_GamepadKey*                     m_pKey;                                                   // 0x0130(0x0008)
	class UUIComponent_Interactable*                   m_pFrameButton;                                           // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PromptRadialMenu");
		return ptr;
	}

};


// Class TgClient.UIComponent_RatingTooltip
// 0x0000 (0x0120 - 0x0120)
class UUIComponent_RatingTooltip : public UUIComponent_Display
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_RatingTooltip");
		return ptr;
	}

};


// Class TgClient.UIComponent_Rotator
// 0x0008 (0x0128 - 0x0120)
class UUIComponent_Rotator : public UUIComponent_Display
{
public:
	int                                                m_nTickHandle;                                            // 0x0120(0x0004)
	float                                              m_fRotationDegreesPerSecond;                              // 0x0124(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Rotator");
		return ptr;
	}

};


// Class TgClient.UIComponent_ShieldBar
// 0x0034 (0x0154 - 0x0120)
class UUIComponent_ShieldBar : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcBarContainer;                                         // 0x0120(0x0008)
	class UGFxObject*                                  m_mcShieldMask;                                           // 0x0128(0x0008)
	class UGFxObject*                                  m_mcDamageMask;                                           // 0x0130(0x0008)
	class ATgPawn*                                     m_TargetPawn;                                             // 0x0138(0x0008)
	float                                              m_fCurrentDamagePct;                                      // 0x0140(0x0004)
	float                                              m_fCurrentShieldPct;                                      // 0x0144(0x0004)
	unsigned long                                      m_bVisible : 1;                                           // 0x0148(0x0004)
	float                                              m_fDamageInterpSpeed;                                     // 0x014C(0x0004)
	float                                              m_fMinDamageInterpSpeed;                                  // 0x0150(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ShieldBar");
		return ptr;
	}

};


// Class TgClient.UIComponent_ShopCrowns
// 0x0048 (0x0168 - 0x0120)
class UUIComponent_ShopCrowns : public UUIComponent_Display
{
public:
	struct Fdword                                      m_dwVendorRequestId;                                      // 0x0120(0x0004)
	unsigned long                                      m_bRealMoneyDataReady : 1;                                // 0x0124(0x0004)
	class UGFxObject*                                  m_mcLoadingTF;                                            // 0x0128(0x0008)
	class UUIComponent_List*                           m_pPurchaseOptions;                                       // 0x0130(0x0008)
	class UInputGroup*                                 m_grInput;                                                // 0x0138(0x0008)
	class UAkBaseSoundObject*                          m_akCrownsTier1;                                          // 0x0140(0x0008)
	class UAkBaseSoundObject*                          m_akCrownsTier2;                                          // 0x0148(0x0008)
	class UAkBaseSoundObject*                          m_akCrownsTier3;                                          // 0x0150(0x0008)
	class UAkBaseSoundObject*                          m_akCrownsTier4;                                          // 0x0158(0x0008)
	class UAkBaseSoundObject*                          m_akCrownsTier5;                                          // 0x0160(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ShopCrowns");
		return ptr;
	}

};


// Class TgClient.UIComponent_ShopItems
// 0x0034 (0x0154 - 0x0120)
class UUIComponent_ShopItems : public UUIComponent_Display
{
public:
	unsigned long                                      m_bRealMoneyDataReady : 1;                                // 0x0120(0x0004)
	class UGFxObject*                                  m_mcLoadingTF;                                            // 0x0124(0x0008)
	class UUIComponent_Interactable*                   m_pPrevArrow;                                             // 0x012C(0x0008)
	class UUIComponent_Interactable*                   m_pNextArrow;                                             // 0x0134(0x0008)
	class UUIComponent_ShopList*                       m_pItemList;                                              // 0x013C(0x0008)
	class UInputGroup*                                 m_grInput;                                                // 0x0144(0x0008)
	class UAkBaseSoundObject*                          m_akOwnedItemClicked;                                     // 0x014C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ShopItems");
		return ptr;
	}

};


// Class TgClient.UIComponent_TitlesView
// 0x0054 (0x0174 - 0x0120)
class UUIComponent_TitlesView : public UUIComponent_Display
{
public:
	TArray<class UUIComponent_TitlesViewEntry*>        m_TitleEntries;                                           // 0x0120(0x0010) (NeedCtorLink)
	class UInputGroup*                                 m_grTitlesGroup;                                          // 0x0130(0x0008)
	class UGFxObject*                                  m_mcPlayerTitle;                                          // 0x0138(0x0008)
	class UUIComponent_PlayerName*                     m_pPlayerName;                                            // 0x0140(0x0008)
	class UUIInteractable_Button*                      m_pEquipButton;                                           // 0x0148(0x0008)
	class UUIComponent_TitleTooltip*                   m_pTooltipLeft;                                           // 0x0150(0x0008)
	class UUIComponent_TitleTooltip*                   m_pTooltipRight;                                          // 0x0158(0x0008)
	class UUIComponent_ScrollBar*                      m_pScrollbar;                                             // 0x0160(0x0008)
	int                                                m_nLastTooltipIndex;                                      // 0x0168(0x0004)
	int                                                m_nNumTitlesRows;                                         // 0x016C(0x0004) (Const)
	int                                                m_nNumTitlesCols;                                         // 0x0170(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_TitlesView");
		return ptr;
	}


	void FadeOut(class UGFxObject* pObj, float fTime, float fDelay);
	void FadeIn(class UGFxObject* pObj, float fTime, float fDelay);
};


// Class TgClient.UIComponent_TitleTooltip
// 0x0018 (0x0138 - 0x0120)
class UUIComponent_TitleTooltip : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcDescription;                                          // 0x0128(0x0008)
	int                                                m_nLastSetItemID;                                         // 0x0130(0x0004)
	float                                              m_fTooltipShowDelay;                                      // 0x0134(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_TitleTooltip");
		return ptr;
	}

};


// Class TgClient.UIComponent_Tooltip
// 0x0014 (0x0134 - 0x0120)
class UUIComponent_Tooltip : public UUIComponent_Display
{
public:
	TEnumAsByte<EUIALIGNINGTYPE>                       m_eAlignHorz;                                             // 0x0120(0x0001)
	TEnumAsByte<EUIALIGNINGTYPE>                       m_eAlignVert;                                             // 0x0121(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	class UUIComponent_Display*                        m_pDisplay;                                               // 0x0124(0x0008)
	float                                              m_fAnimInOutTime;                                         // 0x012C(0x0004)
	float                                              m_fAnimInDelay;                                           // 0x0130(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Tooltip");
		return ptr;
	}

};


// Class TgClient.UIScene
// 0x0034 (0x0154 - 0x0120)
class UUIScene : public UUIComponent_Display
{
public:
	TArray<struct FUIAnimData>                         m_AnimObjects;                                            // 0x0120(0x0010) (NeedCtorLink)
	TArray<class UUIComponent_Interactable*>           m_Interactables;                                          // 0x0130(0x0010) (NeedCtorLink)
	TArray<class UInputGroup*>                         m_FocusedGroupStack;                                      // 0x0140(0x0010) (NeedCtorLink)
	unsigned long                                      m_bAllowDuplicateData : 1;                                // 0x0150(0x0004)
	unsigned long                                      m_bUninitializing : 1;                                    // 0x0150(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene");
		return ptr;
	}


	void STATIC_ClearQueuedSounds(class UAkBaseSoundObject* akSound);
	void STATIC_QueueSound(class UAkBaseSoundObject* akSound, float fDelay);
	bool STATIC_IsSoundQueued(class UAkBaseSoundObject* akSound);
	void STATIC_EndAnim(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType);
	float STATIC_GetAnimationTarget(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType);
	bool STATIC_IsAnimating(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType);
	void STATIC_QueueAnim(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, unsigned char eQuad);
	void STATIC_Animate(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, float fDelay, unsigned char eQuad, bool bEndCurrentAnim);
	void STATIC_FadeOutAsWell(class UGFxObject* pObj, float fTime, float fDelay);
	void STATIC_FadeInAsWell(class UGFxObject* pObj, float fTime, float fDelay);
	void FadeOut(class UGFxObject* pObj, float fTime, float fDelay);
	void FadeIn(class UGFxObject* pObj, float fTime, float fDelay);
};


// Class TgClient.UIScene_UIAcquisition
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIAcquisition : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIAcquisition");
		return ptr;
	}

};


// Class TgClient.UIScene_UIBattlePass
// 0x0028 (0x017C - 0x0154)
class UUIScene_UIBattlePass : public UUIScene
{
public:
	class UUIComponent_Interactable*                   m_pBack;                                                  // 0x0154(0x0008)
	class UUIComponent_HeaderTabs*                     m_pTabs;                                                  // 0x015C(0x0008)
	class UUIComponent_BattlePassHome*                 m_pHome;                                                  // 0x0164(0x0008)
	class UUIComponent_BattlePassChallenges*           m_pChallenges;                                            // 0x016C(0x0008)
	class UUIComponent_BattlePassPicks*                m_pPicks;                                                 // 0x0174(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIBattlePass");
		return ptr;
	}

};


// Class TgClient.UIScene_UIChatScene
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIChatScene : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIChatScene");
		return ptr;
	}

};


// Class TgClient.UIScene_UIClassSelect
// 0x001C (0x0170 - 0x0154)
class UUIScene_UIClassSelect : public UUIScene
{
public:
	struct Fdword                                      m_dwHoveredClass;                                         // 0x0154(0x0004)
	class UUIComponent_List*                           m_pClassList;                                             // 0x0158(0x0008)
	class UUIComponent_ClassSelectInfoPanel*           m_pInfoPanel;                                             // 0x0160(0x0008)
	class UInputGroup*                                 m_grInput;                                                // 0x0168(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIClassSelect");
		return ptr;
	}

};


// Class TgClient.UIScene_UICustomGameCreate
// 0x0050 (0x01A4 - 0x0154)
class UUIScene_UICustomGameCreate : public UUIScene
{
public:
	class UGFxObject*                                  m_mcTitle;                                                // 0x0154(0x0008)
	class UGFxObject*                                  m_mcError;                                                // 0x015C(0x0008)
	class UGFxObject*                                  m_mcWait;                                                 // 0x0164(0x0008)
	class UUIComponent_OptionEntryText*                m_pNameInput;                                             // 0x016C(0x0008)
	class UUIComponent_OptionEntryText*                m_pPasswordInput;                                         // 0x0174(0x0008)
	class UUIComponent_OptionEntryPaged*               m_pGameTypeInput;                                         // 0x017C(0x0008)
	class UUIComponent_OptionEntryPaged*               m_pJoinAsSpectatorInput;                                  // 0x0184(0x0008)
	class UUIComponent_Interactable*                   m_pCreateButton;                                          // 0x018C(0x0008)
	class UInputGroup*                                 m_pGroup;                                                 // 0x0194(0x0008)
	float                                              m_fUpdateTimer;                                           // 0x019C(0x0004)
	float                                              m_fCreateDisableTimer;                                    // 0x01A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UICustomGameCreate");
		return ptr;
	}

};


// Class TgClient.UIScene_UICustomGameList
// 0x0054 (0x01A8 - 0x0154)
class UUIScene_UICustomGameList : public UUIScene
{
public:
	class UUIComponent_List*                           m_pList;                                                  // 0x0154(0x0008)
	class UUIComponent_CustomGame*                     m_pSelectedComp;                                          // 0x015C(0x0008)
	class UUIData_CustomGame*                          m_pSelectedGame;                                          // 0x0164(0x0008)
	class UUIComponent_Interactable*                   m_pCreateButton;                                          // 0x016C(0x0008)
	class UUIComponent_Interactable*                   m_pJoinButton;                                            // 0x0174(0x0008)
	class UGFxObject*                                  m_mcRegionTF;                                             // 0x017C(0x0008)
	class UInputAction*                                m_pCreateAction;                                          // 0x0184(0x0008)
	class UInputAction*                                m_pJoinAction;                                            // 0x018C(0x0008)
	class UInputAction*                                m_pRefreshKeyboardAction;                                 // 0x0194(0x0008)
	class UInputAction*                                m_pRefreshGamePadAction;                                  // 0x019C(0x0008)
	float                                              m_fRefreshDisableTimer;                                   // 0x01A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UICustomGameList");
		return ptr;
	}

};


// Class TgClient.UIScene_UIFooter
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIFooter : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIFooter");
		return ptr;
	}

};


// Class TgClient.UIScene_UIFooterGamepad
// 0x024C (0x03A0 - 0x0154)
class UUIScene_UIFooterGamepad : public UUIScene
{
public:
	struct FFooterOption                               m_Option[0x8];                                            // 0x0154(0x0044)
	int                                                m_nInputRegisteredCallbackHandle;                         // 0x0374(0x0004)
	int                                                m_nInputDisplayNamesChangedCallbackHandle;                // 0x0378(0x0004)
	unsigned long                                      m_bFrozen : 1;                                            // 0x037C(0x0004)
	TArray<int>                                        m_CachedInputGamepadKeys;                                 // 0x0380(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_CachedInputDisplay;                                     // 0x0390(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIFooterGamepad");
		return ptr;
	}


	void STATIC_Thaw();
	void Freeze();
};


// Class TgClient.UIScene_UIHome
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIHome : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIHome");
		return ptr;
	}

};


// Class TgClient.UIScene_UIHudBot
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIHudBot : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIHudBot");
		return ptr;
	}

};


// Class TgClient.UIScene_UIHudMap
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIHudMap : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIHudMap");
		return ptr;
	}

};


// Class TgClient.UIScene_UIHudMenu
// 0x0030 (0x0184 - 0x0154)
class UUIScene_UIHudMenu : public UUIScene
{
public:
	class UGFxObject*                                  m_mcToggleMenuPrompt;                                     // 0x0154(0x0008)
	class UUIComponent_CenteredHeaderTabs*             m_pTabs;                                                  // 0x015C(0x0008)
	class UUIComponent_HudMenuMap*                     m_pMap;                                                   // 0x0164(0x0008)
	class UUIComponent_HudMenuInventory*               m_pInventory;                                             // 0x016C(0x0008)
	class UUIComponent_HudMenuClass*                   m_pClass;                                                 // 0x0174(0x0008)
	class UInputAction*                                m_pToggleMenuAction;                                      // 0x017C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIHudMenu");
		return ptr;
	}

};


// Class TgClient.UIScene_UIHudOverlay
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIHudOverlay : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIHudOverlay");
		return ptr;
	}

};


// Class TgClient.UIScene_UIHudTop
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIHudTop : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIHudTop");
		return ptr;
	}

};


// Class TgClient.UIScene_UIJoinCustomPopup
// 0x0024 (0x0178 - 0x0154)
class UUIScene_UIJoinCustomPopup : public UUIScene
{
public:
	unsigned long                                      m_bHaveInput : 1;                                         // 0x0154(0x0004)
	class UGFxObject*                                  m_mcInputMatchName;                                       // 0x0158(0x0008)
	class UGFxObject*                                  m_mcInputPass;                                            // 0x0160(0x0008)
	class UGFxObject*                                  m_mcInputJoin;                                            // 0x0168(0x0008)
	class UGFxObject*                                  m_mcError;                                                // 0x0170(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIJoinCustomPopup");
		return ptr;
	}

};


// Class TgClient.UIScene_UIKeybindPopup
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIKeybindPopup : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIKeybindPopup");
		return ptr;
	}

};


// Class TgClient.UIScene_UILootItems
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UILootItems : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UILootItems");
		return ptr;
	}

};


// Class TgClient.UIScene_UIPartyLobby
// 0x006C (0x01C0 - 0x0154)
class UUIScene_UIPartyLobby : public UUIScene
{
public:
	int                                                m_nOnTickCallbackHandle;                                  // 0x0154(0x0004)
	class UGFxObject*                                  m_mcSearching;                                            // 0x0158(0x0008)
	class UGFxObject*                                  m_mcSearchingTitle;                                       // 0x0160(0x0008)
	class UGFxObject*                                  m_mcSearchingSubtitle;                                    // 0x0168(0x0008)
	class UUIComponent_List*                           m_pPlayerList;                                            // 0x0170(0x0008)
	class UUIComponent_PartyLobbyInfoPanel*            m_pInfoPanel;                                             // 0x0178(0x0008)
	class UUIComponent_PartyLobbyPlayerMenu*           m_pPlayerMenu;                                            // 0x0180(0x0008)
	class UUIComponent_PartyLobbyPlayer*               m_pHoveredPlayer;                                         // 0x0188(0x0008)
	class UUIComponent_CustomPlayer*                   m_pHoveredCustomPlayer;                                   // 0x0190(0x0008)
	class UInputGroup*                                 m_grInput;                                                // 0x0198(0x0008)
	class UAkBaseSoundObject*                          m_akPlayerReady;                                          // 0x01A0(0x0008)
	class UAkBaseSoundObject*                          m_akPlayerUnready;                                        // 0x01A8(0x0008)
	class UAkBaseSoundObject*                          m_akLeave;                                                // 0x01B0(0x0008)
	class UAkBaseSoundObject*                          m_akMatch;                                                // 0x01B8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIPartyLobby");
		return ptr;
	}

};


// Class TgClient.UIScene_UIPopupGeneric
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIPopupGeneric : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIPopupGeneric");
		return ptr;
	}

};


// Class TgClient.UIScene_UIPopupInput
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIPopupInput : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIPopupInput");
		return ptr;
	}

};


// Class TgClient.UIScene_UIPopupPartyManager
// 0x0050 (0x01A4 - 0x0154)
class UUIScene_UIPopupPartyManager : public UUIScene
{
public:
	class UUIComponent_Interactable*                   m_pCloseButton;                                           // 0x0154(0x0008)
	class UUIComponent_Interactable*                   m_pBlocker;                                               // 0x015C(0x0008)
	class UUIComponent_List*                           m_pList;                                                  // 0x0164(0x0008)
	TArray<class UGFxObject*>                          m_mcTitle;                                                // 0x016C(0x0010) (NeedCtorLink)
	class UInputAction*                                m_pSelectAllAction;                                       // 0x017C(0x0008)
	class UInputAction*                                m_pPromptInviteByNameKeyboardAction;                      // 0x0184(0x0008)
	class UInputAction*                                m_pPromptInviteByNameGamePadAction;                       // 0x018C(0x0008)
	class UInputAction*                                m_pPromptAddByNameKeyboardAction;                         // 0x0194(0x0008)
	class UInputAction*                                m_pPromptAddByNameGamePadAction;                          // 0x019C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIPopupPartyManager");
		return ptr;
	}

};


// Class TgClient.UIScene_UIPopupRealMoneyPurchase
// 0x003C (0x0190 - 0x0154)
class UUIScene_UIPopupRealMoneyPurchase : public UUIScene
{
public:
	float                                              m_fDisplayHeight;                                         // 0x0154(0x0004)
	int                                                m_nScrollOffset;                                          // 0x0158(0x0004)
	int                                                m_nMaxScrollOffset;                                       // 0x015C(0x0004)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0160(0x0008)
	class UGFxObject*                                  m_mcSubtitle;                                             // 0x0168(0x0008)
	class UGFxObject*                                  m_mcScrollingTF;                                          // 0x0170(0x0008)
	class UGFxObject*                                  m_mcScrollUpArrow;                                        // 0x0178(0x0008)
	class UGFxObject*                                  m_mcScrollDownArrow;                                      // 0x0180(0x0008)
	class UUIComponent_DLCPack*                        m_DLCPackDisplay;                                         // 0x0188(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIPopupRealMoneyPurchase");
		return ptr;
	}

};


// Class TgClient.UIScene_UIProfileMini
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIProfileMini : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIProfileMini");
		return ptr;
	}

};


// Class TgClient.UIScene_UIRadialMenuBase
// 0x008C (0x01E0 - 0x0154)
class UUIScene_UIRadialMenuBase : public UUIScene
{
public:
	TEnumAsByte<ERadialMenuPage>                       m_CurrentPage;                                            // 0x0154(0x0001)
	TEnumAsByte<ERadialMenuDir>                        m_CurrentSlice;                                           // 0x0155(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0156(0x0002) MISSED OFFSET
	int                                                m_nCurrentSubSelectionN;                                  // 0x0158(0x0004)
	int                                                m_nCurrentSubSelectionS;                                  // 0x015C(0x0004)
	unsigned long                                      m_bShowingLargeButtonN : 1;                               // 0x0160(0x0004)
	unsigned long                                      m_bShowingLargeButtonS : 1;                               // 0x0160(0x0004)
	unsigned long                                      m_bAllowPageLooping : 1;                                  // 0x0160(0x0004)
	unsigned long                                      m_bCenterMouseOnShow : 1;                                 // 0x0160(0x0004)
	int                                                m_nAxisUpdateCBHandle;                                    // 0x0164(0x0004)
	float                                              m_fSelectionDelayGamepad;                                 // 0x0168(0x0004)
	float                                              m_fSelectionDelayMouse;                                   // 0x016C(0x0004)
	float                                              m_fDeselectionDelayGamepad;                               // 0x0170(0x0004)
	float                                              m_fDeselectionDelayMouse;                                 // 0x0174(0x0004)
	float                                              m_fMouseOffsetX;                                          // 0x0178(0x0004)
	float                                              m_fMouseOffsetY;                                          // 0x017C(0x0004)
	class UGFxObject*                                  m_mcWheel;                                                // 0x0180(0x0008)
	class UUIComponent_ItemRadialMenuBase*             m_pItemE;                                                 // 0x0188(0x0008)
	class UUIComponent_ItemRadialMenuBase*             m_pItemW;                                                 // 0x0190(0x0008)
	class UUIComponent_ItemRadialMenuBase*             m_pItemLargeN;                                            // 0x0198(0x0008)
	class UUIComponent_ItemRadialMenuBase*             m_pItemLargeS;                                            // 0x01A0(0x0008)
	TArray<class UUIComponent_ItemRadialMenuBase*>     m_pSubSelectN;                                            // 0x01A8(0x0010) (NeedCtorLink)
	TArray<class UUIComponent_ItemRadialMenuBase*>     m_pSubSelectS;                                            // 0x01B8(0x0010) (NeedCtorLink)
	class UAkEvent*                                    m_akSliceHover;                                           // 0x01C8(0x0008)
	class UAkEvent*                                    m_akWheelSelect;                                          // 0x01D0(0x0008)
	class UClass*                                      m_ItemClass;                                              // 0x01D8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIRadialMenuBase");
		return ptr;
	}

};


// Class TgClient.UIScene_UIRadialMenu
// 0x0020 (0x0200 - 0x01E0)
class UUIScene_UIRadialMenu : public UUIScene_UIRadialMenuBase
{
public:
	class UGFxObject*                                  m_mcPing;                                                 // 0x01E0(0x0008)
	class UGFxObject*                                  m_mcPingPrompt;                                           // 0x01E8(0x0008)
	class UUIComponent_PromptRadialMenu*               m_pLeftPrompt;                                            // 0x01F0(0x0008)
	class UUIComponent_PromptRadialMenu*               m_pRightPrompt;                                           // 0x01F8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIRadialMenu");
		return ptr;
	}

};


// Class TgClient.UIScene_UIRadialMenuLobby
// 0x000C (0x01EC - 0x01E0)
class UUIScene_UIRadialMenuLobby : public UUIScene_UIRadialMenuBase
{
public:
	unsigned long                                      m_bPreviewingChicken : 1;                                 // 0x01E0(0x0004)
	int                                                m_nOnTickCallbackHandle;                                  // 0x01E4(0x0004)
	float                                              m_fTransformationTimer;                                   // 0x01E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIRadialMenuLobby");
		return ptr;
	}

};


// Class TgClient.UIScene_UISafeFrame
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UISafeFrame : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UISafeFrame");
		return ptr;
	}

};


// Class TgClient.UIScene_UISettings
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UISettings : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UISettings");
		return ptr;
	}

};


// Class TgClient.UIScene_UIShop
// 0x002C (0x0180 - 0x0154)
class UUIScene_UIShop : public UUIScene
{
public:
	TEnumAsByte<EUISHOP_STATE>                         m_eState;                                                 // 0x0154(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	class UUIComponent_CenteredHeaderTabs*             m_pTabs;                                                  // 0x0158(0x0008)
	class UUIComponent_BuyCrownsButton*                m_pBuyCrowns;                                             // 0x0160(0x0008)
	class UUIComponent_ShopItems*                      m_pItems;                                                 // 0x0168(0x0008)
	class UUIComponent_ShopCrowns*                     m_pCrowns;                                                // 0x0170(0x0008)
	class UUIComponent_PreviewRotator*                 m_pRotator;                                               // 0x0178(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIShop");
		return ptr;
	}

};


// Class TgClient.UIScene_UIShopPurchaseConfirm
// 0x00C0 (0x0214 - 0x0154)
class UUIScene_UIShopPurchaseConfirm : public UUIScene
{
public:
	class UGFxObject*                                  m_mcName;                                                 // 0x0154(0x0008)
	class UGFxObject*                                  m_mcOffer;                                                // 0x015C(0x0008)
	class UGFxObject*                                  m_mcRarity;                                               // 0x0164(0x0008)
	class UGFxObject*                                  m_mcDesc;                                                 // 0x016C(0x0008)
	class UGFxObject*                                  m_mcSale;                                                 // 0x0174(0x0008)
	class UGFxObject*                                  m_mcIncludesItems;                                        // 0x017C(0x0008)
	class UGFxObject*                                  m_mcHoverName;                                            // 0x0184(0x0008)
	class UGFxObject*                                  m_mcHoverDesc;                                            // 0x018C(0x0008)
	class UGFxObject*                                  m_mcCompletePurchase;                                     // 0x0194(0x0008)
	class UGFxObject*                                  m_mcOwnedCrownsContainer;                                 // 0x019C(0x0008)
	class UGFxObject*                                  m_mcPurchased;                                            // 0x01A4(0x0008)
	class UUIComponent_List*                           m_pPurchaseItems;                                         // 0x01AC(0x0008)
	class UUIComponent_Interactable*                   m_pPrevArrow;                                             // 0x01B4(0x0008)
	class UUIComponent_Interactable*                   m_pNextArrow;                                             // 0x01BC(0x0008)
	class UUIComponent_ItemPreviewStack*               m_pItemPreviewStack;                                      // 0x01C4(0x0008)
	class UUIComponent_PreviewRotator*                 m_pRotator;                                               // 0x01CC(0x0008)
	class UUIInteractable_Button*                      m_pPurchaseCrownsButton;                                  // 0x01D4(0x0008)
	class UUIComponent_GamepadKey*                     m_pPurchaseCrownsButtonKey;                               // 0x01DC(0x0008)
	class UUIInteractable_Button_Purchase*             m_pPurchaseItemButton;                                    // 0x01E4(0x0008)
	class UUIComponent_Currency*                       m_pOwnedCrowns;                                           // 0x01EC(0x0008)
	class UUIComponent_Currency*                       m_pItemPrice;                                             // 0x01F4(0x0008)
	class UInputGroup*                                 m_grInput;                                                // 0x01FC(0x0008)
	class UInputAction*                                m_pPurchaseItemAction;                                    // 0x0204(0x0008)
	class UInputAction*                                m_pPurchaseCrownsAction;                                  // 0x020C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIShopPurchaseConfirm");
		return ptr;
	}

};


// Class TgClient.UIScene_UIWebBrowser
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIWebBrowser : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIWebBrowser");
		return ptr;
	}

};


// Class TgClient.UIComponent_DualButtonPanel
// 0x0020 (0x0138 - 0x0118)
class UUIComponent_DualButtonPanel : public UUIComponent
{
public:
	class UGFxObject*                                  m_pPanelRoot;                                             // 0x0118(0x0008)
	class UUIComponent_Interactable*                   m_pPanelButton;                                           // 0x0120(0x0008)
	class UUIComponent_Interactable*                   m_pButton;                                                // 0x0128(0x0008)
	class UUIComponent_Currency*                       m_pButtonCurrency;                                        // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_DualButtonPanel");
		return ptr;
	}

};


// Class TgClient.UIComponent_Interactable
// 0x0025 (0x013D - 0x0118)
class UUIComponent_Interactable : public UUIComponent
{
public:
	class UGFxObject*                                  m_mcInteractable;                                         // 0x0118(0x0008)
	TArray<class UGFxObject*>                          m_mcRolloverObjects;                                      // 0x0120(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcSelected;                                             // 0x0130(0x0008)
	unsigned long                                      m_bSelected : 1;                                          // 0x0138(0x0004)
	TEnumAsByte<EUIDISPLAYTYPE>                        m_eInteractionType;                                       // 0x013C(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Interactable");
		return ptr;
	}

};


// Class TgClient.UIComponent_AcquisitionCarousel
// 0x0077 (0x01B4 - 0x013D)
class UUIComponent_AcquisitionCarousel : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	class UUIInteractable_Button*                      m_mcLeftArrow;                                            // 0x0140(0x0008)
	class UUIInteractable_Button*                      m_mcRightArrow;                                           // 0x0148(0x0008)
	class UGFxObject*                                  m_mcLeftButtonPrompt;                                     // 0x0150(0x0008)
	class UGFxObject*                                  m_mcRightButtonPrompt;                                    // 0x0158(0x0008)
	TArray<struct FUIAcquiredItem>                     m_CarouselItems;                                          // 0x0160(0x0010) (NeedCtorLink)
	TArray<class UGFxObject*>                          m_mcNavDots;                                              // 0x0170(0x0010) (NeedCtorLink)
	int                                                m_nIndex;                                                 // 0x0180(0x0004)
	float                                              m_fNavDotCenter;                                          // 0x0184(0x0004)
	TArray<int>                                        m_ItemIdList;                                             // 0x0188(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        m_ItemQuantityList;                                       // 0x0198(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              m_fDotPlacementX;                                         // 0x01A8(0x0004)
	float                                              m_fDotWidth;                                              // 0x01AC(0x0004)
	float                                              m_fDotPadding;                                            // 0x01B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_AcquisitionCarousel");
		return ptr;
	}

};


// Class TgClient.UIComponent_OptionEntryBase
// 0x0013 (0x0150 - 0x013D)
class UUIComponent_OptionEntryBase : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	class UGFxObject*                                  m_mcLabel;                                                // 0x0140(0x0008)
	class UInputGroup*                                 m_pGroup;                                                 // 0x0148(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_OptionEntryBase");
		return ptr;
	}

};


// Class TgClient.UIComponent_OptionEntryPaged
// 0x0034 (0x0184 - 0x0150)
class UUIComponent_OptionEntryPaged : public UUIComponent_OptionEntryBase
{
public:
	TArray<struct FPagedEntry>                         m_Entries;                                                // 0x0150(0x0010) (NeedCtorLink)
	int                                                m_nSelectedIndex;                                         // 0x0160(0x0004)
	class UGFxObject*                                  m_mcPagedInput;                                           // 0x0164(0x0008)
	class UUIComponent_Interactable*                   m_pLeftArrow;                                             // 0x016C(0x0008)
	class UUIComponent_Interactable*                   m_pRightArrow;                                            // 0x0174(0x0008)
	class UGFxObject*                                  m_mcValueTF;                                              // 0x017C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_OptionEntryPaged");
		return ptr;
	}

};


// Class TgClient.UIComponent_OptionEntryText
// 0x0008 (0x0158 - 0x0150)
class UUIComponent_OptionEntryText : public UUIComponent_OptionEntryBase
{
public:
	class UUIComponent_Interactable*                   m_pTextInput;                                             // 0x0150(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_OptionEntryText");
		return ptr;
	}

};


// Class TgClient.UIComponent_Popup
// 0x001B (0x0158 - 0x013D)
class UUIComponent_Popup : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	class UUIComponent_Display*                        m_pItem;                                                  // 0x0140(0x0008)
	class UInputGroup*                                 m_grScene;                                                // 0x0148(0x0008)
	int                                                m_nCallbackOnBackHandle;                                  // 0x0150(0x0004)
	unsigned long                                      m_bCanHidePopup : 1;                                      // 0x0154(0x0004)
	unsigned long                                      m_bFadeWithShowHide : 1;                                  // 0x0154(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Popup");
		return ptr;
	}

};


// Class TgClient.UIComponent_PreviewRotator
// 0x001F (0x015C - 0x013D)
class UUIComponent_PreviewRotator : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	unsigned long                                      m_bHovering : 1;                                          // 0x0140(0x0004)
	unsigned long                                      m_bRotating : 1;                                          // 0x0140(0x0004)
	float                                              m_fPreviousPosX;                                          // 0x0144(0x0004)
	float                                              m_fRotationFactor;                                        // 0x0148(0x0004)
	class UInputAction*                                m_LeftPressInputAction;                                   // 0x014C(0x0008)
	class UInputAction*                                m_LeftReleaseInputAction;                                 // 0x0154(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PreviewRotator");
		return ptr;
	}

};


// Class TgClient.UIComponent_RatingInteractable
// 0x000B (0x0148 - 0x013D)
class UUIComponent_RatingInteractable : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	class UGFxObject*                                  m_mcRatingIcon;                                           // 0x0140(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_RatingInteractable");
		return ptr;
	}

};


// Class TgClient.UIComponent_ScrollBar
// 0x0027 (0x0164 - 0x013D)
class UUIComponent_ScrollBar : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	int                                                m_nPageHeight;                                            // 0x0140(0x0004)
	int                                                m_nPageWidth;                                             // 0x0144(0x0004)
	int                                                m_nNumElements;                                           // 0x0148(0x0004)
	float                                              m_fScrollPos;                                             // 0x014C(0x0004)
	int                                                m_nNavScrollCBHandle1;                                    // 0x0150(0x0004)
	int                                                m_nNavScrollCBHandle2;                                    // 0x0154(0x0004)
	class UInputGroup*                                 m_grScroll;                                               // 0x0158(0x0008)
	unsigned long                                      m_bScrollVertical : 1;                                    // 0x0160(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ScrollBar");
		return ptr;
	}

};


// Class TgClient.UIComponent_ScrollBarDisplay
// 0x0003 (0x0140 - 0x013D)
class UUIComponent_ScrollBarDisplay : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ScrollBarDisplay");
		return ptr;
	}

};


// Class TgClient.UIComponent_TitlesViewEntry
// 0x004F (0x018C - 0x013D)
class UUIComponent_TitlesViewEntry : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	int                                                m_nTitleId;                                               // 0x0140(0x0004)
	class UGFxObject*                                  m_mcRarityText;                                           // 0x0144(0x0008)
	class UGFxObject*                                  m_mcColorBlock;                                           // 0x014C(0x0008)
	class UGFxObject*                                  m_mcFade;                                                 // 0x0154(0x0008)
	class UGFxObject*                                  m_mcTitle;                                                // 0x015C(0x0008)
	class UGFxObject*                                  m_mcLockIcon;                                             // 0x0164(0x0008)
	class UGFxObject*                                  m_mcEquipped;                                             // 0x016C(0x0008)
	class UAkBaseSoundObject*                          m_scEquip;                                                // 0x0174(0x0008)
	class UAkBaseSoundObject*                          m_scUnequip;                                              // 0x017C(0x0008)
	class UAkBaseSoundObject*                          m_scNotOwned;                                             // 0x0184(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_TitlesViewEntry");
		return ptr;
	}

};


// Class TgClient.UIComponent_Toggle
// 0x000F (0x014C - 0x013D)
class UUIComponent_Toggle : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	unsigned long                                      m_bActive : 1;                                            // 0x0140(0x0004)
	class UGFxObject*                                  m_mcActive;                                               // 0x0144(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Toggle");
		return ptr;
	}

};


// Class TgClient.UIInteractable_Button
// 0x0003 (0x0140 - 0x013D)
class UUIInteractable_Button : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIInteractable_Button");
		return ptr;
	}

};


// Class TgClient.UIInteractable_Button_Price
// 0x004C (0x018C - 0x0140)
class UUIInteractable_Button_Price : public UUIInteractable_Button
{
public:
	class UGFxObject*                                  m_mcPrices[0x3];                                          // 0x0140(0x0008)
	struct FString                                     m_sPriceLoadNames[0x3];                                   // 0x0158(0x0010) (NeedCtorLink)
	int                                                m_nPriceIndex;                                            // 0x0188(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIInteractable_Button_Price");
		return ptr;
	}

};


// Class TgClient.UIInteractable_Button_Purchase
// 0x004C (0x018C - 0x0140)
class UUIInteractable_Button_Purchase : public UUIInteractable_Button
{
public:
	unsigned long                                      m_bHolding : 1;                                           // 0x0140(0x0004)
	unsigned long                                      m_bPrimed : 1;                                            // 0x0140(0x0004)
	float                                              m_fHoldTimer;                                             // 0x0144(0x0004)
	float                                              m_fHoldDuration;                                          // 0x0148(0x0004)
	class UGFxObject*                                  m_mcTF;                                                   // 0x014C(0x0008)
	class UGFxObject*                                  m_mcRadialMask;                                           // 0x0154(0x0008)
	class UGFxObject*                                  m_mcKeyContainer;                                         // 0x015C(0x0008)
	class UUIComponent_GamepadKey*                     m_pKey;                                                   // 0x0164(0x0008)
	class UUIComponent_Currency*                       m_pCurrency;                                              // 0x016C(0x0008)
	class UUIComponent_Currency*                       m_pRealMoneyPrice;                                        // 0x0174(0x0008)
	class UInputAction*                                m_PressAction;                                            // 0x017C(0x0008)
	class UInputAction*                                m_ReleaseAction;                                          // 0x0184(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIInteractable_Button_Purchase");
		return ptr;
	}

};


// Class TgClient.UIInteractable_ButtonWithKey
// 0x0008 (0x0148 - 0x0140)
class UUIInteractable_ButtonWithKey : public UUIInteractable_Button
{
public:
	class UUIComponent_GamepadKey*                     m_pKey;                                                   // 0x0140(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIInteractable_ButtonWithKey");
		return ptr;
	}

};


// Class TgClient.UIInteractable_Item
// 0x0093 (0x01D0 - 0x013D)
class UUIInteractable_Item : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	class UGFxObject*                                  m_mcPrice;                                                // 0x0140(0x0008)
	class UGFxObject*                                  m_mcGlow;                                                 // 0x0148(0x0008)
	class UGFxObject*                                  m_mcRarityGlow;                                           // 0x0150(0x0008)
	class UGFxObject*                                  m_mcEquipped;                                             // 0x0158(0x0008)
	class UUIComponent_CTA*                            m_pCTA;                                                   // 0x0160(0x0008)
	class UGFxObject*                                  m_mcSprayUnlocked;                                        // 0x0168(0x0008)
	class UGFxObject*                                  m_mcUpgradeText;                                          // 0x0170(0x0008)
	class UGFxObject*                                  m_mcStarburstA;                                           // 0x0178(0x0008)
	class UGFxObject*                                  m_mcStarburstB;                                           // 0x0180(0x0008)
	class UGFxObject*                                  m_mcGlowA;                                                // 0x0188(0x0008)
	class UGFxObject*                                  m_mcGlowB;                                                // 0x0190(0x0008)
	class UGFxObject*                                  m_mcGlowC;                                                // 0x0198(0x0008)
	class UGFxObject*                                  m_mcGlowD;                                                // 0x01A0(0x0008)
	class UGFxObject*                                  m_mcGlowE;                                                // 0x01A8(0x0008)
	unsigned long                                      m_bEquipped : 1;                                          // 0x01B0(0x0004)
	unsigned long                                      m_bShowChampion : 1;                                      // 0x01B0(0x0004)
	int                                                m_nUpgradeTickHandle;                                     // 0x01B4(0x0004)
	float                                              m_fUpgradeAnimDuration;                                   // 0x01B8(0x0004)
	float                                              m_fUpgradeTimer;                                          // 0x01BC(0x0004)
	class UAkBaseSoundObject*                          m_akCardUpgrade;                                          // 0x01C0(0x0008)
	class UAkBaseSoundObject*                          m_akCardLevelUp;                                          // 0x01C8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIInteractable_Item");
		return ptr;
	}

};


// Class TgClient.UIInteractable_JsonPanel
// 0x00DB (0x0218 - 0x013D)
class UUIInteractable_JsonPanel : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	class UGFxObject*                                  m_mcHighlight;                                            // 0x0140(0x0008)
	class UGFxObject*                                  m_mcImage;                                                // 0x0148(0x0008)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0150(0x0008)
	class UGFxObject*                                  m_mcSubtitle;                                             // 0x0158(0x0008)
	class UGFxObject*                                  m_mcLiveBanner;                                           // 0x0160(0x0008)
	class UGFxObject*                                  m_mcLiveBannerText[0x3];                                  // 0x0168(0x0008)
	struct FJsonFeatureData                            m_JsonFeatureData;                                        // 0x0180(0x0094) (NeedCtorLink)
	unsigned long                                      m_bInteractable : 1;                                      // 0x0214(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIInteractable_JsonPanel");
		return ptr;
	}

};


// Class TgClient.UIInteractable_JsonPanel_Carousel
// 0x0088 (0x02A0 - 0x0218)
class UUIInteractable_JsonPanel_Carousel : public UUIInteractable_JsonPanel
{
public:
	class UGFxObject*                                  m_mcNavControlsRoot;                                      // 0x0218(0x0008)
	class UUIInteractable_Button*                      m_LeftArrow;                                              // 0x0220(0x0008)
	class UUIInteractable_Button*                      m_RightArrow;                                             // 0x0228(0x0008)
	class UGFxObject*                                  m_mcLeftButtonPrompt;                                     // 0x0230(0x0008)
	class UGFxObject*                                  m_mcRightButtonPrompt;                                    // 0x0238(0x0008)
	class UGFxObject*                                  m_mcImage2;                                               // 0x0240(0x0008)
	unsigned long                                      m_bOnImage2 : 1;                                          // 0x0248(0x0004)
	unsigned long                                      m_bPauseAutoRotation : 1;                                 // 0x0248(0x0004)
	unsigned long                                      m_bDisableAutoRotation : 1;                               // 0x0248(0x0004)
	unsigned long                                      m_bDisableNavigation : 1;                                 // 0x0248(0x0004)
	int                                                m_nIndex;                                                 // 0x024C(0x0004)
	class UUIInteractable_Button*                      m_mcActivate;                                             // 0x0250(0x0008)
	TArray<class UUIInteractable_Button*>              m_NavDots;                                                // 0x0258(0x0010) (NeedCtorLink)
	float                                              m_fNavDotCenter;                                          // 0x0268(0x0004)
	TArray<struct FJsonFeatureData>                    m_CarouselJsonFeatureData;                                // 0x026C(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              m_fDotPlacementX;                                         // 0x027C(0x0004)
	float                                              m_fDotWidth;                                              // 0x0280(0x0004)
	float                                              m_fDotPadding;                                            // 0x0284(0x0004)
	float                                              m_fAutoRotationTime;                                      // 0x0288(0x0004)
	float                                              m_fAutoRotationDelay;                                     // 0x028C(0x0004)
	struct FName                                       m_GamepadLeftKey;                                         // 0x0290(0x0008)
	struct FName                                       m_GamepadRightKey;                                        // 0x0298(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIInteractable_JsonPanel_Carousel");
		return ptr;
	}

};


// Class TgClient.UIInteractable_NavPanel
// 0x002B (0x0168 - 0x013D)
class UUIInteractable_NavPanel : public UUIComponent_Interactable
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	class UGFxObject*                                  m_mcHighlight;                                            // 0x0140(0x0008)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0148(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0150(0x0008)
	class UGFxObject*                                  m_mcPrimeQuestCTA;                                        // 0x0158(0x0008)
	class UUIComponent_CTA*                            m_pCTA;                                                   // 0x0160(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIInteractable_NavPanel");
		return ptr;
	}

};


// Class TgClient.UIInteractable_NavPanel_Play
// 0x0070 (0x01D8 - 0x0168)
class UUIInteractable_NavPanel_Play : public UUIInteractable_NavPanel
{
public:
	float                                              m_fFlareScaleTime[0x4];                                   // 0x0168(0x0004)
	float                                              m_fFlareAlphaTime[0x5];                                   // 0x0178(0x0004)
	float                                              m_fFlareScaleTimer[0x4];                                  // 0x018C(0x0004)
	float                                              m_fFlareAlphaTimer[0x5];                                  // 0x019C(0x0004)
	class UGFxObject*                                  m_mcFlare;                                                // 0x01B0(0x0008)
	class UGFxObject*                                  m_mcQueueTF0;                                             // 0x01B8(0x0008)
	class UGFxObject*                                  m_mcQueueTF1;                                             // 0x01C0(0x0008)
	class UGFxObject*                                  m_mcPrompt;                                               // 0x01C8(0x0008)
	class UGFxObject*                                  m_mcCTATF;                                                // 0x01D0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIInteractable_NavPanel_Play");
		return ptr;
	}

};


// Class TgClient.UIComponent_PopupManager
// 0x0018 (0x0130 - 0x0118)
class UUIComponent_PopupManager : public UUIComponent
{
public:
	TArray<struct FSceneData>                          m_PopupStack;                                             // 0x0118(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                m_nCloseCurrentPopupHandle;                               // 0x0128(0x0004)
	unsigned long                                      m_bAllowPopups : 1;                                       // 0x012C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PopupManager");
		return ptr;
	}

};


// Class TgClient.UIComponentPool
// 0x0020 (0x0138 - 0x0118)
class UUIComponentPool : public UUIComponent
{
public:
	TArray<class UUIComponent*>                        m_ActivePooledItems;                                      // 0x0118(0x0010) (NeedCtorLink)
	TArray<class UUIComponent*>                        m_InactivePooledItems;                                    // 0x0128(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponentPool");
		return ptr;
	}

};


// Class TgClient.UIInteractable_Button_GamepadPrompt
// 0x0014 (0x012C - 0x0118)
class UUIInteractable_Button_GamepadPrompt : public UUIComponent
{
public:
	class UUIInteractable_Button*                      m_pButton;                                                // 0x0118(0x0008)
	class UGFxObject*                                  m_mcPrompt;                                               // 0x0120(0x0008)
	int                                                m_nOptionCBHandle;                                        // 0x0128(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIInteractable_Button_GamepadPrompt");
		return ptr;
	}

};


// Class TgClient.UIItemLarge
// 0x0028 (0x0088 - 0x0060)
class UUIItemLarge : public UObject
{
public:
	class UGFxObject*                                  m_ItemLarge;                                              // 0x0060(0x0008)
	class UGFxObject*                                  m_mcItemOwnedText;                                        // 0x0068(0x0008)
	class UGFxObject*                                  m_mcItemRentedText;                                       // 0x0070(0x0008)
	class UGFxObject*                                  m_mcItemRentedTextLabel;                                  // 0x0078(0x0008)
	class UGFxObject*                                  m_mcItemRentedTextTime;                                   // 0x0080(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIItemLarge");
		return ptr;
	}

};


// Class TgClient.UIComponent_ArcadeRankedProgress
// 0x0020 (0x0140 - 0x0120)
class UUIComponent_ArcadeRankedProgress : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcQueueName;                                            // 0x0120(0x0008)
	class UGFxObject*                                  m_mcRatingChange;                                         // 0x0128(0x0008)
	class UGFxObject*                                  m_mcRatingImproved;                                       // 0x0130(0x0008)
	class UUIComponent_RatingInteractable*             m_pRating;                                                // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ArcadeRankedProgress");
		return ptr;
	}

};


// Class TgClient.UIComponent_BattlePassChallenge
// 0x0040 (0x0160 - 0x0120)
class UUIComponent_BattlePassChallenge : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcLockChallenge;                                        // 0x0120(0x0008)
	class UGFxObject*                                  m_mcLockReward;                                           // 0x0128(0x0008)
	class UGFxObject*                                  m_mcTitleTF0;                                             // 0x0130(0x0008)
	class UGFxObject*                                  m_mcTitleTF1;                                             // 0x0138(0x0008)
	class UGFxObject*                                  m_mcLockedTF;                                             // 0x0140(0x0008)
	class UGFxObject*                                  m_mcRewardTF0;                                            // 0x0148(0x0008)
	class UGFxObject*                                  m_mcRewardTF1;                                            // 0x0150(0x0008)
	class UUIComponent_List*                           m_pGoalList;                                              // 0x0158(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_BattlePassChallenge");
		return ptr;
	}

};


// Class TgClient.UIComponent_ButtonDisplay
// 0x0000 (0x0120 - 0x0120)
class UUIComponent_ButtonDisplay : public UUIComponent_Display
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ButtonDisplay");
		return ptr;
	}

};


// Class TgClient.UIComponent_Card_Upgradable
// 0x0064 (0x0184 - 0x0120)
class UUIComponent_Card_Upgradable : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcUpgradeText;                                          // 0x0120(0x0008)
	class UGFxObject*                                  m_mcStarburstA;                                           // 0x0128(0x0008)
	class UGFxObject*                                  m_mcStarburstB;                                           // 0x0130(0x0008)
	class UGFxObject*                                  m_mcGlowA;                                                // 0x0138(0x0008)
	class UGFxObject*                                  m_mcGlowB;                                                // 0x0140(0x0008)
	class UGFxObject*                                  m_mcGlowC;                                                // 0x0148(0x0008)
	class UGFxObject*                                  m_mcGlowD;                                                // 0x0150(0x0008)
	class UGFxObject*                                  m_mcGlowE;                                                // 0x0158(0x0008)
	class UUIComponent_Card*                           m_pCard;                                                  // 0x0160(0x0008)
	int                                                m_nUpgradeQuantity;                                       // 0x0168(0x0004)
	int                                                m_nUpgradeTickHandle;                                     // 0x016C(0x0004)
	float                                              m_fUpgradeTimer;                                          // 0x0170(0x0004)
	class UAkBaseSoundObject*                          m_akCardUpgrade;                                          // 0x0174(0x0008)
	class UAkBaseSoundObject*                          m_akCardLevelUp;                                          // 0x017C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Card_Upgradable");
		return ptr;
	}

};


// Class TgClient.UIComponent_CenteredHeaderTab
// 0x0030 (0x0150 - 0x0120)
class UUIComponent_CenteredHeaderTab : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcSelectedTF;                                           // 0x0120(0x0008)
	class UGFxObject*                                  m_mcSelectedFrame;                                        // 0x0128(0x0008)
	class UGFxObject*                                  m_mcHighlightTF;                                          // 0x0130(0x0008)
	class UGFxObject*                                  m_mcShadowTF;                                             // 0x0138(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0140(0x0008)
	class UUIComponent_CTA*                            m_pCTA;                                                   // 0x0148(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_CenteredHeaderTab");
		return ptr;
	}

};


// Class TgClient.UIComponent_ChallengeGoal
// 0x0020 (0x0140 - 0x0120)
class UUIComponent_ChallengeGoal : public UUIComponent_Display
{
public:
	class UUIComponent_ProgressBarHorizontal*          m_pProgress;                                              // 0x0120(0x0008)
	class UGFxObject*                                  m_mcTexture;                                              // 0x0128(0x0008)
	class UGFxObject*                                  m_mcTF0;                                                  // 0x0130(0x0008)
	class UGFxObject*                                  m_mcTF1;                                                  // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ChallengeGoal");
		return ptr;
	}

};


// Class TgClient.UIComponent_ChampionRankRow
// 0x0048 (0x0168 - 0x0120)
class UUIComponent_ChampionRankRow : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcName;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcType;                                                 // 0x0128(0x0008)
	class UGFxObject*                                  m_mcWins;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_mcLosses;                                               // 0x0138(0x0008)
	class UGFxObject*                                  m_mcRank;                                                 // 0x0140(0x0008)
	class UGFxObject*                                  m_mcChampionIcon;                                         // 0x0148(0x0008)
	class UGFxObject*                                  m_mcMasteryTitle;                                         // 0x0150(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_MasteryProgress;                                        // 0x0158(0x0008)
	class UUIComponent_Interactable*                   m_pDetailsButton;                                         // 0x0160(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ChampionRankRow");
		return ptr;
	}

};


// Class TgClient.UIComponent_ChampionSimple
// 0x0018 (0x0138 - 0x0120)
class UUIComponent_ChampionSimple : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcText;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcChampionIconWrapper;                                  // 0x0128(0x0008)
	class UGFxObject*                                  m_mcIconImage;                                            // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ChampionSimple");
		return ptr;
	}

};


// Class TgClient.UIComponent_ClassSelectEntry
// 0x0020 (0x0140 - 0x0120)
class UUIComponent_ClassSelectEntry : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x0128(0x0008)
	class UGFxObject*                                  m_mcLevel;                                                // 0x0130(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_pProgress;                                              // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ClassSelectEntry");
		return ptr;
	}

};


// Class TgClient.UIComponent_CollectToUnlock
// 0x0020 (0x0140 - 0x0120)
class UUIComponent_CollectToUnlock : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcContainter;                                           // 0x0120(0x0008)
	class UGFxObject*                                  m_mcTF0;                                                  // 0x0128(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_mcTF1;                                                  // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_CollectToUnlock");
		return ptr;
	}

};


// Class TgClient.UIComponent_ContextMenuEntry
// 0x0008 (0x0128 - 0x0120)
class UUIComponent_ContextMenuEntry : public UUIComponent_Display
{
public:
	class UUIComponent_Interactable*                   m_pFrameButton;                                           // 0x0120(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ContextMenuEntry");
		return ptr;
	}

};


// Class TgClient.UIComponent_CustomGame
// 0x0058 (0x0178 - 0x0120)
class UUIComponent_CustomGame : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcHighlight;                                            // 0x0120(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0128(0x0008)
	class UGFxObject*                                  m_mcLock;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x0138(0x0008)
	class UGFxObject*                                  m_mcOwner;                                                // 0x0140(0x0008)
	class UGFxObject*                                  m_mcOwnerTF;                                              // 0x0148(0x0008)
	class UGFxObject*                                  m_mcQueueType;                                            // 0x0150(0x0008)
	class UGFxObject*                                  m_mcQueueTypeTF;                                          // 0x0158(0x0008)
	class UGFxObject*                                  m_mcPlayerCount;                                          // 0x0160(0x0008)
	class UGFxObject*                                  m_mcPlayerCountTF;                                        // 0x0168(0x0008)
	class UGFxObject*                                  m_mcErrorTF;                                              // 0x0170(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_CustomGame");
		return ptr;
	}

};


// Class TgClient.UIComponent_CustomPlayer
// 0x0028 (0x0148 - 0x0120)
class UUIComponent_CustomPlayer : public UUIComponent_Display
{
public:
	class UUIComponent_CrossPlayIcon*                  m_pCrossplayIcon;                                         // 0x0120(0x0008)
	class UUIComponent_Avatar*                         m_pPlayerAvatar;                                          // 0x0128(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0138(0x0008)
	class UGFxObject*                                  m_mcTaskforce;                                            // 0x0140(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_CustomPlayer");
		return ptr;
	}

};


// Class TgClient.UIComponent_DeviceDetailsPerk
// 0x0018 (0x0138 - 0x0120)
class UUIComponent_DeviceDetailsPerk : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTF;                                                   // 0x0120(0x0008)
	class UGFxObject*                                  m_mcClassIcon;                                            // 0x0128(0x0008)
	class UGFxObject*                                  m_mcElementIcon;                                          // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_DeviceDetailsPerk");
		return ptr;
	}

};


// Class TgClient.UIComponent_DeviceDetailsStat
// 0x0010 (0x0130 - 0x0120)
class UUIComponent_DeviceDetailsStat : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTF;                                                   // 0x0120(0x0008)
	class UGFxObject*                                  m_mcBar;                                                  // 0x0128(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_DeviceDetailsStat");
		return ptr;
	}

};


// Class TgClient.UIComponent_Dropdown
// 0x0058 (0x0178 - 0x0120)
class UUIComponent_Dropdown : public UUIComponent_Display
{
public:
	class UUIComponent_GamepadKey*                     m_pGamepadKey;                                            // 0x0120(0x0008)
	class UUIComponent_List*                           m_pList;                                                  // 0x0128(0x0008)
	class UUIComponent_Interactable*                   m_pBlocker;                                               // 0x0130(0x0008)
	struct FUICListEntry                               m_Button;                                                 // 0x0138(0x0028)
	class UInputAction*                                m_pToggleListVisible;                                     // 0x0160(0x0008)
	class UInputAction*                                m_pBack;                                                  // 0x0168(0x0008)
	class UInputAction*                                m_pAny;                                                   // 0x0170(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Dropdown");
		return ptr;
	}

};


// Class TgClient.UIComponent_EsportsMatchupEntry
// 0x005C (0x017C - 0x0120)
class UUIComponent_EsportsMatchupEntry : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTitle;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcTeam[0x2];                                            // 0x0128(0x0008)
	class UGFxObject*                                  m_mcTeamName[0x2];                                        // 0x0138(0x0008)
	class UGFxObject*                                  m_mcTeamCheck[0x2];                                       // 0x0148(0x0008)
	class UGFxObject*                                  m_mcTeamScore[0x2];                                       // 0x0158(0x0008)
	class UGFxObject*                                  m_mcAvailable;                                            // 0x0168(0x0008)
	class UUIComponent_Currency*                       m_pWinnings;                                              // 0x0170(0x0008)
	unsigned long                                      m_bShowSpoilers : 1;                                      // 0x0178(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_EsportsMatchupEntry");
		return ptr;
	}

};


// Class TgClient.UIComponent_EsportsTeam
// 0x0018 (0x0138 - 0x0120)
class UUIComponent_EsportsTeam : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcName;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcRecord;                                               // 0x0128(0x0008)
	class UGFxObject*                                  m_mcTexture;                                              // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_EsportsTeam");
		return ptr;
	}

};


// Class TgClient.UIComponent_FWOTDEntry
// 0x004C (0x016C - 0x0120)
class UUIComponent_FWOTDEntry : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTF0;                                                  // 0x0120(0x0008)
	class UGFxObject*                                  m_mcTF1;                                                  // 0x0128(0x0008)
	class UGFxObject*                                  m_mcFWOTDIcon;                                            // 0x0130(0x0008)
	class UGFxObject*                                  m_mcCheckmark;                                            // 0x0138(0x0008)
	class UGFxObject*                                  m_mcChestIcon;                                            // 0x0140(0x0008)
	class UGFxObject*                                  m_mcChestIconTF;                                          // 0x0148(0x0008)
	class UGFxObject*                                  m_mcCompleted;                                            // 0x0150(0x0008)
	class UUIComponent_Interactable*                   m_pButton;                                                // 0x0158(0x0008)
	struct Fdword                                      m_dwBotId;                                                // 0x0160(0x0004)
	struct Fdword                                      m_dwChestId;                                              // 0x0164(0x0004)
	unsigned long                                      m_bHasUnopenedChest : 1;                                  // 0x0168(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_FWOTDEntry");
		return ptr;
	}

};


// Class TgClient.UIComponent_GamepadKey
// 0x0001 (0x0121 - 0x0120)
class UUIComponent_GamepadKey : public UUIComponent_Display
{
public:
	TEnumAsByte<EGamepadKeys>                          m_eGamepadKey;                                            // 0x0120(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_GamepadKey");
		return ptr;
	}

};


// Class TgClient.UIComponent_GoalReward
// 0x0048 (0x0168 - 0x0120)
class UUIComponent_GoalReward : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTitle;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcItemName;                                             // 0x0128(0x0008)
	class UGFxObject*                                  m_mcGoal;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_mcOwned;                                                // 0x0138(0x0008)
	class UGFxObject*                                  m_mcLock;                                                 // 0x0140(0x0008)
	class UGFxObject*                                  m_mcIconRarity;                                           // 0x0148(0x0008)
	class UGFxObject*                                  m_mcIconIcon;                                             // 0x0150(0x0008)
	class UGFxObject*                                  m_mcIconChestIcon;                                        // 0x0158(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_Progress;                                               // 0x0160(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_GoalReward");
		return ptr;
	}

};


// Class TgClient.UIComponent_HeaderTab
// 0x0010 (0x0130 - 0x0120)
class UUIComponent_HeaderTab : public UUIComponent_Display
{
public:
	class UUIComponent_CTA*                            m_pCTA;                                                   // 0x0120(0x0008)
	class UGFxObject*                                  m_mcTwitchCTA;                                            // 0x0128(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_HeaderTab");
		return ptr;
	}

};


// Class TgClient.UIComponent_IconTF
// 0x0008 (0x0128 - 0x0120)
class UUIComponent_IconTF : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0120(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_IconTF");
		return ptr;
	}

};


// Class TgClient.UIComponent_ItemIcon
// 0x0020 (0x0140 - 0x0120)
class UUIComponent_ItemIcon : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcRarityText;                                           // 0x0120(0x0008)
	class UGFxObject*                                  m_mcRarity;                                               // 0x0128(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_mcChestIcon;                                            // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemIcon");
		return ptr;
	}

};


// Class TgClient.UIComponent_ItemMini
// 0x000C (0x012C - 0x0120)
class UUIComponent_ItemMini : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0120(0x0008)
	int                                                m_nLevelOverride;                                         // 0x0128(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ItemMini");
		return ptr;
	}

};


// Class TgClient.UIComponent_LeaderboardPlayer
// 0x0058 (0x0178 - 0x0120)
class UUIComponent_LeaderboardPlayer : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcName;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0128(0x0008)
	class UGFxObject*                                  m_mcPosition;                                             // 0x0130(0x0008)
	class UGFxObject*                                  m_mcWins;                                                 // 0x0138(0x0008)
	class UGFxObject*                                  m_mcLosses;                                               // 0x0140(0x0008)
	class UGFxObject*                                  m_mcScore;                                                // 0x0148(0x0008)
	class UGFxObject*                                  m_mcRegion;                                               // 0x0150(0x0008)
	class UGFxObject*                                  m_mcChampion;                                             // 0x0158(0x0008)
	class UGFxObject*                                  m_mcChampionIcon;                                         // 0x0160(0x0008)
	class UGFxObject*                                  m_mcChampionFrame;                                        // 0x0168(0x0008)
	class UUIComponent_Interactable*                   m_FrameButton;                                            // 0x0170(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_LeaderboardPlayer");
		return ptr;
	}

};


// Class TgClient.UIComponent_LeagueTierEntry
// 0x0028 (0x0148 - 0x0120)
class UUIComponent_LeagueTierEntry : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTitle;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcSubtitle;                                             // 0x0128(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0130(0x0008)
	TArray<class UGFxObject*>                          m_mcLegendIcons;                                          // 0x0138(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_LeagueTierEntry");
		return ptr;
	}

};


// Class TgClient.UIComponent_LevelProgress
// 0x0030 (0x0150 - 0x0120)
class UUIComponent_LevelProgress : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcLevel;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcNextLevelXP;                                          // 0x0128(0x0008)
	class UGFxObject*                                  m_mcTimePlayed;                                           // 0x0130(0x0008)
	class UGFxObject*                                  m_mcWins;                                                 // 0x0138(0x0008)
	class UGFxObject*                                  m_mcTotalXP;                                              // 0x0140(0x0008)
	class UGFxObject*                                  m_mcProgress;                                             // 0x0148(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_LevelProgress");
		return ptr;
	}

};


// Class TgClient.UIComponent_List
// 0x00B8 (0x01D8 - 0x0120)
class UUIComponent_List : public UUIComponent_Display
{
public:
	struct FSmoothScrollingAxis                        m_ScrollAxis[0x2];                                        // 0x0120(0x0020)
	int                                                m_nSelectedDataIndex;                                     // 0x0160(0x0004)
	TArray<struct FUICListEntry>                       m_ListItems;                                              // 0x0164(0x0010) (NeedCtorLink)
	TArray<class UUIComponent_Display*>                m_ListBufferItems;                                        // 0x0174(0x0010) (NeedCtorLink)
	TArray<class UUIData*>                             m_ListData;                                               // 0x0184(0x0010) (NeedCtorLink)
	class UInputGroup*                                 m_grList;                                                 // 0x0194(0x0008)
	class UUIComponent_ScrollBarDisplay*               m_pScrollbarV;                                            // 0x019C(0x0008)
	class UUIComponent_ScrollBarDisplay*               m_pScrollbarH;                                            // 0x01A4(0x0008)
	struct Fdword                                      m_dwItemSize;                                             // 0x01AC(0x0004)
	struct Fdword                                      m_dwDataSize;                                             // 0x01B0(0x0004)
	unsigned long                                      m_bExtendVertically : 1;                                  // 0x01B4(0x0004)
	unsigned long                                      m_bAutoFillNavGroup : 1;                                  // 0x01B4(0x0004)
	unsigned long                                      m_bFocusSelectedItem : 1;                                 // 0x01B4(0x0004)
	unsigned long                                      m_bAutoSelectQueued : 1;                                  // 0x01B4(0x0004)
	unsigned long                                      m_bInvertXAxis : 1;                                       // 0x01B4(0x0004)
	unsigned long                                      m_bInvertYAxis : 1;                                       // 0x01B4(0x0004)
	unsigned long                                      m_bNavigatingByKeyboard : 1;                              // 0x01B4(0x0004)
	int                                                m_nScrollX;                                               // 0x01B8(0x0004)
	int                                                m_nScrollY;                                               // 0x01BC(0x0004)
	int                                                m_nItemOffsetX;                                           // 0x01C0(0x0004)
	int                                                m_nItemOffsetY;                                           // 0x01C4(0x0004)
	int                                                m_nMarginX;                                               // 0x01C8(0x0004)
	int                                                m_nMarginY;                                               // 0x01CC(0x0004)
	float                                              m_fAutoSelectDelay;                                       // 0x01D0(0x0004)
	float                                              m_fAutoSelectTimer;                                       // 0x01D4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_List");
		return ptr;
	}

};


// Class TgClient.UIComponent_CenteredHeaderTabs
// 0x002C (0x0204 - 0x01D8)
class UUIComponent_CenteredHeaderTabs : public UUIComponent_List
{
public:
	class UUIComponent_GamepadKey*                     m_pBumpers[0x2];                                          // 0x01D8(0x0008)
	class UInputAction*                                m_NavLeft;                                                // 0x01E8(0x0008)
	class UInputAction*                                m_NavRight;                                               // 0x01F0(0x0008)
	float                                              m_fButtonSpace;                                           // 0x01F8(0x0004)
	float                                              m_fBumperSpaceLeft;                                       // 0x01FC(0x0004)
	float                                              m_fBumperSpaceRight;                                      // 0x0200(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_CenteredHeaderTabs");
		return ptr;
	}

};


// Class TgClient.UIComponent_HeaderTabs
// 0x002C (0x0204 - 0x01D8)
class UUIComponent_HeaderTabs : public UUIComponent_List
{
public:
	class UUIComponent_GamepadKey*                     m_pBumpers[0x2];                                          // 0x01D8(0x0008)
	class UInputAction*                                m_NavLeft;                                                // 0x01E8(0x0008)
	class UInputAction*                                m_NavRight;                                               // 0x01F0(0x0008)
	float                                              m_fButtonSpace;                                           // 0x01F8(0x0004)
	float                                              m_fBumperSpaceLeft;                                       // 0x01FC(0x0004)
	float                                              m_fBumperSpaceRight;                                      // 0x0200(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_HeaderTabs");
		return ptr;
	}

};


// Class TgClient.UIComponent_LobbyEquipSlotItem
// 0x0024 (0x0144 - 0x0120)
class UUIComponent_LobbyEquipSlotItem : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTypeIcon;                                             // 0x0120(0x0008)
	class UGFxObject*                                  m_mcRarity;                                               // 0x0128(0x0008)
	class UGFxObject*                                  m_mcAudio;                                                // 0x0130(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0138(0x0008)
	unsigned long                                      m_bHovered : 1;                                           // 0x0140(0x0004)
	unsigned long                                      m_bSelected : 1;                                          // 0x0140(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_LobbyEquipSlotItem");
		return ptr;
	}

};


// Class TgClient.UIComponent_LobbySlotItem
// 0x009C (0x01BC - 0x0120)
class UUIComponent_LobbySlotItem : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcText;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcLock;                                                 // 0x0128(0x0008)
	class UGFxObject*                                  m_mcRarity;                                               // 0x0130(0x0008)
	class UGFxObject*                                  m_mcEquipped;                                             // 0x0138(0x0008)
	class UGFxObject*                                  m_mcExclusive;                                            // 0x0140(0x0008)
	class UGFxObject*                                  m_mcTypeIcon;                                             // 0x0148(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0150(0x0008)
	class UGFxObject*                                  m_mcAudio;                                                // 0x0158(0x0008)
	class UGFxObject*                                  m_mcRented;                                               // 0x0160(0x0008)
	class UGFxObject*                                  m_mcRentalDuration;                                       // 0x0168(0x0008)
	class UGFxObject*                                  m_mcRentalDurationText;                                   // 0x0170(0x0008)
	class UGFxObject*                                  m_mcPrice;                                                // 0x0178(0x0008)
	class UGFxObject*                                  m_mcPriceA;                                               // 0x0180(0x0008)
	class UGFxObject*                                  m_mcPriceB;                                               // 0x0188(0x0008)
	class UGFxObject*                                  m_mcPrevPrice;                                            // 0x0190(0x0008)
	class UGFxObject*                                  m_mcPrevPriceA;                                           // 0x0198(0x0008)
	class UGFxObject*                                  m_mcPrevPriceAStrike;                                     // 0x01A0(0x0008)
	class UGFxObject*                                  m_mcPrevPriceB;                                           // 0x01A8(0x0008)
	class UGFxObject*                                  m_mcPrevPriceBStrike;                                     // 0x01B0(0x0008)
	unsigned long                                      m_bHovered : 1;                                           // 0x01B8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_LobbySlotItem");
		return ptr;
	}

};


// Class TgClient.UIComponent_MapTeamMarker
// 0x0020 (0x0140 - 0x0120)
class UUIComponent_MapTeamMarker : public UUIComponent_Display
{
public:
	float                                              m_fSize;                                                  // 0x0120(0x0004)
	float                                              m_fRadius;                                                // 0x0124(0x0004)
	float                                              m_fOffsetX;                                               // 0x0128(0x0004)
	float                                              m_fOffsetY;                                               // 0x012C(0x0004)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0130(0x0008)
	class UGFxObject*                                  m_mcPulse;                                                // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_MapTeamMarker");
		return ptr;
	}

};


// Class TgClient.UIComponent_MatchInvitePlayerEntry
// 0x0010 (0x0130 - 0x0120)
class UUIComponent_MatchInvitePlayerEntry : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcAccepted;                                             // 0x0120(0x0008)
	class UGFxObject*                                  m_mcFailed;                                               // 0x0128(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_MatchInvitePlayerEntry");
		return ptr;
	}

};


// Class TgClient.UIComponent_MatchPlayerEntry
// 0x0174 (0x0294 - 0x0120)
class UUIComponent_MatchPlayerEntry : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcEndCap;                                               // 0x0120(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0128(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x0130(0x0008)
	class UUIComponent_PlayerName*                     m_pPlayerName;                                            // 0x0138(0x0008)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0140(0x0008)
	class UGFxObject*                                  m_mcBuild;                                                // 0x0148(0x0008)
	class UGFxObject*                                  m_mcBuild_Stat[0x2];                                      // 0x0150(0x0008)
	class UGFxObject*                                  m_mcBuild_Talent;                                         // 0x0160(0x0008)
	class UGFxObject*                                  m_mcBuild_TalentIcon;                                     // 0x0168(0x0008)
	class UGFxObject*                                  m_mcBooster0;                                             // 0x0170(0x0008)
	class UGFxObject*                                  m_mcBooster0Tex;                                          // 0x0178(0x0008)
	class UGFxObject*                                  m_mcBooster1;                                             // 0x0180(0x0008)
	class UGFxObject*                                  m_mcBooster1Tex;                                          // 0x0188(0x0008)
	class UUIComponent_ItemMini*                       m_Cards[0x5];                                             // 0x0190(0x0008)
	class UUIComponent_Interactable*                   m_CardButtons[0x5];                                       // 0x01B8(0x0008)
	class UUIComponent_ItemMini*                       m_Items[0x4];                                             // 0x01E0(0x0008)
	class UUIComponent_Interactable*                   m_ItemButtons[0x4];                                       // 0x0200(0x0008)
	class UGFxObject*                                  m_mcStatsDetails;                                         // 0x0220(0x0008)
	class UGFxObject*                                  m_mcStatsDetails_Stat[0x7];                               // 0x0228(0x0008)
	class UUIComponent_Interactable*                   m_TalentButton;                                           // 0x0260(0x0008)
	class UUIComponent_Interactable*                   m_FrameButton;                                            // 0x0268(0x0008)
	class UUIComponent_Interactable*                   m_ReportButton;                                           // 0x0270(0x0008)
	class UUIComponent_Interactable*                   m_ImportButton;                                           // 0x0278(0x0008)
	class UUIComponent_Interactable*                   m_AddButton;                                              // 0x0280(0x0008)
	class UUIComponent_ItemTooltip*                    m_pTooltip;                                               // 0x0288(0x0008)
	unsigned long                                      m_bCanReport : 1;                                         // 0x0290(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_MatchPlayerEntry");
		return ptr;
	}

};


// Class TgClient.UIComponent_OwnershipProgress
// 0x0020 (0x0140 - 0x0120)
class UUIComponent_OwnershipProgress : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTitle;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcOwnedAmt;                                             // 0x0128(0x0008)
	class UGFxObject*                                  m_mcTotalAmt;                                             // 0x0130(0x0008)
	class UGFxObject*                                  m_mcProgress;                                             // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_OwnershipProgress");
		return ptr;
	}

};


// Class TgClient.UIComponent_PartyLobbyPlayer
// 0x00DC (0x01FC - 0x0120)
class UUIComponent_PartyLobbyPlayer : public UUIComponent_Display
{
public:
	int                                                m_nDisplaySlot;                                           // 0x0120(0x0004)
	int                                                m_nTickCallbackHandle;                                    // 0x0124(0x0004)
	float                                              m_fDeclinedInviteTimer;                                   // 0x0128(0x0004)
	unsigned long                                      m_bPlayerReady : 1;                                       // 0x012C(0x0004)
	unsigned long                                      m_bPromptsShown : 1;                                      // 0x012C(0x0004)
	unsigned long                                      m_bPreviewingEmoteWheel : 1;                              // 0x012C(0x0004)
	unsigned long                                      m_bOldPlayerMutedState : 1;                               // 0x012C(0x0004)
	unsigned long                                      m_bShouldRefreshPreview : 1;                              // 0x012C(0x0004)
	TEnumAsByte<EUIPARTYLOBBY_PLAYER_STATE>            m_eState;                                                 // 0x0130(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	class UUIDataItem*                                 m_pPreviewItem;                                           // 0x0134(0x0008)
	class UUIDataItem*                                 m_pOverrideSkin;                                          // 0x013C(0x0008)
	class UGFxObject*                                  m_mcPlayer;                                               // 0x0144(0x0008)
	class UGFxObject*                                  m_mcPlayerName;                                           // 0x014C(0x0008)
	class UGFxObject*                                  m_mcPlayerTitle;                                          // 0x0154(0x0008)
	class UGFxObject*                                  m_mcPlayerStatus;                                         // 0x015C(0x0008)
	class UGFxObject*                                  m_mcPlayerPrompt[0x2];                                    // 0x0164(0x0008)
	class UGFxObject*                                  m_mcPlayerPromptKey[0x2];                                 // 0x0174(0x0008)
	class UGFxObject*                                  m_mcPlayerPromptButton[0x2];                              // 0x0184(0x0008)
	class UGFxObject*                                  m_mcPlayerPromptText[0x2];                                // 0x0194(0x0008)
	class UGFxObject*                                  m_mcPlayerClassIcon;                                      // 0x01A4(0x0008)
	class UGFxObject*                                  m_mcPlayerStateIcon;                                      // 0x01AC(0x0008)
	class UGFxObject*                                  m_mcPlayerBackground;                                     // 0x01B4(0x0008)
	class UGFxObject*                                  m_mcPlayerTooltip;                                        // 0x01BC(0x0008)
	class UGFxObject*                                  m_mcPlayerTooltipText;                                    // 0x01C4(0x0008)
	class UGFxObject*                                  m_mcPlayerTooltipPrompt;                                  // 0x01CC(0x0008)
	class UGFxObject*                                  m_mcPlayerSpeakIcon;                                      // 0x01D4(0x0008)
	class UUIComponent_Avatar*                         m_pPlayerAvatar;                                          // 0x01DC(0x0008)
	class UUIComponent_Interactable*                   m_pAddButton;                                             // 0x01E4(0x0008)
	class UUIComponent_Interactable*                   m_pFrameButton;                                           // 0x01EC(0x0008)
	class UUIComponent_CrossPlayIcon*                  m_pCrossplayIcon;                                         // 0x01F4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PartyLobbyPlayer");
		return ptr;
	}

};


// Class TgClient.UIComponent_PlayerName
// 0x003C (0x015C - 0x0120)
class UUIComponent_PlayerName : public UUIComponent_Display
{
public:
	TEnumAsByte<EUIALIGNINGTYPE>                       m_eAlignment;                                             // 0x0120(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	class UGFxObject*                                  m_mcNameStandard;                                         // 0x0124(0x0008)
	class UGFxObject*                                  m_mcNameVIP;                                              // 0x012C(0x0008)
	class UGFxObject*                                  m_mcVIPIcon;                                              // 0x0134(0x0008)
	TArray<class UGFxObject*>                          m_mcNameVIPSparkles;                                      // 0x013C(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UGFxObject*>                          m_mcNameVIPStrokes;                                       // 0x014C(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PlayerName");
		return ptr;
	}

};


// Class TgClient.UIComponent_PlayPanel
// 0x00E0 (0x0200 - 0x0120)
class UUIComponent_PlayPanel : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcFade;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0128(0x0008)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0130(0x0008)
	class UGFxObject*                                  m_mcSubtitle;                                             // 0x0138(0x0008)
	class UGFxObject*                                  m_mcDelayText;                                            // 0x0140(0x0008)
	class UGFxObject*                                  m_mcModeCTA;                                              // 0x0148(0x0008)
	class UGFxObject*                                  m_mcFWOTDIcon;                                            // 0x0150(0x0008)
	class UGFxObject*                                  m_mcQuestCTA;                                             // 0x0158(0x0008)
	class UGFxObject*                                  m_mcCheckbox;                                             // 0x0160(0x0008)
	class UGFxObject*                                  m_mcModeTypeTF;                                           // 0x0168(0x0008)
	class UGFxObject*                                  m_mcFWOTDText;                                            // 0x0170(0x0008)
	class UGFxObject*                                  m_mcAchievements;                                         // 0x0178(0x0008)
	class UGFxObject*                                  m_mcLock;                                                 // 0x0180(0x0008)
	class UGFxObject*                                  m_mcLockNew;                                              // 0x0188(0x0008)
	class UGFxObject*                                  m_mcLockInfo;                                             // 0x0190(0x0008)
	class UGFxObject*                                  m_mcLockInfoTF;                                           // 0x0198(0x0008)
	class UGFxObject*                                  m_mcProgressMask;                                         // 0x01A0(0x0008)
	class UGFxObject*                                  m_mcInfoButtonIcon;                                       // 0x01A8(0x0008)
	class UGFxObject*                                  m_mcRankedProgress;                                       // 0x01B0(0x0008)
	class UGFxObject*                                  m_mcRankedProgressRankTF;                                 // 0x01B8(0x0008)
	class UGFxObject*                                  m_mcRankedProgressRankIcon;                               // 0x01C0(0x0008)
	class UGFxObject*                                  m_mcRankedProgressProgressTF;                             // 0x01C8(0x0008)
	class UUIComponent_Interactable*                   m_pPanelButton;                                           // 0x01D0(0x0008)
	class UUIComponent_Interactable*                   m_pInfoButton;                                            // 0x01D8(0x0008)
	class UUIComponent_GamepadKey*                     m_pGamepadKey;                                            // 0x01E0(0x0008)
	class UUIComponent_CountdownText*                  m_pQueueOpensCountdown;                                   // 0x01E8(0x0008)
	class UUIComponent_RatingInteractable*             m_pRating;                                                // 0x01F0(0x0008)
	class UUIComponent_RatingTooltip*                  m_pRatingTooltip;                                         // 0x01F8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PlayPanel");
		return ptr;
	}

};


// Class TgClient.UIComponent_PortraitBorder
// 0x0018 (0x0138 - 0x0120)
class UUIComponent_PortraitBorder : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcFrame;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcLock;                                                 // 0x0128(0x0008)
	class UGFxObject*                                  m_mcEquippedCheckmark;                                    // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_PortraitBorder");
		return ptr;
	}

};


// Class TgClient.UIComponent_ProgressBarHorizontal
// 0x001C (0x013C - 0x0120)
class UUIComponent_ProgressBarHorizontal : public UUIComponent_Display
{
public:
	unsigned long                                      m_bHideFillWhenEmpty : 1;                                 // 0x0120(0x0004)
	unsigned long                                      m_bHideTipWhenEmpty : 1;                                  // 0x0120(0x0004)
	class UGFxObject*                                  m_mcBackground;                                           // 0x0124(0x0008)
	class UGFxObject*                                  m_mcFill;                                                 // 0x012C(0x0008)
	class UGFxObject*                                  m_mcTip;                                                  // 0x0134(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ProgressBarHorizontal");
		return ptr;
	}


	bool STATIC_IsValid();
};


// Class TgClient.UIComponent_DailyQuest
// 0x0010 (0x014C - 0x013C)
class UUIComponent_DailyQuest : public UUIComponent_ProgressBarHorizontal
{
public:
	class UGFxObject*                                  m_mcTF;                                                   // 0x013C(0x0008)
	class UGFxObject*                                  m_mcComplete;                                             // 0x0144(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_DailyQuest");
		return ptr;
	}

};


// Class TgClient.UIComponent_Quest
// 0x011C (0x023C - 0x0120)
class UUIComponent_Quest : public UUIComponent_Display
{
public:
	class UUIComponent_Interactable*                   m_pQuestPanelButton;                                      // 0x0120(0x0008)
	class UUIComponent_Interactable*                   m_pQuestDiscardButton;                                    // 0x0128(0x0008)
	class UGFxObject*                                  m_mcProgressFrame;                                        // 0x0130(0x0008)
	class UGFxObject*                                  m_mcQuestReward;                                          // 0x0138(0x0008)
	class UGFxObject*                                  m_mcQuestProgressBar;                                     // 0x0140(0x0008)
	class UGFxObject*                                  m_mcQuestProgressMask;                                    // 0x0148(0x0008)
	class UGFxObject*                                  m_mcQuestTitle;                                           // 0x0150(0x0008)
	class UGFxObject*                                  m_mcQuestType;                                            // 0x0158(0x0008)
	class UGFxObject*                                  m_mcQuestIconRendered;                                    // 0x0160(0x0008)
	class UGFxObject*                                  m_mcQuestIcon;                                            // 0x0168(0x0008)
	class UGFxObject*                                  m_mcFWOTDIcon;                                            // 0x0170(0x0008)
	class UGFxObject*                                  m_mcGlow;                                                 // 0x0178(0x0008)
	class UGFxObject*                                  m_mcNew;                                                  // 0x0180(0x0008)
	class UGFxObject*                                  m_mcGoalSequences[0x7];                                   // 0x0188(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_GoalSequenceBar;                                        // 0x01C0(0x0008)
	class UGFxObject*                                  m_mcQuestChestIcon;                                       // 0x01C8(0x0008)
	class UGFxObject*                                  m_mcRewardItem;                                           // 0x01D0(0x0008)
	class UGFxObject*                                  m_mcRewardItemRarity;                                     // 0x01D8(0x0008)
	class UGFxObject*                                  m_mcRewardItemIcon;                                       // 0x01E0(0x0008)
	class UGFxObject*                                  m_mcRewardItemImageStack;                                 // 0x01E8(0x0008)
	class UGFxObject*                                  m_mcRewardItemTexture;                                    // 0x01F0(0x0008)
	class UGFxObject*                                  m_mcRewardItemName;                                       // 0x01F8(0x0008)
	class UGFxObject*                                  m_mcRewardSubtitle;                                       // 0x0200(0x0008)
	class UGFxObject*                                  m_mcQuestProgressText;                                    // 0x0208(0x0008)
	class UGFxObject*                                  m_mcQuestDescription;                                     // 0x0210(0x0008)
	class UGFxObject*                                  m_mcQuestRewardAmount;                                    // 0x0218(0x0008)
	class UGFxObject*                                  m_mcQuestRewardCurrency1;                                 // 0x0220(0x0008)
	class UGFxObject*                                  m_mcQuestRewardAmount1;                                   // 0x0228(0x0008)
	float                                              m_fSequenceOrigX;                                         // 0x0230(0x0004)
	float                                              m_fSequenceOrigY;                                         // 0x0234(0x0004)
	float                                              m_fSequenceOrigWidth;                                     // 0x0238(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Quest");
		return ptr;
	}

};


// Class TgClient.UIComponent_RankedEOMProgress
// 0x0030 (0x0150 - 0x0120)
class UUIComponent_RankedEOMProgress : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcNetTP;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcCurrentTP;                                            // 0x0128(0x0008)
	class UGFxObject*                                  m_mcCurrentRank;                                          // 0x0130(0x0008)
	class UGFxObject*                                  m_mcRankIconPrev;                                         // 0x0138(0x0008)
	class UGFxObject*                                  m_mcRankIconNext;                                         // 0x0140(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_pProgress;                                              // 0x0148(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_RankedEOMProgress");
		return ptr;
	}

};


// Class TgClient.UIComponent_RankedProgress
// 0x0040 (0x0160 - 0x0120)
class UUIComponent_RankedProgress : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcName;                                                 // 0x0120(0x0008)
	class UGFxObject*                                  m_mcRank;                                                 // 0x0128(0x0008)
	class UGFxObject*                                  m_mcWins;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_mcLosses;                                               // 0x0138(0x0008)
	class UGFxObject*                                  m_mcTier;                                                 // 0x0140(0x0008)
	class UGFxObject*                                  m_mcTPLabel;                                              // 0x0148(0x0008)
	class UGFxObject*                                  m_mcTP;                                                   // 0x0150(0x0008)
	class UUIComponent_ProgressBarHorizontal*          m_pProgress;                                              // 0x0158(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_RankedProgress");
		return ptr;
	}

};


// Class TgClient.UIComponent_ReferralReward
// 0x0030 (0x0150 - 0x0120)
class UUIComponent_ReferralReward : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcTitle;                                                // 0x0120(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0128(0x0008)
	class UGFxObject*                                  m_mcAddition;                                             // 0x0130(0x0008)
	class UGFxObject*                                  m_mcCurrency;                                             // 0x0138(0x0008)
	class UGFxObject*                                  m_mcAmount;                                               // 0x0140(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0148(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ReferralReward");
		return ptr;
	}

};


// Class TgClient.UIComponent_RolledItem
// 0x0064 (0x0184 - 0x0120)
class UUIComponent_RolledItem : public UUIComponent_Display
{
public:
	class UUIComponent_Card_Upgradable*                m_pCard;                                                  // 0x0120(0x0008)
	class UUIComponent_Card_Upgradable*                m_pLegendaryCard;                                         // 0x0128(0x0008)
	class UUIComponent_LootItem*                       m_pItem;                                                  // 0x0130(0x0008)
	class UGFxObject*                                  m_mcItemDuplicateLabel;                                   // 0x0138(0x0008)
	class UUIComponent_LootItem*                       m_pReplacementItem;                                       // 0x0140(0x0008)
	class UUIComponent_Interactable*                   m_pFrameButton;                                           // 0x0148(0x0008)
	class UUIComponent_List*                           m_SubItems;                                               // 0x0150(0x0008)
	class UUIComponent_Interactable*                   m_pEquipButton;                                           // 0x0158(0x0008)
	class UUIComponent_String*                         m_pEquippedText;                                          // 0x0160(0x0008)
	unsigned long                                      bRollover : 1;                                            // 0x0168(0x0004)
	class UAkBaseSoundObject*                          m_akItemAnimCard;                                         // 0x016C(0x0008)
	class UAkBaseSoundObject*                          m_akItemAnimLegendaryCard;                                // 0x0174(0x0008)
	class UAkBaseSoundObject*                          m_akItemAnimCurrency;                                     // 0x017C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_RolledItem");
		return ptr;
	}

};


// Class TgClient.UIComponent_RolledSubItem
// 0x0018 (0x0138 - 0x0120)
class UUIComponent_RolledSubItem : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcDuplicate;                                            // 0x0120(0x0008)
	class UUIComponent_Currency*                       m_pReplacementCurrency;                                   // 0x0128(0x0008)
	class UUIComponent_ItemGeneric*                    m_pItem;                                                  // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_RolledSubItem");
		return ptr;
	}

};


// Class TgClient.UIComponent_ShopList
// 0x00B8 (0x01D8 - 0x0120)
class UUIComponent_ShopList : public UUIComponent_Display
{
public:
	int                                                m_nCurrentSection;                                        // 0x0120(0x0004)
	float                                              m_fScrollX;                                               // 0x0124(0x0004)
	float                                              m_fTargetScrollX;                                         // 0x0128(0x0004)
	int                                                m_nSymbolInstanceIndex;                                   // 0x012C(0x0004)
	struct FString                                     m_sContainerSymbolName;                                   // 0x0130(0x0010) (NeedCtorLink)
	struct FString                                     m_sHeaderSymbolName;                                      // 0x0140(0x0010) (NeedCtorLink)
	struct FString                                     m_sItemFeaturedSymbolName;                                // 0x0150(0x0010) (NeedCtorLink)
	struct FString                                     m_sItemMajorSymbolName;                                   // 0x0160(0x0010) (NeedCtorLink)
	struct FString                                     m_sItemMinorSymbolName;                                   // 0x0170(0x0010) (NeedCtorLink)
	struct FString                                     m_sItemDailySymbolName;                                   // 0x0180(0x0010) (NeedCtorLink)
	float                                              m_fItemFeaturedWidth;                                     // 0x0190(0x0004)
	float                                              m_fItemFeaturedHeight;                                    // 0x0194(0x0004)
	float                                              m_fItemMajorWidth;                                        // 0x0198(0x0004)
	float                                              m_fItemMajorHeight;                                       // 0x019C(0x0004)
	float                                              m_fItemMinorWidth;                                        // 0x01A0(0x0004)
	float                                              m_fItemMinorHeight;                                       // 0x01A4(0x0004)
	float                                              m_fItemDailyWidth;                                        // 0x01A8(0x0004)
	float                                              m_fItemDailyHeight;                                       // 0x01AC(0x0004)
	int                                                m_nSelectedSectionIndex;                                  // 0x01B0(0x0004)
	int                                                m_nSelectedItemIndex;                                     // 0x01B4(0x0004)
	TArray<struct FUICShopListSection>                 m_ListSections;                                           // 0x01B8(0x0010) (NeedCtorLink)
	class UUIComponent_ScrollBarDisplay*               m_pScrollbar;                                             // 0x01C8(0x0008)
	class UInputGroup*                                 m_grList;                                                 // 0x01D0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ShopList");
		return ptr;
	}

};


// Class TgClient.UIComponent_ShopListSectionHeader
// 0x0030 (0x0150 - 0x0120)
class UUIComponent_ShopListSectionHeader : public UUIComponent_Display
{
public:
	struct FString                                     m_sTimeLeft;                                              // 0x0120(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcTF;                                                   // 0x0130(0x0008)
	class UGFxObject*                                  m_mcTimeLeft;                                             // 0x0138(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0140(0x0008)
	class UUIComponent_CTA*                            m_pCTA;                                                   // 0x0148(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_ShopListSectionHeader");
		return ptr;
	}

};


// Class TgClient.UIComponent_Skill
// 0x0040 (0x0160 - 0x0120)
class UUIComponent_Skill : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcKey;                                                  // 0x0120(0x0008)
	class UGFxObject*                                  m_mcBase;                                                 // 0x0128(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0130(0x0008)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0138(0x0008)
	class UGFxObject*                                  m_mcDamage;                                               // 0x0140(0x0008)
	class UGFxObject*                                  m_mcSubtitle;                                             // 0x0148(0x0008)
	class UGFxObject*                                  m_mcCooldown;                                             // 0x0150(0x0008)
	class UGFxObject*                                  m_mcCooldownTF;                                           // 0x0158(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Skill");
		return ptr;
	}

};


// Class TgClient.UIComponent_SocialPlayer
// 0x0070 (0x0190 - 0x0120)
class UUIComponent_SocialPlayer : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcName;                                                 // 0x0120(0x0008)
	class UUIComponent_PlayerName*                     m_pName;                                                  // 0x0128(0x0008)
	class UUIComponent_CrossPlayIcon*                  m_CrossplayIcon;                                          // 0x0130(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0138(0x0008)
	class UGFxObject*                                  m_mcStatus;                                               // 0x0140(0x0008)
	class UGFxObject*                                  m_mcLevel;                                                // 0x0148(0x0008)
	class UGFxObject*                                  m_mcLevelX;                                               // 0x0150(0x0008)
	class UGFxObject*                                  m_mcRankedIndicator;                                      // 0x0158(0x0008)
	class UGFxObject*                                  m_mcRankedIcon;                                           // 0x0160(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0168(0x0008)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0170(0x0008)
	class UGFxObject*                                  m_mcAddIcon;                                              // 0x0178(0x0008)
	class UGFxObject*                                  m_mcAddFrame;                                             // 0x0180(0x0008)
	class UGFxObject*                                  m_mcAddFrameBG;                                           // 0x0188(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_SocialPlayer");
		return ptr;
	}

};


// Class TgClient.UIComponent_String
// 0x0000 (0x0120 - 0x0120)
class UUIComponent_String : public UUIComponent_Display
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_String");
		return ptr;
	}

};


// Class TgClient.UIComponent_StringTitle
// 0x0008 (0x0128 - 0x0120)
class UUIComponent_StringTitle : public UUIComponent_String
{
public:
	class UGFxObject*                                  m_mcText;                                                 // 0x0120(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_StringTitle");
		return ptr;
	}

};


// Class TgClient.UIComponent_StringWithCount
// 0x0008 (0x0128 - 0x0120)
class UUIComponent_StringWithCount : public UUIComponent_Display
{
public:
	class UGFxObject*                                  m_mcCountTf;                                              // 0x0120(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_StringWithCount");
		return ptr;
	}

};


// Class TgClient.UIComponent_Texture
// 0x0000 (0x0120 - 0x0120)
class UUIComponent_Texture : public UUIComponent_Display
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIComponent_Texture");
		return ptr;
	}

};


// Class TgClient.UIScene_UIBattlePassLevelUp
// 0x007C (0x01D0 - 0x0154)
class UUIScene_UIBattlePassLevelUp : public UUIScene
{
public:
	struct FPointer                                    VfTable_IAcquisitionHandler;                              // 0x0154(0x0008) (Const, Native, NoExport)
	int                                                m_nBPItemsShown;                                          // 0x015C(0x0004)
	TArray<class UUIData_LootTableItem*>               m_UnlockedItems;                                          // 0x0160(0x0010) (NeedCtorLink)
	class UInputGroup*                                 m_grGroup;                                                // 0x0170(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0178(0x0008)
	class UGFxObject*                                  m_mcTF0;                                                  // 0x0180(0x0008)
	class UGFxObject*                                  m_mcTF1;                                                  // 0x0188(0x0008)
	class UGFxObject*                                  m_mcRewardTF;                                             // 0x0190(0x0008)
	class UUIComponent_BattlePassRewardLevel*          m_pFreePassReward;                                        // 0x0198(0x0008)
	class UGFxObject*                                  m_mcPurchasePrompt;                                       // 0x01A0(0x0008)
	class UUIComponent_List*                           m_List;                                                   // 0x01A8(0x0008)
	class UUIComponent_Interactable*                   m_pCloseButton;                                           // 0x01B0(0x0008)
	class UUIComponent_Interactable*                   m_pUpgradeButton;                                         // 0x01B8(0x0008)
	class UUIComponent_Interactable*                   m_pEquipAllButton;                                        // 0x01C0(0x0008)
	class UGFxObject*                                  m_mcCheckmark;                                            // 0x01C8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIBattlePassLevelUp");
		return ptr;
	}

};


// Class TgClient.UIScene_UIBattlePassPurchase
// 0x0028 (0x017C - 0x0154)
class UUIScene_UIBattlePassPurchase : public UUIScene
{
public:
	class UGFxObject*                                  m_mcTitle;                                                // 0x0154(0x0008)
	class UGFxObject*                                  m_mcTimeRemaining;                                        // 0x015C(0x0008)
	class UUIComponent_List*                           m_pDLCList;                                               // 0x0164(0x0008)
	class UUIComponent_Interactable*                   m_pCloseButton;                                           // 0x016C(0x0008)
	class UInputGroup*                                 m_grMain;                                                 // 0x0174(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIBattlePassPurchase");
		return ptr;
	}

};


// Class TgClient.TgGfxScene
// 0x012C (0x0244 - 0x0118)
class UTgGfxScene : public UGFxObject
{
public:
	struct FPointer                                    VfTable_ITgCallbackInterface;                             // 0x0118(0x0008) (Const, Native, NoExport)
	class UClass*                                      m_UISceneClass;                                           // 0x0120(0x0008)
	class UUIScene*                                    m_UIScene;                                                // 0x0128(0x0008)
	TArray<TEnumAsByte<EGFXOPTION>>                    m_OptionList;                                             // 0x0130(0x0010) (NeedCtorLink)
	TArray<struct FUIDisplayData>                      m_DisplayData;                                            // 0x0140(0x0010) (NeedCtorLink)
	TArray<class UGFxObject*>                          m_Blockers;                                               // 0x0150(0x0010) (NeedCtorLink)
	TArray<struct FUIKeyCommand>                       m_KeyCommands;                                            // 0x0160(0x0010) (NeedCtorLink)
	TArray<class UGFxObject*>                          m_Prompts;                                                // 0x0170(0x0010) (NeedCtorLink)
	TEnumAsByte<EUIALIGNINGTYPE>                       m_ePromptAlignment;                                       // 0x0180(0x0001)
	TEnumAsByte<EUISCALINGTYPE>                        m_eScalingType;                                           // 0x0181(0x0001)
	TEnumAsByte<EUISNAPPINGTYPE>                       m_eSnappingType;                                          // 0x0182(0x0001)
	TEnumAsByte<EUIALIGNINGTYPE>                       m_eAligningType;                                          // 0x0183(0x0001)
	float                                              m_fPromptOffsetX;                                         // 0x0184(0x0004)
	int                                                m_nHighlight;                                             // 0x0188(0x0004)
	int                                                m_nSelectCount;                                           // 0x018C(0x0004)
	int                                                m_nBackground;                                            // 0x0190(0x0004)
	unsigned long                                      m_bBlur : 1;                                              // 0x0194(0x0004)
	unsigned long                                      m_bBlurForeground : 1;                                    // 0x0194(0x0004)
	unsigned long                                      m_bReshow : 1;                                            // 0x0194(0x0004)
	unsigned long                                      m_bHidden : 1;                                            // 0x0194(0x0004)
	unsigned long                                      m_bDisable : 1;                                           // 0x0194(0x0004)
	unsigned long                                      m_bInitData : 1;                                          // 0x0194(0x0004)
	unsigned long                                      m_bShowFade : 1;                                          // 0x0194(0x0004)
	unsigned long                                      m_bVisibleOnLoad : 1;                                     // 0x0194(0x0004)
	unsigned long                                      m_bPushContextOnLoad : 1;                                 // 0x0194(0x0004)
	unsigned long                                      m_bResetFocusOnShow : 1;                                  // 0x0194(0x0004)
	unsigned long                                      m_bResetHeaderFocusOnShow : 1;                            // 0x0194(0x0004)
	unsigned long                                      m_bResize : 1;                                            // 0x0194(0x0004)
	unsigned long                                      m_bIsPopup : 1;                                           // 0x0194(0x0004)
	unsigned long                                      m_bDead : 1;                                              // 0x0194(0x0004)
	unsigned long                                      m_bAlwaysTick : 1;                                        // 0x0194(0x0004)
	unsigned long                                      m_bAllowSpectatorClickThru : 1;                           // 0x0194(0x0004)
	unsigned long                                      m_bShowCursor : 1;                                        // 0x0194(0x0004)
	unsigned long                                      m_bCaptureKeys : 1;                                       // 0x0194(0x0004)
	unsigned long                                      m_bConsumeMotion : 1;                                     // 0x0194(0x0004)
	unsigned long                                      m_bAcceptsInput : 1;                                      // 0x0194(0x0004)
	unsigned long                                      m_bRegisterBack : 1;                                      // 0x0194(0x0004)
	unsigned long                                      m_bIsOnline : 1;                                          // 0x0194(0x0004)
	unsigned long                                      m_bCanShake : 1;                                          // 0x0194(0x0004)
	unsigned long                                      m_bShouldShake : 1;                                       // 0x0194(0x0004)
	unsigned long                                      m_bAlwaysKeepOpen : 1;                                    // 0x0194(0x0004)
	unsigned long                                      m_bAllowMultipleOnStack : 1;                              // 0x0194(0x0004)
	unsigned long                                      m_bHasBeenUninitialized : 1;                              // 0x0194(0x0004)
	float                                              m_fScaling;                                               // 0x0198(0x0004)
	float                                              m_fScale;                                                 // 0x019C(0x0004)
	float                                              m_fDeltaTime;                                             // 0x01A0(0x0004)
	struct FVector2D                                   m_CachedPosition;                                         // 0x01A4(0x0008)
	class UAkBaseSoundObject*                          m_akOver;                                                 // 0x01AC(0x0008)
	class UAkBaseSoundObject*                          m_akShow;                                                 // 0x01B4(0x0008)
	class UAkBaseSoundObject*                          m_akHide;                                                 // 0x01BC(0x0008)
	class UAkBaseSoundObject*                          m_akTabs;                                                 // 0x01C4(0x0008)
	class UAkBaseSoundObject*                          m_akScroll;                                               // 0x01CC(0x0008)
	int                                                m_nEventFunc;                                             // 0x01D4(0x0004)
	int                                                m_nEventType;                                             // 0x01D8(0x0004)
	int                                                m_nEventIndex;                                            // 0x01DC(0x0004)
	class UGFxObject*                                  m_pFocus;                                                 // 0x01E0(0x0008)
	class UTgGameDataHandler*                          m_pData;                                                  // 0x01E8(0x0008)
	class UUIGameMoviePlayer*                          m_pMovie;                                                 // 0x01F0(0x0008)
	class UUIDataManager*                              m_pUIData;                                                // 0x01F8(0x0008)
	class UGFxObject*                                  m_mcHeaderBumper[0x2];                                    // 0x0200(0x0008)
	class UInputGroup*                                 m_grHeader;                                               // 0x0210(0x0008)
	int                                                m_nFocusedGroup;                                          // 0x0218(0x0004)
	TArray<class UInputGroup*>                         m_pInputGroups;                                           // 0x021C(0x0010) (NeedCtorLink)
	class UTgCallbackContainer*                        m_CallbackContainer;                                      // 0x022C(0x0008)
	struct FScriptDelegate                             __DelegateEvent__Delegate;                                // 0x0234(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxScene");
		return ptr;
	}


	void HandleAnimState(int nAnimState, int nAnimGroup);
	void STATIC_SlamOutAnim(class UGFxObject* pObj, float fDelay);
	void STATIC_SlamInAnim(class UGFxObject* pObj, float fDelay);
	void STATIC_Highlight(class UGFxObject* pObj, bool bShow, float fTime);
	void FadeOut(class UGFxObject* pObj, float fTime, float fDelay);
	void FadeIn(class UGFxObject* pObj, float fTime, float fDelay);
	void STATIC_ClearQueuedSounds(class UAkBaseSoundObject* akSound);
	void STATIC_QueueSound(class UAkBaseSoundObject* akSound, float fDelay);
	bool STATIC_IsSoundQueued(class UAkBaseSoundObject* akSound);
	bool STATIC_IsAnimatingType(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType);
	bool STATIC_IsAnimating(class UGFxObject* pObj);
	void STATIC_EndAnim(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType);
	void STATIC_CancelAnim(class UGFxObject* pObj);
	void STATIC_Animate(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, float fDelay, unsigned char eQuad, bool bEndCurrentAnim);
	void Click(class UGFxObject* pObj);
	void Rollout(class UGFxObject* pObj);
	void Rollover(class UGFxObject* pObj);
	void Focus(class UGFxObject* pObj);
	void STATIC_ReceiveEvent(class UGFxObject* pObj, int nEvent);
	void DelegateEvent(class UGFxObject* pObj, int nEvent);
};


// Class TgClient.TgGfxTeamInvite
// 0x0080 (0x02C4 - 0x0244)
class UTgGfxTeamInvite : public UTgGfxScene
{
public:
	int                                                m_nQueue;                                                 // 0x0244(0x0004)
	float                                              m_fTimerWidth;                                            // 0x0248(0x0004)
	float                                              m_fTimeoutTime;                                           // 0x024C(0x0004)
	float                                              m_fTimeoutTimer;                                          // 0x0250(0x0004)
	class UGFxObject*                                  m_mcTimer;                                                // 0x0254(0x0008)
	class UGFxObject*                                  m_mcSubtitle;                                             // 0x025C(0x0008)
	class UGFxObject*                                  m_mcButton[0x2];                                          // 0x0264(0x0008)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0274(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.TgGfxTeamInvite.m_fInviteTimestamps
	class UAkBaseSoundObject*                          m_AkTeamInvite;                                           // 0x02BC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxTeamInvite");
		return ptr;
	}

};


// Class TgClient.UIAcquisition
// 0x01B8 (0x03FC - 0x0244)
class UUIAcquisition : public UTgGfxScene
{
public:
	struct FPointer                                    VfTable_IAcquisitionHandler;                              // 0x0244(0x0008) (Const, Native, NoExport)
	TArray<struct FAcquiredItem>                       m_Items;                                                  // 0x024C(0x0010) (NeedCtorLink)
	int                                                m_nOffset;                                                // 0x025C(0x0004)
	unsigned long                                      m_bShownItem : 1;                                         // 0x0260(0x0004)
	unsigned long                                      m_bFoundNitroReceipt : 1;                                 // 0x0260(0x0004)
	unsigned long                                      m_bHovering : 1;                                          // 0x0260(0x0004)
	unsigned long                                      m_bRotating : 1;                                          // 0x0260(0x0004)
	float                                              m_fItemTimeout;                                           // 0x0264(0x0004)
	float                                              m_fPreviousPosX;                                          // 0x0268(0x0004)
	class UGFxObject*                                  m_mcBack;                                                 // 0x026C(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x0274(0x0008)
	class UGFxObject*                                  m_mcDesc;                                                 // 0x027C(0x0008)
	class UGFxObject*                                  m_mcRotate;                                               // 0x0284(0x0008)
	class UGFxObject*                                  m_mcHoverName;                                            // 0x028C(0x0008)
	class UGFxObject*                                  m_mcHoverDesc;                                            // 0x0294(0x0008)
	class UGFxObject*                                  m_mcHeader;                                               // 0x029C(0x0008)
	class UGFxObject*                                  m_mcHeaderName;                                           // 0x02A4(0x0008)
	class UGFxObject*                                  m_mcHeaderDesc;                                           // 0x02AC(0x0008)
	class UGFxObject*                                  m_mcHeaderRank;                                           // 0x02B4(0x0008)
	class UGFxObject*                                  m_mcHeaderRankLevel;                                      // 0x02BC(0x0008)
	class UGFxObject*                                  m_mcHeaderRankLevelA;                                     // 0x02C4(0x0008)
	class UGFxObject*                                  m_mcHeaderRankLevelB;                                     // 0x02CC(0x0008)
	class UGFxObject*                                  m_mcHeaderRankLevelC;                                     // 0x02D4(0x0008)
	class UGFxObject*                                  m_mcArrow[0x2];                                           // 0x02DC(0x0008)
	class UGFxObject*                                  m_mcItem[0x5];                                            // 0x02EC(0x0008)
	class UGFxObject*                                  m_mcItemIcon[0x5];                                        // 0x0314(0x0008)
	class UGFxObject*                                  m_mcItemFrame[0x5];                                       // 0x033C(0x0008)
	class UGFxObject*                                  m_mcItemRarity[0x5];                                      // 0x0364(0x0008)
	class UGFxObject*                                  m_mcItemTexture[0x5];                                     // 0x038C(0x0008)
	class UGFxObject*                                  m_mcItemIconFrame[0x5];                                   // 0x03B4(0x0008)
	class UUIComponent_ItemPreviewStack*               m_pItemPreviewStack;                                      // 0x03DC(0x0008)
	class UInputGroup*                                 m_pAcquisitionItemsGroup;                                 // 0x03E4(0x0008)
	class UInputAction*                                m_pInputHandleBumperLeft;                                 // 0x03EC(0x0008)
	class UInputAction*                                m_pInputHandleBumperRight;                                // 0x03F4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIAcquisition");
		return ptr;
	}

};


// Class TgClient.UIArmory
// 0x0430 (0x0674 - 0x0244)
class UUIArmory : public UTgGfxScene
{
public:
	int                                                m_nHoverItem;                                             // 0x0244(0x0004)
	unsigned char                                      m_eState;                                                 // 0x0248(0x0001)
	unsigned char                                      m_eItemType;                                              // 0x0249(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x024A(0x0002) MISSED OFFSET
	unsigned long                                      m_bHovering : 1;                                          // 0x024C(0x0004)
	unsigned long                                      m_bRotating : 1;                                          // 0x024C(0x0004)
	float                                              m_fPreviousPosX;                                          // 0x0250(0x0004)
	class UInputGroup*                                 m_pItemsGroup;                                            // 0x0254(0x0008)
	class UInputGroup*                                 m_pClassGroup;                                            // 0x025C(0x0008)
	class UGFxObject*                                  m_mcHeader;                                               // 0x0264(0x0008)
	class UGFxObject*                                  m_mcHeaderMenu;                                           // 0x026C(0x0008)
	class UGFxObject*                                  m_mcHeaderCrowns;                                         // 0x0274(0x0008)
	class UGFxObject*                                  m_mcHeaderCrownsText;                                     // 0x027C(0x0008)
	class UGFxObject*                                  m_mcHeaderTrophies;                                       // 0x0284(0x0008)
	class UGFxObject*                                  m_mcHeaderTrophiesText;                                   // 0x028C(0x0008)
	class UGFxObject*                                  m_mcHeaderKey[0x2];                                       // 0x0294(0x0008)
	class UGFxObject*                                  m_mcHeaderTab[0x2];                                       // 0x02A4(0x0008)
	class UGFxObject*                                  m_mcHeaderTabSelect[0x2];                                 // 0x02B4(0x0008)
	class UGFxObject*                                  m_mcHeaderTabShadow[0x2];                                 // 0x02C4(0x0008)
	class UGFxObject*                                  m_mcHeaderTabHighlight[0x2];                              // 0x02D4(0x0008)
	class UGFxObject*                                  m_mcItems;                                                // 0x02E4(0x0008)
	class UGFxObject*                                  m_mcEmoteItem[0x3];                                       // 0x02EC(0x0008)
	class UGFxObject*                                  m_mcEmoteItemFrame[0x3];                                  // 0x0304(0x0008)
	class UGFxObject*                                  m_mcEmoteItemRarity[0x3];                                 // 0x031C(0x0008)
	class UGFxObject*                                  m_mcEmoteItemTexture[0x3];                                // 0x0334(0x0008)
	class UGFxObject*                                  m_mcSprayItem[0x3];                                       // 0x034C(0x0008)
	class UGFxObject*                                  m_mcSprayItemFrame[0x3];                                  // 0x0364(0x0008)
	class UGFxObject*                                  m_mcSprayItemRarity[0x3];                                 // 0x037C(0x0008)
	class UGFxObject*                                  m_mcSprayItemTexture[0x3];                                // 0x0394(0x0008)
	class UGFxObject*                                  m_mcNormalItem[0x7];                                      // 0x03AC(0x0008)
	class UGFxObject*                                  m_mcNormalItemIcon[0x7];                                  // 0x03E4(0x0008)
	class UGFxObject*                                  m_mcNormalItemFrame[0x7];                                 // 0x041C(0x0008)
	class UGFxObject*                                  m_mcNormalItemRarity[0x7];                                // 0x0454(0x0008)
	class UGFxObject*                                  m_mcNormalItemTexture[0x7];                               // 0x048C(0x0008)
	class UGFxObject*                                  m_mcNormalItemTypeTF[0x7];                                // 0x04C4(0x0008)
	class UGFxObject*                                  m_mcNormalItemNameTF[0x7];                                // 0x04FC(0x0008)
	class UGFxObject*                                  m_mcClasses;                                              // 0x0534(0x0008)
	class UGFxObject*                                  m_mcClass[0x4];                                           // 0x053C(0x0008)
	class UGFxObject*                                  m_mcClassName[0x4];                                       // 0x055C(0x0008)
	class UGFxObject*                                  m_mcClassIcon[0x4];                                       // 0x057C(0x0008)
	class UGFxObject*                                  m_mcClassLevel[0x4];                                      // 0x059C(0x0008)
	class UGFxObject*                                  m_mcClassPortrait[0x4];                                   // 0x05BC(0x0008)
	class UGFxObject*                                  m_mcClassProgress[0x4];                                   // 0x05DC(0x0008)
	class UGFxObject*                                  m_mcClassProgressTip[0x4];                                // 0x05FC(0x0008)
	class UGFxObject*                                  m_mcClassProgressFill[0x4];                               // 0x061C(0x0008)
	class UGFxObject*                                  m_mcDetails;                                              // 0x063C(0x0008)
	class UGFxObject*                                  m_mcDetailDesc;                                           // 0x0644(0x0008)
	class UGFxObject*                                  m_mcDetailName;                                           // 0x064C(0x0008)
	class UGFxObject*                                  m_mcDetailType;                                           // 0x0654(0x0008)
	class UGFxObject*                                  m_mcDetailFrame;                                          // 0x065C(0x0008)
	class UUIComponent_ItemPreviewStack*               m_pItemPreviewStack;                                      // 0x0664(0x0008)
	class UGFxObject*                                  m_mcRotator;                                              // 0x066C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIArmory");
		return ptr;
	}

};


// Class TgClient.UIArmoryDetail
// 0x0E14 (0x1058 - 0x0244)
class UUIArmoryDetail : public UTgGfxScene
{
public:
	int                                                m_nBotId;                                                 // 0x0244(0x0004)
	int                                                m_nHoverItem;                                             // 0x0248(0x0004)
	int                                                m_nItemIndex;                                             // 0x024C(0x0004)
	int                                                m_nTreeIndex;                                             // 0x0250(0x0004)
	int                                                m_nSlot;                                                  // 0x0254(0x0004)
	unsigned char                                      m_eState;                                                 // 0x0258(0x0001)
	unsigned char                                      m_eItemType;                                              // 0x0259(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x025A(0x0002) MISSED OFFSET
	unsigned long                                      m_bHovering : 1;                                          // 0x025C(0x0004)
	unsigned long                                      m_bRotating : 1;                                          // 0x025C(0x0004)
	float                                              m_fPreviousPosX;                                          // 0x0260(0x0004)
	float                                              m_fBackTimer;                                             // 0x0264(0x0004)
	TArray<int>                                        m_nItems;                                                 // 0x0268(0x0010) (NeedCtorLink)
	class UInputGroup*                                 m_pItemGroup;                                             // 0x0278(0x0008)
	class UInputGroup*                                 m_pLoadGroup;                                             // 0x0280(0x0008)
	class UInputGroup*                                 m_pTreeGroup;                                             // 0x0288(0x0008)
	class UGFxObject*                                  m_mcHeader;                                               // 0x0290(0x0008)
	class UGFxObject*                                  m_mcHeaderIcon;                                           // 0x0298(0x0008)
	class UGFxObject*                                  m_mcHeaderText;                                           // 0x02A0(0x0008)
	class UGFxObject*                                  m_mcHeaderKey[0x2];                                       // 0x02A8(0x0008)
	class UGFxObject*                                  m_mcHeaderTab[0x3];                                       // 0x02B8(0x0008)
	class UGFxObject*                                  m_mcHeaderTabSelect[0x3];                                 // 0x02D0(0x0008)
	class UGFxObject*                                  m_mcHeaderTabShadow[0x3];                                 // 0x02E8(0x0008)
	class UGFxObject*                                  m_mcHeaderTabHighlight[0x3];                              // 0x0300(0x0008)
	class UGFxObject*                                  m_mcItems;                                                // 0x0318(0x0008)
	class UGFxObject*                                  m_mcItemPage;                                             // 0x0320(0x0008)
	class UGFxObject*                                  m_mcItemKey[0x2];                                         // 0x0328(0x0008)
	class UGFxObject*                                  m_mcItemArrow[0x2];                                       // 0x0338(0x0008)
	class UGFxObject*                                  m_mcItem[0xC];                                            // 0x0348(0x0008)
	class UGFxObject*                                  m_mcItemIcon[0xC];                                        // 0x03A8(0x0008)
	class UGFxObject*                                  m_mcItemFrame[0xC];                                       // 0x0408(0x0008)
	class UGFxObject*                                  m_mcItemActive[0xC];                                      // 0x0468(0x0008)
	class UGFxObject*                                  m_mcItemRarity[0xC];                                      // 0x04C8(0x0008)
	class UGFxObject*                                  m_mcItemTexture[0xC];                                     // 0x0528(0x0008)
	class UGFxObject*                                  m_mcItemIconFrame[0xC];                                   // 0x0588(0x0008)
	class UGFxObject*                                  m_mcLoadout;                                              // 0x05E8(0x0008)
	class UGFxObject*                                  m_mcLoadoutInfo;                                          // 0x05F0(0x0008)
	class UGFxObject*                                  m_mcLoadoutInfoDesc;                                      // 0x05F8(0x0008)
	class UGFxObject*                                  m_mcLoadoutInfoName;                                      // 0x0600(0x0008)
	class UGFxObject*                                  m_mcLoadoutInfoType;                                      // 0x0608(0x0008)
	class UGFxObject*                                  m_mcLoadoutInfoTexture;                                   // 0x0610(0x0008)
	class UGFxObject*                                  m_mcLoadoutTalent[0xA];                                   // 0x0618(0x0008)
	class UGFxObject*                                  m_mcLoadoutTalentName[0xA];                               // 0x0668(0x0008)
	class UGFxObject*                                  m_mcLoadoutTalentDesc[0xA];                               // 0x06B8(0x0008)
	class UGFxObject*                                  m_mcLoadoutTalentTexture[0xA];                            // 0x0708(0x0008)
	class UGFxObject*                                  m_mcTree;                                                 // 0x0758(0x0008)
	class UGFxObject*                                  m_mcTreePage;                                             // 0x0760(0x0008)
	class UGFxObject*                                  m_mcTreeInfo;                                             // 0x0768(0x0008)
	class UGFxObject*                                  m_mcTreeInfoDesc;                                         // 0x0770(0x0008)
	class UGFxObject*                                  m_mcTreeInfoName;                                         // 0x0778(0x0008)
	class UGFxObject*                                  m_mcTreeInfoType;                                         // 0x0780(0x0008)
	class UGFxObject*                                  m_mcTreeInfoTexture;                                      // 0x0788(0x0008)
	class UGFxObject*                                  m_mcTreeInfoItem;                                         // 0x0790(0x0008)
	class UGFxObject*                                  m_mcTreeInfoItemFrame;                                    // 0x0798(0x0008)
	class UGFxObject*                                  m_mcTreeInfoItemTexture;                                  // 0x07A0(0x0008)
	class UGFxObject*                                  m_mcTreeProgress;                                         // 0x07A8(0x0008)
	class UGFxObject*                                  m_mcTreeProgressDesc;                                     // 0x07B0(0x0008)
	class UGFxObject*                                  m_mcTreeProgressName;                                     // 0x07B8(0x0008)
	class UGFxObject*                                  m_mcTreeProgressType;                                     // 0x07C0(0x0008)
	class UGFxObject*                                  m_mcTreeProgressIcon;                                     // 0x07C8(0x0008)
	class UGFxObject*                                  m_mcTreeProgressBar;                                      // 0x07D0(0x0008)
	class UGFxObject*                                  m_mcTreeProgressBarTip;                                   // 0x07D8(0x0008)
	class UGFxObject*                                  m_mcTreeProgressBarFill;                                  // 0x07E0(0x0008)
	class UGFxObject*                                  m_mcTreeProgressTexture;                                  // 0x07E8(0x0008)
	class UGFxObject*                                  m_mcTreeProgressItem;                                     // 0x07F0(0x0008)
	class UGFxObject*                                  m_mcTreeProgressItemFrame;                                // 0x07F8(0x0008)
	class UGFxObject*                                  m_mcTreeProgressItemTexutre;                              // 0x0800(0x0008)
	class UGFxObject*                                  m_mcTreeKey[0x2];                                         // 0x0808(0x0008)
	class UGFxObject*                                  m_mcTreeArrow[0x2];                                       // 0x0818(0x0008)
	struct FUINODESET                                  m_mcTreeNodes[0x4];                                       // 0x0828(0x0198)
	struct FUITITLESET                                 m_mcTitleNodes;                                           // 0x0E88(0x0188)
	class UGFxObject*                                  m_mcDetails;                                              // 0x1010(0x0008)
	class UGFxObject*                                  m_mcDetailDesc;                                           // 0x1018(0x0008)
	class UGFxObject*                                  m_mcDetailName;                                           // 0x1020(0x0008)
	class UGFxObject*                                  m_mcDetailType;                                           // 0x1028(0x0008)
	class UGFxObject*                                  m_mcDetailFrame;                                          // 0x1030(0x0008)
	class UUIComponent_ItemPreviewStack*               m_pItemPreviewStack;                                      // 0x1038(0x0008)
	class UGFxObject*                                  m_mcRotator;                                              // 0x1040(0x0008)
	class UInputAction*                                m_pInputTriggerLeft;                                      // 0x1048(0x0008)
	class UInputAction*                                m_pInputTriggerRight;                                     // 0x1050(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIArmoryDetail");
		return ptr;
	}

};


// Class TgClient.UIArmoryTalent
// 0x00FC (0x0340 - 0x0244)
class UUIArmoryTalent : public UTgGfxScene
{
public:
	int                                                m_nBotId;                                                 // 0x0244(0x0004)
	int                                                m_nTalent;                                                // 0x0248(0x0004)
	int                                                m_nEquippedDeviceId;                                      // 0x024C(0x0004)
	class UInputGroup*                                 m_pTalentGroup;                                           // 0x0250(0x0008)
	class UGFxObject*                                  m_mcHeader;                                               // 0x0258(0x0008)
	class UGFxObject*                                  m_mcTalent[0x4];                                          // 0x0260(0x0008)
	class UGFxObject*                                  m_mcTalentDesc[0x4];                                      // 0x0280(0x0008)
	class UGFxObject*                                  m_mcTalentName[0x4];                                      // 0x02A0(0x0008)
	class UGFxObject*                                  m_mcTalentType[0x4];                                      // 0x02C0(0x0008)
	class UGFxObject*                                  m_mcTalentIcon[0x4];                                      // 0x02E0(0x0008)
	class UGFxObject*                                  m_mcTalentLock[0x4];                                      // 0x0300(0x0008)
	class UGFxObject*                                  m_mcTalentTexture[0x4];                                   // 0x0320(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIArmoryTalent");
		return ptr;
	}

};


// Class TgClient.UIBattlePass
// 0x0894 (0x0AD8 - 0x0244)
class UUIBattlePass : public UTgGfxScene
{
public:
	int                                                m_nXP;                                                    // 0x0244(0x0004)
	int                                                m_nTab;                                                   // 0x0248(0x0004)
	int                                                m_nLevel;                                                 // 0x024C(0x0004)
	int                                                m_nOffset;                                                // 0x0250(0x0004)
	int                                                m_nPreOffset;                                             // 0x0254(0x0004)
	int                                                m_nHoverItem;                                             // 0x0258(0x0004)
	int                                                m_nHoverType;                                             // 0x025C(0x0004)
	int                                                m_nHoverLevel;                                            // 0x0260(0x0004)
	int                                                m_nSelectedLevel;                                         // 0x0264(0x0004)
	int                                                m_nCrowns;                                                // 0x0268(0x0004)
	unsigned long                                      m_bHovering : 1;                                          // 0x026C(0x0004)
	unsigned long                                      m_bRotating : 1;                                          // 0x026C(0x0004)
	float                                              m_fPreviousPosX;                                          // 0x0270(0x0004)
	int                                                m_nItemsA[0x32];                                          // 0x0274(0x0004)
	int                                                m_nItemsB[0x32];                                          // 0x033C(0x0004)
	class UInputGroup*                                 m_pItemsGroupL;                                           // 0x0404(0x0008)
	class UInputGroup*                                 m_pItemsGroupR;                                           // 0x040C(0x0008)
	float                                              m_fPurchaseFlash;                                         // 0x0414(0x0004)
	class UGFxObject*                                  m_mcHeader;                                               // 0x0418(0x0008)
	class UGFxObject*                                  m_mcHeaderTab[0x2];                                       // 0x0420(0x0008)
	class UGFxObject*                                  m_mcHeaderTabShadow[0x2];                                 // 0x0430(0x0008)
	class UGFxObject*                                  m_mcHeaderTabSelect[0x2];                                 // 0x0440(0x0008)
	class UGFxObject*                                  m_mcHeaderTabHighlight[0x2];                              // 0x0450(0x0008)
	class UGFxObject*                                  m_mcHeaderCrowns;                                         // 0x0460(0x0008)
	class UGFxObject*                                  m_mcHeaderCrownsText;                                     // 0x0468(0x0008)
	class UGFxObject*                                  m_mcCrownsButton;                                         // 0x0470(0x0008)
	class UGFxObject*                                  m_mcRewardsTab;                                           // 0x0478(0x0008)
	class UGFxObject*                                  m_mcQuests;                                               // 0x0480(0x0008)
	class UGFxObject*                                  m_mcRotator;                                              // 0x0488(0x0008)
	class UGFxObject*                                  m_mcProgress;                                             // 0x0490(0x0008)
	class UGFxObject*                                  m_mcProgressXP;                                           // 0x0498(0x0008)
	class UGFxObject*                                  m_mcProgressBar;                                          // 0x04A0(0x0008)
	class UGFxObject*                                  m_mcProgressIcon;                                         // 0x04A8(0x0008)
	class UGFxObject*                                  m_mcProgressName;                                         // 0x04B0(0x0008)
	class UGFxObject*                                  m_mcProgressTime;                                         // 0x04B8(0x0008)
	class UGFxObject*                                  m_mcProgressBoost;                                        // 0x04C0(0x0008)
	class UGFxObject*                                  m_mcProgressLevel;                                        // 0x04C8(0x0008)
	class UGFxObject*                                  m_mcProgressBarTip;                                       // 0x04D0(0x0008)
	class UGFxObject*                                  m_mcProgressBarFill;                                      // 0x04D8(0x0008)
	class UGFxObject*                                  m_mcProgressIconLevelA;                                   // 0x04E0(0x0008)
	class UGFxObject*                                  m_mcProgressIconLevelB;                                   // 0x04E8(0x0008)
	class UGFxObject*                                  m_mcProgressIconLevelC;                                   // 0x04F0(0x0008)
	class UGFxObject*                                  m_mcDetails;                                              // 0x04F8(0x0008)
	class UGFxObject*                                  m_mcDetailDesc;                                           // 0x0500(0x0008)
	class UGFxObject*                                  m_mcDetailName;                                           // 0x0508(0x0008)
	class UGFxObject*                                  m_mcDetailType;                                           // 0x0510(0x0008)
	class UGFxObject*                                  m_mcDetailFrame;                                          // 0x0518(0x0008)
	class UGFxObject*                                  m_mcPurchase;                                             // 0x0520(0x0008)
	class UGFxObject*                                  m_mcPurchaseTF;                                           // 0x0528(0x0008)
	class UGFxObject*                                  m_mcPurchaseFlash;                                        // 0x0530(0x0008)
	class UGFxObject*                                  m_mcPurchaseFrame;                                        // 0x0538(0x0008)
	class UGFxObject*                                  m_mcPurchaseButton;                                       // 0x0540(0x0008)
	class UGFxObject*                                  m_mcPurchaseButtonTF;                                     // 0x0548(0x0008)
	class UGFxObject*                                  m_mcPurchaseButtonKey;                                    // 0x0550(0x0008)
	class UGFxObject*                                  m_mcLevelUp;                                              // 0x0558(0x0008)
	class UGFxObject*                                  m_mcLevelUpTF;                                            // 0x0560(0x0008)
	class UGFxObject*                                  m_mcLevelUpFlash;                                         // 0x0568(0x0008)
	class UGFxObject*                                  m_mcLevelUpFrame;                                         // 0x0570(0x0008)
	class UGFxObject*                                  m_mcLevelUpButton;                                        // 0x0578(0x0008)
	class UGFxObject*                                  m_mcLevelUpButtonTF;                                      // 0x0580(0x0008)
	class UGFxObject*                                  m_mcLevelUpButtonKey;                                     // 0x0588(0x0008)
	class UUIComponent_ItemPreviewStack*               m_pItemPreviewStack;                                      // 0x0590(0x0008)
	class UGFxObject*                                  m_mcRewards;                                              // 0x0598(0x0008)
	class UGFxObject*                                  m_mcRewardTrack;                                          // 0x05A0(0x0008)
	class UGFxObject*                                  m_mcRewardPage[0x2];                                      // 0x05A8(0x0008)
	class UGFxObject*                                  m_mcRewardArrow[0x2];                                     // 0x05B8(0x0008)
	class UGFxObject*                                  m_mcRewardPrompt[0x2];                                    // 0x05C8(0x0008)
	class UGFxObject*                                  m_mcRewardLevel[0xA];                                     // 0x05D8(0x0008)
	class UGFxObject*                                  m_mcRewardLevelFrame[0xA];                                // 0x0628(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemA[0xA];                                // 0x0678(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemB[0xA];                                // 0x06C8(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemAIcon[0xA];                            // 0x0718(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemBIcon[0xA];                            // 0x0768(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemAFrame[0xA];                           // 0x07B8(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemBFrame[0xA];                           // 0x0808(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemAActive[0xA];                          // 0x0858(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemBActive[0xA];                          // 0x08A8(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemARarity[0xA];                          // 0x08F8(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemBRarity[0xA];                          // 0x0948(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemATexture[0xA];                         // 0x0998(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemBTexture[0xA];                         // 0x09E8(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemAIconFrame[0xA];                       // 0x0A38(0x0008)
	class UGFxObject*                                  m_mcRewardLevelItemBIconFrame[0xA];                       // 0x0A88(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIBattlePass");
		return ptr;
	}

};


// Class TgClient.UIBattlePassLevelUp
// 0x0238 (0x047C - 0x0244)
class UUIBattlePassLevelUp : public UTgGfxScene
{
public:
	int                                                m_nOffset;                                                // 0x0244(0x0004)
	int                                                m_nHoverItem;                                             // 0x0248(0x0004)
	int                                                m_nBundleLevels;                                          // 0x024C(0x0004)
	int                                                m_nPurchaseLevels;                                        // 0x0250(0x0004)
	float                                              m_fWaitTime;                                              // 0x0254(0x0004)
	float                                              m_fWaitTimer;                                             // 0x0258(0x0004)
	float                                              m_fPurchaseFlash;                                         // 0x025C(0x0004)
	float                                              m_fConfirmationTime;                                      // 0x0260(0x0004)
	float                                              m_fConfirmationTimer;                                     // 0x0264(0x0004)
	unsigned long                                      m_bControllerButtonHeld : 1;                              // 0x0268(0x0004)
	unsigned long                                      m_bIsShopLevelsBundle : 1;                                // 0x0268(0x0004)
	TArray<int>                                        m_nItems;                                                 // 0x026C(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcBlocker;                                              // 0x027C(0x0008)
	class UGFxObject*                                  m_mcPanel;                                                // 0x0284(0x0008)
	class UGFxObject*                                  m_mcPanelBack;                                            // 0x028C(0x0008)
	class UGFxObject*                                  m_mcPanelName;                                            // 0x0294(0x0008)
	class UGFxObject*                                  m_mcPanelDesc;                                            // 0x029C(0x0008)
	class UGFxObject*                                  m_mcPanelType;                                            // 0x02A4(0x0008)
	class UGFxObject*                                  m_mcPanelIcon;                                            // 0x02AC(0x0008)
	class UGFxObject*                                  m_mcPanelFrame;                                           // 0x02B4(0x0008)
	class UGFxObject*                                  m_mcPanelImage;                                           // 0x02BC(0x0008)
	class UGFxObject*                                  m_mcPanelLevel;                                           // 0x02C4(0x0008)
	class UGFxObject*                                  m_mcPanelTotal;                                           // 0x02CC(0x0008)
	class UGFxObject*                                  m_mcPanelTotalCrowns;                                     // 0x02D4(0x0008)
	class UGFxObject*                                  m_mcPanelHoverName;                                       // 0x02DC(0x0008)
	class UGFxObject*                                  m_mcPanelHoverDesc;                                       // 0x02E4(0x0008)
	class UGFxObject*                                  m_mcPanelIconLevelA;                                      // 0x02EC(0x0008)
	class UGFxObject*                                  m_mcPanelIconLevelB;                                      // 0x02F4(0x0008)
	class UGFxObject*                                  m_mcPanelIconLevelC;                                      // 0x02FC(0x0008)
	class UGFxObject*                                  m_mcPanelPurchase;                                        // 0x0304(0x0008)
	class UGFxObject*                                  m_mcPanelPurchaseFlash;                                   // 0x030C(0x0008)
	class UGFxObject*                                  m_mcPanelPurchasePrice;                                   // 0x0314(0x0008)
	class UGFxObject*                                  m_mcPanelPurchasePriceDiscount;                           // 0x031C(0x0008)
	class UGFxObject*                                  m_mcPanelPurchaseHold;                                    // 0x0324(0x0008)
	class UGFxObject*                                  m_mcPanelPurchaseMask;                                    // 0x032C(0x0008)
	class UGFxObject*                                  m_mcPanelPurchaseKey;                                     // 0x0334(0x0008)
	class UGFxObject*                                  m_mcPanelPurchaseKeyHoldBack;                             // 0x033C(0x0008)
	class UGFxObject*                                  m_mcPanelArrow[0x2];                                      // 0x0344(0x0008)
	class UGFxObject*                                  m_mcItem[0x5];                                            // 0x0354(0x0008)
	class UGFxObject*                                  m_mcItemIcon[0x5];                                        // 0x037C(0x0008)
	class UGFxObject*                                  m_mcItemFrame[0x5];                                       // 0x03A4(0x0008)
	class UGFxObject*                                  m_mcItemActive[0x5];                                      // 0x03CC(0x0008)
	class UGFxObject*                                  m_mcItemRarity[0x5];                                      // 0x03F4(0x0008)
	class UGFxObject*                                  m_mcItemTexture[0x5];                                     // 0x041C(0x0008)
	class UGFxObject*                                  m_mcItemIconFrame[0x5];                                   // 0x0444(0x0008)
	class UInputGroup*                                 m_pInputGroup;                                            // 0x046C(0x0008)
	class UInputGroup*                                 m_pPurchaseGroup;                                         // 0x0474(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIBattlePassLevelUp");
		return ptr;
	}

};


// Class TgClient.UIBattlePassPurchase
// 0x012C (0x0370 - 0x0244)
class UUIBattlePassPurchase : public UTgGfxScene
{
public:
	float                                              m_fPurchaseFlash;                                         // 0x0244(0x0004)
	class UGFxObject*                                  m_mcBack;                                                 // 0x0248(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x0250(0x0008)
	class UGFxObject*                                  m_mcDesc;                                                 // 0x0258(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0260(0x0008)
	class UGFxObject*                                  m_mcTotal;                                                // 0x0268(0x0008)
	class UGFxObject*                                  m_mcTotalCrowns;                                          // 0x0270(0x0008)
	class UGFxObject*                                  m_mcShadow[0x3];                                          // 0x0278(0x0008)
	class UGFxObject*                                  m_mcPanel[0x3];                                           // 0x0290(0x0008)
	class UGFxObject*                                  m_mcPanelIcon[0x3];                                       // 0x02A8(0x0008)
	class UGFxObject*                                  m_mcPanelName[0x3];                                       // 0x02C0(0x0008)
	class UGFxObject*                                  m_mcPanelDesc[0x3];                                       // 0x02D8(0x0008)
	class UGFxObject*                                  m_mcPanelBanner[0x3];                                     // 0x02F0(0x0008)
	class UGFxObject*                                  m_mcPanelPurchase[0x3];                                   // 0x0308(0x0008)
	class UGFxObject*                                  m_mcPanelPurchaseFlash[0x3];                              // 0x0320(0x0008)
	class UGFxObject*                                  m_mcPanelPurchasePrice[0x3];                              // 0x0338(0x0008)
	class UGFxObject*                                  m_mcPanelPurchasePriceDiscount[0x3];                      // 0x0350(0x0008)
	class UInputGroup*                                 m_pPurchaseGroup;                                         // 0x0368(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIBattlePassPurchase");
		return ptr;
	}

};


// Class TgClient.UIChatScene
// 0x0088 (0x02CC - 0x0244)
class UUIChatScene : public UTgGfxScene
{
public:
	int                                                m_nContextChangedCallbackHandle;                          // 0x0244(0x0004)
	class UInputAction*                                m_KeyCapture;                                             // 0x0248(0x0008)
	int                                                m_nChannel;                                               // 0x0250(0x0004)
	int                                                m_nScroll;                                                // 0x0254(0x0004)
	int                                                m_nLineNumber;                                            // 0x0258(0x0004)
	int                                                m_nPrevIndex;                                             // 0x025C(0x0004)
	float                                              m_fBuffer;                                                // 0x0260(0x0004)
	float                                              m_fOutputWidth;                                           // 0x0264(0x0004)
	struct FString                                     m_sRecipient;                                             // 0x0268(0x0010) (NeedCtorLink)
	struct FString                                     m_sRemaining;                                             // 0x0278(0x0010) (NeedCtorLink)
	struct FString                                     m_sLastInput;                                             // 0x0288(0x0010) (NeedCtorLink)
	int                                                m_nCommand;                                               // 0x0298(0x0004)
	class UTgChatData*                                 m_pChatData;                                              // 0x029C(0x0008)
	class UGFxObject*                                  m_mcInput;                                                // 0x02A4(0x0008)
	TArray<struct FChatMessage>                        m_Messages;                                               // 0x02AC(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_PrevChats;                                              // 0x02BC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIChatScene");
		return ptr;
	}

};


// Class TgClient.UIChatTab
// 0x00F4 (0x03C0 - 0x02CC)
class UUIChatTab : public UUIChatScene
{
public:
	int                                                m_nIdentity;                                              // 0x02CC(0x0004)
	int                                                m_nOutputCount;                                           // 0x02D0(0x0004)
	unsigned long                                      m_bOpen : 1;                                              // 0x02D4(0x0004)
	unsigned long                                      m_bCanChat : 1;                                           // 0x02D4(0x0004)
	unsigned long                                      m_bCanScroll : 1;                                         // 0x02D4(0x0004)
	unsigned long                                      m_bPrevInputState : 1;                                    // 0x02D4(0x0004)
	unsigned long                                      m_bPlayNotifySound : 1;                                   // 0x02D4(0x0004)
	class UGFxObject*                                  m_mcClose;                                                // 0x02D8(0x0008)
	class UGFxObject*                                  m_mcMinimize;                                             // 0x02E0(0x0008)
	class UGFxObject*                                  m_mcOpen;                                                 // 0x02E8(0x0008)
	class UGFxObject*                                  m_mcOpenTF;                                               // 0x02F0(0x0008)
	class UGFxObject*                                  m_mcOpenFrame;                                            // 0x02F8(0x0008)
	class UGFxObject*                                  m_mcOpenButton;                                           // 0x0300(0x0008)
	class UGFxObject*                                  m_mcOpenButtonTF;                                         // 0x0308(0x0008)
	class UGFxObject*                                  m_mcOpenButtonEdge;                                       // 0x0310(0x0008)
	class UGFxObject*                                  m_mcOpenButtonMask;                                       // 0x0318(0x0008)
	class UGFxObject*                                  m_mcBuffer;                                               // 0x0320(0x0008)
	class UGFxObject*                                  m_mcButton;                                               // 0x0328(0x0008)
	class UGFxObject*                                  m_mcButtonTF;                                             // 0x0330(0x0008)
	class UGFxObject*                                  m_mcButtonEdge;                                           // 0x0338(0x0008)
	class UGFxObject*                                  m_mcButtonMask;                                           // 0x0340(0x0008)
	class UGFxObject*                                  m_mcButtonHighlight;                                      // 0x0348(0x0008)
	class UGFxObject*                                  m_mcNotify;                                               // 0x0350(0x0008)
	class UGFxObject*                                  m_mcScroll;                                               // 0x0358(0x0008)
	class UGFxObject*                                  m_mcInputBtn;                                             // 0x0360(0x0008)
	class UGFxObject*                                  m_mcOutput[0x4];                                          // 0x0368(0x0008)
	class UGFxObject*                                  m_mcOutputIcon[0x4];                                      // 0x0388(0x0008)
	class UUIComponent_List*                           m_pCommandList;                                           // 0x03A8(0x0008)
	class UAkBaseSoundObject*                          m_AkChatSound;                                            // 0x03B0(0x0008)
	class UAkBaseSoundObject*                          m_AkNewTabSound;                                          // 0x03B8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIChatTab");
		return ptr;
	}

};


// Class TgClient.UIHudChatBox
// 0x026C (0x0538 - 0x02CC)
class UUIHudChatBox : public UUIChatScene
{
public:
	unsigned long                                      m_bLobby : 1;                                             // 0x02CC(0x0004)
	unsigned long                                      m_bFadeFrame : 1;                                         // 0x02CC(0x0004)
	unsigned long                                      m_bHighlight : 1;                                         // 0x02CC(0x0004)
	unsigned long                                      m_bHideInput : 1;                                         // 0x02CC(0x0004)
	float                                              m_fOffset;                                                // 0x02D0(0x0004)
	float                                              m_fInputPosY;                                             // 0x02D4(0x0004)
	float                                              m_fInputWidth;                                            // 0x02D8(0x0004)
	float                                              m_fOutputTimer[0x8];                                      // 0x02DC(0x0004)
	int                                                m_nMaxWidth;                                              // 0x02FC(0x0004)
	struct FString                                     m_sReplyName;                                             // 0x0300(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_Buffer;                                                 // 0x0310(0x0008)
	class UGFxObject*                                  m_Highlight;                                              // 0x0318(0x0008)
	class UGFxObject*                                  m_Output;                                                 // 0x0320(0x0008)
	class UGFxObject*                                  m_OutputText[0x8];                                        // 0x0328(0x0008)
	class UGFxObject*                                  m_OutputIcon[0x8];                                        // 0x0368(0x0008)
	class UGFxObject*                                  m_OutputVgsCallout[0x28];                                 // 0x03A8(0x0008)
	class UGFxObject*                                  m_OutputFrame;                                            // 0x04E8(0x0008)
	class UGFxObject*                                  m_OutputScroll;                                           // 0x04F0(0x0008)
	class UGFxObject*                                  m_mcCloseBtn;                                             // 0x04F8(0x0008)
	class UGFxObject*                                  m_Input;                                                  // 0x0500(0x0008)
	class UGFxObject*                                  m_InputBtn;                                               // 0x0508(0x0008)
	class UGFxObject*                                  m_InputHelp;                                              // 0x0510(0x0008)
	class UGFxObject*                                  m_InputChan;                                              // 0x0518(0x0008)
	class UGFxObject*                                  m_InputFrame;                                             // 0x0520(0x0008)
	TArray<unsigned long>                              m_bVGSText;                                               // 0x0528(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudChatBox");
		return ptr;
	}

};


// Class TgClient.UIHudChat
// 0x0000 (0x0538 - 0x0538)
class UUIHudChat : public UUIHudChatBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudChat");
		return ptr;
	}

};


// Class TgClient.UIClassSelect
// 0x0000 (0x0244 - 0x0244)
class UUIClassSelect : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIClassSelect");
		return ptr;
	}

};


// Class TgClient.UICustomGameCreate
// 0x0000 (0x0244 - 0x0244)
class UUICustomGameCreate : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UICustomGameCreate");
		return ptr;
	}

};


// Class TgClient.UICustomGameList
// 0x0000 (0x0244 - 0x0244)
class UUICustomGameList : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UICustomGameList");
		return ptr;
	}

};


// Class TgClient.UIFade
// 0x0008 (0x024C - 0x0244)
class UUIFade : public UTgGfxScene
{
public:
	class UGFxObject*                                  m_mcBlocker;                                              // 0x0244(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIFade");
		return ptr;
	}

};


// Class TgClient.UIFooter
// 0x003C (0x0280 - 0x0244)
class UUIFooter : public UTgGfxScene
{
public:
	class UGFxObject*                                  m_mcKey[0x5];                                             // 0x0244(0x0008)
	class UGFxObject*                                  m_mcPurchaseBlocker;                                      // 0x026C(0x0008)
	float                                              m_fPurhcaseBlockerTimeout;                                // 0x0274(0x0004)
	int                                                m_nInputRegisteredCallbackHandle;                         // 0x0278(0x0004)
	int                                                m_nInputDisplayNamesChangedCallbackHandle;                // 0x027C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIFooter");
		return ptr;
	}

};


// Class TgClient.UIGameMenu
// 0x0090 (0x02D4 - 0x0244)
class UUIGameMenu : public UTgGfxScene
{
public:
	unsigned long                                      m_bInGame : 1;                                            // 0x0244(0x0004)
	unsigned long                                      m_bGuides : 1;                                            // 0x0244(0x0004)
	unsigned long                                      m_bOption : 1;                                            // 0x0244(0x0004)
	unsigned long                                      m_bTutorial : 1;                                          // 0x0244(0x0004)
	float                                              m_fPulseTimer;                                            // 0x0248(0x0004)
	class UGFxObject*                                  m_mcLogo;                                                 // 0x024C(0x0008)
	class UGFxObject*                                  m_mcLine;                                                 // 0x0254(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x025C(0x0008)
	class UGFxObject*                                  m_mcNote;                                                 // 0x0264(0x0008)
	class UGFxObject*                                  m_mcDesc;                                                 // 0x026C(0x0008)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0274(0x0008)
	class UGFxObject*                                  m_mcBlocker;                                              // 0x027C(0x0008)
	class UGFxObject*                                  m_mcButton[0x6];                                          // 0x0284(0x0008)
	class UGFxObject*                                  m_mcOption[0x2];                                          // 0x02B4(0x0008)
	class UInputGroup*                                 m_pMenuButtonsGroup;                                      // 0x02C4(0x0008)
	class UInputGroup*                                 m_pMenuOptionsGroup;                                      // 0x02CC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIGameMenu");
		return ptr;
	}

};


// Class TgClient.UIHome
// 0x0418 (0x065C - 0x0244)
class UUIHome : public UTgGfxScene
{
public:
	struct Fdword                                      m_dwVendorRequestId;                                      // 0x0244(0x0004)
	unsigned long                                      m_bQueued : 1;                                            // 0x0248(0x0004)
	unsigned long                                      m_bMatchFound : 1;                                        // 0x0248(0x0004)
	unsigned long                                      m_bAnimateMenu : 1;                                       // 0x0248(0x0004)
	unsigned long                                      m_bPassEnabled : 1;                                       // 0x0248(0x0004)
	unsigned long                                      m_bGameBitNoStore : 1;                                    // 0x0248(0x0004)
	class UGFxObject*                                  m_mcPass;                                                 // 0x024C(0x0008)
	class UGFxObject*                                  m_mcPassIcon;                                             // 0x0254(0x0008)
	class UGFxObject*                                  m_mcPassIconLevelA;                                       // 0x025C(0x0008)
	class UGFxObject*                                  m_mcPassIconLevelB;                                       // 0x0264(0x0008)
	class UGFxObject*                                  m_mcPassIconLevelC;                                       // 0x026C(0x0008)
	class UGFxObject*                                  m_mcPassDetails;                                          // 0x0274(0x0008)
	class UGFxObject*                                  m_mcPassDetailsDesc;                                      // 0x027C(0x0008)
	class UGFxObject*                                  m_mcPassDetailsType;                                      // 0x0284(0x0008)
	class UGFxObject*                                  m_mcPassDetailBar;                                        // 0x028C(0x0008)
	class UGFxObject*                                  m_mcPassDetailBarTip;                                     // 0x0294(0x0008)
	class UGFxObject*                                  m_mcPassDetailBarFill;                                    // 0x029C(0x0008)
	class UGFxObject*                                  m_mcLogo;                                                 // 0x02A4(0x0008)
	class UGFxObject*                                  m_mcButton[0x9];                                          // 0x02AC(0x0008)
	class UGFxObject*                                  m_mcButtonCTA[0x9];                                       // 0x02F4(0x0008)
	class UGFxObject*                                  m_mcButtonDailyCTA[0x9];                                  // 0x033C(0x0008)
	class UGFxObject*                                  m_mcButtonSale[0x9];                                      // 0x0384(0x0008)
	class UGFxObject*                                  m_mcButtonText[0x9];                                      // 0x03CC(0x0008)
	class UGFxObject*                                  m_mcButtonBounds[0x9];                                    // 0x0414(0x0008)
	class UGFxObject*                                  m_mcButtonHighlight;                                      // 0x045C(0x0008)
	class UGFxObject*                                  m_mcQuestList;                                            // 0x0464(0x0008)
	class UGFxObject*                                  m_mcQuestListClose;                                       // 0x046C(0x0008)
	class UGFxObject*                                  m_mcQuestListBlocker;                                     // 0x0474(0x0008)
	class UGFxObject*                                  m_mcQuestEntry[0x3];                                      // 0x047C(0x0008)
	class UGFxObject*                                  m_mcQuestButton[0x3];                                     // 0x0494(0x0008)
	class UGFxObject*                                  m_mcQuestDiscard[0x3];                                    // 0x04AC(0x0008)
	class UGFxObject*                                  m_mcQuestComplete[0x3];                                   // 0x04C4(0x0008)
	class UGFxObject*                                  m_mcQuestTitle[0x3];                                      // 0x04DC(0x0008)
	class UGFxObject*                                  m_mcQuestEntryCTA[0x3];                                   // 0x04F4(0x0008)
	class UGFxObject*                                  m_mcQuestMask[0x3];                                       // 0x050C(0x0008)
	class UGFxObject*                                  m_mcQuestTip[0x3];                                        // 0x0524(0x0008)
	class UGFxObject*                                  m_mcQuestFillBar[0x3];                                    // 0x053C(0x0008)
	class UGFxObject*                                  m_mcQuestEntryBG[0x3];                                    // 0x0554(0x0008)
	class UGFxObject*                                  m_mcQuestRewardText;                                      // 0x056C(0x0008)
	class UGFxObject*                                  m_mcQuestReward1;                                         // 0x0574(0x0008)
	class UGFxObject*                                  m_mcCalloutGroup;                                         // 0x057C(0x0008)
	class UGFxObject*                                  m_mcCalloutDecro;                                         // 0x0584(0x0008)
	class UGFxObject*                                  m_mcCalloutButton;                                        // 0x058C(0x0008)
	class UGFxObject*                                  m_mcCalloutButtonKey;                                     // 0x0594(0x0008)
	class UUIInteractable_JsonPanel_Carousel*          m_CarouselPanel;                                          // 0x059C(0x0008)
	TArray<struct FJsonFeatureData>                    m_FeatureData;                                            // 0x05A4(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x05B4(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIHome.m_FeatureMap
	class UInputGroup*                                 m_pButtonGroup;                                           // 0x05FC(0x0008)
	class UInputGroup*                                 m_pQuestGroup;                                            // 0x0604(0x0008)
	class UInputAction*                                m_pRerollAction;                                          // 0x060C(0x0008)
	class UInputAction*                                m_pDequeueAction;                                         // 0x0614(0x0008)
	class UInputAction*                                m_pCalloutAction;                                         // 0x061C(0x0008)
	class UAkBaseSoundObject*                          m_akPlay;                                                 // 0x0624(0x0008)
	class UAkBaseSoundObject*                          m_akLeave;                                                // 0x062C(0x0008)
	class UAkBaseSoundObject*                          m_akMatch;                                                // 0x0634(0x0008)
	class UAkBaseSoundObject*                          m_akQuestOpen;                                            // 0x063C(0x0008)
	class UAkBaseSoundObject*                          m_akQuestClose;                                           // 0x0644(0x0008)
	class UAkBaseSoundObject*                          m_akQuestReroll;                                          // 0x064C(0x0008)
	class UAkBaseSoundObject*                          m_akQuestConfirm;                                         // 0x0654(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHome");
		return ptr;
	}

};


// Class TgClient.UIHud
// 0x0060 (0x02A4 - 0x0244)
class UUIHud : public UTgGfxScene
{
public:
	class UTgGfxScene*                                 m_mcSubscenes[0xB];                                       // 0x0244(0x0008)
	class UGFxObject*                                  m_mcPaused;                                               // 0x029C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHud");
		return ptr;
	}

};


// Class TgClient.UIHudBot
// 0x0714 (0x0958 - 0x0244)
class UUIHudBot : public UTgGfxScene
{
public:
	int                                                m_nMana;                                                  // 0x0244(0x0004)
	int                                                m_nLives;                                                 // 0x0248(0x0004)
	int                                                m_nHealth;                                                // 0x024C(0x0004)
	int                                                m_nShards;                                                // 0x0250(0x0004)
	int                                                m_nNuggets;                                               // 0x0254(0x0004)
	int                                                m_nManaMax;                                               // 0x0258(0x0004)
	int                                                m_nHealthMax;                                             // 0x025C(0x0004)
	int                                                m_nAmmoClip;                                              // 0x0260(0x0004)
	int                                                m_nAmmoType;                                              // 0x0264(0x0004)
	int                                                m_nAmmoCarry;                                             // 0x0268(0x0004)
	int                                                m_nLootDevice;                                            // 0x026C(0x0004)
	int                                                m_nPickupDeviceId;                                        // 0x0270(0x0004)
	unsigned long                                      m_bMount : 1;                                             // 0x0274(0x0004)
	unsigned long                                      m_bPrompt : 1;                                            // 0x0274(0x0004)
	unsigned long                                      m_bShowAmmo : 1;                                          // 0x0274(0x0004)
	unsigned long                                      m_bCursorMode : 1;                                        // 0x0274(0x0004)
	unsigned long                                      m_bShouldShow : 1;                                        // 0x0274(0x0004)
	unsigned long                                      m_bCosmeticWheel : 1;                                     // 0x0274(0x0004)
	unsigned long                                      m_bPlayerChickened : 1;                                   // 0x0274(0x0004)
	unsigned char                                      m_eActive;                                                // 0x0278(0x0001)
	unsigned char                                      m_eCastType;                                              // 0x0279(0x0001)
	unsigned char                                      m_ePickupSlot;                                            // 0x027A(0x0001)
	unsigned char                                      m_ePromptType;                                            // 0x027B(0x0001)
	unsigned char                                      m_eCursorType;                                            // 0x027C(0x0001)
	unsigned char                                      m_eStatus[0x5];                                           // 0x027D(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0282(0x0002) MISSED OFFSET
	float                                              m_fCastTime;                                              // 0x0284(0x0004)
	float                                              m_fCastTimer;                                             // 0x0288(0x0004)
	float                                              m_fActiveTime;                                            // 0x028C(0x0004)
	float                                              m_fArrowTime;                                             // 0x0290(0x0004)
	float                                              m_fArrowTimerIn;                                          // 0x0294(0x0004)
	float                                              m_fArrowTimerOut;                                         // 0x0298(0x0004)
	float                                              m_fArmor;                                                 // 0x029C(0x0004)
	float                                              m_fArmorMax;                                              // 0x02A0(0x0004)
	float                                              m_fKeyTimer;                                              // 0x02A4(0x0004)
	float                                              m_fErrorTimer;                                            // 0x02A8(0x0004)
	float                                              m_fLootAnimTimer;                                         // 0x02AC(0x0004)
	struct FString                                     m_sCombatEntry;                                           // 0x02B0(0x0010) (NeedCtorLink)
	int                                                m_nCachedMaxShards;                                       // 0x02C0(0x0004)
	int                                                m_nAmmo[0x2];                                             // 0x02C4(0x0004)
	int                                                m_nRune[0x6];                                             // 0x02CC(0x0004)
	int                                                m_nEquip[0x2];                                            // 0x02E4(0x0004)
	int                                                m_nArmor[0x4];                                            // 0x02EC(0x0004)
	int                                                m_nSkill[0x5];                                            // 0x02FC(0x0004)
	int                                                m_nSkillAmmo[0x5];                                        // 0x0310(0x0004)
	float                                              m_fTimers[0x5];                                           // 0x0324(0x0004)
	float                                              m_fActive[0x5];                                           // 0x0338(0x0004)
	float                                              m_fArrowTimerA[0x4];                                      // 0x034C(0x0004)
	float                                              m_fArrowTimerB[0x4];                                      // 0x035C(0x0004)
	struct FHudBuffEffect                              m_ActiveEffects[0x7];                                     // 0x036C(0x001C) (NeedCtorLink)
	TArray<class UTgGameDC_Effect*>                    m_SortedEffects;                                          // 0x0430(0x0010) (NeedCtorLink)
	TArray<struct FUICOMBATENTRY>                      m_CombatEntries;                                          // 0x0440(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcLives;                                                // 0x0450(0x0008)
	class UGFxObject*                                  m_mcShards;                                               // 0x0458(0x0008)
	class UGFxObject*                                  m_mcNuggets;                                              // 0x0460(0x0008)
	class UGFxObject*                                  m_mcLivesText;                                            // 0x0468(0x0008)
	class UGFxObject*                                  m_mcShardsText;                                           // 0x0470(0x0008)
	class UGFxObject*                                  m_mcNuggetsText;                                          // 0x0478(0x0008)
	class UGFxObject*                                  m_mcError;                                                // 0x0480(0x0008)
	class UGFxObject*                                  m_mcCombat;                                               // 0x0488(0x0008)
	class UGFxObject*                                  m_mcCast;                                                 // 0x0490(0x0008)
	class UGFxObject*                                  m_mcCastMask;                                             // 0x0498(0x0008)
	class UGFxObject*                                  m_mcCastTime;                                             // 0x04A0(0x0008)
	class UGFxObject*                                  m_mcCastShards;                                           // 0x04A8(0x0008)
	class UGFxObject*                                  m_mcCastShardsText;                                       // 0x04B0(0x0008)
	class UGFxObject*                                  m_mcPrompt;                                               // 0x04B8(0x0008)
	class UGFxObject*                                  m_mcPromptKey;                                            // 0x04C0(0x0008)
	class UGFxObject*                                  m_mcPromptText;                                           // 0x04C8(0x0008)
	class UGFxObject*                                  m_mcHealth;                                               // 0x04D0(0x0008)
	class UGFxObject*                                  m_mcHealthBar;                                            // 0x04D8(0x0008)
	class UGFxObject*                                  m_mcHealthBarChange;                                      // 0x04E0(0x0008)
	class UGFxObject*                                  m_mcHealthBarFlash;                                       // 0x04E8(0x0008)
	class UGFxObject*                                  m_mcHealthBarTip;                                         // 0x04F0(0x0008)
	class UGFxObject*                                  m_mcHealthTextCurrent;                                    // 0x04F8(0x0008)
	class UGFxObject*                                  m_mcHealthTextMax;                                        // 0x0500(0x0008)
	class UGFxObject*                                  m_mcHealthFrameFlash;                                     // 0x0508(0x0008)
	class UGFxObject*                                  m_mcMana;                                                 // 0x0510(0x0008)
	class UGFxObject*                                  m_mcManaBar;                                              // 0x0518(0x0008)
	class UGFxObject*                                  m_mcArmor;                                                // 0x0520(0x0008)
	class UGFxObject*                                  m_mcArmorBar;                                             // 0x0528(0x0008)
	class UGFxObject*                                  m_mcArmorBarChange;                                       // 0x0530(0x0008)
	class UGFxObject*                                  m_mcArmorBarFlash;                                        // 0x0538(0x0008)
	class UGFxObject*                                  m_mcArmorBarTip;                                          // 0x0540(0x0008)
	class UGFxObject*                                  m_mcArmorTextCurrent;                                     // 0x0548(0x0008)
	class UGFxObject*                                  m_mcArmorTextMax;                                         // 0x0550(0x0008)
	class UGFxObject*                                  m_mcArmorFrameFlash;                                      // 0x0558(0x0008)
	class UGFxObject*                                  m_mcSpectating;                                           // 0x0560(0x0008)
	class UGFxObject*                                  m_mcRune[0x6];                                            // 0x0568(0x0008)
	class UGFxObject*                                  m_mcRuneIcon[0x6];                                        // 0x0598(0x0008)
	class UGFxObject*                                  m_mcArmorPiece[0x4];                                      // 0x05C8(0x0008)
	class UGFxObject*                                  m_mcSlot;                                                 // 0x05E8(0x0008)
	class UGFxObject*                                  m_mcSlotEquip;                                            // 0x05F0(0x0008)
	class UGFxObject*                                  m_mcSlotEquipIcon;                                        // 0x05F8(0x0008)
	class UGFxObject*                                  m_mcSlotEquipFrame;                                       // 0x0600(0x0008)
	class UGFxObject*                                  m_mcSlotSkill;                                            // 0x0608(0x0008)
	class UGFxObject*                                  m_mcSlotSkillIcon;                                        // 0x0610(0x0008)
	class UGFxObject*                                  m_mcSlotSkillFrame;                                       // 0x0618(0x0008)
	class UGFxObject*                                  m_mcSlotArrow[0x4];                                       // 0x0620(0x0008)
	class UGFxObject*                                  m_mcEquip[0x2];                                           // 0x0640(0x0008)
	class UGFxObject*                                  m_mcEquipAmmo[0x2];                                       // 0x0650(0x0008)
	class UGFxObject*                                  m_mcEquipAmmoIcon[0x2];                                   // 0x0660(0x0008)
	class UGFxObject*                                  m_mcEquipAmmoInfinity[0x2];                               // 0x0670(0x0008)
	class UGFxObject*                                  m_mcEquipIcon[0x2];                                       // 0x0680(0x0008)
	class UGFxObject*                                  m_mcEquipFrame[0x2];                                      // 0x0690(0x0008)
	class UGFxObject*                                  m_mcEquipRarity[0x2];                                     // 0x06A0(0x0008)
	class UGFxObject*                                  m_mcEquipElement[0x2];                                    // 0x06B0(0x0008)
	class UGFxObject*                                  m_mcEquipDagger1;                                         // 0x06C0(0x0008)
	class UGFxObject*                                  m_mcEquipDagger2;                                         // 0x06C8(0x0008)
	class UGFxObject*                                  m_mcSkill[0x5];                                           // 0x06D0(0x0008)
	class UGFxObject*                                  m_mcSkillKey[0x5];                                        // 0x06F8(0x0008)
	class UGFxObject*                                  m_mcSkillIcon[0x5];                                       // 0x0720(0x0008)
	class UGFxObject*                                  m_mcSkillTime[0x5];                                       // 0x0748(0x0008)
	class UGFxObject*                                  m_mcSkillFrame[0x5];                                      // 0x0770(0x0008)
	class UGFxObject*                                  m_mcSkillActive[0x5];                                     // 0x0798(0x0008)
	class UGFxObject*                                  m_mcKey[0x5];                                             // 0x07C0(0x0008)
	class UGFxObject*                                  m_mcKeyPulse[0x5];                                        // 0x07E8(0x0008)
	class UGFxObject*                                  m_mcBuffBar;                                              // 0x0810(0x0008)
	class UGFxObject*                                  m_mcBuff[0x7];                                            // 0x0818(0x0008)
	class UGFxObject*                                  m_mcBuffIcon[0x7];                                        // 0x0850(0x0008)
	class UGFxObject*                                  m_mcBuffTimer[0x7];                                       // 0x0888(0x0008)
	unsigned char                                      UnknownData01[0x48];                                      // 0x08C0(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIHudBot.m_EffectGroupIconMap
	unsigned char                                      UnknownData02[0x48];                                      // 0x0908(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIHudBot.m_EffectGroupNameMap
	class UAkBaseSoundObject*                          m_AkArmorBreak;                                           // 0x0950(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudBot");
		return ptr;
	}

};


// Class TgClient.UIHudCenter
// 0x05E4 (0x0828 - 0x0244)
class UUIHudCenter : public UTgGfxScene
{
public:
	int                                                m_nReticle;                                               // 0x0244(0x0004)
	int                                                m_nStuckCount;                                            // 0x0248(0x0004)
	int                                                m_nAmmoCurrent;                                           // 0x024C(0x0004)
	int                                                m_nAmmoClipSize;                                          // 0x0250(0x0004)
	int                                                m_nReticleColor;                                          // 0x0254(0x0004)
	unsigned long                                      m_bCharge : 1;                                            // 0x0258(0x0004)
	unsigned long                                      m_bSprinting : 1;                                         // 0x0258(0x0004)
	unsigned long                                      m_bShouldShow : 1;                                        // 0x0258(0x0004)
	unsigned long                                      m_bChangeReticleOverEnemy : 1;                            // 0x0258(0x0004)
	unsigned long                                      m_bChargeAmmo : 1;                                        // 0x0258(0x0004)
	unsigned long                                      m_bReticleBloom : 1;                                      // 0x0258(0x0004)
	unsigned long                                      m_bReticleVisible : 1;                                    // 0x0258(0x0004)
	unsigned long                                      m_bReticleAccessoryVisible : 1;                           // 0x0258(0x0004)
	unsigned long                                      m_bDisableCombatLog : 1;                                  // 0x0258(0x0004)
	unsigned long                                      m_bRecharging : 1;                                        // 0x0258(0x0004)
	unsigned long                                      m_bWasHiddenOnTick : 1;                                   // 0x0258(0x0004)
	unsigned long                                      m_bWasReloading : 1;                                      // 0x0258(0x0004)
	unsigned long                                      m_bResurrecting : 1;                                      // 0x0258(0x0004)
	unsigned long                                      m_bResurrectionFailed : 1;                                // 0x0258(0x0004)
	unsigned long                                      m_bShowFuel : 1;                                          // 0x0258(0x0004)
	unsigned long                                      m_bHitWarning3pVisible : 1;                               // 0x0258(0x0004)
	unsigned long                                      m_bEnteredCatapult : 1;                                   // 0x0258(0x0004)
	float                                              m_fReloadTime;                                            // 0x025C(0x0004)
	float                                              m_fReloadTimer;                                           // 0x0260(0x0004)
	float                                              m_fChargePercent;                                         // 0x0264(0x0004)
	float                                              m_fResolutionModX;                                        // 0x0268(0x0004)
	float                                              m_fResolutionModY;                                        // 0x026C(0x0004)
	float                                              m_fResurrectionTimer;                                     // 0x0270(0x0004)
	float                                              m_fTotalResurrectionTime;                                 // 0x0274(0x0004)
	class UGFxObject*                                  m_mcCharge;                                               // 0x0278(0x0008)
	class UGFxObject*                                  m_mcChargeMask;                                           // 0x0280(0x0008)
	class UGFxObject*                                  m_mcReticle;                                              // 0x0288(0x0008)
	class UGFxObject*                                  m_mcCircleReticle;                                        // 0x0290(0x0008)
	class UGFxObject*                                  m_mcCicleReticleAccuracy[0x2];                            // 0x0298(0x0008)
	class UGFxObject*                                  m_mcCrossReticle;                                         // 0x02A8(0x0008)
	class UGFxObject*                                  m_mcCrossReticleUp;                                       // 0x02B0(0x0008)
	class UGFxObject*                                  m_mcCrossReticleLeft;                                     // 0x02B8(0x0008)
	class UGFxObject*                                  m_mcCrossReticleRight;                                    // 0x02C0(0x0008)
	class UGFxObject*                                  m_mcCrossReticleDown;                                     // 0x02C8(0x0008)
	class UGFxObject*                                  m_mcDotReticle;                                           // 0x02D0(0x0008)
	class UGFxObject*                                  m_mcWideReticle;                                          // 0x02D8(0x0008)
	class UGFxObject*                                  m_mcShaLinReticle;                                        // 0x02E0(0x0008)
	class UGFxObject*                                  m_mcShaLinReticleDraw;                                    // 0x02E8(0x0008)
	class UGFxObject*                                  m_mcShaLinImpalerReticle;                                 // 0x02F0(0x0008)
	class UGFxObject*                                  m_mcMaeveReticle;                                         // 0x02F8(0x0008)
	class UGFxObject*                                  m_mcMaevePounceLIRecticle;                                // 0x0300(0x0008)
	class UGFxObject*                                  m_mcMaevePounceLORecticle;                                // 0x0308(0x0008)
	class UGFxObject*                                  m_mcMaevePounceRIRecticle;                                // 0x0310(0x0008)
	class UGFxObject*                                  m_mcMaevePounceRORecticle;                                // 0x0318(0x0008)
	class UGFxObject*                                  m_mcMinigunReticle;                                       // 0x0320(0x0008)
	class UGFxObject*                                  m_mcMinigunReticleAccuracy[0x2];                          // 0x0328(0x0008)
	class UGFxObject*                                  m_mcMinigunReticleFill;                                   // 0x0338(0x0008)
	class UGFxObject*                                  m_mcMinigunReticleMask;                                   // 0x0340(0x0008)
	class UGFxObject*                                  m_mcCatapultReticle;                                      // 0x0348(0x0008)
	class UGFxObject*                                  m_mcCatapultAim;                                          // 0x0350(0x0008)
	class UGFxObject*                                  m_mcHitWarning3p;                                         // 0x0358(0x0008)
	class UGFxObject*                                  m_mcTargeter;                                             // 0x0360(0x0008)
	class UGFxObject*                                  m_mcHitMarker;                                            // 0x0368(0x0008)
	class UGFxObject*                                  m_mcHitMarkerTicks[0x4];                                  // 0x0370(0x0008)
	class UGFxObject*                                  m_mcAccuracy;                                             // 0x0390(0x0008)
	class UGFxObject*                                  m_mcRecharge;                                             // 0x0398(0x0008)
	class UGFxObject*                                  m_mcRechargeCD;                                           // 0x03A0(0x0008)
	class UGFxObject*                                  m_mcStuck;                                                // 0x03A8(0x0008)
	class UGFxObject*                                  m_mcAmmoNew;                                              // 0x03B0(0x0008)
	class UGFxObject*                                  m_mcAmmoNewCharge;                                        // 0x03B8(0x0008)
	class UGFxObject*                                  m_mcAmmoNewCurrent;                                       // 0x03C0(0x0008)
	class UGFxObject*                                  m_mcAmmoNewClipSize;                                      // 0x03C8(0x0008)
	class UGFxObject*                                  m_mcAmmoNewChargeMask;                                    // 0x03D0(0x0008)
	class UGFxObject*                                  m_mcResurrecting;                                         // 0x03D8(0x0008)
	class UGFxObject*                                  m_mcResurrectingText;                                     // 0x03E0(0x0008)
	class UGFxObject*                                  m_mcResurrectingTimer;                                    // 0x03E8(0x0008)
	int                                                m_eCombatInfoType;                                        // 0x03F0(0x0004)
	float                                              m_fGlobalChatTimer;                                       // 0x03F4(0x0004)
	class UGFxObject*                                  m_Reward;                                                 // 0x03F8(0x0008)
	class UGFxObject*                                  m_RewardName;                                             // 0x0400(0x0008)
	class UGFxObject*                                  m_RewardAmount;                                           // 0x0408(0x0008)
	class UGFxObject*                                  m_mcGlobalChat;                                           // 0x0410(0x0008)
	class UGFxObject*                                  m_mcGlobalChatTF;                                         // 0x0418(0x0008)
	class UGFxObject*                                  m_mcKillingBlow;                                          // 0x0420(0x0008)
	class UGFxObject*                                  m_mcDamage;                                               // 0x0428(0x0008)
	class UGFxObject*                                  m_Projectiles;                                            // 0x0430(0x0008)
	struct FHudProjectile                              m_ProjectilePointers[0xA];                                // 0x0438(0x0040)
	TArray<struct FHudMarker>                          m_DamageMarkersLight;                                     // 0x06B8(0x0010) (NeedCtorLink)
	TArray<int>                                        m_DamageMarkerFreelistLight;                              // 0x06C8(0x0010) (NeedCtorLink)
	TArray<struct FHudMarker>                          m_DamageMarkersMedium;                                    // 0x06D8(0x0010) (NeedCtorLink)
	TArray<int>                                        m_DamageMarkerFreelistMedium;                             // 0x06E8(0x0010) (NeedCtorLink)
	TArray<struct FHudMarker>                          m_DamageMarkersHeavy;                                     // 0x06F8(0x0010) (NeedCtorLink)
	TArray<int>                                        m_DamageMarkerFreelistHeavy;                              // 0x0708(0x0010) (NeedCtorLink)
	TArray<struct FHudMarker>                          m_DamageMarkersAOEMedium;                                 // 0x0718(0x0010) (NeedCtorLink)
	TArray<int>                                        m_DamageMarkerFreelistAOEMedium;                          // 0x0728(0x0010) (NeedCtorLink)
	TArray<struct FHudMarker>                          m_DamageMarkersAOEHeavy;                                  // 0x0738(0x0010) (NeedCtorLink)
	TArray<int>                                        m_DamageMarkerFreelistAOEHeavy;                           // 0x0748(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcFuel;                                                 // 0x0758(0x0008)
	class UGFxObject*                                  m_mcFuelBar;                                              // 0x0760(0x0008)
	class UGFxObject*                                  m_mcFuelMask;                                             // 0x0768(0x0008)
	class UGFxObject*                                  m_mcReload;                                               // 0x0770(0x0008)
	class UGFxObject*                                  m_mcReloadTF;                                             // 0x0778(0x0008)
	class UGFxObject*                                  m_mcReloadAnim;                                           // 0x0780(0x0008)
	class UUIComponent_HealFeed*                       m_HealFeed;                                               // 0x0788(0x0008)
	TArray<struct FMessageClip>                        m_Messages;                                               // 0x0790(0x0010) (NeedCtorLink)
	float                                              m_fClient3pReloadOffset;                                  // 0x07A0(0x0004)
	float                                              m_fHitWarning3pMoveSpeed;                                 // 0x07A4(0x0004)
	float                                              m_fHitWarning3pMoveCheckDistance;                         // 0x07A8(0x0004)
	float                                              m_fHitWarning3pScale;                                     // 0x07AC(0x0004)
	struct FColor                                      m_cHitWarning3pColor;                                     // 0x07B0(0x0004)
	struct FColor                                      m_cHitWarning3pReticleColor;                              // 0x07B4(0x0004)
	float                                              m_fHitWarning3pThreshold;                                 // 0x07B8(0x0004)
	float                                              m_fHitWarning3pThreshold2d;                               // 0x07BC(0x0004)
	struct FVector2D                                   m_vHitWarning3pScalingSize;                               // 0x07C0(0x0008)
	struct FVector2D                                   m_vHitWarning3pScalingRange;                              // 0x07C8(0x0008)
	float                                              m_fHitWarning3pScalingSpeed;                              // 0x07D0(0x0004)
	struct FHitMarkerInfo                              m_HitMarker;                                              // 0x07D4(0x0028) (NeedCtorLink)
	float                                              m_fMaxDamageTimestamp;                                    // 0x07FC(0x0004)
	float                                              m_fDamageDealtRTPCSustainDuration;                        // 0x0800(0x0004)
	float                                              m_fChampionHitTimestamp;                                  // 0x0804(0x0004)
	float                                              m_fChampionCountRTPCSustainDuration;                      // 0x0808(0x0004)
	TArray<struct FDamageInstance>                     m_AccumulatedDamageInstances;                             // 0x080C(0x0010) (NeedCtorLink)
	float                                              m_fDamageAccumulationWindow;                              // 0x081C(0x0004)
	class UTgGameplayCurves*                           m_GameplayCurves;                                         // 0x0820(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudCenter");
		return ptr;
	}


	bool GetCatapultAimScreenLocation(float fClipSize, class UCanvas* pCanvas, const struct FVector& CameraRotation, const struct FVector& CatapultDirection, struct FVector* ScreenLocation);
	void TriggerPounceReticleAnim(bool bPounceReady);
};


// Class TgClient.UIHudClass
// 0x0364 (0x05A8 - 0x0244)
class UUIHudClass : public UTgGfxScene
{
public:
	int                                                m_nTime;                                                  // 0x0244(0x0004)
	int                                                m_nClass;                                                 // 0x0248(0x0004)
	int                                                m_nPlayer[0x5];                                           // 0x024C(0x0004)
	int                                                m_nClassIndex;                                            // 0x0260(0x0004)
	unsigned long                                      m_bSelection : 1;                                         // 0x0264(0x0004)
	unsigned long                                      m_bShouldShow : 1;                                        // 0x0264(0x0004)
	class UGFxObject*                                  m_mcImage;                                                // 0x0268(0x0008)
	class UGFxObject*                                  m_mcTitleA;                                               // 0x0270(0x0008)
	class UGFxObject*                                  m_mcTitleB;                                               // 0x0278(0x0008)
	class UGFxObject*                                  m_mcBlocker;                                              // 0x0280(0x0008)
	class UGFxObject*                                  m_mcInfoFrame;                                            // 0x0288(0x0008)
	class UGFxObject*                                  m_mcPrompt;                                               // 0x0290(0x0008)
	class UGFxObject*                                  m_mcPromptKey;                                            // 0x0298(0x0008)
	class UGFxObject*                                  m_mcPromptClass;                                          // 0x02A0(0x0008)
	class UGFxObject*                                  m_mcAbility;                                              // 0x02A8(0x0008)
	class UGFxObject*                                  m_mcAbilityDesc;                                          // 0x02B0(0x0008)
	class UGFxObject*                                  m_mcAbilityIcon;                                          // 0x02B8(0x0008)
	class UGFxObject*                                  m_mcAbilityName;                                          // 0x02C0(0x0008)
	class UGFxObject*                                  m_mcTalentGroup;                                          // 0x02C8(0x0008)
	class UGFxObject*                                  m_mcTalent[0xA];                                          // 0x02D0(0x0008)
	class UGFxObject*                                  m_mcTalentIcon[0xA];                                      // 0x0320(0x0008)
	class UGFxObject*                                  m_mcTalentTitle[0xA];                                     // 0x0370(0x0008)
	class UGFxObject*                                  m_mcTalentDesc[0xA];                                      // 0x03C0(0x0008)
	class UGFxObject*                                  m_mcHeader;                                               // 0x0410(0x0008)
	class UGFxObject*                                  m_mcHeaderTime;                                           // 0x0418(0x0008)
	class UGFxObject*                                  m_mcHeaderPlayer[0x5];                                    // 0x0420(0x0008)
	class UGFxObject*                                  m_mcHeaderPlayerIcon[0x5];                                // 0x0448(0x0008)
	class UGFxObject*                                  m_mcHeaderPlayerClass[0x5];                               // 0x0470(0x0008)
	class UGFxObject*                                  m_mcButton[0x4];                                          // 0x0498(0x0008)
	class UGFxObject*                                  m_mcButtonIcon[0x4];                                      // 0x04B8(0x0008)
	class UGFxObject*                                  m_mcButtonLevel[0x4];                                     // 0x04D8(0x0008)
	class UGFxObject*                                  m_mcButtonHighlight[0x4];                                 // 0x04F8(0x0008)
	class UGFxObject*                                  m_mcButtonHighlightIcon[0x4];                             // 0x0518(0x0008)
	class UGFxObject*                                  m_mcButtonProgress[0x4];                                  // 0x0538(0x0008)
	class UGFxObject*                                  m_mcButtonProgressTip[0x4];                               // 0x0558(0x0008)
	class UGFxObject*                                  m_mcButtonProgressFill[0x4];                              // 0x0578(0x0008)
	class UInputGroup*                                 m_pInputGroup;                                            // 0x0598(0x0008)
	class UAkBaseSoundObject*                          m_akSelect;                                               // 0x05A0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudClass");
		return ptr;
	}

};


// Class TgClient.UIHudForge
// 0x05D4 (0x0818 - 0x0244)
class UUIHudForge : public UTgGfxScene
{
public:
	int                                                m_nShards;                                                // 0x0244(0x0004)
	int                                                m_nUpgrades;                                              // 0x0248(0x0004)
	class UInputGroup*                                 m_pEntryGroup;                                            // 0x024C(0x0008)
	int                                                m_nMaxTeammateCount;                                      // 0x0254(0x0004)
	int                                                m_nEntryHighlighted;                                      // 0x0258(0x0004)
	int                                                m_nClassNameMessage;                                      // 0x025C(0x0004)
	unsigned char                                      m_eState;                                                 // 0x0260(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	struct FUIFORGETAB                                 m_mcForgeTabs[0x3];                                       // 0x0264(0x0020)
	struct FUIFORGEENTRYGFX                            m_mcEntry[0x8];                                           // 0x02C4(0x0038)
	struct FUIFORGEENTRYDATA                           m_mcClassData[0x8];                                       // 0x0484(0x0020)
	struct FUIFORGEENTRYDATA                           m_mcNeutralData[0x8];                                     // 0x0584(0x0020)
	struct FUIFORGEENTRYDATA                           m_mcUpgradeData[0x8];                                     // 0x0684(0x0020)
	struct FPointer                                    m_mcEntryData;                                            // 0x0784(0x0008) (Native, Transient)
	class UGFxObject*                                  m_mcPlayerShardsGroup;                                    // 0x078C(0x0008)
	class UGFxObject*                                  m_mcPlayerShards;                                         // 0x0794(0x0008)
	class UGFxObject*                                  m_mcUpgradesLeftGroup;                                    // 0x079C(0x0008)
	class UGFxObject*                                  m_mcUpgradesLeft;                                         // 0x07A4(0x0008)
	class UGFxObject*                                  m_mcErrorMessage;                                         // 0x07AC(0x0008)
	class UGFxObject*                                  m_mcTooltip;                                              // 0x07B4(0x0008)
	class UGFxObject*                                  m_mcTooltipName;                                          // 0x07BC(0x0008)
	class UGFxObject*                                  m_mcTooltipType;                                          // 0x07C4(0x0008)
	class UGFxObject*                                  m_mcTooltipDesc;                                          // 0x07CC(0x0008)
	class UGFxObject*                                  m_mcTooltipIcon;                                          // 0x07D4(0x0008)
	class UGFxObject*                                  m_mcTooltipPanel;                                         // 0x07DC(0x0008)
	class UGFxObject*                                  m_mcTooltipCost;                                          // 0x07E4(0x0008)
	class UGFxObject*                                  m_mcTooltipError;                                         // 0x07EC(0x0008)
	class UGFxObject*                                  m_mcTooltipTime;                                          // 0x07F4(0x0008)
	class UGFxObject*                                  m_mcTooltipRarity;                                        // 0x07FC(0x0008)
	class UAkBaseSoundObject*                          m_akSelect;                                               // 0x0804(0x0008)
	class UAkBaseSoundObject*                          m_akForgeEnter;                                           // 0x080C(0x0008)
	unsigned long                                      m_bLTEDisableForgeClass : 1;                              // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableForgeNeutral : 1;                            // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableForgeUpgrades : 1;                           // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableForgeArmorPotions : 1;                       // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableForgeHealingPotions : 1;                     // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableForgeWeapons : 1;                            // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableForgeSupportAbilities : 1;                   // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableForgeOffensiveAbilities : 1;                 // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableForgeMovementAbilities : 1;                  // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableForgeRunes : 1;                              // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableForgeResurrection : 1;                       // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableUpgradeWeapons : 1;                          // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableUpgradeSupportAbilities : 1;                 // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableUpgradeOffensiveAbilities : 1;               // 0x0814(0x0004)
	unsigned long                                      m_bLTEDisableUpgradeMovementAbilities : 1;                // 0x0814(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudForge");
		return ptr;
	}

};


// Class TgClient.UIHudInventory
// 0x0388 (0x05CC - 0x0244)
class UUIHudInventory : public UTgGfxScene
{
public:
	int                                                m_nScrollIndex;                                           // 0x0244(0x0004)
	int                                                m_nRunes[0x6];                                            // 0x0248(0x0004)
	int                                                m_nPotion[0x2];                                           // 0x0260(0x0004)
	int                                                m_nWeapon[0x2];                                           // 0x0268(0x0004)
	int                                                m_nAbility[0x2];                                          // 0x0270(0x0004)
	unsigned long                                      m_bPolymorphedWhenOpening : 1;                            // 0x0278(0x0004)
	class UAkBaseSoundObject*                          m_akDropItem;                                             // 0x027C(0x0008)
	class UGFxObject*                                  m_mcBack;                                                 // 0x0284(0x0008)
	class UGFxObject*                                  m_mcLine;                                                 // 0x028C(0x0008)
	class UGFxObject*                                  m_mcHeader;                                               // 0x0294(0x0008)
	class UGFxObject*                                  m_mcBlocker;                                              // 0x029C(0x0008)
	class UGFxObject*                                  m_mcScrollBar;                                            // 0x02A4(0x0008)
	class UGFxObject*                                  m_mcSwap[0x2];                                            // 0x02AC(0x0008)
	class UGFxObject*                                  m_mcTitle[0x4];                                           // 0x02BC(0x0008)
	class UInputGroup*                                 m_pInventoryInputGroup;                                   // 0x02DC(0x0008)
	class UGFxObject*                                  m_mcRune[0x6];                                            // 0x02E4(0x0008)
	class UGFxObject*                                  m_mcRuneIcon[0x6];                                        // 0x0314(0x0008)
	class UGFxObject*                                  m_mcRuneName[0x6];                                        // 0x0344(0x0008)
	class UGFxObject*                                  m_mcRuneDesc[0x6];                                        // 0x0374(0x0008)
	class UGFxObject*                                  m_mcRuneFrame[0x6];                                       // 0x03A4(0x0008)
	class UGFxObject*                                  m_mcWeapon[0x2];                                          // 0x03D4(0x0008)
	class UGFxObject*                                  m_mcWeaponDrop[0x2];                                      // 0x03E4(0x0008)
	class UGFxObject*                                  m_mcWeaponIcon[0x2];                                      // 0x03F4(0x0008)
	class UGFxObject*                                  m_mcWeaponLine[0x2];                                      // 0x0404(0x0008)
	class UGFxObject*                                  m_mcWeaponName[0x2];                                      // 0x0414(0x0008)
	class UGFxObject*                                  m_mcWeaponType[0x2];                                      // 0x0424(0x0008)
	class UGFxObject*                                  m_mcWeaponClass[0x2];                                     // 0x0434(0x0008)
	class UGFxObject*                                  m_mcWeaponDescA[0x2];                                     // 0x0444(0x0008)
	class UGFxObject*                                  m_mcWeaponDescB[0x2];                                     // 0x0454(0x0008)
	class UGFxObject*                                  m_mcWeaponFrame[0x2];                                     // 0x0464(0x0008)
	class UGFxObject*                                  m_mcWeaponImage[0x2];                                     // 0x0474(0x0008)
	class UGFxObject*                                  m_mcWeaponRarity[0x2];                                    // 0x0484(0x0008)
	class UGFxObject*                                  m_mcWeaponElement[0x2];                                   // 0x0494(0x0008)
	class UGFxObject*                                  m_mcAbility[0x2];                                         // 0x04A4(0x0008)
	class UGFxObject*                                  m_mcAbilityDrop[0x2];                                     // 0x04B4(0x0008)
	class UGFxObject*                                  m_mcAbilityIcon[0x2];                                     // 0x04C4(0x0008)
	class UGFxObject*                                  m_mcAbilityLine[0x2];                                     // 0x04D4(0x0008)
	class UGFxObject*                                  m_mcAbilityName[0x2];                                     // 0x04E4(0x0008)
	class UGFxObject*                                  m_mcAbilityType[0x2];                                     // 0x04F4(0x0008)
	class UGFxObject*                                  m_mcAbilityDesc[0x2];                                     // 0x0504(0x0008)
	class UGFxObject*                                  m_mcAbilityClass[0x2];                                    // 0x0514(0x0008)
	class UGFxObject*                                  m_mcAbilityFrame[0x2];                                    // 0x0524(0x0008)
	class UGFxObject*                                  m_mcAbilityImage[0x2];                                    // 0x0534(0x0008)
	class UGFxObject*                                  m_mcPotion[0x2];                                          // 0x0544(0x0008)
	class UGFxObject*                                  m_mcPotionIcon[0x2];                                      // 0x0554(0x0008)
	class UGFxObject*                                  m_mcPotionLine[0x2];                                      // 0x0564(0x0008)
	class UGFxObject*                                  m_mcPotionDrop[0x2];                                      // 0x0574(0x0008)
	class UGFxObject*                                  m_mcPotionName[0x2];                                      // 0x0584(0x0008)
	class UGFxObject*                                  m_mcPotionType[0x2];                                      // 0x0594(0x0008)
	class UGFxObject*                                  m_mcPotionDesc[0x2];                                      // 0x05A4(0x0008)
	class UGFxObject*                                  m_mcPotionCount[0x2];                                     // 0x05B4(0x0008)
	class UAkBaseSoundObject*                          m_scOpen;                                                 // 0x05C4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudInventory");
		return ptr;
	}

};


// Class TgClient.UIHudMap
// 0x05B4 (0x07F8 - 0x0244)
class UUIHudMap : public UTgGfxScene
{
public:
	int                                                m_nDepth;                                                 // 0x0244(0x0004)
	unsigned long                                      m_bScroll : 1;                                            // 0x0248(0x0004)
	unsigned long                                      m_bSnapFog : 1;                                           // 0x0248(0x0004)
	unsigned long                                      m_bInitMap : 1;                                           // 0x0248(0x0004)
	unsigned long                                      m_bHovering : 1;                                          // 0x0248(0x0004)
	unsigned long                                      m_bDirection : 1;                                         // 0x0248(0x0004)
	unsigned long                                      m_bWantsToPlaceWaypoint : 1;                              // 0x0248(0x0004)
	unsigned long                                      m_bWantsToRemoveWaypoint : 1;                             // 0x0248(0x0004)
	float                                              m_fSize;                                                  // 0x024C(0x0004)
	float                                              m_fRadius;                                                // 0x0250(0x0004)
	float                                              m_fCursorX;                                               // 0x0254(0x0004)
	float                                              m_fCursorY;                                               // 0x0258(0x0004)
	float                                              m_fOffsetX;                                               // 0x025C(0x0004)
	float                                              m_fOffsetY;                                               // 0x0260(0x0004)
	float                                              m_fPulseTimer;                                            // 0x0264(0x0004)
	float                                              m_fCursorRate;                                            // 0x0268(0x0004)
	float                                              m_fChestPulseIn;                                          // 0x026C(0x0004)
	float                                              m_fChestPulseIOut;                                        // 0x0270(0x0004)
	float                                              m_fDirectionTimer;                                        // 0x0274(0x0004)
	float                                              m_fCursorSafeBound;                                       // 0x0278(0x0004)
	float                                              m_fCursorPanBound;                                        // 0x027C(0x0004)
	float                                              m_fGamepadCursorX;                                        // 0x0280(0x0004)
	float                                              m_fGamepadCursorY;                                        // 0x0284(0x0004)
	float                                              m_fConvergeRadius;                                        // 0x0288(0x0004)
	float                                              m_fConvergeTarget;                                        // 0x028C(0x0004)
	float                                              m_fConvergeTargetX;                                       // 0x0290(0x0004)
	float                                              m_fConvergeTargetY;                                       // 0x0294(0x0004)
	struct FVector                                     m_vBoundsCenter;                                          // 0x0298(0x000C)
	struct FVector                                     m_vBoundsExtents;                                         // 0x02A4(0x000C)
	class UInputAction*                                m_pRightStickYAxis;                                       // 0x02B0(0x0008)
	class UInputAction*                                m_pRightStickXAxis;                                       // 0x02B8(0x0008)
	TArray<struct FUIPING_DATA>                        m_Forges;                                                 // 0x02C0(0x0010) (NeedCtorLink)
	TArray<struct FUIPING_DATA>                        m_Chests;                                                 // 0x02D0(0x0010) (NeedCtorLink)
	TArray<struct FUIPING_DATA>                        m_Catapults;                                              // 0x02E0(0x0010) (NeedCtorLink)
	TArray<struct FUIPING_DATA>                        m_NamedAreas;                                             // 0x02F0(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcMap;                                                  // 0x0300(0x0008)
	class UGFxObject*                                  m_mcMapFog;                                               // 0x0308(0x0008)
	class UGFxObject*                                  m_mcMapMask;                                              // 0x0310(0x0008)
	class UGFxObject*                                  m_mcMapRect;                                              // 0x0318(0x0008)
	class UGFxObject*                                  m_mcMapMaskRect;                                          // 0x0320(0x0008)
	class UGFxObject*                                  m_mcMapZoom;                                              // 0x0328(0x0008)
	class UGFxObject*                                  m_mcMapGroup;                                             // 0x0330(0x0008)
	class UGFxObject*                                  m_mcMapScroll;                                            // 0x0338(0x0008)
	class UGFxObject*                                  m_mcMapImage[0x3];                                        // 0x0340(0x0008)
	class UGFxObject*                                  m_mcMapRegion[0x5];                                       // 0x0358(0x0008)
	class UGFxObject*                                  m_mcMapInner;                                             // 0x0380(0x0008)
	class UGFxObject*                                  m_mcMapOuter;                                             // 0x0388(0x0008)
	class UGFxObject*                                  m_mcMapCursor;                                            // 0x0390(0x0008)
	class UGFxObject*                                  m_mcMapForges;                                            // 0x0398(0x0008)
	class UGFxObject*                                  m_mcMapZeppelinLine;                                      // 0x03A0(0x0008)
	class UGFxObject*                                  m_mcMapZeppelinA;                                         // 0x03A8(0x0008)
	class UGFxObject*                                  m_mcMapZeppelinB;                                         // 0x03B0(0x0008)
	class UGFxObject*                                  m_mcMapNamedAreas;                                        // 0x03B8(0x0008)
	class UGFxObject*                                  m_mcMapScrimmageDirection;                                // 0x03C0(0x0008)
	class UGFxObject*                                  m_mcMapScrimmageDirectionAnim;                            // 0x03C8(0x0008)
	class UGFxObject*                                  m_mcMapScrimmageDirectionLine;                            // 0x03D0(0x0008)
	class UGFxObject*                                  m_mcMapCursorLineX;                                       // 0x03D8(0x0008)
	class UGFxObject*                                  m_mcMapCursorLineY;                                       // 0x03E0(0x0008)
	class UGFxObject*                                  m_mcMapDirection;                                         // 0x03E8(0x0008)
	class UGFxObject*                                  m_mcMapDirectionAnim;                                     // 0x03F0(0x0008)
	class UGFxObject*                                  m_mcMapDirectionLine;                                     // 0x03F8(0x0008)
	class UGFxObject*                                  m_mcLegend;                                               // 0x0400(0x0008)
	class UGFxObject*                                  m_mcLocalPulse;                                           // 0x0408(0x0008)
	class UGFxObject*                                  m_mcLocalPlayer;                                          // 0x0410(0x0008)
	class UGFxObject*                                  m_mcCoordinates;                                          // 0x0418(0x0008)
	class UGFxObject*                                  m_mcWaypoint[0x6];                                        // 0x0420(0x0008)
	class UGFxObject*                                  m_mcCoordXA[0x8];                                         // 0x0450(0x0008)
	class UGFxObject*                                  m_mcCoordXB[0x8];                                         // 0x0490(0x0008)
	class UGFxObject*                                  m_mcCoordYA[0x8];                                         // 0x04D0(0x0008)
	class UGFxObject*                                  m_mcCoordYB[0x8];                                         // 0x0510(0x0008)
	class UGFxObject*                                  m_mcDailyQuests;                                          // 0x0550(0x0008)
	class UGFxObject*                                  m_mcQuestEntry[0x3];                                      // 0x0558(0x0008)
	class UGFxObject*                                  m_mcQuestMask[0x3];                                       // 0x0570(0x0008)
	class UGFxObject*                                  m_mcQuestTip[0x3];                                        // 0x0588(0x0008)
	class UGFxObject*                                  m_mcQuestComplete[0x3];                                   // 0x05A0(0x0008)
	class UGFxObject*                                  m_mcQuestFillBar[0x3];                                    // 0x05B8(0x0008)
	class UGFxObject*                                  m_mcQuestEntryBG[0x3];                                    // 0x05D0(0x0008)
	class UGFxObject*                                  m_mcQuestRewardText;                                      // 0x05E8(0x0008)
	class UGFxObject*                                  m_mcQuestReward1;                                         // 0x05F0(0x0008)
	class UGFxObject*                                  m_mcTeam[0x6];                                            // 0x05F8(0x0008)
	class UGFxObject*                                  m_mcAlliance[0x28];                                       // 0x0628(0x0008)
	class UGFxObject*                                  m_mcPlayer[0x6];                                          // 0x0768(0x0008)
	class UGFxObject*                                  m_mcPlayerMute[0x6];                                      // 0x0798(0x0008)
	class UGFxObject*                                  m_mcPlayerVoice[0x6];                                     // 0x07C8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudMap");
		return ptr;
	}


	void STATIC_AddNamedArea(class ATgNamedPOIActor* pPOI);
};


// Class TgClient.UIHudMap_Spectator
// 0x0684 (0x0E7C - 0x07F8)
class UUIHudMap_Spectator : public UUIHudMap
{
public:
	TArray<struct FUITASKFORCE_DATA>                   m_TaskforceData;                                          // 0x07F8(0x0010) (Native)
	class UGFxObject*                                  m_mcPlayers[0x64];                                        // 0x0808(0x0008)
	class UGFxObject*                                  m_mcTaskforceRefs[0x64];                                  // 0x0B28(0x0008)
	int                                                m_nTaskforceDisplayCount;                                 // 0x0E48(0x0004)
	class UGFxObject*                                  m_mcSpectator;                                            // 0x0E4C(0x0008)
	class UGFxObject*                                  m_mcColumns[0x4];                                         // 0x0E54(0x0008)
	int                                                m_nColumnCnt;                                             // 0x0E74(0x0004)
	int                                                m_nMaxTFPerColumn;                                        // 0x0E78(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudMap_Spectator");
		return ptr;
	}

};


// Class TgClient.UIHudMenu
// 0x0000 (0x0244 - 0x0244)
class UUIHudMenu : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudMenu");
		return ptr;
	}

};


// Class TgClient.UIHudMinimap
// 0x05B4 (0x07F8 - 0x0244)
class UUIHudMinimap : public UTgGfxScene
{
public:
	int                                                m_nDepth;                                                 // 0x0244(0x0004)
	int                                                m_nTeamsRemain;                                           // 0x0248(0x0004)
	int                                                m_nDeathFogTime;                                          // 0x024C(0x0004)
	int                                                m_nPreConvergeTime;                                       // 0x0250(0x0004)
	int                                                m_nAlertTimePrevious;                                     // 0x0254(0x0004)
	int                                                m_nRemain[0x2];                                           // 0x0258(0x0004)
	int                                                m_nLeaderboard[0x3];                                      // 0x0260(0x0004)
	unsigned long                                      m_bInit : 1;                                              // 0x026C(0x0004)
	unsigned long                                      m_bSnap : 1;                                              // 0x026C(0x0004)
	unsigned long                                      m_bDirection : 1;                                         // 0x026C(0x0004)
	unsigned long                                      m_bShowAlert : 1;                                         // 0x026C(0x0004)
	unsigned long                                      m_bShowHealth : 1;                                        // 0x026C(0x0004)
	unsigned long                                      m_bAnimateAlert : 1;                                      // 0x026C(0x0004)
	unsigned long                                      m_bFirstConverge : 1;                                     // 0x026C(0x0004)
	unsigned long                                      m_bDeathFogSpawned : 1;                                   // 0x026C(0x0004)
	unsigned long                                      m_bFirstPreConverge : 1;                                  // 0x026C(0x0004)
	unsigned long                                      m_bMinimapShouldShow : 1;                                 // 0x026C(0x0004)
	unsigned long                                      m_bDisableTextScaling : 1;                                // 0x026C(0x0004)
	unsigned long                                      m_bResurrecting : 1;                                      // 0x026C(0x0004)
	float                                              m_fSize;                                                  // 0x0270(0x0004)
	float                                              m_fRadius;                                                // 0x0274(0x0004)
	float                                              m_fOffsetX;                                               // 0x0278(0x0004)
	float                                              m_fOffsetY;                                               // 0x027C(0x0004)
	float                                              m_fGameTime;                                              // 0x0280(0x0004)
	float                                              m_fAlertTimer;                                            // 0x0284(0x0004)
	float                                              m_fDirectionTimer;                                        // 0x0288(0x0004)
	float                                              m_fChestPulseIn;                                          // 0x028C(0x0004)
	float                                              m_fChestPulseIOut;                                        // 0x0290(0x0004)
	float                                              m_fConvergeRadius;                                        // 0x0294(0x0004)
	float                                              m_fConvergeTarget;                                        // 0x0298(0x0004)
	float                                              m_fConvergeTargetX;                                       // 0x029C(0x0004)
	float                                              m_fConvergeTargetY;                                       // 0x02A0(0x0004)
	float                                              m_fConvergeStartSize;                                     // 0x02A4(0x0004)
	float                                              m_fResurrectionTimer;                                     // 0x02A8(0x0004)
	float                                              m_fTotalResurrectionTime;                                 // 0x02AC(0x0004)
	float                                              m_fLootGoblinSpawnedTimer;                                // 0x02B0(0x0004)
	float                                              m_fTotalLootGoblinSpawnedTime;                            // 0x02B4(0x0004)
	float                                              m_fHealth[0x2];                                           // 0x02B8(0x0004)
	struct FString                                     m_sForgeName;                                             // 0x02C0(0x0010) (NeedCtorLink)
	struct FString                                     m_sNamedAreaName;                                         // 0x02D0(0x0010) (NeedCtorLink)
	struct FString                                     m_sAlertTitle;                                            // 0x02E0(0x0010) (NeedCtorLink)
	struct FVector                                     m_vBoundsCenter;                                          // 0x02F0(0x000C)
	struct FVector                                     m_vBoundsExtents;                                         // 0x02FC(0x000C)
	TArray<struct FUIPING_DATA>                        m_Chests;                                                 // 0x0308(0x0010) (NeedCtorLink)
	TArray<struct FUIPING_DATA>                        m_Forges;                                                 // 0x0318(0x0010) (NeedCtorLink)
	TArray<struct FUIPING_DATA>                        m_Catapults;                                              // 0x0328(0x0010) (NeedCtorLink)
	TArray<struct FUIPING_DATA>                        m_NamedAreas;                                             // 0x0338(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcMap;                                                  // 0x0348(0x0008)
	class UGFxObject*                                  m_mcMapBackground;                                        // 0x0350(0x0008)
	class UGFxObject*                                  m_mcMapFog;                                               // 0x0358(0x0008)
	class UGFxObject*                                  m_mcMapMask;                                              // 0x0360(0x0008)
	class UGFxObject*                                  m_mcMapRect;                                              // 0x0368(0x0008)
	class UGFxObject*                                  m_mcMapMaskRect;                                          // 0x0370(0x0008)
	class UGFxObject*                                  m_mcMapFrame;                                             // 0x0378(0x0008)
	class UGFxObject*                                  m_mcMapInner;                                             // 0x0380(0x0008)
	class UGFxObject*                                  m_mcMapOuter;                                             // 0x0388(0x0008)
	class UGFxObject*                                  m_mcMapChests;                                            // 0x0390(0x0008)
	class UGFxObject*                                  m_mcMapDirection;                                         // 0x0398(0x0008)
	class UGFxObject*                                  m_mcMapDirectionWaypoint;                                 // 0x03A0(0x0008)
	class UGFxObject*                                  m_mcMapDirectionDistance;                                 // 0x03A8(0x0008)
	class UGFxObject*                                  m_mcMapDirectionDistanceTF[0x2];                          // 0x03B0(0x0008)
	class UGFxObject*                                  m_mcMapDirectionAnim;                                     // 0x03C0(0x0008)
	class UGFxObject*                                  m_mcMapDirectionLine;                                     // 0x03C8(0x0008)
	class UGFxObject*                                  m_mcMapZeppelinA;                                         // 0x03D0(0x0008)
	class UGFxObject*                                  m_mcMapNamedAreas;                                        // 0x03D8(0x0008)
	class UGFxObject*                                  m_mcMapScrimmageDirection;                                // 0x03E0(0x0008)
	class UGFxObject*                                  m_mcMapScrimmageDirectionAnim;                            // 0x03E8(0x0008)
	class UGFxObject*                                  m_mcMapScrimmageDirectionLine;                            // 0x03F0(0x0008)
	class UGFxObject*                                  m_mcMapImage[0x3];                                        // 0x03F8(0x0008)
	class UGFxObject*                                  m_mcLocalPlayer;                                          // 0x0410(0x0008)
	class UGFxObject*                                  m_mcTeam[0x6];                                            // 0x0418(0x0008)
	class UGFxObject*                                  m_mcAlliance[0x28];                                       // 0x0448(0x0008)
	class UGFxObject*                                  m_mcWaypoint[0x6];                                        // 0x0588(0x0008)
	class UGFxObject*                                  m_mcLeaderboard[0x3];                                     // 0x05B8(0x0008)
	class UGFxObject*                                  m_mcTime;                                                 // 0x05D0(0x0008)
	class UGFxObject*                                  m_mcTeamsRemain;                                          // 0x05D8(0x0008)
	class UGFxObject*                                  m_mcRemain[0x2];                                          // 0x05E0(0x0008)
	class UGFxObject*                                  m_mcHealth[0x2];                                          // 0x05F0(0x0008)
	class UGFxObject*                                  m_mcHealthBar[0x2];                                       // 0x0600(0x0008)
	class UGFxObject*                                  m_mcAlert;                                                // 0x0610(0x0008)
	class UGFxObject*                                  m_mcAlertIcon;                                            // 0x0618(0x0008)
	class UGFxObject*                                  m_mcAlertMini;                                            // 0x0620(0x0008)
	class UGFxObject*                                  m_mcAlertMiniBar;                                         // 0x0628(0x0008)
	class UGFxObject*                                  m_mcAlertMiniBarTip;                                      // 0x0630(0x0008)
	class UGFxObject*                                  m_mcAlertMiniFlash;                                       // 0x0638(0x0008)
	class UGFxObject*                                  m_mcAlertMiniFog;                                         // 0x0640(0x0008)
	class UGFxObject*                                  m_mcAlertMiniIcon;                                        // 0x0648(0x0008)
	class UGFxObject*                                  m_mcDailyQuests;                                          // 0x0650(0x0008)
	class UGFxObject*                                  m_mcQuestEntry[0x3];                                      // 0x0658(0x0008)
	class UGFxObject*                                  m_mcQuestMask[0x3];                                       // 0x0670(0x0008)
	class UGFxObject*                                  m_mcQuestTip[0x3];                                        // 0x0688(0x0008)
	class UGFxObject*                                  m_mcQuestComplete[0x3];                                   // 0x06A0(0x0008)
	class UGFxObject*                                  m_mcQuestFillBar[0x3];                                    // 0x06B8(0x0008)
	class UGFxObject*                                  m_mcQuestEntryBG[0x3];                                    // 0x06D0(0x0008)
	class UGFxObject*                                  m_mcQuestRewardText;                                      // 0x06E8(0x0008)
	class UGFxObject*                                  m_mcQuestReward1;                                         // 0x06F0(0x0008)
	class UGFxObject*                                  m_mcQuestCompleteNotify;                                  // 0x06F8(0x0008)
	class UGFxObject*                                  m_mcResurrectionNotify;                                   // 0x0700(0x0008)
	class UGFxObject*                                  m_mcResurrectionMini;                                     // 0x0708(0x0008)
	class UGFxObject*                                  m_mcResurrectionMiniBar;                                  // 0x0710(0x0008)
	class UGFxObject*                                  m_mcPOIMessage;                                           // 0x0718(0x0008)
	class UGFxObject*                                  m_mcPOIText0;                                             // 0x0720(0x0008)
	class UGFxObject*                                  m_mcPOIText1;                                             // 0x0728(0x0008)
	struct FString                                     m_sCurrentPOIName;                                        // 0x0730(0x0010) (NeedCtorLink)
	struct FString                                     m_sNextPOIName;                                           // 0x0740(0x0010) (NeedCtorLink)
	float                                              m_fPOITimer;                                              // 0x0750(0x0004)
	float                                              m_fPOIPreTime;                                            // 0x0754(0x0004)
	float                                              m_fPOIShowTime;                                           // 0x0758(0x0004)
	float                                              m_fPOIPostTime;                                           // 0x075C(0x0004)
	TEnumAsByte<EPOIMessageState>                      m_ePOIMessageState;                                       // 0x0760(0x0001)
	TEnumAsByte<EObjectiveClearState>                  m_eObjectiveClearState;                                   // 0x0761(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0762(0x0002) MISSED OFFSET
	class UGFxObject*                                  m_mcCurrentObjective;                                     // 0x0764(0x0008)
	class UGFxObject*                                  m_mcObjectives[0x5];                                      // 0x076C(0x0008)
	class UGFxObject*                                  m_mcObjectiveCheck[0x5];                                  // 0x0794(0x0008)
	class UGFxObject*                                  m_mcObjectiveText[0x5];                                   // 0x07BC(0x0008)
	int                                                m_nCurrentObjMessageId;                                   // 0x07E4(0x0004)
	int                                                m_nCurrentObjIndex;                                       // 0x07E8(0x0004)
	float                                              m_fClearObjectivesTimer;                                  // 0x07EC(0x0004)
	class UAkBaseSoundObject*                          m_akEnterPOI;                                             // 0x07F0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudMinimap");
		return ptr;
	}


	void AnimateObjectiveCheck(class UGFxObject* pCheck);
	void STATIC_AddNamedArea(class ATgNamedPOIActor* pPOI);
};


// Class TgClient.UIHudMinimap_Spectator
// 0x0320 (0x0B18 - 0x07F8)
class UUIHudMinimap_Spectator : public UUIHudMinimap
{
public:
	class UGFxObject*                                  m_mcPlayers[0x64];                                        // 0x07F8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudMinimap_Spectator");
		return ptr;
	}

};


// Class TgClient.UIHudOverlay
// 0x02A8 (0x04EC - 0x0244)
class UUIHudOverlay : public UTgGfxScene
{
public:
	unsigned long                                      ShowAllTeamAsParty : 1;                                   // 0x0244(0x0004) (Config)
	unsigned long                                      m_bBringToFrontProcessed : 1;                             // 0x0244(0x0004)
	unsigned long                                      m_bCanVault : 1;                                          // 0x0244(0x0004)
	unsigned long                                      m_bInteractingCatapult : 1;                               // 0x0244(0x0004)
	unsigned long                                      m_bEnteredCatapult : 1;                                   // 0x0244(0x0004)
	unsigned long                                      m_bShowPrompt : 1;                                        // 0x0244(0x0004)
	unsigned long                                      m_bTooltipVisible : 1;                                    // 0x0244(0x0004)
	unsigned long                                      m_bSpectatorShowPlayerIcons : 1;                          // 0x0244(0x0004)
	int                                                m_nDepth;                                                 // 0x0248(0x0004)
	int                                                m_nCritCount;                                             // 0x024C(0x0004)
	int                                                m_nLastTargetId;                                          // 0x0250(0x0004)
	unsigned char                                      m_ePickupSlot;                                            // 0x0254(0x0001)
	unsigned char                                      m_eLastTargetType;                                        // 0x0255(0x0001)
	TEnumAsByte<EDamageNumbersType>                    m_eDamageNumbersType;                                     // 0x0256(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0257(0x0001) MISSED OFFSET
	float                                              m_fDelta;                                                 // 0x0258(0x0004)
	float                                              m_fRange;                                                 // 0x025C(0x0004)
	float                                              m_fScreenLocInterp;                                       // 0x0260(0x0004)
	float                                              m_fWorldLocInterp;                                        // 0x0264(0x0004)
	float                                              m_fCritSpeed;                                             // 0x0268(0x0004)
	float                                              m_fCritBloom;                                             // 0x026C(0x0004)
	float                                              m_fCritTimer;                                             // 0x0270(0x0004)
	float                                              m_fDamageSpeed;                                           // 0x0274(0x0004)
	float                                              m_fDamageBloom;                                           // 0x0278(0x0004)
	float                                              m_fDamageTimer;                                           // 0x027C(0x0004)
	float                                              m_fDamageFadeOutDuration;                                 // 0x0280(0x0004)
	float                                              m_fStatusTimer;                                           // 0x0284(0x0004)
	float                                              m_fStatusSpeed;                                           // 0x0288(0x0004)
	float                                              m_fStatusBloom;                                           // 0x028C(0x0004)
	float                                              m_fHealingSpeed;                                          // 0x0290(0x0004)
	float                                              m_fHealingBloom;                                          // 0x0294(0x0004)
	float                                              m_fHealingTimer;                                          // 0x0298(0x0004)
	float                                              m_fResolutionModX;                                        // 0x029C(0x0004)
	float                                              m_fResolutionModY;                                        // 0x02A0(0x0004)
	float                                              m_fRarityFadeTimer;                                       // 0x02A4(0x0004)
	float                                              m_fSearchStartX;                                          // 0x02A8(0x0004)
	float                                              m_fSearchStartY;                                          // 0x02AC(0x0004)
	float                                              m_fSearchAlignOffset;                                     // 0x02B0(0x0004)
	float                                              m_fPromptAlignOffset;                                     // 0x02B4(0x0004)
	float                                              m_fPromptOffsetY;                                         // 0x02B8(0x0004)
	float                                              m_fPointerOffsetX;                                        // 0x02BC(0x0004)
	float                                              m_fPointerOffsetY;                                        // 0x02C0(0x0004)
	float                                              m_fOverlayDefaultPadding;                                 // 0x02C4(0x0004)
	float                                              m_fOverlayYOffset;                                        // 0x02C8(0x0004)
	float                                              m_fOverlayRenderDist;                                     // 0x02CC(0x0004)
	float                                              m_fOverlayXMin;                                           // 0x02D0(0x0004)
	float                                              m_fOverlayXMax;                                           // 0x02D4(0x0004)
	float                                              m_fOverlayYMin;                                           // 0x02D8(0x0004)
	float                                              m_fOverlayYMax;                                           // 0x02DC(0x0004)
	float                                              m_fReviveYOffset;                                         // 0x02E0(0x0004)
	float                                              m_fReviveAlphaMin;                                        // 0x02E4(0x0004)
	float                                              m_fReviveAlphaMax;                                        // 0x02E8(0x0004)
	float                                              m_fReviveAlphaMinDist;                                    // 0x02EC(0x0004)
	float                                              m_fReviveAlphaMaxDist;                                    // 0x02F0(0x0004)
	int                                                m_nCachedMaxShards;                                       // 0x02F4(0x0004)
	int                                                m_nLootDevice;                                            // 0x02F8(0x0004)
	class UGFxObject*                                  m_mcLoot;                                                 // 0x02FC(0x0008)
	class UGFxObject*                                  m_mcLootName;                                             // 0x0304(0x0008)
	class UGFxObject*                                  m_mcLootDesc;                                             // 0x030C(0x0008)
	class UGFxObject*                                  m_mcLootType;                                             // 0x0314(0x0008)
	class UGFxObject*                                  m_mcLootClass;                                            // 0x031C(0x0008)
	class UGFxObject*                                  m_mcLootFrame;                                            // 0x0324(0x0008)
	class UGFxObject*                                  m_mcLootIconA;                                            // 0x032C(0x0008)
	class UGFxObject*                                  m_mcLootIconB;                                            // 0x0334(0x0008)
	class UGFxObject*                                  m_mcLootIconFrameA;                                       // 0x033C(0x0008)
	class UGFxObject*                                  m_mcLootIconFrameB;                                       // 0x0344(0x0008)
	class UGFxObject*                                  m_mcLootIconTextureA;                                     // 0x034C(0x0008)
	class UGFxObject*                                  m_mcLootIconTextureB;                                     // 0x0354(0x0008)
	class UGFxObject*                                  m_mcLootElement;                                          // 0x035C(0x0008)
	class UGFxObject*                                  m_mcLootPromptA;                                          // 0x0364(0x0008)
	class UGFxObject*                                  m_mcLootPromptB;                                          // 0x036C(0x0008)
	class UGFxObject*                                  m_mcLootDamage;                                           // 0x0374(0x0008)
	class UGFxObject*                                  m_mcLootDamageName;                                       // 0x037C(0x0008)
	class UGFxObject*                                  m_mcLootDamageDesc;                                       // 0x0384(0x0008)
	class UGFxObject*                                  m_mcLootDamageArrow;                                      // 0x038C(0x0008)
	class UGFxObject*                                  m_mcPickup;                                               // 0x0394(0x0008)
	class UGFxObject*                                  m_mcScopes;                                               // 0x039C(0x0008)
	class UGFxObject*                                  m_mcScopeSniper;                                          // 0x03A4(0x0008)
	class UGFxObject*                                  m_mcScopeSniperFrame;                                     // 0x03AC(0x0008)
	class UGFxObject*                                  m_mcScopeSniperCrosshair;                                 // 0x03B4(0x0008)
	class UGFxObject*                                  m_mcSearch;                                               // 0x03BC(0x0008)
	class UGFxObject*                                  m_mcSearchKey;                                            // 0x03C4(0x0008)
	class UGFxObject*                                  m_mcSearchName;                                           // 0x03CC(0x0008)
	class UGFxObject*                                  m_mcIconVault;                                            // 0x03D4(0x0008)
	class UGFxObject*                                  m_mcPrompt;                                               // 0x03DC(0x0008)
	class UGFxObject*                                  m_mcBigHeadMode;                                          // 0x03E4(0x0008)
	class UGFxObject*                                  m_mcBigHeadModePrompt;                                    // 0x03EC(0x0008)
	TArray<struct FOverlayData>                        m_CritData;                                               // 0x03F4(0x0010) (NeedCtorLink)
	TArray<struct FOverlayData>                        m_LockData;                                               // 0x0404(0x0010) (NeedCtorLink)
	TArray<struct FOverlayData>                        m_ForgeData;                                              // 0x0414(0x0010) (NeedCtorLink)
	TArray<struct FDamageOverlayData>                  m_DamageData;                                             // 0x0424(0x0010) (NeedCtorLink)
	TArray<struct FOverlayData>                        m_StatusData;                                             // 0x0434(0x0010) (NeedCtorLink)
	TArray<struct FOverlayData>                        m_HealingData;                                            // 0x0444(0x0010) (NeedCtorLink)
	TArray<struct FOverlayData>                        m_RevivingData;                                           // 0x0454(0x0010) (NeedCtorLink)
	TArray<struct FOverlayData>                        m_LootGoblinData;                                         // 0x0464(0x0010) (NeedCtorLink)
	int                                                m_nCurrentPromptMessageId;                                // 0x0474(0x0004)
	class UGFxObject*                                  m_mcTutorialPrompt;                                       // 0x0478(0x0008)
	class UGFxObject*                                  m_mcTutorialPromptFrame;                                  // 0x0480(0x0008)
	int                                                m_nCurrentTooltipMessageId;                               // 0x0488(0x0004)
	class UGFxObject*                                  m_mcTooltip;                                              // 0x048C(0x0008)
	class UGFxObject*                                  m_mcTooltipText;                                          // 0x0494(0x0008)
	class UGFxObject*                                  m_mcTooltipBackground;                                    // 0x049C(0x0008)
	float                                              m_fMaxPingTime;                                           // 0x04A4(0x0004)
	TArray<struct FUIPingOverlay>                      m_PingOverlays;                                           // 0x04A8(0x0010) (NeedCtorLink)
	TArray<struct FUIPlayerOverlay>                    m_TeamOverlays;                                           // 0x04B8(0x0010) (NeedCtorLink)
	TArray<struct FUIPlayerOverlay>                    m_EnemyOverlays;                                          // 0x04C8(0x0010) (NeedCtorLink)
	class UAkBaseSoundObject*                          m_scPickup;                                               // 0x04D8(0x0008)
	class UAkBaseSoundObject*                          m_akForgeComplete;                                        // 0x04E0(0x0008)
	float                                              m_fDamageNumberCombineDuration;                           // 0x04E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudOverlay");
		return ptr;
	}


	float ScaleAdvancedDamage(struct FDamageOverlayData* Data);
	void AnimateAdvancedDamage(struct FDamageOverlayData* Data);
	void InitAdvancedDamage(bool bHeadShot, struct FDamageOverlayData* Data);
	void STATIC_OnForgeItemFinish();
	void STATIC_ShowScope(bool bShow, unsigned char eType);
};


// Class TgClient.UIHudOverlay_Spectator
// 0x0000 (0x04EC - 0x04EC)
class UUIHudOverlay_Spectator : public UUIHudOverlay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudOverlay_Spectator");
		return ptr;
	}

};


// Class TgClient.UIHudReport
// 0x0124 (0x0368 - 0x0244)
class UUIHudReport : public UTgGfxScene
{
public:
	int                                                m_nPlayerIndex;                                           // 0x0244(0x0004)
	unsigned long                                      m_bReasons : 1;                                           // 0x0248(0x0004)
	int                                                m_nReported[0x6];                                         // 0x024C(0x0004)
	int                                                m_nReportMessages[0x6];                                   // 0x0264(0x0004)
	class UGFxObject*                                  m_mcBack;                                                 // 0x027C(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0284(0x0008)
	class UGFxObject*                                  m_mcHeader;                                               // 0x028C(0x0008)
	class UGFxObject*                                  m_mcPlayers;                                              // 0x0294(0x0008)
	class UGFxObject*                                  m_mcPlayersKiller;                                        // 0x029C(0x0008)
	class UGFxObject*                                  m_mcPlayersTeammates;                                     // 0x02A4(0x0008)
	class UGFxObject*                                  m_mcPlayersReport[0x6];                                   // 0x02AC(0x0008)
	class UGFxObject*                                  m_mcPlayersButton[0x6];                                   // 0x02DC(0x0008)
	class UGFxObject*                                  m_mcReasons;                                              // 0x030C(0x0008)
	class UGFxObject*                                  m_mcReasonsInput;                                         // 0x0314(0x0008)
	class UGFxObject*                                  m_mcReasonsButton[0x6];                                   // 0x031C(0x0008)
	class UInputGroup*                                 m_pPlayersInputGroup;                                     // 0x034C(0x0008)
	class UInputGroup*                                 m_pReasonsInputGroup;                                     // 0x0354(0x0008)
	class UInputAction*                                m_pViewProfileAction;                                     // 0x035C(0x0008)
	int                                                m_nReportablePlayers;                                     // 0x0364(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudReport");
		return ptr;
	}

};


// Class TgClient.UIHudResultBG
// 0x00D8 (0x031C - 0x0244)
class UUIHudResultBG : public UTgGfxScene
{
public:
	int                                                m_nRank;                                                  // 0x0244(0x0004)
	int                                                m_nKills;                                                 // 0x0248(0x0004)
	int                                                m_nPlayer;                                                // 0x024C(0x0004)
	int                                                m_nTestRank;                                              // 0x0250(0x0004)
	unsigned long                                      m_bEliminated : 1;                                        // 0x0254(0x0004)
	unsigned long                                      m_bShownAlready : 1;                                      // 0x0254(0x0004)
	float                                              m_fBlurTimer;                                             // 0x0258(0x0004)
	float                                              m_fDisplayTimer;                                          // 0x025C(0x0004)
	float                                              m_fMinimizeTimer;                                         // 0x0260(0x0004)
	float                                              m_fDisappearTimer;                                        // 0x0264(0x0004)
	float                                              m_fMenuFocusTimer;                                        // 0x0268(0x0004)
	class UGFxObject*                                  m_mcPlayer;                                               // 0x026C(0x0008)
	class UGFxObject*                                  m_mcPlayerName;                                           // 0x0274(0x0008)
	class UGFxObject*                                  m_mcPlayerRank;                                           // 0x027C(0x0008)
	class UGFxObject*                                  m_mcPlayerFade;                                           // 0x0284(0x0008)
	class UGFxObject*                                  m_mcPlayerLineA;                                          // 0x028C(0x0008)
	class UGFxObject*                                  m_mcPlayerLineB;                                          // 0x0294(0x0008)
	class UGFxObject*                                  m_mcPlayerElims;                                          // 0x029C(0x0008)
	class UGFxObject*                                  m_mcPlayerKills;                                          // 0x02A4(0x0008)
	class UGFxObject*                                  m_mcPlayerKiller;                                         // 0x02AC(0x0008)
	class UGFxObject*                                  m_mcDefeat;                                               // 0x02B4(0x0008)
	class UGFxObject*                                  m_mcDefeatTitle;                                          // 0x02BC(0x0008)
	class UGFxObject*                                  m_mcDefeatFlags;                                          // 0x02C4(0x0008)
	class UGFxObject*                                  m_mcDefeatFrame;                                          // 0x02CC(0x0008)
	class UGFxObject*                                  m_mcButton[0x3];                                          // 0x02D4(0x0008)
	class UGFxObject*                                  m_mcVictory[0x3];                                         // 0x02EC(0x0008)
	class UGFxObject*                                  m_mcTutorialBanner;                                       // 0x0304(0x0008)
	class UGFxObject*                                  m_mcTutorialBackground;                                   // 0x030C(0x0008)
	class UInputGroup*                                 m_pMenuGroup;                                             // 0x0314(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudResultBG");
		return ptr;
	}

};


// Class TgClient.UIHudTop
// 0x0A54 (0x0C98 - 0x0244)
class UUIHudTop : public UTgGfxScene
{
public:
	int                                                m_nDirection;                                             // 0x0244(0x0004)
	int                                                m_nPerkCount;                                             // 0x0248(0x0004)
	int                                                m_nStartTime;                                             // 0x024C(0x0004)
	int                                                m_nDeployTime;                                            // 0x0250(0x0004)
	int                                                m_nDebuffCount;                                           // 0x0254(0x0004)
	int                                                m_nPrepareTime;                                           // 0x0258(0x0004)
	int                                                m_nPlayersAlive;                                          // 0x025C(0x0004)
	unsigned long                                      m_bShowAlert : 1;                                         // 0x0260(0x0004)
	float                                              m_fRotMax;                                                // 0x0264(0x0004)
	float                                              m_fTickMaxY;                                              // 0x0268(0x0004)
	float                                              m_fTickMinY;                                              // 0x026C(0x0004)
	float                                              m_fTickMinX;                                              // 0x0270(0x0004)
	float                                              m_fTickMaxX;                                              // 0x0274(0x0004)
	float                                              m_fModifierX;                                             // 0x0278(0x0004)
	float                                              m_fModifierY;                                             // 0x027C(0x0004)
	float                                              m_fPerkTimer;                                             // 0x0280(0x0004)
	float                                              m_fAliveTimer;                                            // 0x0284(0x0004)
	int                                                m_nEffectGroup[0x10];                                     // 0x0288(0x0004)
	int                                                m_nTickets[0x2];                                          // 0x02C8(0x0004)
	TArray<int>                                        m_nPerkQueue;                                             // 0x02D0(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcAlert;                                                // 0x02E0(0x0008)
	class UGFxObject*                                  m_mcAlertTitle;                                           // 0x02E8(0x0008)
	class UGFxObject*                                  m_mcAlertSubtitle;                                        // 0x02F0(0x0008)
	class UGFxObject*                                  m_mcRemaining;                                            // 0x02F8(0x0008)
	class UGFxObject*                                  m_mcDeploy;                                               // 0x0300(0x0008)
	class UGFxObject*                                  m_mcDeployTime;                                           // 0x0308(0x0008)
	class UGFxObject*                                  m_mcDeployPrompt;                                         // 0x0310(0x0008)
	class UGFxObject*                                  m_mcCompass;                                              // 0x0318(0x0008)
	class UGFxObject*                                  m_mcCompassCurrentPos;                                    // 0x0320(0x0008)
	class UGFxObject*                                  m_mcCompassWaypointSafety;                                // 0x0328(0x0008)
	class UGFxObject*                                  m_mcCompassText[0x18];                                    // 0x0330(0x0008)
	class UGFxObject*                                  m_mcCompassTicks[0x18];                                   // 0x03F0(0x0008)
	class UGFxObject*                                  m_mcWaypoints[0x6];                                       // 0x04B0(0x0008)
	class UGFxObject*                                  m_mcRealmWars;                                            // 0x04E0(0x0008)
	class UGFxObject*                                  m_mcRealmWarsTip[0x2];                                    // 0x04E8(0x0008)
	class UGFxObject*                                  m_mcRealmWarsBar[0x2];                                    // 0x04F8(0x0008)
	class UGFxObject*                                  m_mcRealmWarsScore[0x2];                                  // 0x0508(0x0008)
	class UGFxObject*                                  m_mcRealmWarsChange[0x2];                                 // 0x0518(0x0008)
	class UGFxObject*                                  m_mcRealmWarsRemain[0x2];                                 // 0x0528(0x0008)
	class UGFxObject*                                  m_mcRealmWarsAlliance[0x2];                               // 0x0538(0x0008)
	struct FUITEAMMATE                                 m_Teammate[0x6];                                          // 0x0548(0x011C)
	class UGFxObject*                                  m_mcDebuff[0x3];                                          // 0x0BF0(0x0008)
	class UGFxObject*                                  m_mcDebuffTF[0x3];                                        // 0x0C08(0x0008)
	class UGFxObject*                                  m_mcDebuffIcon[0x3];                                      // 0x0C20(0x0008)
	class UGFxObject*                                  m_mcDebuffTimer[0x3];                                     // 0x0C38(0x0008)
	class UGFxObject*                                  m_mcDebuffTimerBar[0x3];                                  // 0x0C50(0x0008)
	class UGFxObject*                                  m_mcPerk;                                                 // 0x0C68(0x0008)
	class UGFxObject*                                  m_mcPerkIcon;                                             // 0x0C70(0x0008)
	class UGFxObject*                                  m_mcPerkName;                                             // 0x0C78(0x0008)
	class UGFxObject*                                  m_mcPerkDesc;                                             // 0x0C80(0x0008)
	class UGFxObject*                                  m_mcPerkFrame;                                            // 0x0C88(0x0008)
	struct FUniqueNetId                                m_LocalPlayerNetId;                                       // 0x0C90(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudTop");
		return ptr;
	}

};


// Class TgClient.UIHudTop_Spectator
// 0x0000 (0x0C98 - 0x0C98)
class UUIHudTop_Spectator : public UUIHudTop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudTop_Spectator");
		return ptr;
	}

};


// Class TgClient.UIHudVGS
// 0x01BC (0x0400 - 0x0244)
class UUIHudVGS : public UTgGfxScene
{
public:
	class UGFxObject*                                  m_Label[0xE];                                             // 0x0244(0x0008)
	class UGFxObject*                                  m_Keybind[0xE];                                           // 0x02B4(0x0008)
	class UGFxObject*                                  m_ListItem[0xE];                                          // 0x0324(0x0008)
	class UGFxObject*                                  m_GamepadItem[0x6];                                       // 0x0394(0x0008)
	class UGFxObject*                                  m_FramePC;                                                // 0x03C4(0x0008)
	class UGFxObject*                                  m_FrameConsole;                                           // 0x03CC(0x0008)
	class UUIHudVGSData*                               m_pRootPC;                                                // 0x03D4(0x0008)
	class UUIHudVGSData*                               m_pRootConsole;                                           // 0x03DC(0x0008)
	class UUIHudVGSData*                               m_pCurrent;                                               // 0x03E4(0x0008)
	unsigned long                                      m_bIsGamepadSequence : 1;                                 // 0x03EC(0x0004)
	TArray<struct FName>                               m_ActiveKeys;                                             // 0x03F0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudVGS");
		return ptr;
	}

};


// Class TgClient.UIHudVoiceChat
// 0x01A8 (0x03EC - 0x0244)
class UUIHudVoiceChat : public UTgGfxScene
{
public:
	float                                              m_fAlphaSpeaking;                                         // 0x0244(0x0004)
	float                                              m_fAlphaNotSpeaking;                                      // 0x0248(0x0004)
	float                                              m_fAlphaMuted;                                            // 0x024C(0x0004)
	float                                              m_fFadeTime;                                              // 0x0250(0x0004)
	class UGFxObject*                                  m_mcAllyPlayers[0x5];                                     // 0x0254(0x0008)
	class UGFxObject*                                  m_mcAllyPlayerLabels[0x5];                                // 0x027C(0x0008)
	class UGFxObject*                                  m_mcAllyPlayerSpeakIcons[0x5];                            // 0x02A4(0x0008)
	class UGFxObject*                                  m_mcAllyPlayerIcons[0x5];                                 // 0x02CC(0x0008)
	class UGFxObject*                                  m_mcEnemyPlayers[0x5];                                    // 0x02F4(0x0008)
	class UGFxObject*                                  m_mcEnemyPlayerLabels[0x5];                               // 0x031C(0x0008)
	class UGFxObject*                                  m_mcEnemyPlayerSpeakIcons[0x5];                           // 0x0344(0x0008)
	class UGFxObject*                                  m_mcEnemyPlayerIcons[0x5];                                // 0x036C(0x0008)
	struct FName                                       m_nmAllyPlayerIcons[0x5];                                 // 0x0394(0x0008)
	struct FName                                       m_nmEnemyPlayerIcons[0x5];                                // 0x03BC(0x0008)
	struct FUniqueNetId                                m_LocalPlayerNetId;                                       // 0x03E4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIHudVoiceChat");
		return ptr;
	}

};


// Class TgClient.UIInputPopup
// 0x0000 (0x0244 - 0x0244)
class UUIInputPopup : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIInputPopup");
		return ptr;
	}

};


// Class TgClient.UIJoinCustomPopup
// 0x005C (0x02A0 - 0x0244)
class UUIJoinCustomPopup : public UTgGfxScene
{
public:
	unsigned long                                      m_bHaveInput : 1;                                         // 0x0244(0x0004)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0248(0x0008)
	class UGFxObject*                                  m_mcError;                                                // 0x0250(0x0008)
	class UGFxObject*                                  m_mcMatchNameTF;                                          // 0x0258(0x0008)
	class UGFxObject*                                  m_mcInputMatchName;                                       // 0x0260(0x0008)
	class UGFxObject*                                  m_mcPasswordTF;                                           // 0x0268(0x0008)
	class UGFxObject*                                  m_mcInputPass;                                            // 0x0270(0x0008)
	class UGFxObject*                                  m_mcInputJoin;                                            // 0x0278(0x0008)
	class UGFxObject*                                  m_mcDummyButtonMatch;                                     // 0x0280(0x0008)
	class UGFxObject*                                  m_mcDummyButtonPassword;                                  // 0x0288(0x0008)
	class UInputGroup*                                 m_pJoinCustomMatchInputGroup;                             // 0x0290(0x0008)
	class UUIData_CustomGame*                          m_pGameToJoin;                                            // 0x0298(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIJoinCustomPopup");
		return ptr;
	}

};


// Class TgClient.UIKeybindPopup
// 0x0000 (0x0244 - 0x0244)
class UUIKeybindPopup : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIKeybindPopup");
		return ptr;
	}

};


// Class TgClient.UILobbyChat
// 0x0054 (0x0298 - 0x0244)
class UUILobbyChat : public UTgGfxScene
{
public:
	int                                                m_nDepth;                                                 // 0x0244(0x0004)
	int                                                m_nPosition;                                              // 0x0248(0x0004)
	int                                                m_nOpenIdentity;                                          // 0x024C(0x0004)
	struct FString                                     m_sLocalTabName;                                          // 0x0250(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcArrow[0x2];                                           // 0x0260(0x0008)
	class UGFxObject*                                  m_mcArrowNotify[0x2];                                     // 0x0270(0x0008)
	TArray<class UUIChatTab*>                          m_mcTabs;                                                 // 0x0280(0x0010) (NeedCtorLink)
	class UAkBaseSoundObject*                          m_AkNewTabSound;                                          // 0x0290(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UILobbyChat");
		return ptr;
	}

};


// Class TgClient.UILogin
// 0x037C (0x05C0 - 0x0244)
class UUILogin : public UTgGfxScene
{
public:
	int                                                m_nLoginAttempts;                                         // 0x0244(0x0004)
	int                                                m_nScroll;                                                // 0x0248(0x0004)
	unsigned char                                      m_eState;                                                 // 0x024C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	unsigned long                                      m_bLoading : 1;                                           // 0x0250(0x0004)
	unsigned long                                      m_bHaveInput : 1;                                         // 0x0250(0x0004)
	unsigned long                                      m_bAgeConfirm : 1;                                        // 0x0250(0x0004)
	unsigned long                                      m_bBypassButtonOne : 1;                                   // 0x0250(0x0004)
	unsigned long                                      m_bBypassButtonTwo : 1;                                   // 0x0250(0x0004)
	float                                              m_fDiscoveryTime;                                         // 0x0254(0x0004)
	float                                              m_fDiscoveryTimer;                                        // 0x0258(0x0004)
	float                                              m_fAnimationTimer;                                        // 0x025C(0x0004)
	float                                              m_fFailTimer;                                             // 0x0260(0x0004)
	float                                              m_fFailDuration;                                          // 0x0264(0x0004)
	TArray<struct FString>                             m_sEULAText;                                              // 0x0268(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0278(0x0008)
	class UGFxObject*                                  m_mcVersion;                                              // 0x0280(0x0008)
	class UGFxObject*                                  m_mcEULA;                                                 // 0x0288(0x0008)
	class UGFxObject*                                  m_mcEULABuffer;                                           // 0x0290(0x0008)
	class UGFxObject*                                  m_mcEULAScroll;                                           // 0x0298(0x0008)
	class UGFxObject*                                  m_mcEULAText[0x15];                                       // 0x02A0(0x0008)
	class UGFxObject*                                  m_mcEULAButton[0x2];                                      // 0x0348(0x0008)
	class UGFxObject*                                  m_mcEULAPrompt[0x2];                                      // 0x0358(0x0008)
	class UGFxObject*                                  m_mcQueue;                                                // 0x0368(0x0008)
	class UGFxObject*                                  m_mcQueueDesc;                                            // 0x0370(0x0008)
	class UGFxObject*                                  m_mcQueueName;                                            // 0x0378(0x0008)
	class UGFxObject*                                  m_mcQueueButton;                                          // 0x0380(0x0008)
	class UGFxObject*                                  m_mcLoading;                                              // 0x0388(0x0008)
	class UGFxObject*                                  m_mcLoadingTF;                                            // 0x0390(0x0008)
	class UGFxObject*                                  m_mcLoadingFrame;                                         // 0x0398(0x0008)
	class UGFxObject*                                  m_mcLoadingAnimA;                                         // 0x03A0(0x0008)
	class UGFxObject*                                  m_mcLoadingAnimB;                                         // 0x03A8(0x0008)
	class UGFxObject*                                  m_mcCreatePlayer;                                         // 0x03B0(0x0008)
	class UGFxObject*                                  m_mcCreatePlayerError;                                    // 0x03B8(0x0008)
	class UGFxObject*                                  m_mcCreatePlayerInput;                                    // 0x03C0(0x0008)
	class UGFxObject*                                  m_mcCreatePlayerButton[0x2];                              // 0x03C8(0x0008)
	class UGFxObject*                                  m_mcManualLogin;                                          // 0x03D8(0x0008)
	class UGFxObject*                                  m_mcManualLoginError;                                     // 0x03E0(0x0008)
	class UGFxObject*                                  m_mcManualLoginButton;                                    // 0x03E8(0x0008)
	class UGFxObject*                                  m_mcManualLoginInput[0x2];                                // 0x03F0(0x0008)
	class UGFxObject*                                  m_mcManualLoginTitle[0x2];                                // 0x0400(0x0008)
	class UGFxObject*                                  m_mcConsoleLogin;                                         // 0x0410(0x0008)
	class UGFxObject*                                  m_mcConsoleLoginPrompt;                                   // 0x0418(0x0008)
	class UGFxObject*                                  m_mcConsoleLoginChangeUser;                               // 0x0420(0x0008)
	class UGFxObject*                                  m_mcLinkFactor;                                           // 0x0428(0x0008)
	class UGFxObject*                                  m_mcLinkFactorError;                                      // 0x0430(0x0008)
	class UGFxObject*                                  m_mcLinkFactorInput;                                      // 0x0438(0x0008)
	class UGFxObject*                                  m_mcLinkFactorButton[0x2];                                // 0x0440(0x0008)
	class UGFxObject*                                  m_mcLinkAccount;                                          // 0x0450(0x0008)
	class UGFxObject*                                  m_mcLinkAccountDesc;                                      // 0x0458(0x0008)
	class UGFxObject*                                  m_mcLinkAccountName;                                      // 0x0460(0x0008)
	class UGFxObject*                                  m_mcLinkAccountButton[0x3];                               // 0x0468(0x0008)
	class UGFxObject*                                  m_mcLinkWarning;                                          // 0x0480(0x0008)
	class UGFxObject*                                  m_mcLinkWarningDesc;                                      // 0x0488(0x0008)
	class UGFxObject*                                  m_mcLinkWarningName;                                      // 0x0490(0x0008)
	class UGFxObject*                                  m_mcLinkWarningButton[0x2];                               // 0x0498(0x0008)
	class UGFxObject*                                  m_mcLinkWarningPrompt[0x2];                               // 0x04A8(0x0008)
	class UGFxObject*                                  m_mcHirezCreate;                                          // 0x04B8(0x0008)
	class UGFxObject*                                  m_mcHirezCreateAge;                                       // 0x04C0(0x0008)
	class UGFxObject*                                  m_mcHirezCreateCheck;                                     // 0x04C8(0x0008)
	class UGFxObject*                                  m_mcHirezCreateError;                                     // 0x04D0(0x0008)
	class UGFxObject*                                  m_mcHirezCreateInput[0x4];                                // 0x04D8(0x0008)
	class UGFxObject*                                  m_mcHirezCreateTitle[0x4];                                // 0x04F8(0x0008)
	class UGFxObject*                                  m_mcHirezCreateKeyboard[0x4];                             // 0x0518(0x0008)
	class UGFxObject*                                  m_mcHirezCreateButton;                                    // 0x0538(0x0008)
	class UGFxObject*                                  m_mcHirezLogin;                                           // 0x0540(0x0008)
	class UGFxObject*                                  m_mcHirezLoginError;                                      // 0x0548(0x0008)
	class UGFxObject*                                  m_mcHirezLoginInput[0x2];                                 // 0x0550(0x0008)
	class UGFxObject*                                  m_mcHirezLoginTitle[0x2];                                 // 0x0560(0x0008)
	class UGFxObject*                                  m_mcHirezLoginKeyboard[0x2];                              // 0x0570(0x0008)
	class UGFxObject*                                  m_mcHirezLoginButton;                                     // 0x0580(0x0008)
	class UInputGroup*                                 m_pInputEULA;                                             // 0x0588(0x0008)
	class UInputGroup*                                 m_pInputLink;                                             // 0x0590(0x0008)
	class UInputGroup*                                 m_pInputLogin;                                            // 0x0598(0x0008)
	class UInputGroup*                                 m_pInputCreate;                                           // 0x05A0(0x0008)
	class UInputGroup*                                 m_pInputFactor;                                           // 0x05A8(0x0008)
	class UInputGroup*                                 m_pInputWarning;                                          // 0x05B0(0x0008)
	class UInputAction*                                m_pActionChangeUser;                                      // 0x05B8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UILogin");
		return ptr;
	}

};


// Class TgClient.UIMenuManager
// 0x0008 (0x024C - 0x0244)
class UUIMenuManager : public UTgGfxScene
{
public:
	class UUIComponent_PopupManager*                   m_pPopupManager;                                          // 0x0244(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIMenuManager");
		return ptr;
	}

};


// Class TgClient.UIPartyLobby
// 0x0000 (0x0244 - 0x0244)
class UUIPartyLobby : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIPartyLobby");
		return ptr;
	}

};


// Class TgClient.UIPatchNotes
// 0x00C4 (0x0308 - 0x0244)
class UUIPatchNotes : public UTgGfxScene
{
public:
	class UGFxObject*                                  m_mcHeader;                                               // 0x0244(0x0008)
	class UGFxObject*                                  m_mcHeaderTitle;                                          // 0x024C(0x0008)
	class UGFxObject*                                  m_mcPatchNotes;                                           // 0x0254(0x0008)
	class UGFxObject*                                  m_mcPatchNotesVersion;                                    // 0x025C(0x0008)
	class UGFxObject*                                  m_mcPatchNotesButton;                                     // 0x0264(0x0008)
	class UGFxObject*                                  m_mcPatchNotesButtonTF;                                   // 0x026C(0x0008)
	class UGFxObject*                                  m_mcPatchNotesButtonKey;                                  // 0x0274(0x0008)
	class UGFxObject*                                  m_mcPatchNotesButtonHighlight;                            // 0x027C(0x0008)
	class UGFxObject*                                  m_mcBanner;                                               // 0x0284(0x0008)
	class UGFxObject*                                  m_mcBannerColumn[0x3];                                    // 0x028C(0x0008)
	class UGFxObject*                                  m_mcBannerColumnTitle[0x3];                               // 0x02A4(0x0008)
	class UGFxObject*                                  m_mcBannerColumnDesc[0x3];                                // 0x02BC(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x02D4(0x0008)
	class UGFxObject*                                  m_mcIconTexture;                                          // 0x02DC(0x0008)
	class UGFxObject*                                  m_mcBlocker;                                              // 0x02E4(0x0008)
	class UInputGroup*                                 m_pOpenPatchNotesGroup;                                   // 0x02EC(0x0008)
	unsigned long                                      m_bShow : 1;                                              // 0x02F4(0x0004)
	struct FString                                     m_sExternalURL;                                           // 0x02F8(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIPatchNotes");
		return ptr;
	}

};


// Class TgClient.UIPlay
// 0x04B0 (0x06F4 - 0x0244)
class UUIPlay : public UTgGfxScene
{
public:
	int                                                m_nPreferredRegion;                                       // 0x0244(0x0004)
	int                                                m_nQueues[0x5];                                           // 0x0248(0x0004)
	int                                                m_nRank[0x5];                                             // 0x025C(0x0004)
	int                                                m_nWins[0x5];                                             // 0x0270(0x0004)
	int                                                m_nKills[0x5];                                            // 0x0284(0x0004)
	unsigned long                                      m_bPopup : 1;                                             // 0x0298(0x0004)
	unsigned long                                      m_bRegion : 1;                                            // 0x0298(0x0004)
	unsigned long                                      m_bExclusiveTeam : 1;                                     // 0x0298(0x0004)
	unsigned long                                      m_bFinishedTutorial : 1;                                  // 0x0298(0x0004)
	unsigned long                                      m_bRatings : 1;                                           // 0x0298(0x0004)
	unsigned long                                      m_bAnimatePanels : 1;                                     // 0x0298(0x0004)
	unsigned long                                      m_bSoloLTEActive : 1;                                     // 0x0298(0x0004)
	unsigned long                                      m_bDuoLTEActive : 1;                                      // 0x0298(0x0004)
	unsigned long                                      m_bSquadLTEActive : 1;                                    // 0x0298(0x0004)
	unsigned long                                      m_bInitLTEInfo : 1;                                       // 0x0298(0x0004)
	TArray<int>                                        m_nRegions;                                               // 0x029C(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_sRegionNames;                                           // 0x02AC(0x0010) (NeedCtorLink)
	struct FString                                     m_sLTETitles[0x3];                                        // 0x02BC(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcBack;                                                 // 0x02EC(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x02F4(0x0008)
	class UGFxObject*                                  m_mcHeader;                                               // 0x02FC(0x0008)
	class UGFxObject*                                  m_mcCrossplay;                                            // 0x0304(0x0008)
	class UGFxObject*                                  m_mcPanel[0x5];                                           // 0x030C(0x0008)
	class UGFxObject*                                  m_mcPanelName[0x5];                                       // 0x0334(0x0008)
	class UGFxObject*                                  m_mcPanelDesc[0x5];                                       // 0x035C(0x0008)
	class UGFxObject*                                  m_mcPanelIcon[0x5];                                       // 0x0384(0x0008)
	class UGFxObject*                                  m_mcPanelTime[0x5];                                       // 0x03AC(0x0008)
	class UGFxObject*                                  m_mcPanelTimeMask[0x5];                                   // 0x03D4(0x0008)
	class UGFxObject*                                  m_mcPanelTimeText[0x5];                                   // 0x03FC(0x0008)
	class UGFxObject*                                  m_mcPanelLTEBanner[0x5];                                  // 0x0424(0x0008)
	class UGFxObject*                                  m_mcPanelRankDetails[0x5];                                // 0x044C(0x0008)
	class UGFxObject*                                  m_mcPanelRankDetailsIcon[0x5];                            // 0x0474(0x0008)
	class UGFxObject*                                  m_mcPanelRankDetailsName[0x5];                            // 0x049C(0x0008)
	class UGFxObject*                                  m_mcPanelRankDetailsWins[0x5];                            // 0x04C4(0x0008)
	class UGFxObject*                                  m_mcPanelRankDetailsWinsTF[0x5];                          // 0x04EC(0x0008)
	class UGFxObject*                                  m_mcPanelRankDetailsKills[0x5];                           // 0x0514(0x0008)
	class UGFxObject*                                  m_mcPanelRankDetailsKillsTF[0x5];                         // 0x053C(0x0008)
	class UInputGroup*                                 m_pPlayPanelsGroup;                                       // 0x0564(0x0008)
	class UGFxObject*                                  m_mcOption[0x3];                                          // 0x056C(0x0008)
	class UGFxObject*                                  m_mcOptionName[0x3];                                      // 0x0584(0x0008)
	class UGFxObject*                                  m_mcOptionDesc[0x3];                                      // 0x059C(0x0008)
	class UInputGroup*                                 m_pPlayOptionsGroup;                                      // 0x05B4(0x0008)
	class UGFxObject*                                  m_mcPopup;                                                // 0x05BC(0x0008)
	class UGFxObject*                                  m_mcPopupBack;                                            // 0x05C4(0x0008)
	class UGFxObject*                                  m_mcPopupName;                                            // 0x05CC(0x0008)
	class UGFxObject*                                  m_mcPopupDesc;                                            // 0x05D4(0x0008)
	class UGFxObject*                                  m_mcPopupFrame;                                           // 0x05DC(0x0008)
	class UGFxObject*                                  m_mcPopupBlocker;                                         // 0x05E4(0x0008)
	class UInputGroup*                                 m_pPlayPopupGroup;                                        // 0x05EC(0x0008)
	class UGFxObject*                                  m_mcRegion;                                               // 0x05F4(0x0008)
	class UGFxObject*                                  m_mcRegionDesc;                                           // 0x05FC(0x0008)
	class UGFxObject*                                  m_mcRegionName;                                           // 0x0604(0x0008)
	class UGFxObject*                                  m_mcRegionBlocker;                                        // 0x060C(0x0008)
	class UGFxObject*                                  m_mcRegionCrossplay;                                      // 0x0614(0x0008)
	class UGFxObject*                                  m_mcRegionButton[0xC];                                    // 0x061C(0x0008)
	class UGFxObject*                                  m_mcRegionButtonIcon[0xC];                                // 0x067C(0x0008)
	class UInputGroup*                                 m_pRegionButtonGroup;                                     // 0x06DC(0x0008)
	class UInputAction*                                m_pInputHandleTeamFillX;                                  // 0x06E4(0x0008)
	class UInputAction*                                m_pInputHandleRegionY;                                    // 0x06EC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIPlay");
		return ptr;
	}

};


// Class TgClient.UIPopup
// 0x0000 (0x0244 - 0x0244)
class UUIPopup : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIPopup");
		return ptr;
	}

};


// Class TgClient.UIPopupRealMoneyPurchase
// 0x0000 (0x0244 - 0x0244)
class UUIPopupRealMoneyPurchase : public UUIPopup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIPopupRealMoneyPurchase");
		return ptr;
	}

};


// Class TgClient.UIPopupMatchFound
// 0x005C (0x02A0 - 0x0244)
class UUIPopupMatchFound : public UTgGfxScene
{
public:
	unsigned long                                      m_bAnim : 1;                                              // 0x0244(0x0004)
	float                                              m_fTime;                                                  // 0x0248(0x0004)
	float                                              m_fTimer;                                                 // 0x024C(0x0004)
	class UGFxObject*                                  m_mcDesc;                                                 // 0x0250(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x0258(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0260(0x0008)
	class UGFxObject*                                  m_mcTimer;                                                // 0x0268(0x0008)
	class UGFxObject*                                  m_mcPrompt[0x2];                                          // 0x0270(0x0008)
	class UGFxObject*                                  m_mcButton[0x2];                                          // 0x0280(0x0008)
	class UGFxObject*                                  m_mcBlocker;                                              // 0x0290(0x0008)
	class UInputGroup*                                 m_pInputGroup;                                            // 0x0298(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIPopupMatchFound");
		return ptr;
	}

};


// Class TgClient.UIPopupPartyManager
// 0x0000 (0x0244 - 0x0244)
class UUIPopupPartyManager : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIPopupPartyManager");
		return ptr;
	}

};


// Class TgClient.UIPopupPurchase
// 0x024C (0x0490 - 0x0244)
class UUIPopupPurchase : public UTgGfxScene
{
public:
	int                                                m_nOffset;                                                // 0x0244(0x0004)
	int                                                m_nLootId;                                                // 0x0248(0x0004)
	int                                                m_nVendor;                                                // 0x024C(0x0004)
	int                                                m_nHoverItem;                                             // 0x0250(0x0004)
	float                                              m_fWaitTimeout;                                           // 0x0254(0x0004)
	float                                              m_fPurchaseFlash;                                         // 0x0258(0x0004)
	float                                              m_fConfirmationTime;                                      // 0x025C(0x0004)
	float                                              m_fConfirmationTimer;                                     // 0x0260(0x0004)
	unsigned long                                      m_bControllerButtonHeld : 1;                              // 0x0264(0x0004)
	TArray<int>                                        m_nItems;                                                 // 0x0268(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcBlocker;                                              // 0x0278(0x0008)
	class UGFxObject*                                  m_mcPanel;                                                // 0x0280(0x0008)
	class UGFxObject*                                  m_mcPanelBack;                                            // 0x0288(0x0008)
	class UGFxObject*                                  m_mcPanelName;                                            // 0x0290(0x0008)
	class UGFxObject*                                  m_mcPanelDesc;                                            // 0x0298(0x0008)
	class UGFxObject*                                  m_mcPanelType;                                            // 0x02A0(0x0008)
	class UGFxObject*                                  m_mcPanelIcon;                                            // 0x02A8(0x0008)
	class UGFxObject*                                  m_mcPanelWait;                                            // 0x02B0(0x0008)
	class UGFxObject*                                  m_mcPanelTotal;                                           // 0x02B8(0x0008)
	class UGFxObject*                                  m_mcPanelTotalCrowns;                                     // 0x02C0(0x0008)
	class UGFxObject*                                  m_mcPanelTotalTrophies;                                   // 0x02C8(0x0008)
	class UGFxObject*                                  m_mcPanelHoverName;                                       // 0x02D0(0x0008)
	class UGFxObject*                                  m_mcPanelHoverDesc;                                       // 0x02D8(0x0008)
	class UGFxObject*                                  m_mcPanelCrowns;                                          // 0x02E0(0x0008)
	class UGFxObject*                                  m_mcPanelCrownsPurchase;                                  // 0x02E8(0x0008)
	class UGFxObject*                                  m_mcPanelCrownsPurchaseFlash;                             // 0x02F0(0x0008)
	class UGFxObject*                                  m_mcPanelCrownsPurchasePrice;                             // 0x02F8(0x0008)
	class UGFxObject*                                  m_mcPanelCrownsPurchasePriceDiscount;                     // 0x0300(0x0008)
	class UGFxObject*                                  m_mcPanelPurchaseHold;                                    // 0x0308(0x0008)
	class UGFxObject*                                  m_mcPanelPurchaseMask;                                    // 0x0310(0x0008)
	class UGFxObject*                                  m_mcPanelPurchaseKey;                                     // 0x0318(0x0008)
	class UGFxObject*                                  m_mcPanelPurchaseKeyHoldBack;                             // 0x0320(0x0008)
	class UGFxObject*                                  m_mcPanelTrophies;                                        // 0x0328(0x0008)
	class UGFxObject*                                  m_mcPanelTrophiesPurchase;                                // 0x0330(0x0008)
	class UGFxObject*                                  m_mcPanelTrophiesPurchaseFlash;                           // 0x0338(0x0008)
	class UGFxObject*                                  m_mcPanelTrophiesPurchasePrice;                           // 0x0340(0x0008)
	class UGFxObject*                                  m_mcPanelTrophiesPurchasePriceDiscount;                   // 0x0348(0x0008)
	class UGFxObject*                                  m_mcPanelArrow[0x2];                                      // 0x0350(0x0008)
	class UGFxObject*                                  m_mcItem[0x5];                                            // 0x0360(0x0008)
	class UGFxObject*                                  m_mcItemIcon[0x5];                                        // 0x0388(0x0008)
	class UGFxObject*                                  m_mcItemFrame[0x5];                                       // 0x03B0(0x0008)
	class UGFxObject*                                  m_mcItemActive[0x5];                                      // 0x03D8(0x0008)
	class UGFxObject*                                  m_mcItemRarity[0x5];                                      // 0x0400(0x0008)
	class UGFxObject*                                  m_mcItemTexture[0x5];                                     // 0x0428(0x0008)
	class UGFxObject*                                  m_mcItemIconFrame[0x5];                                   // 0x0450(0x0008)
	class UInputGroup*                                 m_pInputGroup;                                            // 0x0478(0x0008)
	class UInputGroup*                                 m_pPurchaseGroup;                                         // 0x0480(0x0008)
	class UAkBaseSoundObject*                          m_akPurchase;                                             // 0x0488(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIPopupPurchase");
		return ptr;
	}

};


// Class TgClient.UIProfileMini
// 0x00F0 (0x0334 - 0x0244)
class UUIProfileMini : public UTgGfxScene
{
public:
	int                                                m_nTitle;                                                 // 0x0244(0x0004)
	int                                                m_nCrowns;                                                // 0x0248(0x0004)
	int                                                m_nTrophies;                                              // 0x024C(0x0004)
	unsigned long                                      m_bSearching : 1;                                         // 0x0250(0x0004)
	unsigned long                                      m_bShowMinimize : 1;                                      // 0x0250(0x0004)
	class UGFxObject*                                  m_mcExit;                                                 // 0x0254(0x0008)
	class UGFxObject*                                  m_mcPlayer;                                               // 0x025C(0x0008)
	class UGFxObject*                                  m_mcPlayerTitle;                                          // 0x0264(0x0008)
	class UGFxObject*                                  m_mcMinimize;                                             // 0x026C(0x0008)
	class UGFxObject*                                  m_mcCrowns;                                               // 0x0274(0x0008)
	class UGFxObject*                                  m_mcCrownsText;                                           // 0x027C(0x0008)
	class UGFxObject*                                  m_mcCrownsButton;                                         // 0x0284(0x0008)
	class UGFxObject*                                  m_mcTrophies;                                             // 0x028C(0x0008)
	class UGFxObject*                                  m_mcTrophiesText;                                         // 0x0294(0x0008)
	class UGFxObject*                                  m_mcSearching;                                            // 0x029C(0x0008)
	class UGFxObject*                                  m_mcSearchingTitle;                                       // 0x02A4(0x0008)
	class UGFxObject*                                  m_mcSearchingSubtitle;                                    // 0x02AC(0x0008)
	class UGFxObject*                                  m_mcMember[0x4];                                          // 0x02B4(0x0008)
	class UGFxObject*                                  m_mcMemberIcon[0x4];                                      // 0x02D4(0x0008)
	class UGFxObject*                                  m_mcMemberLogo[0x4];                                      // 0x02F4(0x0008)
	class UGFxObject*                                  m_mcMemberFrame[0x4];                                     // 0x0314(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIProfileMini");
		return ptr;
	}

};


// Class TgClient.UIRadialMenu
// 0x0000 (0x0244 - 0x0244)
class UUIRadialMenu : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIRadialMenu");
		return ptr;
	}

};


// Class TgClient.UIRadialMenuLobby
// 0x0000 (0x0244 - 0x0244)
class UUIRadialMenuLobby : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIRadialMenuLobby");
		return ptr;
	}

};


// Class TgClient.UISafeFrame
// 0x0010 (0x0254 - 0x0244)
class UUISafeFrame : public UTgGfxScene
{
public:
	class UGFxObject*                                  m_mcAdjust;                                               // 0x0244(0x0008)
	class UGFxObject*                                  m_mcAccept;                                               // 0x024C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UISafeFrame");
		return ptr;
	}

};


// Class TgClient.UISettings
// 0x09A4 (0x0BE8 - 0x0244)
class UUISettings : public UTgGfxScene
{
public:
	class UUIComponent_Dropdown*                       m_ChampionDropdown;                                       // 0x0244(0x0008)
	int                                                m_eType;                                                  // 0x024C(0x0004)
	int                                                m_nHighlightOption;                                       // 0x0250(0x0004)
	int                                                m_nOptionCount;                                           // 0x0254(0x0004)
	int                                                m_nScrollIndex;                                           // 0x0258(0x0004)
	unsigned long                                      m_bOptionFocus : 1;                                       // 0x025C(0x0004)
	unsigned long                                      m_bKeybindFocus : 1;                                      // 0x025C(0x0004)
	unsigned long                                      m_bSettingsChanged : 1;                                   // 0x025C(0x0004)
	unsigned long                                      m_bIsInResetPrompt : 1;                                   // 0x025C(0x0004)
	unsigned long                                      m_bUseVSync : 1;                                          // 0x025C(0x0004)
	unsigned long                                      m_bUseD3D11 : 1;                                          // 0x025C(0x0004)
	float                                              m_fDelayTimer;                                            // 0x0260(0x0004)
	class UGFxObject*                                  m_Title;                                                  // 0x0264(0x0008)
	class UGFxObject*                                  m_Frame;                                                  // 0x026C(0x0008)
	class UGFxObject*                                  m_Reset;                                                  // 0x0274(0x0008)
	class UGFxObject*                                  m_mcBack;                                                 // 0x027C(0x0008)
	class UGFxObject*                                  m_Blocker;                                                // 0x0284(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x028C(0x0008)
	class UGFxObject*                                  m_mcHeader;                                               // 0x0294(0x0008)
	class UGFxObject*                                  m_mcHeaderGlow;                                           // 0x029C(0x0008)
	class UGFxObject*                                  m_KeybindPopup;                                           // 0x02A4(0x0008)
	class UGFxObject*                                  m_KeybindPopupTF;                                         // 0x02AC(0x0008)
	class UGFxObject*                                  m_KeybindCancel;                                          // 0x02B4(0x0008)
	struct FSettingOption                              m_Option[0xC];                                            // 0x02BC(0x0058)
	struct FKeybindOption                              m_Keybind[0xC];                                           // 0x06DC(0x0040)
	class UGFxObject*                                  m_ExitButton;                                             // 0x09DC(0x0008)
	class UGFxObject*                                  m_AcceptButton;                                           // 0x09E4(0x0008)
	class UGFxObject*                                  m_mcScrollBar;                                            // 0x09EC(0x0008)
	class UGFxObject*                                  m_mcHeaderButton[0x5];                                    // 0x09F4(0x0008)
	class UGFxObject*                                  m_mcHeaderButtonLine[0x5];                                // 0x0A1C(0x0008)
	class UGFxObject*                                  m_mcHeaderButtonGlow[0x5];                                // 0x0A44(0x0008)
	class UGFxObject*                                  m_mcHeaderButtonBounds[0x5];                              // 0x0A6C(0x0008)
	class UGFxObject*                                  m_mcHeaderButtonShadow[0x5];                              // 0x0A94(0x0008)
	class UGFxObject*                                  m_mcHeaderButtonSelected[0x5];                            // 0x0ABC(0x0008)
	class UGFxObject*                                  m_mcHeaderButtonHighlight[0x5];                           // 0x0AE4(0x0008)
	class UUIComponent_CTA*                            m_pHeaderButtonCTA[0x5];                                  // 0x0B0C(0x0008)
	class UInputGroup*                                 m_grOptions;                                              // 0x0B34(0x0008)
	class UInputGroup*                                 m_grKeybinds;                                             // 0x0B3C(0x0008)
	class UInputGroup*                                 m_grTeams;                                                // 0x0B44(0x0008)
	class UGFxObject*                                  m_mcGamepad;                                              // 0x0B4C(0x0008)
	class UGFxObject*                                  m_mcGamepadButtons;                                       // 0x0B54(0x0008)
	class UGFxObject*                                  m_mcGamepadImage;                                         // 0x0B5C(0x0008)
	class UGFxObject*                                  m_mcSafeFrame;                                            // 0x0B64(0x0008)
	class UInputAction*                                m_ResetToDefaultAction;                                   // 0x0B6C(0x0008)
	TArray<int>                                        m_DelayedUpdates;                                         // 0x0B74(0x0010) (NeedCtorLink)
	TArray<int>                                        m_VideoTypes;                                             // 0x0B84(0x0010) (NeedCtorLink)
	TArray<int>                                        m_HudTypes;                                               // 0x0B94(0x0010) (NeedCtorLink)
	TArray<int>                                        m_AudioTypes;                                             // 0x0BA4(0x0010) (NeedCtorLink)
	TArray<int>                                        m_ControlTypes;                                           // 0x0BB4(0x0010) (NeedCtorLink)
	int                                                m_nPressAndHoldSettingType;                               // 0x0BC4(0x0004)
	float                                              m_fPressAndHoldStartTimestamp;                            // 0x0BC8(0x0004)
	float                                              m_fPressAndHoldOldTimestamp;                              // 0x0BCC(0x0004)
	float                                              m_fPressAndHoldTimeoutTime;                               // 0x0BD0(0x0004)
	float                                              m_fPressAndHoldFastTime;                                  // 0x0BD4(0x0004)
	class UAkBaseSoundObject*                          m_akOption;                                               // 0x0BD8(0x0008)
	class UAkBaseSoundObject*                          m_akVolume;                                               // 0x0BE0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UISettings");
		return ptr;
	}

};


// Class TgClient.UIShop
// 0x0000 (0x0244 - 0x0244)
class UUIShop : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIShop");
		return ptr;
	}

};


// Class TgClient.UIShopCrowns
// 0x01F4 (0x0438 - 0x0244)
class UUIShopCrowns : public UTgGfxScene
{
public:
	float                                              m_fPurchaseFlash;                                         // 0x0244(0x0004)
	class UGFxObject*                                  m_mcBack;                                                 // 0x0248(0x0008)
	class UGFxObject*                                  m_mcName;                                                 // 0x0250(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0258(0x0008)
	class UGFxObject*                                  m_mcTotal;                                                // 0x0260(0x0008)
	class UGFxObject*                                  m_mcBlocker;                                              // 0x0268(0x0008)
	class UGFxObject*                                  m_mcTotalCrowns;                                          // 0x0270(0x0008)
	class UGFxObject*                                  m_mcItem[0x5];                                            // 0x0278(0x0008)
	class UGFxObject*                                  m_mcItemIcon[0x5];                                        // 0x02A0(0x0008)
	class UGFxObject*                                  m_mcItemName[0x5];                                        // 0x02C8(0x0008)
	class UGFxObject*                                  m_mcItemDesc[0x5];                                        // 0x02F0(0x0008)
	class UGFxObject*                                  m_mcItemCrowns[0x5];                                      // 0x0318(0x0008)
	class UGFxObject*                                  m_mcItemButton[0x5];                                      // 0x0340(0x0008)
	class UGFxObject*                                  m_mcItemButtonName[0x5];                                  // 0x0368(0x0008)
	class UGFxObject*                                  m_mcItemButtonDesc[0x5];                                  // 0x0390(0x0008)
	class UGFxObject*                                  m_mcItemButtonType[0x5];                                  // 0x03B8(0x0008)
	class UGFxObject*                                  m_mcItemButtonFlash[0x5];                                 // 0x03E0(0x0008)
	class UInputGroup*                                 m_pCrownBundleInputGroup;                                 // 0x0408(0x0008)
	class UAkBaseSoundObject*                          m_akCrownsTier1;                                          // 0x0410(0x0008)
	class UAkBaseSoundObject*                          m_akCrownsTier2;                                          // 0x0418(0x0008)
	class UAkBaseSoundObject*                          m_akCrownsTier3;                                          // 0x0420(0x0008)
	class UAkBaseSoundObject*                          m_akCrownsTier4;                                          // 0x0428(0x0008)
	class UAkBaseSoundObject*                          m_akCrownsTier5;                                          // 0x0430(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIShopCrowns");
		return ptr;
	}

};


// Class TgClient.UIShopPurchaseConfirm
// 0x0000 (0x0244 - 0x0244)
class UUIShopPurchaseConfirm : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIShopPurchaseConfirm");
		return ptr;
	}

};


// Class TgClient.UIShopRedeem
// 0x0060 (0x02A4 - 0x0244)
class UUIShopRedeem : public UTgGfxScene
{
public:
	unsigned long                                      m_bCanRedeem : 1;                                         // 0x0244(0x0004)
	float                                              m_fWaitTimeout;                                           // 0x0248(0x0004)
	class UGFxObject*                                  m_mcName;                                                 // 0x024C(0x0008)
	class UGFxObject*                                  m_mcDesc;                                                 // 0x0254(0x0008)
	class UGFxObject*                                  m_mcWait;                                                 // 0x025C(0x0008)
	class UGFxObject*                                  m_mcError;                                                // 0x0264(0x0008)
	class UGFxObject*                                  m_mcInput;                                                // 0x026C(0x0008)
	class UGFxObject*                                  m_mcBlocker;                                              // 0x0274(0x0008)
	class UGFxObject*                                  m_mcSuccess;                                              // 0x027C(0x0008)
	class UGFxObject*                                  m_mcButton[0x2];                                          // 0x0284(0x0008)
	class UInputGroup*                                 m_pRedeemGroup;                                           // 0x0294(0x0008)
	class UInputAction*                                m_pInputHandleSubmitRedeem;                               // 0x029C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIShopRedeem");
		return ptr;
	}

};


// Class TgClient.UISocial
// 0x0760 (0x09A4 - 0x0244)
class UUISocial : public UTgGfxScene
{
public:
	int                                                m_nPage;                                                  // 0x0244(0x0004)
	int                                                m_nPartySize;                                             // 0x0248(0x0004)
	unsigned long                                      m_bAllowInvite : 1;                                       // 0x024C(0x0004)
	unsigned long                                      m_bSearching : 1;                                         // 0x024C(0x0004)
	unsigned char                                      m_eTabState;                                              // 0x0250(0x0001)
	unsigned char                                      m_ePopupState;                                            // 0x0251(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0252(0x0002) MISSED OFFSET
	float                                              m_fFadeTime;                                              // 0x0254(0x0004)
	float                                              m_fFadeTimer;                                             // 0x0258(0x0004)
	float                                              m_fSearchTime;                                            // 0x025C(0x0004)
	float                                              m_fUpdateTime;                                            // 0x0260(0x0004)
	float                                              m_fSearchTimer;                                           // 0x0264(0x0004)
	float                                              m_fUpdateTimer;                                           // 0x0268(0x0004)
	class UUIDataPlayer*                               m_pPopupPlayer;                                           // 0x026C(0x0008)
	class UGFxObject*                                  m_mcHeader;                                               // 0x0274(0x0008)
	class UGFxObject*                                  m_mcHeaderActive;                                         // 0x027C(0x0008)
	class UGFxObject*                                  m_mcHeaderKey[0x2];                                       // 0x0284(0x0008)
	class UGFxObject*                                  m_mcHeaderTab[0x2];                                       // 0x0294(0x0008)
	class UGFxObject*                                  m_mcHeaderTabCTA[0x2];                                    // 0x02A4(0x0008)
	class UGFxObject*                                  m_mcHeaderTabLine[0x2];                                   // 0x02B4(0x0008)
	class UGFxObject*                                  m_mcHeaderTabBounds[0x2];                                 // 0x02C4(0x0008)
	class UGFxObject*                                  m_mcHeaderTabSelect[0x2];                                 // 0x02D4(0x0008)
	class UGFxObject*                                  m_mcHeaderTabShadow[0x2];                                 // 0x02E4(0x0008)
	class UGFxObject*                                  m_mcHeaderTabHighlight[0x2];                              // 0x02F4(0x0008)
	class UGFxObject*                                  m_mcParty;                                                // 0x0304(0x0008)
	class UGFxObject*                                  m_mcPartyAdd;                                             // 0x030C(0x0008)
	class UGFxObject*                                  m_mcPartyLeave;                                           // 0x0314(0x0008)
	class UGFxObject*                                  m_mcPartyPlayer[0x4];                                     // 0x031C(0x0008)
	class UGFxObject*                                  m_mcPartyPlayerDesc[0x4];                                 // 0x033C(0x0008)
	class UGFxObject*                                  m_mcPartyPlayerName[0x4];                                 // 0x035C(0x0008)
	class UGFxObject*                                  m_mcPartyPlayerType[0x4];                                 // 0x037C(0x0008)
	class UGFxObject*                                  m_mcPartyPlayerIcon[0x4];                                 // 0x039C(0x0008)
	class UGFxObject*                                  m_mcPartyPlayerLogo[0x4];                                 // 0x03BC(0x0008)
	class UGFxObject*                                  m_mcPartyPlayerFrame[0x4];                                // 0x03DC(0x0008)
	class UGFxObject*                                  m_mcPartyPlayerTexture[0x4];                              // 0x03FC(0x0008)
	class UGFxObject*                                  m_mcPartyPlayerHighlight[0x4];                            // 0x041C(0x0008)
	class UGFxObject*                                  m_mcPlayers;                                              // 0x043C(0x0008)
	class UGFxObject*                                  m_mcPlayerAdd;                                            // 0x0444(0x0008)
	class UGFxObject*                                  m_mcPlayerPage;                                           // 0x044C(0x0008)
	class UGFxObject*                                  m_mcPlayerSearch;                                         // 0x0454(0x0008)
	class UGFxObject*                                  m_mcPlayerKeys[0x2];                                      // 0x045C(0x0008)
	class UGFxObject*                                  m_mcPlayerArrows[0x2];                                    // 0x046C(0x0008)
	class UGFxObject*                                  m_mcPlayerButton[0x12];                                   // 0x047C(0x0008)
	class UGFxObject*                                  m_mcPlayerButtonDesc[0x12];                               // 0x050C(0x0008)
	class UGFxObject*                                  m_mcPlayerButtonIcon[0x12];                               // 0x059C(0x0008)
	class UGFxObject*                                  m_mcPlayerButtonLogo[0x12];                               // 0x062C(0x0008)
	class UGFxObject*                                  m_mcPlayerButtonName[0x12];                               // 0x06BC(0x0008)
	class UGFxObject*                                  m_mcPlayerButtonFrame[0x12];                              // 0x074C(0x0008)
	class UGFxObject*                                  m_mcPlayerButtonTexture[0x12];                            // 0x07DC(0x0008)
	class UGFxObject*                                  m_mcPlayerButtonHighlight[0x12];                          // 0x086C(0x0008)
	class UGFxObject*                                  m_mcPopupSearch;                                          // 0x08FC(0x0008)
	class UGFxObject*                                  m_mcPopupSearchBack;                                      // 0x0904(0x0008)
	class UGFxObject*                                  m_mcPopupSearchName;                                      // 0x090C(0x0008)
	class UGFxObject*                                  m_mcPopupSearchDesc;                                      // 0x0914(0x0008)
	class UGFxObject*                                  m_mcPopupSearchInput;                                     // 0x091C(0x0008)
	class UGFxObject*                                  m_mcPopupSearchAccept;                                    // 0x0924(0x0008)
	class UGFxObject*                                  m_mcPopupPlayer;                                          // 0x092C(0x0008)
	class UGFxObject*                                  m_mcPopupPlayerBack;                                      // 0x0934(0x0008)
	class UGFxObject*                                  m_mcPopupPlayerName;                                      // 0x093C(0x0008)
	class UGFxObject*                                  m_mcPopupPlayerButton[0x4];                               // 0x0944(0x0008)
	class UGFxObject*                                  m_mcBlocker;                                              // 0x0964(0x0008)
	class UInputGroup*                                 m_pPartyGroup;                                            // 0x096C(0x0008)
	class UInputGroup*                                 m_pSearchGroup;                                           // 0x0974(0x0008)
	class UInputGroup*                                 m_pPlayerGroup;                                           // 0x097C(0x0008)
	class UInputGroup*                                 m_pPlayersGroup;                                          // 0x0984(0x0008)
	class UInputAction*                                m_pLeaveAction;                                           // 0x098C(0x0008)
	class UInputAction*                                m_pInviteAction;                                          // 0x0994(0x0008)
	class UInputAction*                                m_pSearchAction;                                          // 0x099C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UISocial");
		return ptr;
	}

};


// Class TgClient.UISubtitle
// 0x0028 (0x026C - 0x0244)
class UUISubtitle : public UTgGfxScene
{
public:
	float                                              m_fTimer;                                                 // 0x0244(0x0004)
	float                                              m_fSwitchTimer;                                           // 0x0248(0x0004)
	struct FString                                     m_sNewSubtitle;                                           // 0x024C(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcText;                                                 // 0x025C(0x0008)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0264(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UISubtitle");
		return ptr;
	}

};


// Class TgClient.UISummary
// 0x0D78 (0x0FBC - 0x0244)
class UUISummary : public UTgGfxScene
{
public:
	int                                                m_nEntry;                                                 // 0x0244(0x0004)
	int                                                m_nHover;                                                 // 0x0248(0x0004)
	int                                                m_nOffset;                                                // 0x024C(0x0004)
	int                                                m_nClassXP;                                               // 0x0250(0x0004)
	int                                                m_nBattleXP;                                              // 0x0254(0x0004)
	int                                                m_nQuestsComplete;                                        // 0x0258(0x0004)
	int                                                m_nBreakdownIndex;                                        // 0x025C(0x0004)
	unsigned char                                      m_eState;                                                 // 0x0260(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	unsigned long                                      m_bTesting : 1;                                           // 0x0264(0x0004)
	unsigned long                                      m_bTutorial : 1;                                          // 0x0264(0x0004)
	unsigned long                                      m_bProgressShown : 1;                                     // 0x0264(0x0004)
	float                                              m_fStateTimer;                                            // 0x0268(0x0004)
	float                                              m_fDelayedTransitionTimer;                                // 0x026C(0x0004)
	float                                              m_fBreakdownTimer;                                        // 0x0270(0x0004)
	TArray<int>                                        m_FreeList;                                               // 0x0274(0x0010) (NeedCtorLink)
	TArray<int>                                        m_ItemList;                                               // 0x0284(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_mcSummary;                                              // 0x0294(0x0008)
	class UGFxObject*                                  m_mcSummaryLine;                                          // 0x029C(0x0008)
	class UGFxObject*                                  m_mcSummaryName;                                          // 0x02A4(0x0008)
	class UGFxObject*                                  m_mcSummaryRank;                                          // 0x02AC(0x0008)
	class UGFxObject*                                  m_mcSummaryRankIcon;                                      // 0x02B4(0x0008)
	class UGFxObject*                                  m_mcSummaryScore;                                         // 0x02BC(0x0008)
	class UGFxObject*                                  m_mcSummaryScoreName;                                     // 0x02C4(0x0008)
	class UGFxObject*                                  m_mcSummaryScoreDesc;                                     // 0x02CC(0x0008)
	class UGFxObject*                                  m_mcSummaryEntry[0x5];                                    // 0x02D4(0x0008)
	class UGFxObject*                                  m_mcSummaryEntryName[0x5];                                // 0x02FC(0x0008)
	class UGFxObject*                                  m_mcSummaryEntryDesc[0x5];                                // 0x0324(0x0008)
	class UGFxObject*                                  m_mcSummaryCharacter;                                     // 0x034C(0x0008)
	class UGFxObject*                                  m_mcSummaryClass;                                         // 0x0354(0x0008)
	class UGFxObject*                                  m_mcSummaryClassIcon;                                     // 0x035C(0x0008)
	class UGFxObject*                                  m_mcSummaryClassName;                                     // 0x0364(0x0008)
	class UGFxObject*                                  m_mcSummaryClassDesc;                                     // 0x036C(0x0008)
	class UGFxObject*                                  m_mcSummaryClassType;                                     // 0x0374(0x0008)
	class UGFxObject*                                  m_mcSummaryClassNext;                                     // 0x037C(0x0008)
	class UGFxObject*                                  m_mcSummaryClassNextIcon;                                 // 0x0384(0x0008)
	class UGFxObject*                                  m_mcSummaryClassNextItem;                                 // 0x038C(0x0008)
	class UGFxObject*                                  m_mcSummaryClassNextItemFrame;                            // 0x0394(0x0008)
	class UGFxObject*                                  m_mcSummaryClassNextItemTexture;                          // 0x039C(0x0008)
	class UGFxObject*                                  m_mcSummaryClassProgress;                                 // 0x03A4(0x0008)
	class UGFxObject*                                  m_mcSummaryClassProgressTip;                              // 0x03AC(0x0008)
	class UGFxObject*                                  m_mcSummaryClassProgressFill;                             // 0x03B4(0x0008)
	class UGFxObject*                                  m_mcSummaryClassProgressChange;                           // 0x03BC(0x0008)
	class UGFxObject*                                  m_mcSummaryBattle;                                        // 0x03C4(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleIcon;                                    // 0x03CC(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleIconLevelA;                              // 0x03D4(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleIconLevelB;                              // 0x03DC(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleIconLevelC;                              // 0x03E4(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleName;                                    // 0x03EC(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleDesc;                                    // 0x03F4(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleFree;                                    // 0x03FC(0x0008)
	class UGFxObject*                                  m_mcSummaryBattlePaid;                                    // 0x0404(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleNext;                                    // 0x040C(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleNextFree;                                // 0x0414(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleNextPaid;                                // 0x041C(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleProgress;                                // 0x0424(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleProgressTip;                             // 0x042C(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleProgressFill;                            // 0x0434(0x0008)
	class UGFxObject*                                  m_mcSummaryBattleProgressChange;                          // 0x043C(0x0008)
	class UGFxObject*                                  m_mcSummaryQuests;                                        // 0x0444(0x0008)
	class UGFxObject*                                  m_mcSummaryQuestsTF;                                      // 0x044C(0x0008)
	class UGFxObject*                                  m_mcSummaryRewards;                                       // 0x0454(0x0008)
	class UGFxObject*                                  m_mcSummaryRewardsIcons[0x3];                             // 0x045C(0x0008)
	class UGFxObject*                                  m_mcUnlock;                                               // 0x0474(0x0008)
	class UGFxObject*                                  m_mcUnlockName;                                           // 0x047C(0x0008)
	class UGFxObject*                                  m_mcUnlockDesc;                                           // 0x0484(0x0008)
	class UGFxObject*                                  m_mcUnlockRotate;                                         // 0x048C(0x0008)
	class UGFxObject*                                  m_mcUnlockHoverName;                                      // 0x0494(0x0008)
	class UGFxObject*                                  m_mcUnlockHoverDesc;                                      // 0x049C(0x0008)
	class UGFxObject*                                  m_mcUnlockHeader;                                         // 0x04A4(0x0008)
	class UGFxObject*                                  m_mcUnlockHeaderName;                                     // 0x04AC(0x0008)
	class UGFxObject*                                  m_mcUnlockHeaderDesc;                                     // 0x04B4(0x0008)
	class UGFxObject*                                  m_mcUnlockHeaderRank;                                     // 0x04BC(0x0008)
	class UGFxObject*                                  m_mcUnlockHeaderRankLevel;                                // 0x04C4(0x0008)
	class UGFxObject*                                  m_mcUnlockHeaderRankLevelA;                               // 0x04CC(0x0008)
	class UGFxObject*                                  m_mcUnlockHeaderRankLevelB;                               // 0x04D4(0x0008)
	class UGFxObject*                                  m_mcUnlockHeaderRankLevelC;                               // 0x04DC(0x0008)
	class UGFxObject*                                  m_mcUnlockArrow[0x2];                                     // 0x04E4(0x0008)
	class UGFxObject*                                  m_mcUnlockPrompt[0x2];                                    // 0x04F4(0x0008)
	class UGFxObject*                                  m_mcUnlockFree[0x5];                                      // 0x0504(0x0008)
	class UGFxObject*                                  m_mcUnlockFreeFrame[0x5];                                 // 0x052C(0x0008)
	class UGFxObject*                                  m_mcUnlockFreeRarity[0x5];                                // 0x0554(0x0008)
	class UGFxObject*                                  m_mcUnlockFreeTexture[0x5];                               // 0x057C(0x0008)
	class UGFxObject*                                  m_mcUnlockItem[0x5];                                      // 0x05A4(0x0008)
	class UGFxObject*                                  m_mcUnlockItemFrame[0x5];                                 // 0x05CC(0x0008)
	class UGFxObject*                                  m_mcUnlockItemRarity[0x5];                                // 0x05F4(0x0008)
	class UGFxObject*                                  m_mcUnlockItemTexture[0x5];                               // 0x061C(0x0008)
	class UUIComponent_ItemPreviewStack*               m_pItemPreviewStack;                                      // 0x0644(0x0008)
	class UUIInteractable_Button*                      m_pSummaryHomeButton;                                     // 0x064C(0x0008)
	class UUIComponent_GamepadKey*                     m_pSummaryHomeButtonKey;                                  // 0x0654(0x0008)
	class UUIInteractable_Button*                      m_pSummaryNextButton;                                     // 0x065C(0x0008)
	class UUIComponent_GamepadKey*                     m_pSummaryNextButtonKey;                                  // 0x0664(0x0008)
	class UUIInteractable_Button*                      m_pUnlockPurchaseButton;                                  // 0x066C(0x0008)
	class UUIComponent_GamepadKey*                     m_pUnlockPurchaseButtonKey;                               // 0x0674(0x0008)
	class UUIInteractable_Button*                      m_pUnlockNextButton;                                      // 0x067C(0x0008)
	class UUIComponent_GamepadKey*                     m_pUnlockNextButtonKey;                                   // 0x0684(0x0008)
	class UUIInteractable_Button*                      m_pTalentNextButton;                                      // 0x068C(0x0008)
	class UUIComponent_GamepadKey*                     m_pTalentNextButtonKey;                                   // 0x0694(0x0008)
	class UUIInteractable_Button*                      m_pLevelNextButton;                                       // 0x069C(0x0008)
	class UUIComponent_GamepadKey*                     m_pLevelNextButtonKey;                                    // 0x06A4(0x0008)
	class UGFxObject*                                  m_mcLevel;                                                // 0x06AC(0x0008)
	class UGFxObject*                                  m_mcLevelIcon;                                            // 0x06B4(0x0008)
	class UGFxObject*                                  m_mcLevelLine;                                            // 0x06BC(0x0008)
	class UGFxObject*                                  m_mcLevelName;                                            // 0x06C4(0x0008)
	class UGFxObject*                                  m_mcLevelDesc;                                            // 0x06CC(0x0008)
	class UGFxObject*                                  m_mcLevelQueue;                                           // 0x06D4(0x0008)
	class UGFxObject*                                  m_mcLevelQueueName;                                       // 0x06DC(0x0008)
	class UGFxObject*                                  m_mcLevelQueueDesc;                                       // 0x06E4(0x0008)
	class UGFxObject*                                  m_mcLevelIconTexture;                                     // 0x06EC(0x0008)
	class UGFxObject*                                  m_mcTalent;                                               // 0x06F4(0x0008)
	class UGFxObject*                                  m_mcTalentLine;                                           // 0x06FC(0x0008)
	class UGFxObject*                                  m_mcTalentName;                                           // 0x0704(0x0008)
	class UGFxObject*                                  m_mcTalentDesc;                                           // 0x070C(0x0008)
	class UGFxObject*                                  m_mcTalentInfo;                                           // 0x0714(0x0008)
	class UGFxObject*                                  m_mcTalentInfoIcon;                                       // 0x071C(0x0008)
	class UGFxObject*                                  m_mcTalentInfoName;                                       // 0x0724(0x0008)
	class UGFxObject*                                  m_mcTalentInfoDesc;                                       // 0x072C(0x0008)
	class UGFxObject*                                  m_mcTalentInfoType;                                       // 0x0734(0x0008)
	class UGFxObject*                                  m_mcTalentTitle;                                          // 0x073C(0x0008)
	class UGFxObject*                                  m_mcTalentTitleFrame;                                     // 0x0744(0x0008)
	class UGFxObject*                                  m_mcTalentTitleTexture;                                   // 0x074C(0x0008)
	class UGFxObject*                                  m_mcTalentPath;                                           // 0x0754(0x0008)
	struct FUINODESET                                  m_mcTalentNodes[0x4];                                     // 0x075C(0x0198)
	struct FUITITLESET                                 m_mcTitleNodes;                                           // 0x0DBC(0x0188)
	class UInputGroup*                                 m_pLevelGroup;                                            // 0x0F44(0x0008)
	class UInputGroup*                                 m_pTalentGroup;                                           // 0x0F4C(0x0008)
	class UInputGroup*                                 m_pUnlockGroup;                                           // 0x0F54(0x0008)
	class UInputGroup*                                 m_pSummaryGroup;                                          // 0x0F5C(0x0008)
	class UInputAction*                                m_pUnlockBumperLeft;                                      // 0x0F64(0x0008)
	class UInputAction*                                m_pUnlockBumperRight;                                     // 0x0F6C(0x0008)
	class UInputAction*                                m_pSummaryHomeAction;                                     // 0x0F74(0x0008)
	class UInputAction*                                m_pSummaryNextAction;                                     // 0x0F7C(0x0008)
	class UInputAction*                                m_pUnlockPurchaseAction;                                  // 0x0F84(0x0008)
	class UInputAction*                                m_pUnlockNextAction;                                      // 0x0F8C(0x0008)
	class UInputAction*                                m_pTalentNextAction;                                      // 0x0F94(0x0008)
	class UInputAction*                                m_pLevelNextAction;                                       // 0x0F9C(0x0008)
	class UAkBaseSoundObject*                          m_scEntry;                                                // 0x0FA4(0x0008)
	class UAkBaseSoundObject*                          m_scFlyin;                                                // 0x0FAC(0x0008)
	class UAkBaseSoundObject*                          m_scNugget;                                               // 0x0FB4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UISummary");
		return ptr;
	}

};


// Class TgClient.UIWebBrowser
// 0x002C (0x0270 - 0x0244)
class UUIWebBrowser : public UTgGfxScene
{
public:
	unsigned long                                      m_bAutoClose : 1;                                         // 0x0244(0x0004)
	unsigned long                                      m_bDrawBorder : 1;                                        // 0x0244(0x0004)
	class UGFxObject*                                  m_mcFrame;                                                // 0x0248(0x0008)
	class UGFxObject*                                  m_mcBrowserShape;                                         // 0x0250(0x0008)
	class UGFxObject*                                  m_mcBackButton;                                           // 0x0258(0x0008)
	class UGFxObject*                                  m_mcForwardButton;                                        // 0x0260(0x0008)
	class UGFxObject*                                  m_mcCloseButton;                                          // 0x0268(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIWebBrowser");
		return ptr;
	}

};


// Class TgClient.UIQuestUtilities
// 0x0000 (0x0060 - 0x0060)
class UUIQuestUtilities : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIQuestUtilities");
		return ptr;
	}

};


// Class TgClient.TgIconDetails
// 0x0044 (0x00A4 - 0x0060)
class UTgIconDetails : public UObject
{
public:
	class UTgIconGroup*                                m_OwningGroup;                                            // 0x0060(0x0008)
	class UGFxObject*                                  m_mcIconObject;                                           // 0x0068(0x0008)
	class UGFxObject*                                  m_mcTexture;                                              // 0x0070(0x0008)
	class UGFxObject*                                  m_mcLoadingSpinner;                                       // 0x0078(0x0008)
	struct FString                                     m_sTextureString;                                         // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     m_sTag;                                                   // 0x0090(0x0010) (NeedCtorLink)
	unsigned long                                      m_bIsTextureSet : 1;                                      // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgIconDetails");
		return ptr;
	}

};


// Class TgClient.TgIconGroup
// 0x0064 (0x00C4 - 0x0060)
class UTgIconGroup : public UObject
{
public:
	class UTgIconManager*                              m_Manager;                                                // 0x0060(0x0008)
	class UUIDataItem*                                 m_DataItem;                                               // 0x0068(0x0008)
	unsigned long                                      m_bLoadByItemType : 1;                                    // 0x0070(0x0004)
	class UTgManifestGroup*                            m_ManifestGroup;                                          // 0x0074(0x0008)
	struct FMap_Mirror                                 m_TextureObjects;                                         // 0x007C(0x0048) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgIconGroup");
		return ptr;
	}


	void STATIC_OnManifestLoaded();
};


// Class TgClient.TgIconManager
// 0x0090 (0x00F0 - 0x0060)
class UTgIconManager : public UObject
{
public:
	struct FMap_Mirror                                 m_GFxReferenceToIconDetailsMap;                           // 0x0060(0x0048) (Native)
	struct FMultiMap_Mirror                            m_ItemIdToIconGroupMap;                                   // 0x00A8(0x0048) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgIconManager");
		return ptr;
	}

};


// Class TgClient.TgGfxChatModal
// 0x0000 (0x0118 - 0x0118)
class UTgGfxChatModal : public UGFxObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxChatModal");
		return ptr;
	}

};


// Class TgClient.UIFooterGamepad
// 0x0000 (0x0244 - 0x0244)
class UUIFooterGamepad : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIFooterGamepad");
		return ptr;
	}

};


// Class TgClient.UIScene_Dont_Create_Input
// 0x0000 (0x0154 - 0x0154)
class UUIScene_Dont_Create_Input : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_Dont_Create_Input");
		return ptr;
	}

};


// Class TgClient.UIScene_UIHudChatBox
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UIHudChatBox : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UIHudChatBox");
		return ptr;
	}

};


// Class TgClient.UIScene_UILobbyChat
// 0x0000 (0x0154 - 0x0154)
class UUIScene_UILobbyChat : public UUIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.UIScene_UILobbyChat");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
