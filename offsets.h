#pragma once
// auto generated discord is @decamped dm me with any questions :)

#include <cstdint>

namespace Offsets
{
	namespace BasePlayer
	{
		constexpr auto playerNames                             = 0x2c8;
		constexpr auto PlayerEyes                              = 0x5c0;
		constexpr auto PlayerInventory                         = 0x688;
		constexpr auto PlayerInput                             = 0x4b8;
		constexpr auto PlayerMovement                          = 0x6e8;
		constexpr auto PlayerModel                             = 0x498;
		constexpr auto playerFlags                             = 0x620;
		constexpr auto ModelState                              = 0x0;
		constexpr auto currentTeam                             = 0x4b0;
		constexpr auto clActiveItem                            = 0x4e0;
		constexpr auto clothingBlocksAiming                    = 0x704;
		constexpr auto clothingMoveSpeedReduction              = 0x708;
		constexpr auto UserID                                  = 0x660;
	}

	namespace BaseEntity
	{
		constexpr auto model                                   = 0xe8;
		constexpr auto Bounds                                  = 0xc0;
		constexpr auto flags                                   = 0xf0;
	}

	namespace BaseCombatEntity
	{
		constexpr auto LifeState                               = 0x268;
	}

	namespace PlayerModel
	{
		constexpr auto Position                                = 0x1f8;
		constexpr auto Velocity                                = 0x204;
		constexpr auto newVelocity                             = 0x210;
		constexpr auto Rotation                                = 0x228;
		constexpr auto GestureConfig                           = 0x1f0;
		constexpr auto IsNpc__BackingField                     = 0x4c4;
		constexpr auto __Multimesh                             = 0x2b8;
	}

	namespace PlayerInventory
	{
		constexpr auto ItemContainer                           = 0x38;
		constexpr auto ContainerBelt                           = 0x60;
		constexpr auto ContainerWear                           = 0x78;
	}

	namespace Item
	{
		constexpr auto ItemList                                = 0x48;
		constexpr auto ItemDefinition                          = 0x10;
		constexpr auto Amount                                  = 0x94;
		constexpr auto CurrentHealth                           = 0x84;
		constexpr auto MaxHealth                               = 0x90;
		constexpr auto HeldEntity                              = 0x30;
		constexpr auto ItemUID                                 = 0xa8;
	}

	namespace HeldEntity
	{
		constexpr auto ViewModel                               = 0x270;
	}

	namespace BaseViewModel
	{
		constexpr auto IronSights                              = 0xc0;
		constexpr auto AnimationEvents                         = 0xa0;
		constexpr auto ViewmodelBob                            = 0xa8;
		constexpr auto ViewmodelSway                           = 0xd0;
	}

	namespace ItemDefinition
	{
		constexpr auto shortname                               = 0x28;
		constexpr auto itemid                                  = 0x20;
		constexpr auto displayName                             = 0x40;
		constexpr auto ItemMod                                = 0x158;
	}

	namespace Translate_Phrase
	{
		constexpr auto English                                 = 0x20;
	}

	namespace ItemModWearable
	{
		constexpr auto blocksAiming                            = 0x5c;
		constexpr auto occlusionType                           = 0x58;
	}

	namespace AttackEntity
	{
		constexpr auto repeatDelay                             = 0x28c;
		constexpr auto deployDelay                             = 0x288;
	}

	namespace BaseProjectile
	{
		constexpr auto reloadTime                              = 0x370;
		constexpr auto recoil                                  = 0x3a0;
		constexpr auto primaryMagazine                         = 0x378;
		constexpr auto aimconePenalty                          = 0x3f0;
		constexpr auto aimCone                                 = 0x3b0;
		constexpr auto aimconePenaltyPerShot                   = 0x3b8;
		constexpr auto aimSway                                 = 0x398;
		constexpr auto aimSwaySpeed                            = 0x39c;
		constexpr auto stancePenaltyScale                      = 0x3c8;
		constexpr auto aimConePenaltyMax                       = 0x3bc;
		constexpr auto automatic                               = 0x330;
		constexpr auto hipAimCone                              = 0x3b4;
		constexpr auto isBurstWeapon                           = 0x3d7;
		constexpr auto canChangeFireModes                      = 0x3d8;
		constexpr auto internalBurstFireRateScale              = 0x3e0;
		constexpr auto IsReloading                             = 0x454;
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
		constexpr auto owner                                   = 0x1e8;
		constexpr auto hitTest                                 = 0x120;
	}

	namespace HitTest
	{
		constexpr auto HitTransform                            = 0xc8;
		constexpr auto HitEntity                               = 0x68;
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
		constexpr auto TimerText                               = 0x3d0;
	}

	namespace BuildingPrivlidge
	{
		constexpr auto UpkeepTime                              = 0x3c4;
	}

	namespace PatrolHelicopter
	{
		constexpr auto weakspots                               = 0x420;
	}

	namespace CompoundBowWeapon
	{
		constexpr auto stringHoldDurationMax                   = 0x470;
		constexpr auto movementPenaltyRampUpTime               = 0x480;
	}

	namespace FlintStrikeWeapon
	{
		constexpr auto successFraction                         = 0x458;
		constexpr auto _didSparkThisFrame                      = 0x468;
	}

	namespace BowWeapon
	{
		constexpr auto attackReady                             = 0x468;
		constexpr auto nopullback                              = 0x45c;
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
		constexpr auto clActiveItem                            = 0x4e0;
	}

	namespace BaseNetworkable
	{
		constexpr auto BaseNetworkable_C                       = 0xd793978; // sig: "8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 C8 2B E1 0C 01 48 8B 15 ?? ?? ?? ??"
		constexpr auto static_fields                           = 0xb8;
		constexpr auto wrapper_class_ptr                       = 0x20;
		constexpr auto parent_static_fields                    = 0x10;
		constexpr auto entity                                  = 0x10;
	}

	namespace ListComponent_Projectile
	{
		constexpr auto ListComponent_Projectile_C              = 0xd729c70; // sig: "0D 84 58 A4 0C E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0"
		constexpr auto static_fields                           = 0xb8;
		constexpr auto instance                                = 0x28;
		constexpr auto instance_two                            = 0x18;
	}

	namespace TodSky
	{
		constexpr auto TodSky_C                                = 0xd77d370; // sig: "8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 B2 EB ?? 0D 01 48 8B 83 30 02 00 00"
		constexpr auto Instance                                = 0x10;
	}

	namespace Convar_Admin
	{
		constexpr auto TypeInfo                                = 0xd718c40; // sig: "8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 1D D1 B1 0C 01 F6 83 20 06 00 00 20"
	}

	namespace Convar_Graphics
	{
		constexpr auto TypeInfo                                = 0xd7b07c0; // sig: "48 83 EC 20 80 3D D1 C6 75 ?? 00 48 8B D9 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 B4 C6 75 ?? 01 48 8B 05 ?? ?? ?? ??"
	}

	namespace Convar_Server
	{
		constexpr auto TypeInfo                                = 0xd795330; // sig: "3D 17 6B E2 0C 00 48 8B D9 0F 85 ?? ?? ?? ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0"
	}

	namespace SingletonClimate
	{
		constexpr auto Climate_C                               = 0xd718c30; // sig: "51 28 7D ?? 48 83 C4 20 5B C3 CC CC CC CC CC CC CC CC CC CC CC 40 53 48 83 EC 30 80 3D 0D CC B1 0C 00 49 8B D8 0F 29 74 ?? 20 0F 28 F1 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 A4 CB B1 0C 01 48 8B 05 0B"
		constexpr auto static_fields                           = 0xb8;
		constexpr auto Instance                                = 0x28;
	}

	namespace GameManager
	{
		constexpr auto GameManager_C                           = 0xd780058;
		constexpr auto Static_fields                           = 0xb8;
		constexpr auto Instance                                = 0x30;
		constexpr auto Pool                                    = 0x20;
		constexpr auto Stack                                   = 0x18;
	}

	namespace ItemIcon
	{
		constexpr auto ItemIcon_C                              = 0xd748fe8; // sig: "8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 C6 05 9A EA 87 0B 01 80 BB 90 01 00 00 00"
		constexpr auto Static_fields                           = 0xc0;
		constexpr auto Instance                                = 0x18;
	}

	namespace ModelState
	{
		constexpr auto Flags                                   = 0x2c;
		constexpr auto WaterLevel                              = 0x50;
		constexpr auto Ducking                                 = 0x0; // sry i cant get this one idk why 
	}

	namespace Camera
	{
		constexpr auto MainCamera_C   = 0xd75daf8; // sig: "48 83 EC 20 80 3D 80 2A 97 0D 00 48 8B D9 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83"
	    constexpr auto Chain1         = 0xb8;
		constexpr auto Chain2         = 0x48;
		constexpr auto Chain3         = 0x10;
	}

	namespace Il2Cpp
	{
		constexpr auto sTypeInfoDefinitionTable                = 0xda92030;
	}

	namespace SceneManager
	{
		constexpr auto GetActiveScene                          = 0xb415ed0;
	}

} // namespace Offsets
