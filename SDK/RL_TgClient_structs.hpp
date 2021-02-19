#pragma once

// RealmRoyale (0.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_Basic.hpp"
#include "RL_Core_classes.hpp"
#include "RL_Engine_classes.hpp"
#include "RL_TgGame_classes.hpp"
#include "RL_GFxUI_classes.hpp"
#include "RL_PlatformCommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_UICOMPONENT_MATCHDISPLAY_BUILDHEADERS_COUNT        6
#define CONST_UICHESTPANEL_BUNDLE_DROPDOWN_COUNT                 5
#define CONST_MAX_ITEM_STAT_CATEGORY                             7
#define CONST_UISAFEFRAME_STEPCOUNT                              20
#define CONST_UIRETICLES_DAMAGE_LIGHT                            20
#define CONST_UICOMPONENT_GENERICTITLEBUTTONS_TITLECOUNT         2
#define CONST_GFXGROUP_LOC_NONE                                  -10000
#define CONST_MAX_UI_EFFECTS                                     16
#define CONST_LOADING_SCREEN_TIP_COUNT                           5
#define CONST_UIINVITE_INVITECOUNTER_MAXLEN                      64
#define CONST_UIARMORYDETAIL_TALENTSETS                          4
#define CONST_NUM_UI_DEVICES                                     25
#define CONST_FIRST_BLOOD_MESSAGE_ID                             109234
#define CONST_PROCESS_MESSAGE_SECS                               2.0f
#define CONST_DCTEAM_MAX_MEMBERS                                 5
#define CONST_DCTEAM_MAX_TOWERS                                  9
#define CONST_UIARMORYDETAIL_KEYS                                2
#define CONST_UISCENE_NATIVE_HEIGHT                              1080
#define CONST_UIARMORY_CLASS                                     4
#define CONST_UIHUDMINIMAP_PLAYERS                               6
#define CONST_UISCENE_NATIVE_WIDTH                               1920
#define CONST_UI_AUTHORED_WIDTH                                  1920
#define CONST_UI_AUTHORED_HEIGHT                                 1080
#define CONST_GFXSETTINGS_OPTIONS                                12
#define CONST_UIARMORY_SPRAY_ITEMS                               3
#define CONST_UIINVITE_BUTTONS                                   2
#define CONST_DAILY_QUESTS_TOTAL                                 10
#define CONST_UIINVITE_INVITESPAM_PERIOD                         2.6
#define CONST_LOBBY_PLAYERS_PER_TEAM                             10
#define CONST_UILOGIN_INPUT_FIELDS                               2
#define CONST_UIBATTLEPASS_TABS                                  2
#define CONST_TG_MAX_TOTAL_PING                                  10
#define CONST_UICOMPONENT_MATCHPLAYERENTRY_BUILD_ITEMCOUNT       4
#define CONST_UIACQUISITION_ITEMS                                5
#define CONST_UIACQUISITION_BUTTONS                              2
#define CONST_UISUMMARY_REWARDS                                  3
#define CONST_UIHUDREPORT_COUNT                                  6
#define CONST_UIHUDCLASS_BUTTONS                                 4
#define CONST_UICOMPONENT_MATCHPLAYERENTRY_BUILD_STATCOUNT       2
#define CONST_UIBATTLEPASS_LEVELS                                50
#define CONST_UIARMORY_NORMAL_ITEMS                              7
#define CONST_UIARMORY_EMOTE_ITEMS                               3
#define CONST_UIDATA_POPUPINPUT_TITLECOUNT                       2
#define CONST_UIARMORY_TABS                                      2
#define CONST_UIARMORYDETAIL_TITLES                              7
#define CONST_UIARMORY_KEYS                                      2
#define CONST_UICOMPONENT_MATCHDISPLAY_PLAYERS_COUNT             10
#define CONST_UICOMPONENT_GENERICTITLEBUTTONS_COLUMNSIZE         4
#define CONST_UIARMORYDETAIL_ITEMS                               12
#define CONST_UIARMORYDETAIL_ARROWS                              2
#define CONST_UIDATA_MAXCUSTOMDECKS                              5
#define CONST_UIARMORYDETAIL_TABS                                3
#define CONST_UIARMORYDETAIL_NODES                               10
#define CONST_UIHUDRESULT_BUTTONS                                3
#define CONST_UIBATTLEPASS_PAGES                                 2
#define CONST_UIBATTLEPASS_ITEMS                                 10
#define CONST_UIBATTLEPASSLEVELUP_ITEMS                          5
#define CONST_UICOMPONENT_MATCHPLAYERENTRY_BUILD_CARDCOUNT       5
#define CONST_UILOGIN_EULA_TEXT                                  21
#define CONST_UIBATTLEPASSLEVELUP_ARROWS                         2
#define CONST_UIBATTLEPASSPURCHASE_PANELS                        3
#define CONST_CHAT_OUTPUT_COUNT                                  4
#define CONST_UIHUDMAP_SPECTATOR_PLAYERS                         100
#define CONST_NUM_ABILITYPOINTPOOL_SKILLS                        4
#define CONST_UIDATA_CHESTEXTENDED_MAX_BUNDLES                   4
#define CONST_MAX_BOOSTER_BENEFITS                               3
#define CONST_UIHUDRESULT_VICTORY                                3
#define CONST_UIHUDFORGE_ITEMS                                   8
#define CONST_NUM_BENEFITS_TFS                                   11
#define CONST_UIHEALFEED_NUM_ICONS                               5
#define CONST_UICOMPONENT_GENERICTITLEBUTTONS_BUTTONCOUNT        8
#define CONST_UICOMPONENT_GENERICTITLEINPUTBUTTONS_TITLECOUNT    2
#define CONST_UICOMPONENT_GENERICTITLEINPUTBUTTONS_BUTTONCOUNT   2
#define CONST_UIHUDINV_COUNT                                     2
#define CONST_UIHUD_SCENE_CARDS                                  3
#define CONST_UIHEALFEED_ENTRY_PRECACHE_AMOUNT                   20
#define CONST_UICOMPONENT_HOLDPURCHASE_RADIALFRAMES              360
#define CONST_UICOMPONENT_DECK_SIZE                              5
#define CONST_UICOMPONENT_MATCHDISPLAY_STATSHEADERS_COUNT        9
#define CONST_UICOMPONENT_MATCHPLAYERENTRY_DETAILS_STATCOUNT     7
#define CONST_UICOMPONENT_QUEST_GOALS                            7
#define CONST_UICOMPONENT_QUEST_GOAL_SPACING                     15
#define CONST_GFXSETTINGS_KEYBINDS                               12
#define CONST_UIDATA_DECK_SIZE                                   5
#define CONST_UIDATA_POPUPGENERIC_BUTTONCOUNT                    8
#define CONST_UIDATA_DECKSET                                     54
#define CONST_UIDATA_CARDPROP                                    1710
#define CONST_UIDATA_DECKNAME                                    1783
#define CONST_UIDATA_DECKPROP                                    1784
#define CONST_UIDATA_ACTIVESET                                   5
#define CONST_UIDATA_NUMTEMPLATEDECKS                            1
#define CONST_UIDATA_TOTAL_TEMPLATEDECKS                         3
#define CONST_UISHOPLIST_LEFT_PADDING                            100.0f
#define CONST_UIDATA_NUMTALENTS                                  3
#define CONST_UIHUDBOT_EQUIP                                     2
#define CONST_UIDATA_PLAYERMATCHRECORD_ITEMCOUNT                 4
#define CONST_UIDATA_GROUPSIZE                                   4
#define CONST_UIDATA_BURNSIZE                                    3
#define CONST_UIDATA_SETSIZE                                     3
#define CONST_ITEM_TENCENT_FILLER                                19094
#define CONST_MATCH_MAX_PLAYERS                                  10
#define CONST_UIDATA_PLAYERMATCHRECORD_DECKSIZE                  5
#define CONST_UISHOPLIST_ITEM_PADDING                            16.0f
#define CONST_UIDATA_POPUPGENERIC_TITLECOUNT                     2
#define CONST_UIDATA_POPUPINPUT_BUTTONCOUNT                      2
#define CONST_UIDATA_SPRAYRENTAL_MAX_BUNDLES                     4
#define CONST_UIDATA_DECKSIZE                                    5
#define CONST_DEFAULT_ANNOUNCER_PACK                             18647
#define CONST_UIPLP_PROMPTS                                      2
#define CONST_MONTHLY_QUEST_TIME_FRAME_ID                        11
#define CONST_UIFOOTER_KEYS                                      5
#define CONST_BUTTON_PRICE_NUM_PRICES                            3
#define CONST_UIHUDMAP_ALLIANCES                                 40
#define CONST_UIGAMEMENU_OPTIONS                                 2
#define CONST_UIGAMEMENU_BUTTONS                                 6
#define CONST_UIHOME_BUTTONS                                     9
#define CONST_UISUMMARY_ITEMS                                    5
#define CONST_UIHOME_QUESTS                                      3
#define CONST_LTE_DESC_OUTPUT_COUNT                              10
#define CONST_UIHUD_SCENE_PARTY                                  0
#define CONST_UIHUD_SCENE_CHAT                                   1
#define CONST_UIHUD_SCENE_PLAYER                                 2
#define CONST_UIHUD_SCENE_BUFFS                                  7
#define CONST_UIHUD_SCENE_LEVEL                                  4
#define CONST_UIHUD_SCENE_KILLINFO                               5
#define CONST_UIHUDINV_RUNES                                     6
#define CONST_UIHUD_SCENE_NOTIFY                                 6
#define CONST_UISAFEFRAME_MAX                                    1.f
#define CONST_UIHUD_SCENE_COMBATLOG                              8
#define CONST_UIHUD_SCENE_SKILLS                                 9
#define CONST_UIHUD_SCENE_SKILLS3P                               10
#define CONST_UIHUD_SCENE_COUNT                                  11
#define CONST_UIHUDBOT_KEYS                                      5
#define CONST_UIHUDBOT_ARMOR                                     4
#define CONST_UIHUDBOT_SKILL                                     5
#define CONST_UIHUDBOT_BUFFS                                     7
#define CONST_UIPATCHNOTES_COLUMNS                               3
#define CONST_UIHUDBOT_ARROWS                                    4
#define CONST_UIHUDBOT_RUNES                                     6
#define CONST_UIRETICLES_PROJECTILES                             10
#define CONST_GFXSETTINGS_KEYBINDS_COLUMNS                       2
#define CONST_UIHITMARKER_TICKS                                  4
#define CONST_UIDAMAGEINSTIGATOR_MAX                             5
#define CONST_UIRETICLES_DAMAGE_MEDIUM                           15
#define CONST_UIRETICLES_DAMAGE_HEAVY                            10
#define CONST_UIRETICLES_DAMAGE_AOEMEDIUM                        10
#define CONST_UIRETICLES_DAMAGE_AOEHEAVY                         10
#define CONST_UIHITMARKER_ERRORTOLERANCE                         48.0
#define CONST_CHAT_COUNT                                         8
#define CONST_CHAT_VGS_CALLOUT_COUNT                             5
#define CONST_CHAT_VGS_CALLOUT_TOTAL_COUNT                       40
#define CONST_UIHUDCLASS_PLAYERS                                 5
#define CONST_UIHUDREPORT_REASONS                                6
#define CONST_UIHUDCLASS_TALENTS                                 10
#define CONST_UIHUDFORGE_RESURRECTION_INDEX                      7
#define CONST_UIHUDFORGE_TABS                                    3
#define CONST_UIHUDINV_SWAPS                                     2
#define CONST_UIHUDTOP_ALLIANCES                                 2
#define CONST_UIHUDINV_TITLE                                     4
#define CONST_UIHUDMINIMAP_IMAGES                                3
#define CONST_UIHUDMINIMAP_TEAMS                                 2
#define CONST_UIHUDMINIMAP_LEADERBOARD                           3
#define CONST_UIHUDMINIMAP_ALLIANCES                             40
#define CONST_UISOCIAL_OPTIONS                                   4
#define CONST_UIHUDMAP_IMAGES                                    3
#define CONST_UISUMMARY_TALENTSETS                               4
#define CONST_UIHUDMAP_COORDS                                    8
#define CONST_UIHUDMAP_PLAYERS                                   6
#define CONST_UIHUDMAP_REGIONS                                   5
#define CONST_UIHUDMAP_QUESTS                                    3
#define CONST_UIHUDMAP_CURSOR_MOVE_SPEED                         10
#define CONST_UIHUDMAP_SPECTATOR_MAX_TASKFORCES                  100
#define CONST_UIHUDMAP_SPECTATOR_MAX_DUO_TASKFORCES              50
#define CONST_UIHUDMAP_SPECTATOR_MAX_QUAD_TASKFORCES             25
#define CONST_UIHUDMAP_SPECTATOR_COLUMN_CNT                      4
#define CONST_UIHUDMINIMAP_QUESTS                                3
#define CONST_DAILY_QUESTS_ACCOUNT_LEVEL                         0
#define CONST_UIHUDMINIMAP_DISTANCETEXTFIELDS                    2
#define CONST_UIHUDMINIMAP_OBJECTIVES                            5
#define CONST_UIHUDMINIMAP_SPECTATOR_PLAYERS                     100
#define CONST_UIHUDOVERLAY_DESCS                                 2
#define CONST_UIHUDOVERLAY_PROMPTS                               3
#define CONST_UIHUDTOP_TICKS                                     24
#define CONST_UIHUDTOP_ITEMS                                     5
#define CONST_UIHUDTOP_PLAYERS                                   6
#define CONST_UIHUDTOP_DEBUFFS                                   3
#define CONST_VGS_MAP_PC                                         1
#define CONST_VGS_MAP_CONSOLE                                    4
#define CONST_VGS_LIST_COUNT                                     14
#define CONST_VGS_GAMEPAD_COUNT                                  6
#define CONST_UIVOICECHAT_TEAMPLAYERS                            5
#define CONST_UILOBBYCHAT_ARROWS                                 2
#define CONST_UILOGIN_CREATE_FIELDS                              4
#define CONST_UILOGIN_LINK_BUTTONS                               2
#define CONST_UILOGIN_LINK_TYPES                                 3
#define CONST_UIPLAY_PANELS                                      5
#define CONST_UIPLAY_REGIONS                                     12
#define CONST_UIPLAY_OPTIONS                                     3
#define CONST_UIPLAY_TUTORIAL_QUEUE_ID                           478
#define CONST_UIPOPUPPURCHASE_ITEMS                              5
#define CONST_UIPOPUPPURCHASE_ARROWS                             2
#define CONST_UIPROFILE_MEMBERS                                  4
#define CONST_DAILY_QUESTS_COUNT                                 3
#define CONST_UISAFEFRAME_MIN                                    0.9f
#define CONST_BATTLE_PASS_REWARD_ITEM_COUNT                      5
#define CONST_UIFOOTERGAMEPAD_OPTIONS                            8
#define CONST_UIFOOTERGAMEPAD_OPTION_WIDTH                       1000
#define CONST_SCROLL_OFFSET_JUMP                                 20
#define CONST_GFXSETTINGS_BUTTONS                                5
#define CONST_UISHOPCROWNS_COUNT                                 5
#define CONST_UISHOPREDEEM_COUNT                                 2
#define CONST_UISHOPLIST_SECTION_PADDING                         64.0f
#define CONST_UISOCIAL_PLAYERS                                   18
#define CONST_UISOCIAL_ARROWS                                    2
#define CONST_UISOCIAL_PARTY                                     4
#define CONST_UISOCIAL_TABS                                      2
#define CONST_UISOCIAL_KEYS                                      2
#define CONST_UIARMORYTALENT_COUNT                               4
#define CONST_CLASS_SELECT_TALENTS                               10
#define CONST_HUD_MENU_RUNE_OFFSET                               7
#define CONST_UISHOPLIST_RIGHT_PADDING                           100.0f
#define CONST_UISHOPLIST_SCROLL_SPEED                            6000.0f
#define CONST_NUM_LIVE_TEXT_STROKES                              3
#define CONST_UIPOPUPMATCHFOUND_BUTTONS                          2
#define CONST_MAX_EQUIPPED_EMOTES                                3
#define CONST_MAX_EQUIPPED_SPRAYS                                3
#define CONST_UIPARTYLOBBY_TRANSFORMATION_TIMER                  8.0f
#define CONST_PROP_UISHOP_LAST_SEEN_LOWER                        2252
#define CONST_PROP_UISHOP_LAST_SEEN_UPPER                        2253
#define CONST_UISUMMARY_ARROWS                                   2
#define CONST_UISUMMARY_ENTRIES                                  5

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TgClient.TgBrowserManager.WebPageType
enum class EWebPageType : uint8_t
{
	WPT_Gold                       = 0,
	WPT_CreateAccount              = 1,
	WPT_RecoverPassword            = 2,
	WPT_RecoverUsername            = 3,
	WPT_GodPack                    = 4,
	WPT_FacebookPromo              = 5,
	WPT_TwitterPromo               = 6,
	WPT_RecruitPromo               = 7,
	WPT_ReferLinkup                = 8,
	WPT_MAX                        = 9
};


// Enum TgClient.TgDataObject.UIID
enum class EUIID : uint8_t
{
	UIID_NONE                      = 0,
	UIID_XP                        = 1,
	UIID_LEVEL                     = 2,
	UIID_LEVEL_PCT                 = 3,
	UIID_BOT_ID                    = 4,
	UIID_DEVICE_ID                 = 5,
	UIID_NAME                      = 6,
	UIID_AMMO                      = 7,
	UIID_ICON                      = 8,
	UIID_STATUS                    = 9,
	UIID_POWER                     = 10,
	UIID_COOLDOWN                  = 11,
	UIID_ENEMY_SCORE               = 12,
	UIID_ENEMY_CHARGE              = 13,
	UIID_ENEMY_TASKFORCE           = 14,
	UIID_FRIENDLY_SCORE            = 15,
	UIID_FRIENDLY_CHARGE           = 16,
	UIID_FRIENDLY_TASKFORCE        = 17,
	UIID_ATTACKING_TASKFORCE       = 18,
	UIID_TIMER_VALUE               = 19,
	UIID_TIMER_STATE               = 20,
	UIID_TIMER_TEXT                = 21,
	UIID_MANA                      = 22,
	UIID_MANA_MAX                  = 23,
	UIID_MANA_PCT                  = 24,
	UIID_HEALTH                    = 25,
	UIID_HEALTH_MAX                = 26,
	UIID_HEALTH_PCT                = 27,
	UIID_SHIELD                    = 28,
	UIID_SHIELD_MAX                = 29,
	UIID_SHIELD_PCT                = 30,
	UIID_TIMER_ACTIVATION          = 31,
	UIID_BONUS_CARDS               = 32,
	UIID_COMBAT_FLAG               = 33,
	UIID_COMBAT_TIME               = 34,
	UIID_COMBAT_TIMER              = 35,
	UIID_DISPLAY_CARDS             = 36,
	UIID_PLAYER_ID                 = 37,
	UIID_PLAYER_NAME               = 38,
	UIID_PLAYER_NOTE               = 39,
	UIID_PLAYER_LEVEL              = 40,
	UIID_CLAN_TAG                  = 41,
	UIID_CLAN_NAME                 = 42,
	UIID_MASTERY_LEVEL             = 43,
	UIID_IS_RECENT                 = 44,
	UIID_IS_ONLINE                 = 45,
	UIID_IS_STREAMING              = 46,
	UIID_IS_PARTY                  = 47,
	UIID_IS_MY_PARTY               = 48,
	UIID_IS_FRIEND                 = 49,
	UIID_IS_PENDING                = 50,
	UIID_IS_REQUESTED              = 51,
	UIID_STATUS_ID                 = 52,
	UIID_STATUS_LABEL              = 53,
	UIID_STATUS_MESSAGE            = 54,
	UIID_QUEUE_ICON                = 55,
	UIID_AVATAR_ID                 = 56,
	UIID_FRIENDS_TOTAL             = 57,
	UIID_FRIENDS_ONLINE            = 58,
	UIID_FRIENDS_PENDING           = 59,
	UIID_CLAN_PENDING              = 60,
	UIID_EQUIP_POINT               = 61,
	UIID_MASTERY                   = 62,
	UIID_INVITE_MAP                = 63,
	UIID_INVITE_QUEUE              = 64,
	UIID_INVITE_PENDING            = 65,
	UIID_PARTY_LEADER              = 66,
	UIID_MAX                       = 67
};


// Enum TgClient.TgDataObject.UIDeviceStatus
enum class EUIDeviceStatus : uint8_t
{
	UIDS_NONE                      = 0,
	UIDS_LOCKED                    = 1,
	UIDS_READY                     = 2,
	UIDS_COOLDOWN                  = 3,
	UIDS_FIRING                    = 4,
	UIDS_DEPLOYED                  = 5,
	UIDS_MAX                       = 6
};


// Enum TgClient.TgData_Notifications.NotificationType
enum class ENotificationType : uint8_t
{
	NT_NONE                        = 0,
	NT_ACQUISITION                 = 1,
	NT_ACHIEVEMENT                 = 2,
	NT_SOCIAL                      = 3,
	NT_QUEST                       = 4,
	NT_MAX                         = 5
};


// Enum TgClient.TgGameDC_Chat.TG_CHAT_PRIORITY
enum class ETG_CHAT_PRIORITY : uint8_t
{
	CHAT_PRIORITY_THROWAWAY        = 0,
	CHAT_PRIORITY_NORMAL           = 1,
	CHAT_PRIORITY_HIGH             = 2,
	CHAT_PRIORITY_INTERRUPT        = 3,
	CHAT_PRIORITY_MAX              = 4
};


// Enum TgClient.TgGameDC_Game.GAME_MODE_TYPE
enum class EGAME_MODE_TYPE : uint8_t
{
	GAME_TYPE_BATTLE               = 0,
	GAME_TYPE_ARENA                = 1,
	GAME_TYPE_DOM                  = 2,
	GAME_TYPE_SIEGE                = 3,
	GAME_TYPE_MAX                  = 4
};


// Enum TgClient.TgGameHUD.GameHudState
enum class EGameHudState : uint8_t
{
	GHS_None                       = 0,
	GHS_Deploy                     = 1,
	GHS_Match                      = 2,
	GHS_Summary                    = 3,
	GHS_MAX                        = 4
};


// Enum TgClient.UIComponent.UIALIGNINGTYPE
enum class EUIALIGNINGTYPE : uint8_t
{
	UIALIGNING_NONE                = 0,
	UIALIGNING_LEFT                = 1,
	UIALIGNING_RIGHT               = 2,
	UIALIGNING_CENTER              = 3,
	UIALIGNING_MAX                 = 4
};


// Enum TgClient.UIComponent.UIANIMTYPE
enum class EUIANIMTYPE : uint8_t
{
	UIANIM_X                       = 0,
	UIANIM_Y                       = 1,
	UIANIM_ALPHA                   = 2,
	UIANIM_WIDTH                   = 3,
	UIANIM_HEIGHT                  = 4,
	UIANIM_XSCALE                  = 5,
	UIANIM_YSCALE                  = 6,
	UIANIM_VISIBLE                 = 7,
	UIANIM_ROTATION                = 8,
	UIANIM_SOUND                   = 9,
	UIANIM_MAX                     = 10
};


// Enum TgClient.UIComponent.UICOMPONENTTYPE
enum class EUICOMPONENTTYPE : uint8_t
{
	UICOMP_COMPONENT               = 0,
	UICOMP_SCENE                   = 1,
	UICOMP_MAX                     = 2
};


// Enum TgClient.TgGfxScene.GFXOPTION
enum class EGFXOPTION : uint8_t
{
	GFXOPTION_NONE                 = 0,
	GFXOPTION_BACK                 = 1,
	GFXOPTION_APPLY                = 2,
	GFXOPTION_LEAVEQUEUE           = 3,
	GFXOPTION_SELECT               = 4,
	GFXOPTION_ADDCARD              = 5,
	GFXOPTION_REMOVECARD           = 6,
	GFXOPTION_FILTER               = 7,
	GFXOPTION_FILTERCHAMP          = 8,
	GFXOPTION_FILTERCHAMP_Y        = 9,
	GFXOPTION_ADDREMOVE            = 10,
	GFXOPTION_CHAT                 = 11,
	GFXOPTION_CHANGEUSER           = 12,
	GFXOPTION_CHANGETAB            = 13,
	GFXOPTION_JOIN                 = 14,
	GFXOPTION_PREVIOUS             = 15,
	GFXOPTION_NEXT                 = 16,
	GFXOPTION_ACCEPT               = 17,
	GFXOPTION_CANCEL               = 18,
	GFXOPTION_PURCHASE             = 19,
	GFXOPTION_HOME                 = 20,
	GFXOPTION_PLAYAGAIN            = 21,
	GFXOPTION_CREATEGAME           = 22,
	GFXOPTION_UNLOCK               = 23,
	GFXOPTION_LEADERBOARD          = 24,
	GFXOPTION_TRADE                = 25,
	GFXOPTION_PURCHASEGEMS         = 26,
	GFXOPTION_MUTEPLAYER           = 27,
	GFXOPTION_UNMUTEPLAYER         = 28,
	GFXOPTION_REROLL_QUEST         = 29,
	GFXOPTION_CLAIM_QUEST          = 30,
	GFXOPTION_CHANGEEMAIL          = 31,
	GFXOPTION_DECLINE              = 32,
	GFXOPTION_VIEWPROFILE          = 33,
	GFXOPTION_INVITE               = 34,
	GFXOPTION_REGION               = 35,
	GFXOPTION_CRAFT                = 36,
	GFXOPTION_DISENCHANT           = 37,
	GFXOPTION_REFRESH              = 38,
	GFXOPTION_PLAYERS              = 39,
	GFXOPTION_MASTERYDETAILS       = 40,
	GFXOPTION_HOLDSELECT           = 41,
	GFXOPTION_VIEWCHAMPIONS        = 42,
	GFXOPTION_VIEWSKILLS           = 43,
	GFXOPTION_PURCHASE_INGAME      = 44,
	GFXOPTION_HOLDPURCHASE         = 45,
	GFXOPTION_CLEAR                = 46,
	GFXOPTION_PREVIEW              = 47,
	GFXOPTION_UNLOCK_ANNPACK       = 48,
	GFXOPTION_CHANGE_AUTOBUY       = 49,
	GFXOPTION_DELETELOADOUT        = 50,
	GFXOPTION_TOGGLETAB            = 51,
	GFXOPTION_PLAY                 = 52,
	GFXOPTION_INFO                 = 53,
	GFXOPTION_CHANGE_TEAMS         = 54,
	GFXOPTION_KICK                 = 55,
	GFXOPTION_RESET_TO_DEFAULTS    = 56,
	GFXOPTION_SAVE_AND_EXIT        = 57,
	GFXOPTION_SELECT_BOOSTER       = 58,
	GFXOPTION_ACTIVATE_BOOSTER     = 59,
	GFXOPTION_CLEAR_ALL            = 60,
	GFXOPTION_WATCH_NOW            = 61,
	GFXOPTION_EQUIP_ALL            = 62,
	GFXOPTION_NOT_NOW              = 63,
	GFXOPTION_CLAIM_REWARD         = 64,
	GFXOPTION_MAX                  = 65
};


// Enum TgClient.TgGfxScene.UISNAPPINGTYPE
enum class EUISNAPPINGTYPE : uint8_t
{
	UISNAPPING_NONE                = 0,
	UISNAPPING_TOP                 = 1,
	UISNAPPING_BOT                 = 2,
	UISNAPPING_MAX                 = 3
};


// Enum TgClient.TgGfxScene.UIBACKGROUNDTYPE
enum class EUIBACKGROUNDTYPE : uint8_t
{
	UIBT_NONE                      = 0,
	UIBT_MAIN                      = 1,
	UIBT_CHAMPION                  = 2,
	UIBT_DECKS                     = 3,
	UIBT_SOCIAL                    = 4,
	UIBT_PROFILE                   = 5,
	UIBT_LINE                      = 6,
	UIBT_PLAIN                     = 7,
	UIBT_MAX                       = 8
};


// Enum TgClient.TgGfxScene.UISCALINGTYPE
enum class EUISCALINGTYPE : uint8_t
{
	UISCALING_FITWIDE              = 0,
	UISCALING_FITTALL              = 1,
	UISCALING_OVERSIZE             = 2,
	UISCALING_NONE                 = 3,
	UISCALING_MAX                  = 4
};


// Enum TgClient.TgGfxScene.GFXEVENT
enum class EGFXEVENT : uint8_t
{
	GFXEVENT_CLICK                 = 0,
	GFXEVENT_ROLLOVER              = 1,
	GFXEVENT_ROLLOUT               = 2,
	GFXEVENT_MAX                   = 3
};


// Enum TgClient.TgGfxScene.GFXFUNCTIONS
enum class EGFXFUNCTIONS : uint8_t
{
	GFXFUNC_NONE                   = 0,
	GFXFUNC_RESIZE                 = 1,
	GFXFUNC_CLASS                  = 2,
	GFXFUNC_ANIMATE                = 3,
	GFXFUNC_SKIN                   = 4,
	GFXFUNC_INFO                   = 5,
	GFXFUNC_SKILL                  = 6,
	GFXFUNC_TOOLTIP_ITEM           = 7,
	GFXFUNC_TOOLTIP_CLASS          = 8,
	GFXFUNC_TOOLTIP_SKILL          = 9,
	GFXFUNC_PURCHASE               = 10,
	GFXFUNC_PREVIEW                = 11,
	GFXFUNC_STAT                   = 12,
	GFXFUNC_RESET                  = 13,
	GFXFUNC_DETAILS                = 14,
	GFXFUNC_JOIN                   = 15,
	GFXFUNC_LEAVE                  = 16,
	GFXFUNC_KIT                    = 17,
	GFXFUNC_ARMOR                  = 18,
	GFXFUNC_BACK                   = 19,
	GFXFUNC_EXIT                   = 20,
	GFXFUNC_SETTINGS               = 21,
	GFXFUNC_MINIMIZE               = 22,
	GFXFUNC_HOME                   = 23,
	GFXFUNC_PLAY                   = 24,
	GFXFUNC_STORE                  = 25,
	GFXFUNC_PROFILE                = 26,
	GFXFUNC_MOUNT                  = 27,
	GFXFUNC_SPELL                  = 28,
	GFXFUNC_WEAPON                 = 29,
	GFXFUNC_ABILITY                = 30,
	GFXFUNC_ENCHANT                = 31,
	GFXFUNC_DISENCHANT             = 32,
	GFXFUNC_LEFT                   = 33,
	GFXFUNC_RIGHT                  = 34,
	GFXFUNC_SELECT                 = 35,
	GFXFUNC_GENERAL                = 36,
	GFXFUNC_ADD                    = 37,
	GFXFUNC_SUB                    = 38,
	GFXFUNC_ADDSPELL               = 39,
	GFXFUNC_ADDWEAPON              = 40,
	GFXFUNC_ADDENCHANT             = 41,
	GFXFUNC_CARD                   = 42,
	GFXFUNC_ADDCARD                = 43,
	GFXFUNC_FRIEND                 = 44,
	GFXFUNC_ENEMY                  = 45,
	GFXFUNC_SAVE                   = 46,
	GFXFUNC_LOGIN                  = 47,
	GFXFUNC_ACCEPT                 = 48,
	GFXFUNC_DECLINE                = 49,
	GFXFUNC_SUBMIT                 = 50,
	GFXFUNC_CANCEL                 = 51,
	GFXFUNC_TRAINING               = 52,
	GFXFUNC_BATTLE                 = 53,
	GFXFUNC_GOLD                   = 54,
	GFXFUNC_SILVER                 = 55,
	GFXFUNC_FRIENDS                = 56,
	GFXFUNC_ADD_FRIEND             = 57,
	GFXFUNC_INVITE                 = 58,
	GFXFUNC_INVITE_ACCEPT          = 59,
	GFXFUNC_INVITE_DECLINE         = 60,
	GFXFUNC_PARTY                  = 61,
	GFXFUNC_REMOVE                 = 62,
	GFXFUNC_SCROLL                 = 63,
	GFXFUNC_OPTION                 = 64,
	GFXFUNC_KEY                    = 65,
	GFXFUNC_KEYALT                 = 66,
	GFXFUNC_KEYBIND                = 67,
	GFXFUNC_CHAT                   = 68,
	GFXFUNC_BOOKNONE               = 69,
	GFXFUNC_BOOKSLOT               = 70,
	GFXFUNC_CARDSLOT               = 71,
	GFXFUNC_PREVIOUS               = 72,
	GFXFUNC_NEXT                   = 73,
	GFXFUNC_ITEM                   = 74,
	GFXFUNC_SELECT_REGION          = 75,
	GFXFUNC_PLAYER                 = 76,
	GFXFUNC_SEARCH                 = 77,
	GFXFUNC_RESULT                 = 78,
	GFXFUNC_UPGRADE                = 79,
	GFXFUNC_ADDENEMY               = 80,
	GFXFUNC_ADDFRIEND              = 81,
	GFXFUNC_REPORTENEMY            = 82,
	GFXFUNC_REPORTFRIEND           = 83,
	GFXFUNC_CHANGE                 = 84,
	GFXFUNC_CREATE                 = 85,
	GFXFUNC_CREATEGAME             = 86,
	GFXFUNC_HEAD                   = 87,
	GFXFUNC_IMPORT                 = 88,
	GFXFUNC_CONFIRM                = 89,
	GFXFUNC_INPUT                  = 90,
	GFXFUNC_ROTATE                 = 91,
	GFXFUNC_MAP                    = 92,
	GFXFUNC_TEAM                   = 93,
	GFXFUNC_CHANGETEAM             = 94,
	GFXFUNC_REGION                 = 95,
	GFXFUNC_SPECTATE               = 96,
	GFXFUNC_DRAFT                  = 97,
	GFXFUNC_BOOST                  = 98,
	GFXFUNC_EXCLUSIVE              = 99,
	GFXFUNC_EXCLUSIVE_DETAILS      = 100,
	GFXFUNC_CHEST                  = 101,
	GFXFUNC_CHESTSCROLL            = 102,
	GFXFUNC_CHESTDETAILS           = 103,
	GFXFUNC_CHESTPURCHASE          = 104,
	GFXFUNC_CHESTBUYBOOSTER        = 105,
	GFXFUNC_CHESTTOGGLEQUANTITY    = 106,
	GFXFUNC_CHESTPICKQUANTITY      = 107,
	GFXFUNC_PURCHASEGEMS           = 108,
	GFXFUNC_VIEWGAMEPAD            = 109,
	GFXFUNC_SHOWFILTER             = 110,
	GFXFUNC_CLEARFILTER            = 111,
	GFXFUNC_FILTER_RARITY          = 112,
	GFXFUNC_FILTER_OPTIONS         = 113,
	GFXFUNC_SHOW_QUESTS            = 114,
	GFXFUNC_DISCARD_QUEST_POPUP    = 115,
	GFXFUNC_DISCARD_QUEST          = 116,
	GFXFUNC_REROLL_QUEST           = 117,
	GFXFUNC_HOVER                  = 118,
	GFXFUNC_CLAIM_QUEST            = 119,
	GFXFUNC_REFER                  = 120,
	GFXFUNC_TOGGLEMUTE             = 121,
	GFXFUNC_EQUIP                  = 122,
	GFXFUNC_INTERACTABLE           = 123,
	GFXFUNC_INTERACTABLE_SCROLL    = 124,
	GFXFUNC_TALENT                 = 125,
	GFXFUNC_SLIDER                 = 126,
	GFXFUNC_TAB                    = 127,
	GFXFUNC_CLEAR_ALL              = 128,
	GFXFUNC_CLEAR_ITEM             = 129,
	GFXFUNC_CLEAR_CATEGORY         = 130,
	GFXFUNC_GOTO                   = 131,
	GFXFUNC_EQUIPALL               = 132,
	GFXFUNC_ALLOW3P                = 133,
	GFXFUNC_CLOSE                  = 134,
	GFXFUNC_LOADOUTSTYLE           = 135,
	GFXFUNC_MAX                    = 136
};


// Enum TgClient.TgGfxScene.GamepadKeys
enum class EGamepadKeys : uint8_t
{
	GAMEPAD_NONE                   = 0,
	GAMEPAD_BUTTON_A               = 1,
	GAMEPAD_BUTTON_B               = 2,
	GAMEPAD_BUTTON_X               = 3,
	GAMEPAD_BUTTON_Y               = 4,
	GAMEPAD_BUTTON_MENU            = 5,
	GAMEPAD_BUTTON_LB              = 6,
	GAMEPAD_BUTTON_RB              = 7,
	GAMEPAD_BUTTON_LT              = 8,
	GAMEPAD_BUTTON_RT              = 9,
	GAMEPAD_BUTTON_BUMPERS         = 10,
	GAMEPAD_BUTTON_L_STICK         = 11,
	GAMEPAD_BUTTON_R_STICK         = 12,
	GAMEPAD_BUTTON_DPAD_UNPRESSED  = 13,
	GAMEPAD_BUTTON_DPAD_DOWN       = 14,
	GAMEPAD_BUTTON_DPAD_LEFT       = 15,
	GAMEPAD_BUTTON_DPAD_RIGHT      = 16,
	GAMEPAD_BUTTON_DPAD_UP         = 17,
	GAMEPAD_BUTTON_VIEW            = 18,
	GAMEPAD_BUTTON_L_STICK_ALL_AXIS = 19,
	GAMEPAD_BUTTON_L_STICK_X_AXIS  = 20,
	GAMEPAD_BUTTON_L_STICK_Y_AXIS  = 21,
	GAMEPAD_BUTTON_R_STICK_ALL_AXIS = 22,
	GAMEPAD_BUTTON_R_STICK_X_AXIS  = 23,
	GAMEPAD_BUTTON_R_STICK_Y_AXIS  = 24,
	GAMEPAD_MAX                    = 25
};


// Enum TgClient.TgGfxScene.LobbyEvent
enum class ELobbyEvent : uint8_t
{
	LOBBY_EVENT_ENTER_QUEUE        = 0,
	LOBBY_EVENT_CHAMPION_LOCKED_IN = 1,
	LOBBY_EVENT_EVERYONE_LOCKED_IN = 2,
	LOBBY_EVENT_REENTER_LOBBY      = 3,
	LOBBY_EVENT_MAX                = 4
};


// Enum TgClient.TgLobbyHUD.LobbyHudState
enum class ELobbyHudState : uint8_t
{
	LHS_None                       = 0,
	LHS_Offline                    = 1,
	LHS_Lobby                      = 2,
	LHS_Match                      = 3,
	LHS_Summary                    = 4,
	LHS_MAX                        = 5
};


// Enum TgClient.TgLobbyHUD.UIHeaderState
enum class EUIHeaderState : uint8_t
{
	UIHS_NONE                      = 0,
	UIHS_HOME                      = 1,
	UIHS_PLAY                      = 2,
	UIHS_SHOP                      = 3,
	UIHS_CARD                      = 4,
	UIHS_MAX                       = 5
};


// Enum TgClient.TgLobbyHUD.UIMapFrame
enum class EUIMapFrame : uint8_t
{
	UIMF_NONE                      = 0,
	UIMF_ENCHANTED_FOREST          = 1,
	UIMF_TEMPLE_RUINS              = 2,
	UIMF_OUTPOST                   = 3,
	UIMF_GLACIER_KEEP              = 4,
	UIMF_SERPENT_TEMPLE            = 5,
	UIMF_SINISTRAL                 = 6,
	UIMF_ARENA                     = 7,
	UIMF_DEATHGATE                 = 8,
	UIMF_DISTRICT                  = 9,
	UIMF_GLACIER_KEEP_V2           = 10,
	UIMF_MAX                       = 11
};


// Enum TgClient.TgMiniMap.TgMapOrientation
enum class ETgMapOrientation : uint8_t
{
	TMO_NORMAL                     = 0,
	TMO_ROTATE                     = 1,
	TMO_MAX                        = 2
};


// Enum TgClient.TgMiniMap.MiniMapIconLayer
enum class EMiniMapIconLayer : uint8_t
{
	MMap_Layer_Enemy_Deployable    = 0,
	MMap_Layer_Friendly_Deployable = 1,
	MMap_Layer_Enemy_Bot           = 2,
	MMap_Layer_Friendly_Bot        = 3,
	MMap_Layer_Enemy_Player        = 4,
	MMap_Layer_Friendly_Player     = 5,
	MMap_Layer_Neutral_Factory     = 6,
	MMap_Layer_Friendly_Factory    = 7,
	MMap_Layer_Enemy_Factory       = 8,
	MMap_Layer_Neutral_CapturePoint = 9,
	MMap_Layer_Enemy_CapturePoint  = 10,
	MMap_Layer_Friendly_CapturePoint = 11,
	MMap_Layer_Targeting           = 12,
	MMap_Layer_Local_Player_Pet    = 13,
	MMap_Layer_Local_Player        = 14,
	MMap_Layer_MAX                 = 15
};


// Enum TgClient.TgMiniMap.MiniMapPortalLayer
enum class EMiniMapPortalLayer : uint8_t
{
	MMap_Portal_Layer_Enemy        = 0,
	MMap_Portal_Layer_Friendly     = 1,
	MMap_Portal_Layer_MAX          = 2
};


// Enum TgClient.TgMiniMap.MinimapDisplayType
enum class EMinimapDisplayType : uint8_t
{
	MDT_Friendly                   = 0,
	MDT_Enemy                      = 1,
	MDT_FriendlyCB                 = 2,
	MDT_EnemyCB                    = 3,
	MDT_Neutral                    = 4,
	MDT_Pending                    = 5,
	MDT_MAX                        = 6
};


// Enum TgClient.TgSetting.SETTING_TYPE
enum class ESETTING_TYPE : uint8_t
{
	SET_SCREENTYPE                 = 0,
	SET_ASPECTRATIO                = 1,
	SET_RESOLUTION                 = 2,
	SET_RESOLUTIONSCALE            = 3,
	SET_ANTIALIASING               = 4,
	SET_VERTICALSYNC               = 5,
	SET_DETAILWORLD                = 6,
	SET_DETAILSHADOW               = 7,
	SET_DETAILTEXTURE              = 8,
	SET_DETAILPARTICLE             = 9,
	SET_DETAILSHADER               = 10,
	SET_SAFEFRAME                  = 11,
	SET_GAMMALEVEL                 = 12,
	SET_CROSSPLAY                  = 13,
	SET_TOGGLEZOOM                 = 14,
	SET_TOGGLEAUTOSPRINT           = 15,
	SET_RETICLETYPE                = 16,
	SET_RETICLECOLOR               = 17,
	SET_PROFANITYFILTER            = 18,
	SET_MOUSEINVERT                = 19,
	SET_MOUSESMOOTH                = 20,
	SET_MOUSESENSITIVITY           = 21,
	SET_ADSSENSITIVITY             = 22,
	SET_SCOPESENSITIVITY           = 23,
	SET_VOLUMEMUSIC                = 24,
	SET_VOLUMEVOICE                = 25,
	SET_VOLUMENOTIFY               = 26,
	SET_VOLUMEMASTER               = 27,
	SET_VOLUMEEFFECTS              = 28,
	SET_VOLUMEVOICECHAT            = 29,
	SET_VOLUMEVOICECHATMIC         = 30,
	SET_VOICECHATENABLED           = 31,
	SET_VOICECHATPUSHTOTALK        = 32,
	SET_AUDIOPANNING               = 33,
	SET_GAMEPADSTYLE               = 34,
	SET_GAMEPADINVERT              = 35,
	SET_GAMEPADENABLED             = 36,
	SET_XAXISSENSITIVITY           = 37,
	SET_YAXISSENSITIVITY           = 38,
	SET_HAPTICFEEDBACK             = 39,
	SET_AIMACCELBOOST              = 40,
	SET_AIMASSISTMAGNET            = 41,
	SET_AIMASSISTFRICTION          = 42,
	SET_DAMAGENUMBERSTYPE          = 43,
	SET_CROSSINPUT                 = 44,
	SET_GYRO                       = 45,
	SET_GYROSENSITIVITYX           = 46,
	SET_GYROSENSITIVITYY           = 47,
	SET_MAX                        = 48
};


// Enum TgClient.TgSetting.SETTING_BINARY
enum class ESETTING_BINARY : uint8_t
{
	SEB_DISABLED                   = 0,
	SEB_ENABLED                    = 1,
	SEB_MAX                        = 2
};


// Enum TgClient.TgSetting.SETTING_SCREENTYPE
enum class ESETTING_SCREENTYPE : uint8_t
{
	SST_WINDOWED                   = 0,
	SST_BORDERLESS                 = 1,
	SST_FULLSCREEN                 = 2,
	SST_MAX                        = 3
};


// Enum TgClient.TgSetting.SETTING_ANTIALIASING
enum class ESETTING_ANTIALIASING : uint8_t
{
	SAA_OFF                        = 0,
	SAA_TWO                        = 1,
	SAA_FOUR                       = 2,
	SAA_EIGHT                      = 3,
	SAA_MAX                        = 4
};


// Enum TgClient.TgSetting.OPTION_DETAILLEVEL
enum class EOPTION_DETAILLEVEL : uint8_t
{
	SDL_LOWEST                     = 0,
	SDL_LOW                        = 1,
	SDL_MEDIUM                     = 2,
	SDL_HIGH                       = 3,
	SDL_MAX                        = 4
};


// Enum TgClient.TgSetting.SETTING_AIMACCELMODE
enum class ESETTING_AIMACCELMODE : uint8_t
{
	SAIM_DYNAMIC                   = 0,
	SAIM_CLASSIC                   = 1,
	SAIM_PRECISION                 = 2,
	SAIM_MAX                       = 3
};


// Enum TgClient.TgSetting.SETTING_DEADZONESIZE
enum class ESETTING_DEADZONESIZE : uint8_t
{
	SDZS_MINIMUM                   = 0,
	SDZS_SMALL                     = 1,
	SDZS_MEDIUM                    = 2,
	SDZS_LARGE                     = 3,
	SDZS_MAX                       = 4
};


// Enum TgClient.TgSetting.SETTING_AUDIOPANNING
enum class ESETTING_AUDIOPANNING : uint8_t
{
	SAP_SPEAKERS                   = 0,
	SAP_HEADPHONES                 = 1,
	SAP_MAX                        = 2
};


// Enum TgClient.UIArmory.ARMORY_TYPE
enum class EARMORY_TYPE : uint8_t
{
	ARMORY_CHICKEN                 = 0,
	ARMORY_MOUNT                   = 1,
	ARMORY_AVATAR                  = 2,
	ARMORY_CONTRAIL                = 3,
	ARMORY_EMOTE                   = 4,
	ARMORY_SPRAY                   = 5,
	ARMORY_TITLE                   = 6,
	ARMORY_SCREEN                  = 7,
	ARMORY_MAP_MARKER              = 8,
	ARMORY_DEATH_STAMP             = 9,
	ARMORY_MAX                     = 10
};


// Enum TgClient.UIArmory.ARMORY_STATE
enum class EARMORY_STATE : uint8_t
{
	EARM_CLASS                     = 0,
	EARM_ITEMS                     = 1,
	EARM_MAX                       = 2
};


// Enum TgClient.UIArmoryDetail.ARMORYDETAIL_STATE
enum class EARMORYDETAIL_STATE : uint8_t
{
	EARD_ITEM                      = 0,
	EARD_LOAD                      = 1,
	EARD_TREE                      = 2,
	EARD_MAX                       = 3
};


// Enum TgClient.UIDataItem.SimplifiedItemObtainabilityValue
enum class ESimplifiedItemObtainabilityValue : uint8_t
{
	SIOV_Normal                    = 0,
	SIOV_Limited                   = 1,
	SIOV_Exclusive                 = 2,
	SIOV_Mastery                   = 3,
	SIOV_Quest                     = 4,
	SIOV_VIPReward                 = 5,
	SIOV_MAX                       = 6
};


// Enum TgClient.UIDataItem.AbilityModifiedByDevice
enum class EAbilityModifiedByDevice : uint8_t
{
	AMBD_Armor                     = 0,
	AMBD_Weapon                    = 1,
	AMBD_AltFire                   = 2,
	AMBD_Ability                   = 3,
	AMBD_Movement                  = 4,
	AMBD_Ultimate                  = 5,
	AMBD_MAX                       = 6
};


// Enum TgClient.UIDataItem.StoreItemsSortingType
enum class EStoreItemsSortingType : uint8_t
{
	SIST_ByInGame                  = 0,
	SIST_ByRarityDescending        = 1,
	SIST_MAX                       = 2
};


// Enum TgClient.UIComponent_Currency.UICCurr_DisplayType
enum class EUICCurr_DisplayType : uint8_t
{
	UICCDT_Price                   = 0,
	UICCDT_OriginalPrice           = 1,
	UICCDT_Quantity                = 2,
	UICCDT_MAX                     = 3
};


// Enum TgClient.UIComponent_DLCPack.AdTextureSize
enum class EAdTextureSize : uint8_t
{
	ATS_DEFAULT                    = 0,
	ATS_SMALL                      = 1,
	ATS_MAX                        = 2
};


// Enum TgClient.UIComponent_HealFeedEntry.HealDisplayType
enum class EHealDisplayType : uint8_t
{
	HDT_RawHealing                 = 0,
	HDT_NoOverheal                 = 1,
	HDT_SymbolOnly                 = 2,
	HDT_MAX                        = 3
};


// Enum TgClient.UIComponent_ItemStatsEntry.ItemStatCategory
enum class EItemStatCategory : uint8_t
{
	ISC_Unknown                    = 0,
	ISC_Animation                  = 1,
	ISC_VFX                        = 2,
	ISC_Audio                      = 3,
	ISC_UniqueDeployable           = 4,
	ISC_DeathVFX                   = 5,
	ISC_StatDisplay                = 6,
	ISC_MAX                        = 7
};


// Enum TgClient.UIComponent_MatchDisplay.EUICMatchDisplayTabType
enum class EUICMatchDisplayTabType : uint8_t
{
	EUICMDT_Stats                  = 0,
	EUICMDT_Build                  = 1,
	EUICMDT_MAX                    = 2
};


// Enum TgClient.UIData_Quest.QuestType
enum class EQuestType : uint8_t
{
	EQT_Daily                      = 0,
	EQT_Collection                 = 1,
	EQT_Special                    = 2,
	EQT_Training                   = 3,
	EQT_ItemQuest                  = 4,
	EQT_Unique                     = 5,
	EQT_Twitch                     = 6,
	EQT_MAX                        = 7
};


// Enum TgClient.UIData_LeagueTierChange.UIDLTC_PromotionType
enum class EUIDLTC_PromotionType : uint8_t
{
	UIDLTC_Promoted                = 0,
	UIDLTC_Demoted                 = 1,
	UIDLTC_MAX                     = 2
};


// Enum TgClient.UIData_LobbySlotItem.UIChampionCustomizeState
enum class EUIChampionCustomizeState : uint8_t
{
	UICCS_Head                     = 0,
	UICCS_Body                     = 1,
	UICCS_Weapon                   = 2,
	UICCS_Emote                    = 3,
	UICCS_Voice                    = 4,
	UICCS_MVPPose                  = 5,
	UICCS_Mount                    = 6,
	UICCS_Spray                    = 7,
	UICCS_MAX                      = 8
};


// Enum TgClient.UIDataObject.UICardDeckType
enum class EUICardDeckType : uint8_t
{
	UIDT_OWNED                     = 0,
	UIDT_LOCKED                    = 1,
	UIDT_INDECK                    = 2,
	UIDT_POINTS                    = 3,
	UIDT_MAX                       = 4
};


// Enum TgClient.UIData_MatchInvitePlayerState.MatchInvitePlayerState
enum class EMatchInvitePlayerState : uint8_t
{
	MIPS_Waiting                   = 0,
	MIPS_JustAccepted              = 1,
	MIPS_Accepted                  = 2,
	MIPS_Failed                    = 3,
	MIPS_MAX                       = 4
};


// Enum TgClient.UIData_Queue.EUIDQCallToAction
enum class EUIDQCallToAction : uint8_t
{
	EUIDQCTA_None                  = 0,
	EUIDQCTA_NewMode               = 1,
	EUIDQCTA_NewMap                = 2,
	EUIDQCTA_MAX                   = 3
};


// Enum TgClient.UIDataAcquisition.QuestOrigin
enum class EQuestOrigin : uint8_t
{
	QO_NONE                        = 0,
	QO_FWOTD                       = 1,
	QO_MASTERY                     = 2,
	QO_VIPTIER                     = 3,
	QO_DAILYREWARD                 = 4,
	QO_DAILYQUEST                  = 5,
	QO_LORE                        = 6,
	QO_RANKEDREWARD                = 7,
	QO_BRREWARD                    = 8,
	QO_MAX                         = 9
};


// Enum TgClient.UIDataChampion.SimplifiedCardType
enum class ESimplifiedCardType : uint8_t
{
	SCT_Card                       = 0,
	SCT_BurnCard                   = 1,
	SCT_Talent                     = 2,
	SCT_MAX                        = 3
};


// Enum TgClient.UIDataGoals.QuestRewardDisplayType
enum class EQuestRewardDisplayType : uint8_t
{
	EQRDT_None                     = 0,
	EQRDT_Crystals                 = 1,
	EQRDT_Essence                  = 2,
	EQRDT_Gold                     = 3,
	EQRDT_Chest                    = 4,
	EQRDT_Card                     = 5,
	EQRDT_Item                     = 6,
	EQRDT_Texture                  = 7,
	EQRDT_MAX                      = 8
};


// Enum TgClient.UIDataLeagueTier.UIDLT_Tag
enum class EUIDLT_Tag : uint8_t
{
	UIDLT_Decays                   = 0,
	UIDLT_PlatinumQueue            = 1,
	UIDLT_NoDivisions              = 2,
	UIDLT_MAX                      = 3
};


// Enum TgClient.UIDataSocial.ELFPFilterIds
enum class ELFPFilterIds : uint8_t
{
	LFP_USE_MIC                    = 0,
	LFP_2v2                        = 1,
	LFP_3v3                        = 2,
	LFP_4v4                        = 3,
	LFP_Engineer                   = 4,
	LFP_FemaleDamage               = 5,
	LFP_FemaleSupport              = 6,
	LFP_IkMale                     = 7,
	LFP_MaleFlank                  = 8,
	LFP_MaleTank                   = 9,
	LFP_MaleUtility                = 10,
	LFP_Shaman                     = 11,
	LFP_MAX                        = 12
};


// Enum TgClient.UIHome.UIHOMENAV
enum class EUIHOMENAV : uint8_t
{
	UIHOME_PLAY                    = 0,
	UIHOME_QUESTS                  = 1,
	UIHOME_ARMORY                  = 2,
	UIHOME_SHOP                    = 3,
	UIHOME_SOCIAL                  = 4,
	UIHOME_OPTIONS                 = 5,
	UIHOME_MAX                     = 6
};


// Enum TgClient.UIHudBot.HUD_PROMPT_TYPE
enum class EHUD_PROMPT_TYPE : uint8_t
{
	PROMPT_NONE                    = 0,
	PROMPT_FORGE                   = 1,
	PROMPT_MAX                     = 2
};


// Enum TgClient.UIHudBot.HUD_CAST_TYPE
enum class EHUD_CAST_TYPE : uint8_t
{
	CAST_NONE                      = 0,
	CAST_HEAL                      = 1,
	CAST_FORGE                     = 2,
	CAST_MOUNT                     = 3,
	CAST_REPAIR                    = 4,
	CAST_REVIVE                    = 5,
	CAST_MAX                       = 6
};


// Enum TgClient.UIHudCenter.UIDamageSeverity
enum class EUIDamageSeverity : uint8_t
{
	UIDAMAGE_Light                 = 0,
	UIDAMAGE_Medium                = 1,
	UIDAMAGE_Heavy                 = 2,
	UIDAMAGE_AOEMedium             = 3,
	UIDAMAGE_AOEHeavy              = 4,
	UIDAMAGE_MAX                   = 5
};


// Enum TgClient.UIHudCenter.UIAmmoType
enum class EUIAmmoType : uint8_t
{
	UIAMMO_BULLET                  = 0,
	UIAMMO_ICE                     = 1,
	UIAMMO_CELL                    = 2,
	UIAMMO_DART                    = 3,
	UIAMMO_ARROW                   = 4,
	UIAMMO_LARGE                   = 5,
	UIAMMO_SMALL                   = 6,
	UIAMMO_FLAME                   = 7,
	UIAMMO_POTION                  = 8,
	UIAMMO_SHELL                   = 9,
	UIAMMO_ROCKET                  = 10,
	UIAMMO_MAX                     = 11
};


// Enum TgClient.UIHudCenter.ECombatInfoType
enum class ECombatInfoType : uint8_t
{
	ECIT_All                       = 0,
	ECIT_Damage                    = 1,
	ECIT_Status                    = 2,
	ECIT_MAX                       = 3
};


// Enum TgClient.UIHudForge.FORGE_STATE
enum class EFORGE_STATE : uint8_t
{
	EFORGE_CLASS                   = 0,
	EFORGE_NEUTRAL                 = 1,
	EFORGE_UPGRADE                 = 2,
	EFORGE_MAX                     = 3
};


// Enum TgClient.UIHudMinimap.POIMessageState
enum class EPOIMessageState : uint8_t
{
	POIMS_None                     = 0,
	POIMS_Holding                  = 1,
	POIMS_Preshow                  = 2,
	POIMS_Showing                  = 3,
	POIMS_Postshow                 = 4,
	POIMS_MAX                      = 5
};


// Enum TgClient.UIHudMinimap.ObjectiveClearState
enum class EObjectiveClearState : uint8_t
{
	OCS_None                       = 0,
	OCS_Clear                      = 1,
	OCS_Fade                       = 2,
	OCS_MAX                        = 3
};


// Enum TgClient.UIHudOverlay.EDamageNumberSourceType
enum class EDamageNumberSourceType : uint8_t
{
	DNST_Health                    = 0,
	DNST_Armor                     = 1,
	DNST_Shield                    = 2,
	DNST_MAX                       = 3
};


// Enum TgClient.UIHudOverlay.EPointerDirection
enum class EPointerDirection : uint8_t
{
	EPD_Down                       = 0,
	EPD_Up                         = 1,
	EPD_Left                       = 2,
	EPD_Right                      = 3,
	EPD_MAX                        = 4
};


// Enum TgClient.UIHudOverlay.EPlayerIconState
enum class EPlayerIconState : uint8_t
{
	EPIS_Hidden                    = 0,
	EPIS_Icon                      = 1,
	EPIS_Respawn                   = 2,
	EPIS_MAX                       = 3
};


// Enum TgClient.UIHudVGS.VGS_GamepadItem
enum class EVGS_GamepadItem : uint8_t
{
	VGSGP_L                        = 0,
	VGSGP_R                        = 1,
	VGSGP_Y                        = 2,
	VGSGP_X                        = 3,
	VGSGP_B                        = 4,
	VGSGP_A                        = 5,
	VGSGP_MAX                      = 6
};


// Enum TgClient.UIInteractable_Item.DisplayOverride
enum class EDisplayOverride : uint8_t
{
	eDO_None                       = 0,
	eDO_Owned                      = 1,
	eDO_Unowned                    = 2,
	eDO_MAX                        = 3
};


// Enum TgClient.UIJoinCustomPopup.JCM_DUMMY_BUTTONS
enum class EJCM_DUMMY_BUTTONS : uint8_t
{
	JCM_BD_MATCHNAME               = 0,
	JCM_BD_PASSWORD                = 1,
	JCM_BD_JOIN_BUTTON             = 2,
	JCM_BD_MAX                     = 3
};


// Enum TgClient.UILogin.UILoginState
enum class EUILoginState : uint8_t
{
	UILS_NONE                      = 0,
	UILS_INPUT                     = 1,
	UILS_WAITING                   = 2,
	UILS_LOADING                   = 3,
	UILS_EULA                      = 4,
	UILS_CREATE                    = 5,
	UILS_LOGGEDIN                  = 6,
	UILS_QUEUED                    = 7,
	UILS_INPUT_ANONYMOUS           = 8,
	UILS_LINK_ACCOUNT_NEW          = 9,
	UILS_LINK_ACCOUNT_PROMPT_GAME  = 10,
	UILS_LINK_ACCOUNT_PROMPT_HIREZ = 11,
	UILS_LINK_ACCOUNT_PROMPT_DECLINE_VERIFY = 12,
	UILS_LINK_ACCOUNT_EXISTING     = 13,
	UILS_TWO_FACTOR                = 14,
	UILS_TWO_FACTOR_LINK_ACCOUNT_EXISTING = 15,
	UILS_MAX                       = 16
};


// Enum TgClient.UIScene_UIBattlePass.UIBattlePassTab
enum class EUIBattlePassTab : uint8_t
{
	UIBP_Home                      = 0,
	UIBP_Challenges                = 1,
	UIBP_Picks                     = 2,
	UIBP_MAX                       = 3
};


// Enum TgClient.UISettings.UISETTINGS_CATEGORY
enum class EUISETTINGS_CATEGORY : uint8_t
{
	UISC_VIDEO                     = 0,
	UISC_AUDIO                     = 1,
	UISC_HUD                       = 2,
	UISC_CONTROLS                  = 3,
	UISC_KEYBINDS                  = 4,
	UISC_MAX                       = 5
};


// Enum TgClient.UISocial.UISOCIALPLAYER
enum class EUISOCIALPLAYER : uint8_t
{
	UISP_ADD                       = 0,
	UISP_KICK                      = 1,
	UISP_LEAVE                     = 2,
	UISP_ACCEPT                    = 3,
	UISP_CANCEL                    = 4,
	UISP_INVITE                    = 5,
	UISP_REMOVE                    = 6,
	UISP_DECLINE                   = 7,
	UISP_MESSAGE                   = 8,
	UISP_PROFILE                   = 9,
	UISP_MAX                       = 10
};


// Enum TgClient.UISocial.UISOCIALPOPUP
enum class EUISOCIALPOPUP : uint8_t
{
	UISOCIALPOPUP_NONE             = 0,
	UISOCIALPOPUP_INVITE           = 1,
	UISOCIALPOPUP_PLAYER           = 2,
	UISOCIALPOPUP_ADDFRIEND        = 3,
	UISOCIALPOPUP_MAX              = 4
};


// Enum TgClient.UISocial.UISOCIALTAV
enum class EUISOCIALTAV : uint8_t
{
	UISOCIALTAB_PARTY              = 0,
	UISOCIALTAB_FRIEND             = 1,
	UISOCIALTAB_MAX                = 2
};


// Enum TgClient.UIArmoryTalent.ARMORY_TALENT_HIGHLIGHT
enum class EARMORY_TALENT_HIGHLIGHT : uint8_t
{
	ARMORY_TALENT_HIGHLIGHT_NULL   = 0,
	ARMORY_TALENT_HIGHLIGHT_MAJOR  = 1,
	ARMORY_TALENT_HIGHLIGHT_FORGE  = 2,
	ARMORY_TALENT_HIGHLIGHT_GENERAL = 3,
	ARMORY_TALENT_HIGHLIGHT_MAX    = 4
};


// Enum TgClient.UIComponent_DailyRewardDay.UIDAILY_REWARD_STATE
enum class EUIDAILY_REWARD_STATE : uint8_t
{
	UIDRS_PAST                     = 0,
	UIDRS_PRESENT                  = 1,
	UIDRS_FUTURE                   = 2,
	UIDRS_MAX                      = 3
};


// Enum TgClient.UIComponent_DailyRewardPanel.UIDAILY_REWARD_PANEL_STATE
enum class EUIDAILY_REWARD_PANEL_STATE : uint8_t
{
	UIDRPS_CLAIMABLE               = 0,
	UIDRPS_LOCKED                  = 1,
	UIDRPS_MAX                     = 2
};


// Enum TgClient.UIComponent_DeviceDetailsPerk.UIDEVICE_PERK_TYPE
enum class EUIDEVICE_PERK_TYPE : uint8_t
{
	UIDPT_CLASS                    = 0,
	UIDPT_ELEMENT                  = 1,
	UIDPT_MAX                      = 2
};


// Enum TgClient.UIComponent_PartyLobbyPlayer.UIPARTYLOBBY_PLAYER_STATE
enum class EUIPARTYLOBBY_PLAYER_STATE : uint8_t
{
	UIPLPS_EMPTY                   = 0,
	UIPLPS_INVITE                  = 1,
	UIPLPS_PENDING                 = 2,
	UIPLPS_DECLINED                = 3,
	UIPLPS_FILLED                  = 4,
	UIPLPS_MAX                     = 5
};


// Enum TgClient.UIComponent_PartyLobbyPlayerMenu.UIPARTY_LOBBY_PLAYER_MENU_BUTTONS
enum class EUIPARTY_LOBBY_PLAYER_MENU_BUTTONS : uint8_t
{
	UIPLPMB_MUTE                   = 0,
	UIPLPMB_VIEW                   = 1,
	UIPLPMB_ADD                    = 2,
	UIPLPMB_KICK                   = 3,
	UIPLPMB_MAKELEADER             = 4,
	UIPLPMB_LEAVE                  = 5,
	UIPLPMB_CLASSLOADOUT           = 6,
	UIPLPMB_GLOBALARMORY           = 7,
	UIPLPMB_MAX                    = 8
};


// Enum TgClient.UIComponent_PlayerContextMenu.UIPLAYER_CONTEXT_MENU_BUTTONS
enum class EUIPLAYER_CONTEXT_MENU_BUTTONS : uint8_t
{
	UIPCMB_MUTE                    = 0,
	UIPCMB_VIEW                    = 1,
	UIPCMB_ADD                     = 2,
	UIPCMB_REPORT                  = 3,
	UIPCMB_MAX                     = 4
};


// Enum TgClient.UIComponent_ShopList.UISHOPLIST_SECTION_TYPE
enum class EUISHOPLIST_SECTION_TYPE : uint8_t
{
	UISLST_FEATURED                = 0,
	UISLST_MAJOR                   = 1,
	UISLST_MINOR                   = 2,
	UISLST_DAILY                   = 3,
	UISLST_MAX                     = 4
};


// Enum TgClient.UIData_SocialAction.SAL_LIST
enum class ESAL_LIST : uint8_t
{
	SAL_CROSS_PLATFORM_FRIENDS     = 0,
	SAL_PORTAL_FRIENDS             = 1,
	SAL_ALL_FRIENDS                = 2,
	SAL_PARTY                      = 3,
	SAL_SEARCH                     = 4,
	SAL_REFERRED                   = 5,
	SAL_REFERRERS                  = 6,
	SAL_MAX                        = 7
};


// Enum TgClient.UIData_SocialAction.SAACT_ACTION
enum class ESAACT_ACTION : uint8_t
{
	SAACT_VIEW_PROFILE             = 0,
	SAACT_ADD_FRIEND               = 1,
	SAACT_PARTY_INVITE             = 2,
	SAACT_PARTY_KICK               = 3,
	SAACT_SEND_REFERRAL            = 4,
	SAACT_REQUEST_INFO_STATS       = 5,
	SAACT_SELECT_REFERRER          = 6,
	SAACT_MAX                      = 7
};


// Enum TgClient.UIScene_UIHudMenu.UIHUDMENU_STATE
enum class EUIHUDMENU_STATE : uint8_t
{
	UIHMS_MAP                      = 0,
	UIHMS_INVENTORY                = 1,
	UIHMS_CLASS                    = 2,
	UIHMS_MAX                      = 3
};


// Enum TgClient.UIScene_UIRadialMenuBase.RadialMenuDir
enum class ERadialMenuDir : uint8_t
{
	RMD_E                          = 0,
	RMD_S                          = 1,
	RMD_W                          = 2,
	RMD_N                          = 3,
	RMD_Center                     = 4,
	RMD_MAX                        = 5
};


// Enum TgClient.UIScene_UIRadialMenuBase.RadialMenuPage
enum class ERadialMenuPage : uint8_t
{
	RMP_LEFT                       = 0,
	RMP_MIDDLE                     = 1,
	RMP_RIGHT                      = 2,
	RMP_MAX                        = 3
};


// Enum TgClient.UIScene_UIShop.UISHOP_STATE
enum class EUISHOP_STATE : uint8_t
{
	UISHS_ITEMS                    = 0,
	UISHS_CROWNS                   = 1,
	UISHS_MAX                      = 2
};


// Enum TgClient.UISummary.UISummaryState
enum class EUISummaryState : uint8_t
{
	UISS_NONE                      = 0,
	UISS_PLACE                     = 1,
	UISS_LEVEL                     = 2,
	UISS_ELIMS                     = 3,
	UISS_QUEST                     = 4,
	UISS_CLASS                     = 5,
	UISS_TALENT                    = 6,
	UISS_BATTLE                    = 7,
	UISS_UNLOCK                    = 8,
	UISS_RETURN                    = 9,
	UISS_MAX                       = 10
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TgClient.TgClientHUD.SceneInfo
// 0x001C
struct FSceneInfo
{
	int                                                nDepth;                                                   // 0x0000(0x0004)
	struct FName                                       nmName;                                                   // 0x0004(0x0008)
	struct FString                                     sPath;                                                    // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgDataChunk.DataField
// 0x0054
struct FDataField
{
	struct FString                                     FieldName;                                                // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FASValue                                    Value;                                                    // 0x0010(0x0020) (NeedCtorLink)
	struct FASValue                                    Last;                                                     // 0x0030(0x0020) (NeedCtorLink)
	unsigned long                                      bDirty : 1;                                               // 0x0050(0x0004)
};

// ScriptStruct TgClient.UIPatchNotesJsonManager.PatchVersionNumber
// 0x0010
struct FPatchVersionNumber
{
	int                                                nVersionMajor;                                            // 0x0000(0x0004)
	int                                                nVersionMinor;                                            // 0x0004(0x0004)
	int                                                nVersionPatch;                                            // 0x0008(0x0004)
	int                                                nVersionBuild;                                            // 0x000C(0x0004)
};

// ScriptStruct TgClient.UIPatchNotesJsonManager.PatchNotesData
// 0x0068
struct FPatchNotesData
{
	struct FPatchVersionNumber                         PatchVersion;                                             // 0x0000(0x0010)
	struct FPatchVersionNumber                         PatchRelevantVersion;                                     // 0x0010(0x0010)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0020(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIPatchNotesJsonManager.PatchNotesData.PatchNotes
};

// ScriptStruct TgClient.TgData_Notifications.Notification
// 0x0054
struct FNotification
{
	TEnumAsByte<ENotificationType>                     eType;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     sTitle;                                                   // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDescription;                                             // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      dwIconIndex;                                              // 0x0024(0x0004)
	struct FString                                     sIconId;                                                  // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      dwItemId;                                                 // 0x0038(0x0004)
	struct FQWord                                      qwTimeStamp;                                              // 0x003C(0x0008)
	struct Fdword                                      dwCount;                                                  // 0x0044(0x0004)
	struct Fdword                                      dwItemType;                                               // 0x0048(0x0004)
	struct Fdword                                      dwItemSubType;                                            // 0x004C(0x0004)
	unsigned long                                      bNavigable : 1;                                           // 0x0050(0x0004)
	unsigned long                                      bShowDescription : 1;                                     // 0x0050(0x0004)
	unsigned long                                      bUseTreasureStack : 1;                                    // 0x0050(0x0004)
	unsigned long                                      bSeen : 1;                                                // 0x0050(0x0004)
};

// ScriptStruct TgClient.UIDataChampion.UIDataDeck
// 0x003C
struct FUIDataDeck
{
	int                                                nId;                                                      // 0x0000(0x0004)
	unsigned long                                      bTemplate : 1;                                            // 0x0004(0x0004)
	struct FString                                     sName;                                                    // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDesc;                                                    // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nDevice[0x5];                                             // 0x0028(0x0004)
};

// ScriptStruct TgClient.UIDataChatManager.ChannelChatData
// 0x0010
struct FChannelChatData
{
	TArray<class UTgChatData*>                         ChatData;                                                 // 0x0000(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.InputGroup.UIGroupObject
// 0x0028
struct FUIGroupObject
{
	int                                                nLocX;                                                    // 0x0000(0x0004)
	int                                                nLocY;                                                    // 0x0004(0x0004)
	int                                                nWidth;                                                   // 0x0008(0x0004)
	int                                                nHeight;                                                  // 0x000C(0x0004)
	class UInputGroup*                                 pGroup;                                                   // 0x0010(0x0008)
	class UGFxObject*                                  pObj;                                                     // 0x0018(0x0008)
	class UGFxObject*                                  pCursorHoverObj;                                          // 0x0020(0x0008)
};

// ScriptStruct TgClient.InputAction.InputKeyEvent
// 0x001C
struct FInputKeyEvent
{
	struct FName                                       nmKey;                                                    // 0x0000(0x0008)
	TEnumAsByte<EInputEvent>                           eEvent;                                                   // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FString                                     sDisplayName;                                             // 0x000C(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.TgSpectatorHUD.WidgetClassReplacementPair
// 0x0010
struct FWidgetClassReplacementPair
{
	class UClass*                                      ReplacedClass;                                            // 0x0000(0x0008) (Edit)
	class UClass*                                      NewClass;                                                 // 0x0008(0x0008) (Edit)
};

// ScriptStruct TgClient.TgGameDC_Chat.QueueMessage
// 0x0030
struct FQueueMessage
{
	int                                                Id;                                                       // 0x0000(0x0004)
	TEnumAsByte<ETG_CHAT_PRIORITY>                     Priority;                                                 // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	unsigned long                                      bHasPlayedSound : 1;                                      // 0x0008(0x0004)
	int                                                VoicePackId;                                              // 0x000C(0x0004)
	int                                                VoiceBotId;                                               // 0x0010(0x0004)
	int                                                VoiceSkinId;                                              // 0x0014(0x0004)
	struct FString                                     VoicePackCustomSuffix;                                    // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	class UAkBaseSoundObject*                          SoundObject;                                              // 0x0028(0x0008)
};

// ScriptStruct TgClient.TgGameDC_Chat.MessageToken
// 0x001C
struct FMessageToken
{
	int                                                msgId;                                                    // 0x0000(0x0004)
	int                                                MsgIdRed;                                                 // 0x0004(0x0004)
	int                                                MsgIdBlue;                                                // 0x0008(0x0004)
	struct FString                                     Token;                                                    // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgMiniMap.BuffMonsterMIC
// 0x0018
struct FBuffMonsterMIC
{
	class UMaterialInstanceConstant*                   SpawnedMIC;                                               // 0x0000(0x0008)
	class UMaterialInstanceConstant*                   DroppedMIC;                                               // 0x0008(0x0008)
	class UMaterialInstanceConstant*                   TimerMIC;                                                 // 0x0010(0x0008)
};

// ScriptStruct TgClient.TgMiniMap.LayerIndex
// 0x0010
struct FLayerIndex
{
	TArray<int>                                        Entries;                                                  // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgMiniMap.MiniMapPingInfo
// 0x0048
struct FMiniMapPingInfo
{
	float                                              fServerStartTime;                                         // 0x0000(0x0004)
	float                                              fClientStartTime;                                         // 0x0004(0x0004)
	class ATgRepInfo_Player*                           pingedPri;                                                // 0x0008(0x0008)
	struct FVector                                     vPingedLoc;                                               // 0x0010(0x000C)
	unsigned long                                      bIsPinging : 1;                                           // 0x001C(0x0004)
	TEnumAsByte<EPING_TYPE>                            eType;                                                    // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                nIconSize;                                                // 0x0024(0x0004)
	class UMaterialInstanceConstant*                   pingMIC;                                                  // 0x0028(0x0008)
	class ATgRepInfo_Player*                           sourcePRI;                                                // 0x0030(0x0008)
	int                                                SourceIndex;                                              // 0x0038(0x0004)
	struct FVector                                     vSourceWorldLocation;                                     // 0x003C(0x000C)
};

// ScriptStruct TgClient.TgSetting.OptionData
// 0x0018
struct FOptionData
{
	float                                              fValue;                                                   // 0x0000(0x0004)
	float                                              fOther;                                                   // 0x0004(0x0004)
	struct FString                                     sName;                                                    // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgSettingsManager.TgKeyCommand
// 0x003C
struct FTgKeyCommand
{
	unsigned long                                      bAllowGamepadAxis : 1;                                    // 0x0000(0x0004)
	int                                                nPropId;                                                  // 0x0004(0x0004)
	struct FString                                     sKeyCommand;                                              // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sMirroredCommand;                                         // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             sDefaultKeys;                                             // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bShowForGamepad : 1;                                      // 0x0038(0x0004)
	unsigned long                                      bShowForKeyboard : 1;                                     // 0x0038(0x0004)
};

// ScriptStruct TgClient.UIComponent_HealFeed.HealSource
// 0x0034
struct FHealSource
{
	int                                                nPawnId;                                                  // 0x0000(0x0004)
	class UGFxObject*                                  mcIconParent;                                             // 0x0004(0x0008)
	class UGFxObject*                                  mcIcon;                                                   // 0x000C(0x0008)
	class UGFxObject*                                  mcGlow;                                                   // 0x0014(0x0008)
	float                                              fHideTimer;                                               // 0x001C(0x0004)
	float                                              fGlowTimer;                                               // 0x0020(0x0004)
	TArray<class UUIComponent_HealFeedEntry*>          ActiveEntries;                                            // 0x0024(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.UIScene.UIAnimData
// 0x0028
struct FUIAnimData
{
	unsigned char                                      eType;                                                    // 0x0000(0x0001)
	unsigned char                                      eQuad;                                                    // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              fOrig;                                                    // 0x0004(0x0004)
	float                                              fDelay;                                                   // 0x0008(0x0004)
	float                                              fTarget;                                                  // 0x000C(0x0004)
	float                                              fDuration;                                                // 0x0010(0x0004)
	float                                              fTimeLeft;                                                // 0x0014(0x0004)
	class UGFxObject*                                  mcObject;                                                 // 0x0018(0x0008)
	class UAkBaseSoundObject*                          akSound;                                                  // 0x0020(0x0008)
};

// ScriptStruct TgClient.UIScene_UIFooterGamepad.FooterOption
// 0x0044
struct FFooterOption
{
	int                                                nOption;                                                  // 0x0000(0x0004)
	class UGFxObject*                                  pObj;                                                     // 0x0004(0x0008)
	class UGFxObject*                                  pKey;                                                     // 0x000C(0x0008)
	class UGFxObject*                                  pKeyTF;                                                   // 0x0014(0x0008)
	class UGFxObject*                                  pGlow;                                                    // 0x001C(0x0008)
	class UGFxObject*                                  pGlowTF;                                                  // 0x0024(0x0008)
	class UGFxObject*                                  pTitle;                                                   // 0x002C(0x0008)
	class UGFxObject*                                  pTitleTF;                                                 // 0x0034(0x0008)
	class UGFxObject*                                  pFrame;                                                   // 0x003C(0x0008)
};

// ScriptStruct TgClient.UIScene_UIAcquisition.UIAcquiredItem
// 0x00F0
struct FUIAcquiredItem
{
	class UUIInteractable_Item*                        Card;                                                     // 0x0000(0x0008)
	class UGFxObject*                                  mcEquipButton;                                            // 0x0008(0x0008)
	class UGFxObject*                                  mcEquippedText;                                           // 0x0010(0x0008)
	class UGFxObject*                                  mcEquipPrompt;                                            // 0x0018(0x0008)
	class UGFxObject*                                  mcStoreItemContainer;                                     // 0x0020(0x0008)
	class UGFxObject*                                  mcItemContainer;                                          // 0x0028(0x0008)
	class UGFxObject*                                  mcBoostContainer;                                         // 0x0030(0x0008)
	class UGFxObject*                                  mcBoostQuantity;                                          // 0x0038(0x0008)
	class UGFxObject*                                  mcChestContainer;                                         // 0x0040(0x0008)
	class UGFxObject*                                  mcChestQuantityText;                                      // 0x0048(0x0008)
	class UGFxObject*                                  mcChestChampionPortrait;                                  // 0x0050(0x0008)
	class UGFxObject*                                  mcChestChampionPortraitTexture;                           // 0x0058(0x0008)
	class UGFxObject*                                  mcChestCardQuantity;                                      // 0x0060(0x0008)
	class UGFxObject*                                  mcChampionIcon;                                           // 0x0068(0x0008)
	class UGFxObject*                                  mcChampionImage;                                          // 0x0070(0x0008)
	class UGFxObject*                                  mcChampionTitle;                                          // 0x0078(0x0008)
	class UGFxObject*                                  mcItemIcon;                                               // 0x0080(0x0008)
	class UGFxObject*                                  mcCardIcon;                                               // 0x0088(0x0008)
	class UGFxObject*                                  mcCurrency;                                               // 0x0090(0x0008)
	class UGFxObject*                                  mcTexture;                                                // 0x0098(0x0008)
	class UGFxObject*                                  mcRarityFrame;                                            // 0x00A0(0x0008)
	class UGFxObject*                                  mcRarityText;                                             // 0x00A8(0x0008)
	class UGFxObject*                                  mcItemTitle;                                              // 0x00B0(0x0008)
	class UGFxObject*                                  mcItemAudio;                                              // 0x00B8(0x0008)
	class UGFxObject*                                  mcItemChampion;                                           // 0x00C0(0x0008)
	class UGFxObject*                                  mcItemChampionIcon;                                       // 0x00C8(0x0008)
	class UGFxObject*                                  mcItemQuantityText;                                       // 0x00D0(0x0008)
	class UGFxObject*                                  mcOwnedText;                                              // 0x00D8(0x0008)
	class UGFxObject*                                  mcOwnedCheckmark;                                         // 0x00E0(0x0008)
	class UGFxObject*                                  mcQuestIcon;                                              // 0x00E8(0x0008)
};

// ScriptStruct TgClient.UIComponent_OptionEntryPaged.PagedEntry
// 0x0014
struct FPagedEntry
{
	int                                                nValue;                                                   // 0x0000(0x0004)
	struct FString                                     sText;                                                    // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UILandingPanelManager.JsonFeatureData
// 0x0094
struct FJsonFeatureData
{
	struct FString                                     sId;                                                      // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sHeader;                                                  // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sSubheader;                                               // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDesc;                                                    // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sData;                                                    // 0x0040(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sData2;                                                   // 0x0050(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nMinLevel;                                                // 0x0060(0x0004)
	int                                                nMaxLevel;                                                // 0x0064(0x0004)
	int                                                nProbability;                                             // 0x0068(0x0004)
	int                                                nVersion;                                                 // 0x006C(0x0004)
	int                                                nNumForcedPresentations;                                  // 0x0070(0x0004)
	int                                                nType;                                                    // 0x0074(0x0004)
	int                                                nXpos;                                                    // 0x0078(0x0004)
	int                                                nYpos;                                                    // 0x007C(0x0004)
	int                                                nWidth;                                                   // 0x0080(0x0004)
	int                                                nHeight;                                                  // 0x0084(0x0004)
	unsigned long                                      bIsUsed : 1;                                              // 0x0088(0x0004)
	unsigned long                                      bIsLive : 1;                                              // 0x0088(0x0004)
	class UTexture2DDynamic*                           Texture;                                                  // 0x008C(0x0008)
};

// ScriptStruct TgClient.UIComponent_PopupManager.SceneData
// 0x0010
struct FSceneData
{
	struct FName                                       nmSceneName;                                              // 0x0000(0x0008)
	class UUIData*                                     pData;                                                    // 0x0008(0x0008)
};

// ScriptStruct TgClient.UIComponent_List.UICListEntry
// 0x0028
struct FUICListEntry
{
	class UUIComponent_Display*                        pDisplay;                                                 // 0x0000(0x0008)
	class UUIComponent_Interactable*                   pInteractable;                                            // 0x0008(0x0008)
	float                                              fOrigX;                                                   // 0x0010(0x0004)
	float                                              fOrigY;                                                   // 0x0014(0x0004)
	int                                                nPosX;                                                    // 0x0018(0x0004)
	int                                                nPosY;                                                    // 0x001C(0x0004)
	int                                                nWidth;                                                   // 0x0020(0x0004)
	int                                                nHeight;                                                  // 0x0024(0x0004)
};

// ScriptStruct TgClient.UIComponent_List.SmoothScrollingAxis
// 0x0020
struct FSmoothScrollingAxis
{
	unsigned long                                      bEnable : 1;                                              // 0x0000(0x0004)
	float                                              fDelay;                                                   // 0x0004(0x0004)
	float                                              fMargin;                                                  // 0x0008(0x0004)
	int                                                nTarget;                                                  // 0x000C(0x0004)
	int                                                nVelocity;                                                // 0x0010(0x0004)
	float                                              fBufferPos;                                               // 0x0014(0x0004)
	float                                              fSpan;                                                    // 0x0018(0x0004)
	float                                              fAnimTime;                                                // 0x001C(0x0004)
};

// ScriptStruct TgClient.UIComponent_ShopList.UICShopListSection
// 0x003C
struct FUICShopListSection
{
	class UGFxObject*                                  m_mcContainer;                                            // 0x0000(0x0008)
	class UUIComponent_ShopListSectionHeader*          m_pHeader;                                                // 0x0008(0x0008)
	int                                                m_nNavXStart;                                             // 0x0010(0x0004)
	int                                                m_nNavWidth;                                              // 0x0014(0x0004)
	float                                              m_fXStart;                                                // 0x0018(0x0004)
	float                                              m_fTotalWidth;                                            // 0x001C(0x0004)
	class UUIData_LootTableItem*                       m_pLTI;                                                   // 0x0020(0x0008)
	TEnumAsByte<EUISHOPLIST_SECTION_TYPE>              m_eType;                                                  // 0x0028(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	TArray<struct FUICListEntry>                       m_ListItems;                                              // 0x002C(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.TgGfxScene.UIDisplayData
// 0x000C
struct FUIDisplayData
{
	unsigned char                                      eType;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UGFxObject*                                  pObj;                                                     // 0x0004(0x0008)
};

// ScriptStruct TgClient.TgGfxScene.UIKeyCommand
// 0x0014
struct FUIKeyCommand
{
	int                                                nMessage;                                                 // 0x0000(0x0004)
	struct FString                                     sCommand;                                                 // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UIAcquisition.AcquiredItem
// 0x0010
struct FAcquiredItem
{
	int                                                nType;                                                    // 0x0000(0x0004)
	int                                                nItem;                                                    // 0x0004(0x0004)
	int                                                nCount;                                                   // 0x0008(0x0004)
	int                                                nQuest;                                                   // 0x000C(0x0004)
};

// ScriptStruct TgClient.UIArmoryDetail.UINODESET
// 0x0198
struct FUINODESET
{
	class UGFxObject*                                  pObj;                                                     // 0x0000(0x0008)
	class UGFxObject*                                  pNode[0xA];                                               // 0x0008(0x0008)
	class UGFxObject*                                  pLock[0xA];                                               // 0x0058(0x0008)
	class UGFxObject*                                  pIcon[0xA];                                               // 0x00A8(0x0008)
	class UGFxObject*                                  pTexture[0xA];                                            // 0x00F8(0x0008)
	class UGFxObject*                                  pNodeLine[0xA];                                           // 0x0148(0x0008)
};

// ScriptStruct TgClient.UIArmoryDetail.UITITLESET
// 0x0188
struct FUITITLESET
{
	class UGFxObject*                                  pObj;                                                     // 0x0000(0x0008)
	class UGFxObject*                                  pNode[0x7];                                               // 0x0008(0x0008)
	class UGFxObject*                                  pLock[0x7];                                               // 0x0040(0x0008)
	class UGFxObject*                                  pTitle[0x7];                                              // 0x0078(0x0008)
	class UGFxObject*                                  pFrame[0xA];                                              // 0x00B0(0x0008)
	class UGFxObject*                                  pTexture[0xA];                                            // 0x0100(0x0008)
	class UGFxObject*                                  pNodeLine[0x7];                                           // 0x0150(0x0008)
};

// ScriptStruct TgClient.UIChatScene.ChatMessage
// 0x0018
struct FChatMessage
{
	struct FString                                     sMessage;                                                 // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bIsVIP : 1;                                               // 0x0010(0x0004)
	struct Fdword                                      dwVIPTier;                                                // 0x0014(0x0004)
};

// ScriptStruct TgClient.UIHudBot.HudBuffEffect
// 0x001C
struct FHudBuffEffect
{
	int                                                nGroup;                                                   // 0x0000(0x0004)
	float                                              fPercent;                                                 // 0x0004(0x0004)
	int                                                nIcon;                                                    // 0x0008(0x0004)
	struct FString                                     sName;                                                    // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UIHudBot.UICOMBATENTRY
// 0x000C
struct FUICOMBATENTRY
{
	float                                              fTimer;                                                   // 0x0000(0x0004)
	class UGFxObject*                                  pObj;                                                     // 0x0004(0x0008)
};

// ScriptStruct TgClient.UIHudCenter.HudProjectile
// 0x0040
struct FHudProjectile
{
	int                                                nId;                                                      // 0x0000(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x0004(0x0004)
	unsigned long                                      bInRange : 1;                                             // 0x0004(0x0004)
	struct FVector                                     vProjLoc;                                                 // 0x0008(0x000C)
	float                                              fScaleMult;                                               // 0x0014(0x0004)
	class UGFxObject*                                  pObj;                                                     // 0x0018(0x0008)
	class UGFxObject*                                  pPointer;                                                 // 0x0020(0x0008)
	class UGFxObject*                                  pIconTinted;                                              // 0x0028(0x0008)
	class UGFxObject*                                  pIcon;                                                    // 0x0030(0x0008)
	class UGFxObject*                                  pArrow;                                                   // 0x0038(0x0008)
};

// ScriptStruct TgClient.UIHudCenter.HudMarker
// 0x004C
struct FHudMarker
{
	float                                              fOrigBotY;                                                // 0x0000(0x0004)
	float                                              fOrigTopY;                                                // 0x0004(0x0004)
	float                                              fValue;                                                   // 0x0008(0x0004)
	float                                              fTime;                                                    // 0x000C(0x0004)
	float                                              fAngle;                                                   // 0x0010(0x0004)
	float                                              fOffset;                                                  // 0x0014(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0018(0x0004)
	struct FVector                                     vHitLoc;                                                  // 0x001C(0x000C)
	struct FVector                                     vPawnLoc;                                                 // 0x0028(0x000C)
	class UGFxObject*                                  pObj;                                                     // 0x0034(0x0008)
	class UGFxObject*                                  pTop;                                                     // 0x003C(0x0008)
	class UGFxObject*                                  pBot;                                                     // 0x0044(0x0008)
};

// ScriptStruct TgClient.UIHudCenter.MessageClip
// 0x002C
struct FMessageClip
{
	int                                                nIcon;                                                    // 0x0000(0x0004)
	int                                                nType;                                                    // 0x0004(0x0004)
	int                                                nValue;                                                   // 0x0008(0x0004)
	float                                              fTimer;                                                   // 0x000C(0x0004)
	float                                              fDuration;                                                // 0x0010(0x0004)
	class UGFxObject*                                  pMovie;                                                   // 0x0014(0x0008)
	class UGFxObject*                                  pTimer;                                                   // 0x001C(0x0008)
	class UGFxObject*                                  pTimerBar;                                                // 0x0024(0x0008)
};

// ScriptStruct TgClient.UIHudCenter.HitMarkerInfo
// 0x0028
struct FHitMarkerInfo
{
	unsigned long                                      bPlayed : 1;                                              // 0x0000(0x0004)
	float                                              DamageAmount;                                             // 0x0004(0x0004)
	float                                              fMaxDamageAmount;                                         // 0x0008(0x0004)
	TArray<struct FString>                             HitActors;                                                // 0x000C(0x0010) (NeedCtorLink)
	unsigned long                                      bIsShieldHit : 1;                                         // 0x001C(0x0004)
	struct FExtraDamageInfo                            ExtraInfo;                                                // 0x0020(0x0004)
	float                                              fAccumulatedDamage;                                       // 0x0024(0x0004)
};

// ScriptStruct TgClient.UIHudCenter.DamageInstance
// 0x0008
struct FDamageInstance
{
	float                                              fDamage;                                                  // 0x0000(0x0004)
	float                                              fTimestamp;                                               // 0x0004(0x0004)
};

// ScriptStruct TgClient.UIHudForge.UIFORGETAB
// 0x0020
struct FUIFORGETAB
{
	class UGFxObject*                                  pObj;                                                     // 0x0000(0x0008)
	class UGFxObject*                                  pTF;                                                      // 0x0008(0x0008)
	class UGFxObject*                                  pHover;                                                   // 0x0010(0x0008)
	class UGFxObject*                                  pButton;                                                  // 0x0018(0x0008)
};

// ScriptStruct TgClient.UIHudForge.UIFORGEENTRYGFX
// 0x0038
struct FUIFORGEENTRYGFX
{
	class UGFxObject*                                  pObj;                                                     // 0x0000(0x0008)
	class UGFxObject*                                  m_mcIcon;                                                 // 0x0008(0x0008)
	class UGFxObject*                                  m_mcTitle;                                                // 0x0010(0x0008)
	class UGFxObject*                                  m_mcError;                                                // 0x0018(0x0008)
	class UGFxObject*                                  m_mcShards;                                               // 0x0020(0x0008)
	class UGFxObject*                                  m_mcHighlight;                                            // 0x0028(0x0008)
	class UGFxObject*                                  m_mcForged;                                               // 0x0030(0x0008)
};

// ScriptStruct TgClient.UIHudForge.UIFORGEENTRYDATA
// 0x0020
struct FUIFORGEENTRYDATA
{
	unsigned long                                      m_bActive : 1;                                            // 0x0000(0x0004)
	unsigned long                                      m_bCanAfford : 1;                                         // 0x0000(0x0004)
	unsigned long                                      m_bCanResurrect : 1;                                      // 0x0000(0x0004)
	unsigned long                                      m_bIsDisabled : 1;                                        // 0x0000(0x0004)
	unsigned long                                      m_bIsEquipped : 1;                                        // 0x0000(0x0004)
	unsigned long                                      m_bIsMaxUpgraded : 1;                                     // 0x0000(0x0004)
	unsigned long                                      m_bWasForged : 1;                                         // 0x0000(0x0004)
	unsigned long                                      m_bIsAvailable : 1;                                       // 0x0000(0x0004)
	int                                                m_nRarityIndex;                                           // 0x0004(0x0004)
	int                                                m_nIconIndex;                                             // 0x0008(0x0004)
	int                                                m_nNameId;                                                // 0x000C(0x0004)
	int                                                m_nDescId;                                                // 0x0010(0x0004)
	int                                                m_nTypeId;                                                // 0x0014(0x0004)
	int                                                m_nTime;                                                  // 0x0018(0x0004)
	int                                                m_nCost;                                                  // 0x001C(0x0004)
};

// ScriptStruct TgClient.UIHudMinimap.UIPING_DATA
// 0x001C
struct FUIPING_DATA
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              fTimer;                                                   // 0x0004(0x0004)
	struct FVector                                     vLocation;                                                // 0x0008(0x000C)
	class UGFxObject*                                  pObj;                                                     // 0x0014(0x0008)
};

// ScriptStruct TgClient.UIHudMap_Spectator.UITASKFORCE_DATA
// 0x0014
struct FUITASKFORCE_DATA
{
	int                                                nTaskForceId;                                             // 0x0000(0x0004)
	TArray<int>                                        PRIList;                                                  // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UIHudOverlay.OverlayData
// 0x0044
struct FOverlayData
{
	int                                                nId;                                                      // 0x0000(0x0004)
	unsigned long                                      bInit : 1;                                                // 0x0004(0x0004)
	float                                              fRoll;                                                    // 0x0008(0x0004)
	float                                              fScale;                                                   // 0x000C(0x0004)
	float                                              fTimer;                                                   // 0x0010(0x0004)
	float                                              fAnimX;                                                   // 0x0014(0x0004)
	float                                              fAnimY;                                                   // 0x0018(0x0004)
	float                                              fStartX;                                                  // 0x001C(0x0004)
	float                                              fStartY;                                                  // 0x0020(0x0004)
	struct FVector                                     vWorldLoc;                                                // 0x0024(0x000C)
	struct FVector                                     vScreenLoc;                                               // 0x0030(0x000C)
	class UGFxObject*                                  pClip;                                                    // 0x003C(0x0008)
};

// ScriptStruct TgClient.UIHudOverlay.DamageOverlayData
// 0x0034 (0x0078 - 0x0044)
struct FDamageOverlayData : public FOverlayData
{
	float                                              fTimestamp;                                               // 0x0044(0x0004)
	int                                                nTargetId;                                                // 0x0048(0x0004)
	int                                                nSourceOwnerId;                                           // 0x004C(0x0004)
	int                                                nSourceItemId;                                            // 0x0050(0x0004)
	TEnumAsByte<EDamageNumberSourceType>               eType;                                                    // 0x0054(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                nDamage;                                                  // 0x0058(0x0004)
	int                                                nCount;                                                   // 0x005C(0x0004)
	struct FVector                                     vTargetWorldLoc;                                          // 0x0060(0x000C)
	float                                              fIntroTimer;                                              // 0x006C(0x0004)
	float                                              fHeadShotTimer;                                           // 0x0070(0x0004)
	int                                                nAdvancedSlot;                                            // 0x0074(0x0004)
};

// ScriptStruct TgClient.UIHudOverlay.UIPingOverlay
// 0x0044
struct FUIPingOverlay
{
	unsigned long                                      bOnEdge : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	int                                                nDepth;                                                   // 0x0004(0x0004)
	int                                                nPlayerId;                                                // 0x0008(0x0004)
	struct FVector                                     vWorldLocation;                                           // 0x000C(0x000C)
	struct FVector                                     vScreenLocation;                                          // 0x0018(0x000C)
	class UGFxObject*                                  pClip;                                                    // 0x0024(0x0008)
	class UGFxObject*                                  pIcon;                                                    // 0x002C(0x0008)
	class UGFxObject*                                  pPointer;                                                 // 0x0034(0x0008)
	class UGFxObject*                                  pDistance;                                                // 0x003C(0x0008)
};

// ScriptStruct TgClient.UIHudOverlay.UITargetableOverlay
// 0x00A1
struct FUITargetableOverlay
{
	int                                                nLastColorFrame;                                          // 0x0000(0x0004)
	int                                                nTargetId;                                                // 0x0004(0x0004)
	unsigned long                                      bInit : 1;                                                // 0x0008(0x0004)
	unsigned long                                      bEnemy : 1;                                               // 0x0008(0x0004)
	unsigned long                                      bVisible : 1;                                             // 0x0008(0x0004)
	unsigned long                                      bOnEdge : 1;                                              // 0x0008(0x0004)
	unsigned long                                      bReviving : 1;                                            // 0x0008(0x0004)
	unsigned long                                      bHighlight : 1;                                           // 0x0008(0x0004)
	unsigned long                                      bTraceResult : 1;                                         // 0x0008(0x0004)
	float                                              fRoll;                                                    // 0x000C(0x0004)
	float                                              fTimer;                                                   // 0x0010(0x0004)
	float                                              fAlpha;                                                   // 0x0014(0x0004)
	float                                              fScale;                                                   // 0x0018(0x0004)
	float                                              fTraceTimer;                                              // 0x001C(0x0004)
	float                                              fHighlightTimer;                                          // 0x0020(0x0004)
	struct FVector                                     vWorldLoc;                                                // 0x0024(0x000C)
	struct FVector                                     vScreenLoc;                                               // 0x0030(0x000C)
	struct FString                                     CachedName;                                               // 0x003C(0x0010) (NeedCtorLink)
	class UGFxObject*                                  pClip;                                                    // 0x004C(0x0008)
	class UGFxObject*                                  pName;                                                    // 0x0054(0x0008)
	class UGFxObject*                                  pCarat;                                                   // 0x005C(0x0008)
	class UGFxObject*                                  pPointer;                                                 // 0x0064(0x0008)
	class UGFxObject*                                  pIcon;                                                    // 0x006C(0x0008)
	class UGFxObject*                                  pVoiceIcon;                                               // 0x0074(0x0008)
	class UGFxObject*                                  pReviving;                                                // 0x007C(0x0008)
	class UGFxObject*                                  pRevivingIcon;                                            // 0x0084(0x0008)
	class UGFxObject*                                  pRevivingMask;                                            // 0x008C(0x0008)
	class UGFxObject*                                  pRevivingPointer;                                         // 0x0094(0x0008)
	int                                                nDepth;                                                   // 0x009C(0x0004)
	TEnumAsByte<EPointerDirection>                     ePointerDir;                                              // 0x00A0(0x0001)
};

// ScriptStruct TgClient.UIHudOverlay.UIPlayerOverlay
// 0x0043 (0x00E4 - 0x00A1)
struct FUIPlayerOverlay : public FUITargetableOverlay
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                nMarked;                                                  // 0x00A4(0x0004)
	int                                                nStreak;                                                  // 0x00A8(0x0004)
	class UGFxObject*                                  pMarked;                                                  // 0x00AC(0x0008)
	class UGFxObject*                                  pStreak;                                                  // 0x00B4(0x0008)
	class UGFxObject*                                  pRespawnMask;                                             // 0x00BC(0x0008)
	class UGFxObject*                                  pChickenIcon;                                             // 0x00C4(0x0008)
	class UGFxObject*                                  pClassIcon;                                               // 0x00CC(0x0008)
	float                                              fHideTimer;                                               // 0x00D4(0x0004)
	unsigned long                                      bInParty : 1;                                             // 0x00D8(0x0004)
	TEnumAsByte<EPlayerIconState>                      eIconState;                                               // 0x00DC(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	unsigned long                                      bShowPlayerName : 1;                                      // 0x00E0(0x0004)
};

// ScriptStruct TgClient.UIHudTop.UITEAMMATE
// 0x011C
struct FUITEAMMATE
{
	int                                                nId;                                                      // 0x0000(0x0004)
	int                                                nClass;                                                   // 0x0004(0x0004)
	int                                                nLives;                                                   // 0x0008(0x0004)
	int                                                nShards;                                                  // 0x000C(0x0004)
	int                                                nStreak;                                                  // 0x0010(0x0004)
	int                                                nItem[0x5];                                               // 0x0014(0x0004)
	unsigned long                                      bMute : 1;                                                // 0x0028(0x0004)
	unsigned long                                      bChicken : 1;                                             // 0x0028(0x0004)
	float                                              fArmor;                                                   // 0x002C(0x0004)
	float                                              fArmorMax;                                                // 0x0030(0x0004)
	float                                              fHealth;                                                  // 0x0034(0x0004)
	float                                              fChickenPulse;                                            // 0x0038(0x0004)
	class UGFxObject*                                  pObj;                                                     // 0x003C(0x0008)
	class UGFxObject*                                  pDead;                                                    // 0x0044(0x0008)
	class UGFxObject*                                  pIcon;                                                    // 0x004C(0x0008)
	class UGFxObject*                                  pMute;                                                    // 0x0054(0x0008)
	class UGFxObject*                                  pClass;                                                   // 0x005C(0x0008)
	class UGFxObject*                                  pArmor;                                                   // 0x0064(0x0008)
	class UGFxObject*                                  pHealth;                                                  // 0x006C(0x0008)
	class UGFxObject*                                  pArmorBar;                                                // 0x0074(0x0008)
	class UGFxObject*                                  pLives;                                                   // 0x007C(0x0008)
	class UGFxObject*                                  pShards;                                                  // 0x0084(0x0008)
	class UGFxObject*                                  pStreak;                                                  // 0x008C(0x0008)
	class UGFxObject*                                  pChicken;                                                 // 0x0094(0x0008)
	class UGFxObject*                                  pVoiceIcon;                                               // 0x009C(0x0008)
	class UGFxObject*                                  pItem[0x5];                                               // 0x00A4(0x0008)
	class UGFxObject*                                  pItemIcon[0x5];                                           // 0x00CC(0x0008)
	class UGFxObject*                                  pItemFrame[0x5];                                          // 0x00F4(0x0008)
};

// ScriptStruct TgClient.UISettings.SettingOption
// 0x0058
struct FSettingOption
{
	class UGFxObject*                                  Obj;                                                      // 0x0000(0x0008)
	class UGFxObject*                                  Base;                                                     // 0x0008(0x0008)
	class UGFxObject*                                  Type;                                                     // 0x0010(0x0008)
	class UGFxObject*                                  TypeTF;                                                   // 0x0018(0x0008)
	class UGFxObject*                                  Left;                                                     // 0x0020(0x0008)
	class UGFxObject*                                  Right;                                                    // 0x0028(0x0008)
	class UGFxObject*                                  Focus;                                                    // 0x0030(0x0008)
	class UGFxObject*                                  Color;                                                    // 0x0038(0x0008)
	class UGFxObject*                                  Slider;                                                   // 0x0040(0x0008)
	class UGFxObject*                                  SliderTF;                                                 // 0x0048(0x0008)
	class UGFxObject*                                  SliderTitle;                                              // 0x0050(0x0008)
};

// ScriptStruct TgClient.UISettings.KeybindOption
// 0x0040
struct FKeybindOption
{
	class UGFxObject*                                  Obj;                                                      // 0x0000(0x0008)
	class UGFxObject*                                  Base;                                                     // 0x0008(0x0008)
	class UGFxObject*                                  Focus;                                                    // 0x0010(0x0008)
	class UGFxObject*                                  Command;                                                  // 0x0018(0x0008)
	class UGFxObject*                                  Key[0x2];                                                 // 0x0020(0x0008)
	class UGFxObject*                                  KeyButton[0x2];                                           // 0x0030(0x0008)
};

// ScriptStruct TgClient.TgDataObject.UIDataValue
// 0x001C
struct FUIDataValue
{
	TEnumAsByte<EUIID>                                 eType;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bDirty : 1;                                               // 0x0004(0x0004)
	float                                              fValue;                                                   // 0x0008(0x0004)
	struct FString                                     sValue;                                                   // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UIComponent.UICustomItemData
// 0x000C
struct FUICustomItemData
{
	class UGFxObject*                                  pButton;                                                  // 0x0000(0x0008)
	unsigned long                                      bUnlockable : 1;                                          // 0x0008(0x0004)
	unsigned long                                      bChest : 1;                                               // 0x0008(0x0004)
	unsigned long                                      bCollection : 1;                                          // 0x0008(0x0004)
	unsigned long                                      bVIPExclusive : 1;                                        // 0x0008(0x0004)
	unsigned long                                      bVIPReward : 1;                                           // 0x0008(0x0004)
};

// ScriptStruct TgClient.TgGfxScene.UIITEM_CLIP
// 0x0020
struct FUIITEM_CLIP
{
	class UGFxObject*                                  pObj;                                                     // 0x0000(0x0008)
	class UGFxObject*                                  pSelected;                                                // 0x0008(0x0008)
	class UGFxObject*                                  pButton;                                                  // 0x0010(0x0008)
	class UGFxObject*                                  pSaleBanner;                                              // 0x0018(0x0008)
};

// ScriptStruct TgClient.TgMiniMap.FogMaskData
// 0x0030
struct FFogMaskData
{
	int                                                nSize;                                                    // 0x0000(0x0004)
	int                                                nMapDrawLocationX;                                        // 0x0004(0x0004)
	int                                                nMapDrawLocationY;                                        // 0x0008(0x0004)
	unsigned long                                      bLocationChanged : 1;                                     // 0x000C(0x0004)
	unsigned long                                      bVisionRangeChanged : 1;                                  // 0x000C(0x0004)
	struct FBitArray_Mirror                            m_MaskPoints;                                             // 0x0010(0x0020) (Const, Native, Transient)
};

// ScriptStruct TgClient.TgMiniMap.MiniMapEntity
// 0x0090
struct FMiniMapEntity
{
	struct FVector                                     vLocation;                                                // 0x0000(0x000C)
	TEnumAsByte<EMiniMapEntityType>                    eType;                                                    // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                nSubType;                                                 // 0x0010(0x0004)
	int                                                nProfileId;                                               // 0x0014(0x0004)
	TEnumAsByte<ETgMapTeam>                            Team;                                                     // 0x0018(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                nVisionRange;                                             // 0x001C(0x0004)
	unsigned long                                      bIsDead : 1;                                              // 0x0020(0x0004)
	class AReplicationInfo*                            RepInfo;                                                  // 0x0024(0x0008)
	int                                                GenericState;                                             // 0x002C(0x0004)
	int                                                nIdx;                                                     // 0x0030(0x0004)
	unsigned long                                      bMarked : 1;                                              // 0x0034(0x0004)
	unsigned long                                      bVisibleOnMap : 1;                                        // 0x0034(0x0004)
	unsigned long                                      bValidTarget : 1;                                         // 0x0034(0x0004)
	unsigned long                                      bHovered : 1;                                             // 0x0034(0x0004)
	unsigned long                                      bFlashHighlight : 1;                                      // 0x0034(0x0004)
	unsigned long                                      bVisible : 1;                                             // 0x0034(0x0004)
	float                                              fAlpha;                                                   // 0x0038(0x0004)
	float                                              fHealthPCT;                                               // 0x003C(0x0004)
	class UMaterialInstanceConstant*                   MIC;                                                      // 0x0040(0x0008)
	unsigned long                                      bHasNoIcon : 1;                                           // 0x0048(0x0004)
	int                                                nDrawSize;                                                // 0x004C(0x0004)
	int                                                nHitSize;                                                 // 0x0050(0x0004)
	struct FVector                                     vRect;                                                    // 0x0054(0x000C)
	struct FFogMaskData                                FogMaskData;                                              // 0x0060(0x0030)
};

// ScriptStruct TgClient.TgSettingsManager.TgKeyBind
// 0x001C
struct FTgKeyBind
{
	struct FPointer                                    pCommand;                                                 // 0x0000(0x0008) (Native)
	unsigned long                                      bOverrides : 1;                                           // 0x0008(0x0004)
	TArray<struct FString>                             sKeys;                                                    // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgSettingsManager.TgSettingsSet
// 0x0018
struct FTgSettingsSet
{
	TArray<struct FTgKeyBind>                          Keybinds;                                                 // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FPointer                                    CaseSet;                                                  // 0x0010(0x0008) (Native)
};

// ScriptStruct TgClient.UIComponent_AcquisitionCarousel.AcquisitionCarouselItem
// 0x0090
struct FAcquisitionCarouselItem
{
	class UGFxObject*                                  mcPurchaseItem;                                           // 0x0000(0x0008)
	class UGFxObject*                                  mcPurchaseChest;                                          // 0x0008(0x0008)
	class UUIInteractable_Item*                        mcPurchaseCard;                                           // 0x0010(0x0008)
	class UGFxObject*                                  mcPurchaseItemDisplay;                                    // 0x0018(0x0008)
	class UGFxObject*                                  mcPurchaseItemIcon;                                       // 0x0020(0x0008)
	class UGFxObject*                                  mcPurchaseItemCardIcon;                                   // 0x0028(0x0008)
	class UGFxObject*                                  mcPurchaseItemCurrency;                                   // 0x0030(0x0008)
	class UGFxObject*                                  mcPurchaseItemRarityFrame;                                // 0x0038(0x0008)
	class UGFxObject*                                  mcPurchaseItemRarityText;                                 // 0x0040(0x0008)
	class UGFxObject*                                  mcPurchaseItemTypeIcon;                                   // 0x0048(0x0008)
	class UGFxObject*                                  mcPurchaseItemTitle;                                      // 0x0050(0x0008)
	class UGFxObject*                                  mcPurchaseItemSubtitle;                                   // 0x0058(0x0008)
	class UGFxObject*                                  mcPurchaseItemChampion;                                   // 0x0060(0x0008)
	class UGFxObject*                                  mcPurchaseItemChampionIcon;                               // 0x0068(0x0008)
	class UGFxObject*                                  mcPurchaseItemChampionLarge;                              // 0x0070(0x0008)
	class UGFxObject*                                  mcPurchaseItemChampionTitle;                              // 0x0078(0x0008)
	class UGFxObject*                                  mcPurchaseItemChampionImage;                              // 0x0080(0x0008)
	class UGFxObject*                                  mcPurchaseItemAudio;                                      // 0x0088(0x0008)
};

// ScriptStruct TgClient.UIComponent_HealFeed.HealAccumulator
// 0x0010
struct FHealAccumulator
{
	int                                                nProfileId;                                               // 0x0000(0x0004)
	float                                              fRawAmount;                                               // 0x0004(0x0004)
	float                                              fChangeAmount;                                            // 0x0008(0x0004)
	unsigned long                                      bHealingReduced : 1;                                      // 0x000C(0x0004)
};

// ScriptStruct TgClient.UIData_Quest.GoalRewardItem
// 0x0010
struct FGoalRewardItem
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nQuantity;                                                // 0x0004(0x0004)
	int                                                nEntitlementRequired;                                     // 0x0008(0x0004)
	unsigned long                                      bRental : 1;                                              // 0x000C(0x0004)
};

// ScriptStruct TgClient.UIDataObject.ProductInfo
// 0x0088
struct FProductInfo
{
	struct FString                                     ProductID;                                                // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ProductName;                                              // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     ProductDescription;                                       // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     ProductImage;                                             // 0x0030(0x0010) (NeedCtorLink)
	struct FString                                     DisplayListPrice;                                         // 0x0040(0x0010) (NeedCtorLink)
	struct FString                                     DisplayPrice;                                             // 0x0050(0x0010) (NeedCtorLink)
	float                                              ListPrice;                                                // 0x0060(0x0004)
	float                                              Price;                                                    // 0x0064(0x0004)
	struct FString                                     CurrencyCode;                                             // 0x0068(0x0010) (NeedCtorLink)
	struct FString                                     SignedOffer;                                              // 0x0078(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.UIDataGoals.ActivityGoal
// 0x0040
struct FActivityGoal
{
	int                                                nTargetValue;                                             // 0x0000(0x0004)
	int                                                nProgressValue;                                           // 0x0004(0x0004)
	struct FString                                     sDescription;                                             // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sName;                                                    // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bClaimed : 1;                                             // 0x0028(0x0004)
	int                                                nGoalId;                                                  // 0x002C(0x0004)
	TArray<struct FGoalRewardItem>                     pLootItems;                                               // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UIDataGoals.ActivityGoalIds
// 0x0008
struct FActivityGoalIds
{
	struct Fdword                                      dwActivityId;                                             // 0x0000(0x0004)
	struct Fdword                                      dwGoalId;                                                 // 0x0004(0x0004)
};

// ScriptStruct TgClient.UIGameMoviePlayer.KeyParams
// 0x0038
struct FKeyParams
{
	int                                                nValue;                                                   // 0x0000(0x0004)
	unsigned long                                      bDirect : 1;                                              // 0x0004(0x0004)
	unsigned long                                      bCentered : 1;                                            // 0x0004(0x0004)
	unsigned long                                      bFrameless : 1;                                           // 0x0004(0x0004)
	struct FString                                     sMessage;                                                 // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     sCommand;                                                 // 0x0018(0x0010) (NeedCtorLink)
	struct FString                                     sValue;                                                   // 0x0028(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.UIHudCenter.CastingInfo
// 0x0024
struct FCastingInfo
{
	int                                                nWidth;                                                   // 0x0000(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0004(0x0004)
	float                                              fPercent;                                                 // 0x0008(0x0004)
	class UGFxObject*                                  pObj;                                                     // 0x000C(0x0008)
	class UGFxObject*                                  pText;                                                    // 0x0014(0x0008)
	class UGFxObject*                                  pAnim;                                                    // 0x001C(0x0008)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
