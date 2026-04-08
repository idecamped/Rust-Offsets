#pragma once
// auto generated some may be wrong 90% are correct dm me with wrong ones so i can fix thanks
// discord @decamped

#include <cstdint>

namespace Offsets
{
	namespace BasePlayer
	{
		constexpr auto playerNames                             = 0x358;
		constexpr auto PlayerEyes                              = 0x640;
		constexpr auto PlayerInventory                         = 0x390;
		constexpr auto PlayerInput                             = 0x350;
		constexpr auto PlayerMovement                          = 0x2b8;
		constexpr auto PlayerModel                             = 0x508;
		constexpr auto playerFlags                             = 0x630;
		constexpr auto ModelState                              = 0x2d0;
		constexpr auto currentTeam                             = 0x4b8;
		constexpr auto clActiveItem                            = 0x4e8;
		constexpr auto clothingBlocksAiming                    = 0x714;
		constexpr auto clothingMoveSpeedReduction              = 0x718;
		constexpr auto UserID                                  = 0x4d8;
	}

	namespace BaseEntity
	{
		constexpr auto model                                   = 0xf0;
		constexpr auto Bounds                                  = 0xc8;
		constexpr auto flags                                   = 0xf8;
		constexpr auto skinID                                  = 0x100;
		constexpr auto triggers                                = 0x168;
		constexpr auto HasBrain                                = 0x110;
	}

	namespace BaseCombatEntity
	{
		constexpr auto LifeState                               = 0x270;
		constexpr auto _health                                 = 0x278;
		constexpr auto _maxHealth                              = 0x27c;
		constexpr auto startHealth                             = 0x208;
		constexpr auto skeletonProperties                      = 0x1f8;
		constexpr auto baseProtection                          = 0x200;
	}

	namespace PlayerModel
	{
		constexpr auto Position                                = 0x1f8;
		constexpr auto Velocity                                = 0x204;
		constexpr auto newVelocity                             = 0x210;
		constexpr auto Rotation                                = 0x228;
		constexpr auto GestureConfig                           = 0x390;
		constexpr auto IsNpc__BackingField                     = 0x4c4;
		constexpr auto __Multimesh                             = 0x4a8;
	}

	namespace PlayerInventory
	{
		constexpr auto ItemContainer                           = 0x30;
		constexpr auto ContainerBelt                           = 0x58;
		constexpr auto ContainerWear                           = 0x60;
	}

	namespace Item
	{
		constexpr auto ItemList                                = 0x30;
		constexpr auto ItemDefinition                          = 0x78;
		constexpr auto Amount                                  = 0x38;
		constexpr auto CurrentHealth                           = 0x10;
		constexpr auto MaxHealth                               = 0xc8;
		constexpr auto ItemUID                                 = 0xa8;
		constexpr auto HeldEntity                              = 0x18;
	}

	namespace HeldEntity
	{
		constexpr auto ViewModel                               = 0x278;
		constexpr auto viewModel                               = 0x200;
		constexpr auto hostileScore                            = 0x244;
	}

	namespace BaseViewModel
	{
		constexpr auto IronSights                              = 0xb0;
		constexpr auto AnimationEvents                         = 0xe8;
		constexpr auto ViewmodelBob                            = 0xf0;
		constexpr auto ViewmodelSway                           = 0x90;
		constexpr auto useViewModelCamera                      = 0x40;
		constexpr auto lazyaimRegular                          = 0x28;
	}

	namespace ItemDefinition
	{
		constexpr auto shortname                               = 0x28;
		constexpr auto itemid                                  = 0x20;
		constexpr auto displayName                             = 0x40;
		constexpr auto ItemMod                                 = 0x148;
	}

	namespace Translate_Phrase
	{
		constexpr auto English                                 = 0x10;
	}

	namespace ItemModWearable
	{
		constexpr auto blocksAiming                            = 0x5c;
		constexpr auto occlusionType                           = 0x58;
	}

	namespace AttackEntity
	{
		constexpr auto repeatDelay                             = 0x294;
		constexpr auto deployDelay                             = 0x290;
	}

	namespace BaseProjectile
	{
		constexpr auto reloadTime                              = 0x378;
		constexpr auto recoil                                  = 0x3a8;
		constexpr auto primaryMagazine                         = 0x380;
		constexpr auto aimconePenalty                          = 0x3f8;
		constexpr auto aimCone                                 = 0x3b8;
		constexpr auto aimconePenaltyPerShot                   = 0x3c0;
		constexpr auto aimSway                                 = 0x3a0;
		constexpr auto aimSwaySpeed                            = 0x3a4;
		constexpr auto stancePenaltyScale                      = 0x3d0;
		constexpr auto aimConePenaltyMax                       = 0x3c4;
		constexpr auto automatic                               = 0x338;
		constexpr auto hipAimCone                              = 0x3bc;
		constexpr auto isBurstWeapon                           = 0x3df;
		constexpr auto canChangeFireModes                      = 0x3e0;
		constexpr auto internalBurstFireRateScale              = 0x3e8;
		constexpr auto IsReloading                             = 0x45c;
		constexpr auto noAimingWhileCycling                    = 0x3d5;
		constexpr auto projectileVelocityScale                 = 0x334;
		constexpr auto turretDamageScale                       = 0x33c;
		constexpr auto damageScale                             = 0x32c;
		constexpr auto distanceScale                           = 0x330;
		constexpr auto aimconeCurve                            = 0x3b0;
	}

	namespace Projectile
	{
		constexpr auto initialVelocity                         = 0x28;
		constexpr auto thickness                               = 0x3c;
		constexpr auto velocity                                = 0x15c;
		constexpr auto position                                = 0x168;
		constexpr auto sentPosition                            = 0x180;
		constexpr auto previousPosition                        = 0x18c;
		constexpr auto previousVelocity                        = 0x198;
		constexpr auto projectileID                            = 0x20;
		constexpr auto owner                                   = 0x128;
		constexpr auto hitTest                                 = 0x1d8;
		constexpr auto drag                                    = 0x34;
		constexpr auto gravityModifier                         = 0x38;
		constexpr auto tumbleSpeed                             = 0xcc;
		constexpr auto traveledDistance                        = 0x174;
		constexpr auto closeFlybyDistance                      = 0xc8;
		constexpr auto mod                                     = 0x1e8;
	}

	namespace HitTest
	{
		constexpr auto HitTransform                            = 0xb0;
		constexpr auto HitEntity                               = 0x28;
		constexpr auto type                                    = 0x78;
		constexpr auto Radius                                  = 0x20;
		constexpr auto didHit                                  = 0x6c;
		constexpr auto HitNormal                               = 0x80;
		constexpr auto HitPoint                                = 0xd4;
		constexpr auto damageProperties                        = 0x10;
		constexpr auto HitDistance                             = 0x68;
		constexpr auto MultiHit                                = 0x7c;
		constexpr auto attackRay                               = 0x30;
		constexpr auto collider                                = 0x70;
		constexpr auto gameObject                              = 0x18;
		constexpr auto Bone                                    = 0xb0;
	}

	namespace RecoilProperties
	{
		constexpr auto recoilYawMin                            = 0x18;
		constexpr auto recoilYawMax                            = 0x1c;
		constexpr auto recoilPitchMin                          = 0x20;
		constexpr auto recoilPitchMax                          = 0x24;
		constexpr auto aimconeCurveScale                       = 0x60;
		constexpr auto newRecoilOverride                       = 0x80;
	}

	namespace HackableLockedCrate
	{
		constexpr auto TimerText                               = 0x3d8;
	}

	namespace BuildingPrivlidge
	{
		constexpr auto UpkeepTime                              = 0x3cc;
	}

	namespace PatrolHelicopter
	{
		constexpr auto weakspots                               = 0x418;
	}

	namespace CompoundBowWeapon
	{
		constexpr auto stringHoldDurationMax                   = 0x478;
		constexpr auto movementPenaltyRampUpTime               = 0x488;
	}

	namespace FlintStrikeWeapon
	{
		constexpr auto successFraction                         = 0x460;
		constexpr auto _didSparkThisFrame                      = 0x470;
	}

	namespace BowWeapon
	{
		constexpr auto attackReady                             = 0x470;
		constexpr auto nopullback                              = 0x464;
	}

	namespace SkinnedMultiMeshRenderers
	{
		constexpr auto Renderers__BackingField                 = 0x40;
	}

	namespace Model
	{
		constexpr auto bone_array                              = 0x50;
	}

	namespace ActiveItem
	{
		constexpr auto clActiveItem                            = 0x4e8;
	}

	namespace Magazine
	{
		constexpr auto definition                              = 0x20;
		constexpr auto capacity                                = 0x18;
		constexpr auto contents                                = 0x1c;
	}

	namespace PlayerEyes
	{
		constexpr auto bodyRotation                            = 0x50;
		constexpr auto viewOffset                              = 0x28;
		constexpr auto rotationLook                            = 0x6c;
	}

	namespace PlayerInput
	{
		constexpr auto state                                   = 0x28;
	}

	namespace InputState
	{
		constexpr auto current                                 = 0x18;
		constexpr auto previous                                = 0x20;
	}

	namespace InputMessage
	{
		constexpr auto buttons                                 = 0x14;
		constexpr auto aimAngles                               = 0x18;
		constexpr auto mouseDelta                              = 0x24;
	}

	namespace PlayerWalkMovement
	{
		constexpr auto groundAngle                             = 0x70;
		constexpr auto groundAngleNew                          = 0x78;
		constexpr auto capsule                                 = 0xf0;
		constexpr auto groundVelocity                          = 0x128;
		constexpr auto ladder                                  = 0xd8;
	}

	namespace BaseMelee
	{
		constexpr auto effectiveRange                          = 0x29c;
		constexpr auto attackRadius                            = 0x344;
		constexpr auto maxDistance                             = 0x340;
		constexpr auto gathering                               = 0x378;
		constexpr auto damageProperties                        = 0x328;
		constexpr auto canThrowAsProjectile                    = 0x381;
	}

	namespace FlameThrower
	{
		constexpr auto fuelPerSec                              = 0x398;
		constexpr auto flameRange                              = 0x340;
		constexpr auto ammo                                    = 0x32c;
	}

	namespace BaseMountable
	{
		constexpr auto mountedPlayer                           = 0x2a8;
		constexpr auto canWieldItems                           = 0x2e4;
	}

	namespace AutoTurret
	{
		constexpr auto sightRange                              = 0x450;
		constexpr auto aimCone                                 = 0x4b0;
		constexpr auto targetTrigger                           = 0x4f0;
		constexpr auto target                                  = 0x418;
	}

	namespace Recycler
	{
		constexpr auto recycleEfficiency                       = 0x398;
	}

	namespace Object
	{
		constexpr auto m_CachedPtr                             = 0x10;
	}

	namespace BaseNetworkable_Fields
	{
		constexpr auto prefabID                                = 0x30;
	}

	namespace IronSights
	{
		constexpr auto aimSway                                 = 0x28;
		constexpr auto aimSwaySpeed                            = 0x2c;
	}

	namespace SkeletonProperties
	{
		constexpr auto bones                                   = 0x20;
	}

	namespace ProtectionProperties
	{
		constexpr auto amounts                                 = 0x28;
	}

	namespace WorldItem
	{
		constexpr auto allowPickup                             = 0x1d8;
	}

	namespace CodeLock
	{
		constexpr auto hasCode                                 = 0x248;
		constexpr auto hasGuestCode                            = 0x258;
	}

	namespace StorageContainer
	{
		constexpr auto isLootable                              = 0x305;
		constexpr auto inventorySlots                          = 0x2f8;
	}

	namespace PlayerLoot
	{
		constexpr auto entitySource                            = 0x28;
		constexpr auto containers                              = 0x38;
	}

	namespace DroppedItemContainer
	{
		constexpr auto playerName                              = 0x2a8;
		constexpr auto playerSteamID                           = 0x2c0;
	}

	namespace ItemModProjectile
	{
		constexpr auto projectileVelocity                      = 0x40;
		constexpr auto projectileVelocitySpread                = 0x44;
		constexpr auto numProjectiles                          = 0x38;
		constexpr auto spread                                  = 0x3c;
		constexpr auto projectileObject                        = 0x20;
	}

	namespace ProjectileWeaponMod
	{
		constexpr auto sightAimConeScale                       = 0x1d8;
		constexpr auto sightAimConeOffset                      = 0x268;
		constexpr auto hipAimConeScale                         = 0x280;
		constexpr auto hipAimConeOffset                        = 0x288;
	}

	namespace Construction
	{
		constexpr auto canBypassBuildingPermission             = 0xc0;
	}

	namespace BuildingBlock
	{
		constexpr auto grade                                   = 0x330;
		constexpr auto blockDefinition                         = 0x348;
	}

	namespace GrowableEntity
	{
		constexpr auto Properties                              = 0x2f8;
	}

	namespace PlantProperties
	{
		constexpr auto WaterIntake                             = 0x54;
		constexpr auto MaxSeasons                              = 0x50;
	}

	namespace MedicalTool
	{
		constexpr auto healDurationSelf                        = 0x328;
		constexpr auto maxDistanceOther                        = 0x334;
	}

	namespace Chainsaw
	{
		constexpr auto fuelPerSec                              = 0x3d4;
		constexpr auto maxAmmo                                 = 0x3d8;
	}

	namespace SamSite
	{
		constexpr auto currentAimDir                           = 0x3b4;
		constexpr auto vehicleScanRadius                       = 0x3cc;
		constexpr auto staticRespawn                           = 0x3e8;
	}

	namespace TimedExplosive
	{
		constexpr auto timerAmountMin                          = 0x1d8;
		constexpr auto timerAmountMax                          = 0x1dc;
		constexpr auto explosionRadius                         = 0x1e4;
	}

	namespace GrenadeWeapon
	{
		constexpr auto maxThrowVelocity                        = 0x330;
	}

	namespace ThrownWeapon
	{
		constexpr auto maxThrowVelocity                        = 0x330;
	}

	namespace ServerProjectile
	{
		constexpr auto speed                                   = 0x3c;
		constexpr auto gravityModifier                         = 0x38;
		constexpr auto drag                                    = 0x34;
	}

	namespace PlayerCorpse
	{
		constexpr auto buoyancy                                = 0x310;
		constexpr auto underwearSkin                           = 0x318;
	}

	namespace MapView
	{
		constexpr auto mapImage                                = 0x20;
		constexpr auto scrollRect                              = 0x40;
	}

	namespace Planner
	{
		constexpr auto CurrentConstruction                     = 0x2a8;
	}

	namespace GestureConfig
	{
		constexpr auto gestureId                               = 0x18;
		constexpr auto gestureCommand                          = 0x20;
		constexpr auto duration                                = 0x4c;
	}

	namespace BaseFishingRod
	{
		constexpr auto FishCatchDistance                       = 0x298;
		constexpr auto MaxCastDistance                         = 0x2d4;
	}

	namespace ColliderInfo
	{
		constexpr auto flags                                   = 0x20;
	}

	namespace BaseNetworkable
	{
		constexpr auto BaseNetworkable_C                       = 0xe4c58e8; // sig: "0D EC 42 82 0D E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0"
		constexpr auto static_fields                           = 0xb8;
		constexpr auto wrapper_class_ptr                       = 0x20;
		constexpr auto parent_static_fields                    = 0x10;
		constexpr auto entity                                  = 0x10;
	}

	namespace ListComponent_Projectile
	{
		constexpr auto ListComponent_Projectile_C              = 0xe442f48; // sig: "0D 9F 19 82 0A E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0"
		constexpr auto static_fields                           = 0xb8;
		constexpr auto instance                                = 0x28;
		constexpr auto instance_two                            = 0x18;
	}

	namespace TodSky
	{
		constexpr auto TodSky_C                                = 0xe48e260; // sig: "8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 66 82 ED 0D 01 48 8B 0D ?? ?? ?? ??"
		constexpr auto Instance                                = 0x10;
	}

	namespace Convar_Admin
	{
		constexpr auto TypeInfo                                = 0xe484d68; // sig: "58 03 80 3D 00 64 B8 0D 00 48 8B 7C ?? 40 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83"
	}

	namespace Convar_Graphics
	{
		constexpr auto TypeInfo                                = 0xe4c5888; // sig: "48 83 EC 20 80 3D 63 DA 4A 0E 00 48 8B D9 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 46 DA 4A 0E 01 48 8B 05 ?? ?? ?? ??"
	}

	namespace Convar_Server
	{
		constexpr auto TypeInfo                                = 0xe4c60d0; // sig: "8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 7E ?? B7 0D 01 48 8B C3 45 33 E4 44"
	}

	namespace SingletonClimate
	{
		constexpr auto Climate_C                               = 0xe4803c0; // sig: "24 20 48 8B CB FF D0 80 3D 6A D4 B7 0D 00 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 50 D4 B7 0D 01 33 C9 E8 ?? ?? ?? ??"
		constexpr auto static_fields                           = 0xb8;
		constexpr auto Instance                                = 0x28;
	}

	namespace GameManager
	{
		constexpr auto GameManager_C                           = 0x0;
		constexpr auto Static_fields                           = 0xb8;
		constexpr auto client                                  = 0x10;
		constexpr auto Pool                                    = 0x20;
		constexpr auto Stack                                   = 0x18;
	}

	namespace ItemIcon
	{
		constexpr auto ItemIcon_C                              = 0xe460890; // sig: "8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 7F ?? 00 09 01 48 8B 0D ?? ?? ?? ??"
		constexpr auto Static_fields                           = 0xc0;
		constexpr auto Instance                                = 0x18;
	}

	namespace PlayerEyes_Static
	{
		constexpr auto PlayerEyes_C                            = 0xe48e9d8; // sig: "8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 F6 D1 BA 0C 01 48 8B 05 ?? ?? ?? ??"
		constexpr auto static_fields                           = 0xb8;
	}

	namespace BasePlayer_Static
	{
		constexpr auto BasePlayer_C                            = 0xe4d9fe8; // sig: "CC CC CC CC CC CC CC CC CC 40 57 48 81 EC 80 00 00 00 80 3D 65 2A AB 0D 00 48 8B F9 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 F3 29 AB 0D 01 80 BF A8 00"
		constexpr auto static_fields                           = 0xb8;
		constexpr auto visiblePlayerList                       = 0xf50;
	}

	namespace CameraUpdateHook_Static
	{
		constexpr auto CameraUpdateHook_C                      = 0xe5004c8; // sig: "0D 22 49 6C 0C E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0"
		constexpr auto static_fields                           = 0xb8;
	}

	namespace Planner_Static
	{
		constexpr auto Planner_C                               = 0xe4c8f80; // sig: "0D DB 44 81 0D E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 64 AD B5 0D 01 33 C0 48 89 44 24"
		constexpr auto static_fields                           = 0xb8;
	}

	namespace MapView_Static
	{
		constexpr auto MapView_C                               = 0xe4c6158; // sig: "8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 B3 AF B7 0D 01 48 8B 0D ?? ?? ?? ??"
		constexpr auto static_fields                           = 0xb8;
	}

	namespace CraftingQueue_Static
	{
		constexpr auto CraftingQueue_C                         = 0xe49edd0; // sig: "0D 7B ?? A6 09 E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 AC 7D ?? 09 01 48 8B 05 ?? ?? ?? ?? 83 B8 E0 00 00 00 00 75 ?? 48 8B C8 E8 10 AB CC"
		constexpr auto static_fields                           = 0xb8;
	}

	namespace WaterSystem_Static
	{
		constexpr auto WaterSystem_C                           = 0xe4809a8; // sig: "00 0F 29 74 ?? 30 0F 28 F0 0F 29 7C ?? 20 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 6B 20 8F 0D 01 F3 0F 5F 35 EE CA 54"
		constexpr auto static_fields                           = 0xb8;
	}

	namespace BaseScreenShake_Static
	{
		constexpr auto BaseScreenShake_C                       = 0xe47dd08; // sig: "83 EC 20 80 3D AC 86 92 0B 00 48 8B D9 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 6D 86 92 0B 01 48 8B 05 AD CF 5C"
		constexpr auto static_fields                           = 0xb8;
	}

	namespace MainCamera
	{
		constexpr auto MainCamera_C                            = 0xe4c58f0; // sig: "48 83 EC 20 80 3D 39 DD 70 ?? 00 48 8B D9 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83"
		constexpr auto mainCamera                              = 0x58;
		constexpr auto mainCameraTransform                     = 0x78;
	}

	namespace SingletonComponent_MainCamera
	{
		constexpr auto SingletonComponent_C                    = 0xe42a638; // sig: "0D B0 FE 41 0D E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0"
		constexpr auto Instance                                = 0x10;
	}

	namespace LocalPlayer_Static
	{
		constexpr auto LocalPlayer_C                           = 0x0;
		constexpr auto static_fields                           = 0xb8;
		constexpr auto Entity                                  = 0x148;
	}

	namespace ConVar_Debugging
	{
		constexpr auto debugcamera                             = 0x0;
		constexpr auto noclip                                  = 0x0;
	}

	namespace Performance_Static
	{
		constexpr auto Performance_C                           = 0xe526910; // sig: "0D 6F FE ED 0C E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0"
		constexpr auto static_fields                           = 0xb8;
		constexpr auto fps                                     = 0x49c;
	}

	namespace Buttons_Static
	{
		constexpr auto Buttons_C                               = 0x0;
		constexpr auto static_fields                           = 0xb8;
	}

	namespace ModelState
	{
		constexpr auto Flags                                   = 0x68;
		constexpr auto WaterLevel                              = 0x60;
		constexpr auto Ducking                                 = 0x64;
	}

	namespace Camera
	{
		constexpr auto MainCamera_C                            = 0xe4c58f0; // sig: "48 83 EC 20 80 3D 39 DD 70 ?? 00 48 8B D9 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83"
	}

	namespace Il2Cpp
	{
		constexpr auto sTypeInfoDefinitionTable                = 0xe80b3e8;
	}

	namespace SceneManager
	{
		constexpr auto GetActiveScene                          = 0xbf40720;
	}

} // namespace Offsets
