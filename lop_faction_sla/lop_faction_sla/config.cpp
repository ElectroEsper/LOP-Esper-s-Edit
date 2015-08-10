#include "BIS_AddonInfo.hpp"
////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.73
//Sat Aug 01 19:37:20 2015 : Source 'file' date Sat Aug 01 19:37:20 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class lop_faction_sla : config.bin{
//class BIS_AddonInfo
//{
//	author = "Leight";
//	timepacked = "1433372062";
//};
class CfgPatches
{
	class lop_faction_sla
	{
		units[] = {"LOP_SLA_Infantry_Rifleman","LOP_SLA_Infantry_Pilot","LOP_SLA_Infantry_TL","LOP_SLA_Infantry_SL","LOP_SLA_Infantry_Crewman","LOP_SLA_Infantry_Corpsman","LOP_SLA_Infantry_Officer","LOP_SLA_Infantry_Marksman","LOP_SLA_Infantry_AA","LOP_SLA_Infantry_AT","LOP_SLA_Infantry_AT_Asst","LOP_SLA_Infantry_GL","LOP_SLA_Infantry_MG","LOP_SLA_Infantry_MG_Asst","LOP_SLA_Infantry_Engineer","LOP_SLA_T72BB","LOP_SLA_T72BA","LOP_SLA_BMP2D","LOP_SLA_BMP2","LOP_SLA_BMP1","LOP_SLA_BMP1D","LOP_SLA_ZSU234","LOP_SLA_BTR60","LOP_SLA_BTR70","LOP_SLA_BM21","LOP_SLA_Ural","LOP_SLA_Ural_open","LOP_SLA_UAZ","LOP_SLA_UAZ_Open","LOP_SLA_NSV_TriPod"};
		weapons[] = {"LOP_U_SLA_Fatigue_01","LOP_H_SSh68Helmet_OLV","LOP_H_SSh68Helmet_OLV","LOP_H_SLA_Beret","LOP_SLA_VEST"};
		requiredVersion = 1.32;
		requiredAddons[] = {"A3_Soft_F","A3_Characters_F","rhs_c_bmp","rhs_c_bmd","rhs_c_t72","rhs_c_troops","rhs_c_btr","rhs_c_weapons","rhs_c_a2port_air","rhs_c_a2port_car","rhs_c_a2port_armor","rhs_cti_insurgents","rhs_c_heavyweapons","rhsusf_c_troops","rhsusf_c_weapons","rhsusf_c_m1a1","rhsusf_c_m113","RHS_US_A2_AirImport","rhsusf_c_hmmwv"};
		author[] = {"Leight"};
		authorUrl = "http://www.armacoopcorps.pl/";
	};
};
class CfgUnitInsignia
{
	class LOP_Insignia_SLA
	{
		displayName = "SLA patch";
		texture = "\lop_faction_sla\data\sla.paa";
		author = "$STR_LOP_FULL_NAME";
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class ItemInfo;
	class rhs_6b23;
	class rhs_6b23_rifleman;
	class rhs_6b23_medic;
	class rhs_6b23_sniper;
	class rhs_6b23_crewofficer;
	class rhs_6b23_crew;
	class rhs_6b23_engineer;
	class rhs_6b23_6sh92_vog_headset;
	class rhs_6b23_6sh92_headset_mapcase;
	class rhs_6b23_6sh92_radio;
	class rhs_6b23_6sh92_vog;
	class rhs_6b23_6sh92;
	class U_B_GhillieSuit;
	class rhs_weap_ak74m;
	class rhs_weap_ak74m_gp25;
	class rhs_weap_pkp;
	class rhs_weap_svds;
	class H_Beret_blk;
	
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class LOP_U_SLA_Fatigue_01: Uniform_Base
	{
		_generalMacro = "LOP_U_SLA_Fatigue_01";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		displayName = "Combat fatigue (SLA)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "LOP_SLA_Infantry_Rifleman";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class LOP_SLA_GhillieSuit: U_B_GhillieSuit
	{
		_generalMacro = "LOP_SLA_GhillieSuit";
		author = "Esper";
	
		scope = 2;
		displayName = "Ghillie Suit [SLA]";
		class ItemInfo: ItemInfo
		{
		        uniformClass = LOP_SLA_Infantry_Sniper;
		};
		
		
		
	};
	class HeadgearItem;
	class LOP_H_SSh68Helmet_OLV: ItemCore
	{
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Steel Helmet (olive)";
		picture = "\lop_main\data\ui\icon_h_lop_helmet_plain_ca.paa";
		model = "\lop_faction_sla\SSH68_helmet";
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\SSH68_helmet_co.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 70;
			uniformmodel = "\lop_faction_sla\SSH68_helmet";
			modelSides[] = {3,1};
			armor = "20*0.4";
			passThrough = 0.4;
			hiddenSelections[] = {"Camo"};
		};
	};
	class LOP_H_SSh68Helmet_BLK: ItemCore
	{
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Steel Helmet (black)";
		picture = "\lop_main\data\ui\icon_h_lop_helmet_plain_ca.paa";
		model = "\lop_faction_sla\SSH68_helmet";
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\SSH68_helmet_blk_co.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 70;
			uniformmodel = "\lop_faction_sla\SSH68_helmet";
			modelSides[] = {3,1};
			armor = "20*0.4";
			passThrough = 0.4;
			hiddenSelections[] = {"Camo"};
		};
	};
	class LOP_H_SLA_Beret: ItemCore
	{
		_generalMacro = "LOP_H_SLA_Beret";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SLA beret";
		picture = "\lop_main\data\ui\icon_h_lop_helmet_plain_ca.paa";
		model = "\lop_faction_chdkz\Ins_Beret";
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\ins_bardak_red_co.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\lop_faction_chdkz\Ins_Beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"Camo"};
		};
	};
	class LOP_SLA_VEST : rhs_6b23 {
		_generalMacro = "LOP_SLA_VEST";
		author = "Esper";
	
		scope = 2;
		displayName = "6B23 SLA";
		
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\lop_sla_vest.paa"};
	};
	class LOP_SLA_VEST_Rifleman : rhs_6b23_rifleman {
		_generalMacro = "LOP_SLA_VEST_Rifleman";
		author = "Esper";
		
		scope = 2;
		displayName = "6B23 SLA (Rifleman)";

		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\lop_sla_vest.paa", "lop_faction_sla\data\sla_GearPack1_lop_co.paa"};
	};
    class LOP_SLA_VEST_Medic : rhs_6b23_medic {
		_generalMacro = "LOP_SLA_VEST_Medic";
		author = "Esper";
		
		scope = 2;
		displayName = "6B23 SLA (Medic)";

		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\lop_sla_vest.paa", "lop_faction_sla\data\sla_GearPack1_lop_co.paa"};
	};
    class LOP_SLA_VEST_CrewOfficer : rhs_6b23_crewofficer {
		_generalMacro = "LOP_SLA_VEST_CrewOfficer";
		author = "Esper";
		
		scope = 2;
		displayName = "6B23 SLA (Crew Officer)";

		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\lop_sla_vest.paa", "lop_faction_sla\data\sla_GearPack1_lop_co.paa"};
	};
	class LOP_SLA_VEST_Crew : rhs_6b23_crew {
		_generalMacro = "LOP_SLA_VEST_Crew";
		author = "Esper";
		
		scope = 2;
		displayName = "6B23 SLA (Crew)";

		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\lop_sla_vest.paa", "lop_faction_sla\data\sla_GearPack1_lop_co.paa"};
	};
	class LOP_SLA_VEST_Sniper : rhs_6b23_sniper {
		_generalMacro = "LOP_SLA_VEST_Sniper";
		author = "Esper";
		
		scope = 2;
		displayName = "6B23 SLA (Sniper)";

		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\lop_sla_vest.paa", "lop_faction_sla\data\sla_GearPack1_lop_co.paa"};
	};
	class LOP_SLA_VEST_Engineer : rhs_6b23_engineer {
		_generalMacro = "LOP_SLA_VEST_Engineer";
		author = "Esper";
		
		scope = 2;
		displayName = "6B23 SLA (Engineer)";

		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\lop_sla_vest.paa", "lop_faction_sla\data\sla_GearPack1_lop_co.paa"};
	};
	class LOP_SLA_VEST_vog_headset : rhs_6b23_6sh92_vog_headset {
		_generalMacro = "LOP_SLA_VEST_vog_headset";
		author = "Esper";
	
		scope = 2;
		displayName = "6B23 SLA (Vog/Headset)";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\lop_sla_vest.paa", "lop_faction_sla\data\sla_GearPack1_lop_co.paa"};
	};
	class LOP_SLA_VEST_headset_mapcase : rhs_6b23_6sh92_headset_mapcase {
		_generalMacro = "LOP_SLA_VEST_headset_mapcase";
		author = "Esper";
	
		scope = 2;
		displayName = "6B23 SLA (Headset/Mapcase)";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\lop_sla_vest.paa", "lop_faction_sla\data\sla_GearPack1_lop_co.paa"};
	};
	class LOP_SLA_VEST_vog : rhs_6b23_6sh92_vog {
		_generalMacro = "LOP_SLA_VEST_vog";
		author = "Esper";
	
		scope = 2;
		displayName = "6B23 SLA (Vog)";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\lop_sla_vest.paa", "lop_faction_sla\data\sla_GearPack1_lop_co.paa"};
	};
	class LOP_SLA_VEST_6sh92 : rhs_6b23_6sh92 {
		_generalMacro = "LOP_SLA_VEST_6sh92";
		author = "Esper";
	
		scope = 2;
		displayName = "6B23 SLA (6sh92)";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\lop_sla_vest.paa", "lop_faction_sla\data\sla_GearPack1_lop_co.paa"};
	};
	class LOP_SLA_VEST_radio : rhs_6b23_6sh92_radio {
		_generalMacro = "LOP_SLA_VEST_radio";
		author = "Esper";
	
		scope = 2;
		displayName = "6B23 SLA (Radio)";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\lop_sla_vest.paa", "lop_faction_sla\data\sla_GearPack1_lop_co.paa"};
	};
	class SLA_SpecOps_AK74 : rhs_weap_ak74m {
		_generalMacro = "SLA_SpecOps_AK74";
		author = "Esper";
		
		scope = 2;
		displayName = "AK-74M Spec";
		class LinkedItems
		{
		 class LinkedItemsOptics
		 {
		 slot = "CowsSlot";
         item = "rhs_acc_1p29";
		 }; 
		};
		
	};
	class SLA_SpecOps_AK74GL : rhs_weap_ak74m_gp25 {
		_generalMacro = "SLA_SpecOps_AK74GL";
		author = "Esper";
		
		scope = 2;
		displayName = "AK-74M GP-25 Spec";
		class LinkedItems
		{
		 class LinkedItemsOptics
		 {
		 slot = "CowsSlot";
         item = "rhs_acc_1p29";
		 }; 
		};
		
	};
	class SLA_SpecOps_MG : rhs_weap_pkp {
		_generalMacro = "SLA_SpecOps_MG";
		author = "Esper";
		
		scope = 2;
		displayName = "PKP Spec";
		class LinkedItems
		{
		 class LinkedItemsOptics
		 {
		 slot = "CowsSlot";
         item = "rhs_acc_1p29";
		 }; 
		};
		
	};
	class SLA_SpecOps_Marks : rhs_weap_svds {
		_generalMacro = "SLA_SpecOps_Marks";
		author = "Esper";
		
		scope = 2;
		displayName = "SVDS Spec";
		class LinkedItems
		{
		 class LinkedItemsOptics
		 {
		 slot = "CowsSlot";
         item = "rhs_acc_pso1m2";
		 }; 
		};
		
	};
	class LOP_SLA_Beret_SF: H_Beret_blk {
		_generalMacro = "LOP_SLA_Beret_SF";
		author = "Esper";
		scope = 2;
		displayName = "Beret (SLA|SF)";
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\sla_sf_beret_co.paa"};
		hiddenSelections[] = {"Camo"};
	};

    	
};
class CfgVehicles
{
	class rhs_msv_rifleman;
	class rhs_msv_grenadier;
	class rhs_msv_machinegunner;
	class rhs_msv_machinegunner_assistant;
	class rhs_msv_at;
	class rhs_msv_aa;
	class rhs_msv_strelok_rpg_assist;
	class rhs_msv_marksman;
	class rhs_msv_officer;
	class rhs_msv_engineer;
	class rhs_msv_medic;
	class rhs_msv_crew;
	class rhs_msv_sergeant;
	class rhs_msv_junior_sergeant;
	class B_sniper_F;
	class RHS_Ka52_base;
	
	class LOP_SLA_Infantry_Rifleman: rhs_msv_rifleman
	{
		_generalMacro = "LOP_SLA_Infantry_Rifleman";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Rifleman";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_sla\data\u_fatigue_01_co.paa","","",""};
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		linkedItems[] = {"LOP_SLA_VEST_Rifleman","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Rifleman","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_SLA_Infantry_Pilot: rhs_msv_rifleman
	{
		_generalMacro = "LOP_SLA_Infantry_Pilot";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_US_Fatigue_03";
		displayName = "Pilot";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "pilot";
		textPlural = "pilots";
		nameSound = "veh_infantry_pilot_s";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_folded","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_folded","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_SLA_VEST_Crew","rhs_zsh7a_mike","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Crew","rhs_zsh7a_mike","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_SLA_Infantry_TL: rhs_msv_junior_sergeant
	{
		_generalMacro = "LOP_SLA_Infantry_TL";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Team Leader";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_gp25","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms_gp25","Throw","Put"};
		magazines[] = {"rhs_GRD40_White","rhs_GRD40_White","rhs_GRD40_White","rhs_GRD40_White","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_GRD40_White","rhs_GRD40_White","rhs_GRD40_White","rhs_GRD40_White","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		linkedItems[] = {"LOP_SLA_VEST_vog_headset","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_vog_headset","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_SLA_Infantry_SL: rhs_msv_sergeant
	{
		_generalMacro = "LOP_SLA_Infantry_SL";
		author = "Esper";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Squad Leader";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_gp25","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25","Throw","Put","Binocular"};
		magazines[] = {"rhs_GRD40_White","rhs_GRD40_White","rhs_GRD40_White","rhs_GRD40_White","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_GRD40_White","rhs_GRD40_White","rhs_GRD40_White","rhs_GRD40_White","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white""rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_SLA_VEST_headset_mapcase","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_headset_mapcase","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_SLA_Infantry_Crewman: rhs_msv_crew
	{
		_generalMacro = "LOP_SLA_Infantry_Crewman";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_US_Fatigue_03";
		displayName = "Crewman";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_folded","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_folded","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_SLA_VEST_Crew","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Crew","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_SLA_Infantry_Corpsman: rhs_msv_medic
	{
		_generalMacro = "LOP_SLA_Infantry_Corpsman";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Corpsman";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		linkedItems[] = {"LOP_SLA_VEST_Medic","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Medic","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_SLA_Kitbag_Med";
	};
	class LOP_SLA_Infantry_Officer: rhs_msv_officer
	{
		_generalMacro = "LOP_SLA_Infantry_Officer";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Officer";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_folded","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_SLA_VEST_CrewOfficer","LOP_H_SLA_Beret","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_CrewOfficer","LOP_H_SLA_Beret","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "";
	};
	class LOP_SLA_Infantry_Marksman: rhs_msv_marksman
	{
		_generalMacro = "LOP_SLA_Infantry_Marksman";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Marksman";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"LOP_Weap_SVDS","Throw","Put","Binocular"};
		respawnWeapons[] = {"LOP_Weap_SVDS","Throw","Put","Binocular"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_SLA_VEST_Sniper","H_Bandanna_khk","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Sniper","H_Bandanna_khk","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_SLA_Sidor_SVD";
	};
	class LOP_SLA_Infantry_Sniper: B_sniper_F
	{
		_generalMacro = "LOP_SLA_Infantry_Sniper";
		author = "Esper";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_SLA_GhillieSuit";
		hiddenSelections[] = {"Camo","Camo3"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\clothing1_co.paa","\lop_faction_sla\data\ghillie_sla_co.paa"};
		displayName = "Sniper";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"LOP_Weap_SVDS","Throw","Put","Binocular"};
		respawnWeapons[] = {"LOP_Weap_SVDS","Throw","Put","Binocular"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rgd5","rhs_mag_rgd5"};
		linkedItems[] = {"LOP_SLA_VEST_Sniper","H_Bandanna_khk","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Sniper","H_Bandanna_khk","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_SLA_Sidor_SVD";
	};
	class LOP_SLA_Infantry_AT: rhs_msv_at
	{
		_generalMacro = "LOP_SLA_Infantry_AT";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Rifleman (RPG-7)";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m","rhs_weap_rpg7","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m","rhs_weap_rpg7","Throw","Put"};
		magazines[] = {"rhs_rpg7_PG7VL_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_TBG7V_mag","rhs_rpg7_PG7VR_mag","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_TBG7V_mag","rhs_rpg7_PG7VR_mag","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		linkedItems[] = {"LOP_SLA_VEST_Rifleman","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Rifleman","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_SLA_RPG_Pack";
	};
	class LOP_SLA_Infantry_AA: rhs_msv_aa
	{
		_generalMacro = "LOP_SLA_Infantry_AA";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "AA Specialist (Igla)";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m","rhs_weap_igla","Throw","Put"};
		magazines[] = {"rhs_mag_9k38_rocket","rhs_mag_9k38_rocket","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_mag_9k38_rocket","rhs_mag_9k38_rocket","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		linkedItems[] = {"LOP_SLA_VEST_Rifleman","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Rifleman","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_SLA_AA_Pack";
	};
	class LOP_SLA_Infantry_AA_Asst: rhs_msv_aa
	{
		_generalMacro = "LOP_SLA_Infantry_AA_Asst";
		author = "Esper";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "AA Assistant (Igla)";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put"};
		magazines[] = {"rhs_mag_9k38_rocket","rhs_mag_9k38_rocket","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_mag_9k38_rocket","rhs_mag_9k38_rocket","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		linkedItems[] = {"LOP_SLA_VEST_Rifleman","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Rifleman","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_SLA_AA_Pack";
	};
	class LOP_SLA_Infantry_AT_Asst: rhs_msv_strelok_rpg_assist
	{
		_generalMacro = "LOP_SLA_Infantry_AT_Asst";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Ammo Bearer (RPG7)";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put"};
		magazines[] = {"rhs_rpg7_PG7VL_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_TBG7V_mag","rhs_rpg7_PG7VR_mag","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_TBG7V_mag","rhs_rpg7_PG7VR_mag","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		linkedItems[] = {"LOP_SLA_VEST_Rifleman","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Rifleman","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_SLA_RPG_Pack";
	};
	class LOP_SLA_Infantry_GL: rhs_msv_grenadier
	{
		_generalMacro = "LOP_SLA_Infantry_GL";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Grenadier";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_gp25","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25","Throw","Put","Binocular"};
		magazines[] = {"rhs_GRD40_White","rhs_GRD40_White","rhs_GRD40_White","rhs_GRD40_White","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_GRD40_White","rhs_GRD40_White","rhs_GRD40_White","rhs_GRD40_White","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		linkedItems[] = {"LOP_SLA_VEST_vog","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_vog","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "B_FieldPack_cbr";
	};
	class LOP_SLA_Infantry_MG: rhs_msv_machinegunner
	{
		_generalMacro = "LOP_SLA_Infantry_MG";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Machinegunner";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		linkedItems[] = {"LOP_SLA_VEST_6sh92","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_6sh92","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_SLA_Fieldpack_PKM";
	};
	class LOP_SLA_Infantry_MG_Asst: rhs_msv_machinegunner_assistant
	{
		_generalMacro = "LOP_SLA_Infantry_MG_Asst";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Machinegunner assistant";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green""rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		linkedItems[] = {"LOP_SLA_VEST_6sh92","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_6sh92","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_SLA_Fieldpack_PKM";
	};
	class LOP_SLA_Infantry_Engineer: rhs_msv_engineer
	{
		_generalMacro = "LOP_SLA_Infantry_Engineer";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Engineer";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		linkedItems[] = {"LOP_SLA_VEST_Engineer","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Engineer","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class LOP_SLA_Infantry_Rifleman_Ghillie: LOP_SLA_Infantry_Sniper
	{
		_generalMacro = "LOP_SLA_Infantry_Rifleman_Ghillie";
		author = "Esper";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_SLA_GhillieSuit";
		hiddenSelections[] = {"Camo","Camo3"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\clothing1_co.paa","\lop_faction_sla\data\ghillie_sla_co.paa"};
		displayName = "Rifleman (Ghillie)";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rdg2_white"};
		linkedItems[] = {"LOP_SLA_VEST_Sniper","H_Bandanna_khk","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Sniper","H_Bandanna_khk","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "LOP_SLA_Sidor_SVD";
	};
	class LOP_SLA_Infantry_TL_SpecOps: rhs_msv_sergeant
	{
		_generalMacro = "LOP_SLA_Infantry_TL_SpecOps";
		author = "Esper";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		hiddenSelections[] = {"Camo","Camo3"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\clothing1_co.paa","\lop_faction_sla\data\ghillie_sla_co.paa"};
		displayName = "Commando Leader";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit","ToolKit"};
		RespawnItems[] = {"FirstAidKit","ToolKit"};
		weapons[] = {"SLA_SpecOps_AK74","Throw","Put","Binocular"};
		respawnWeapons[] = {"SLA_SpecOps_AK74","Throw","Put","Binocular"};
		magazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_zarya2","rhs_mag_zarya2","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK"};
		respawnMagazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_zarya2","rhs_mag_zarya2","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK"};
		linkedItems[] = {"LOP_SLA_VEST_headset_mapcase","LOP_SLA_Beret_SF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_headset_mapcase","LOP_SLA_Beret_SF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "B_FieldPack_oli";
	};
	class LOP_SLA_Infantry_GL_SpecOps: rhs_msv_grenadier
	{
		_generalMacro = "LOP_SLA_Infantry_GL_SpecOps";
		author = "Esper";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		hiddenSelections[] = {"Camo","Camo3"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\clothing1_co.paa","\lop_faction_sla\data\ghillie_sla_co.paa"};
		displayName = "Commando Grenadier";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"SLA_SpecOps_AK74GL","Throw","Put","Binocular"};
		respawnWeapons[] = {"SLA_SpecOps_AK74GL","Throw","Put","Binocular"};
		magazines[] = {"rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VG40TB","rhs_VG40TB","rhs_VG40TB","rhs_VG40SZ","rhs_VG40SZ","rhs_VG40SZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_zarya2","rhs_mag_zarya2","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK"};
		respawnMagazines[] = {"rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VG40TB","rhs_VG40TB","rhs_VG40TB","rhs_VG40SZ","rhs_VG40SZ","rhs_VG40SZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_zarya2","rhs_mag_zarya2","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK"};
		linkedItems[] = {"LOP_SLA_VEST_vog","LOP_SLA_Beret_SF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_vog","LOP_SLA_Beret_SF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "B_FieldPack_oli";
	};
	class LOP_SLA_Infantry_Machinegunner_SpecOps: rhs_msv_machinegunner
	{
		_generalMacro = "LOP_SLA_Infantry_Machinegunner_SpecOps";
		author = "Esper";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		hiddenSelections[] = {"Camo","Camo3"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\clothing1_co.paa","\lop_faction_sla\data\ghillie_sla_co.paa"};
		displayName = "Commando Machinegunner";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"SLA_SpecOps_MG","Throw","Put","Binocular"};
		respawnWeapons[] = {"SLA_SpecOps_MG","Throw","Put","Binocular"};
		magazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_zarya2","rhs_mag_zarya2","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnMagazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_zarya2","rhs_mag_zarya2","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		linkedItems[] = {"LOP_SLA_VEST_6sh92","LOP_SLA_Beret_SF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_6sh92","LOP_SLA_Beret_SF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "B_FieldPack_oli";
	};
	class LOP_SLA_Infantry_Marksman_SpecOps: rhs_msv_marksman
	{
		_generalMacro = "LOP_SLA_Infantry_Marksman_SpecOps";
		author = "Esper";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		hiddenSelections[] = {"Camo","Camo3"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\clothing1_co.paa","\lop_faction_sla\data\ghillie_sla_co.paa"};
		displayName = "Commando Marksman";
		identityTypes[] = {"LanguageRUS","Head_Euro","Head_Asian","G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"SLA_SpecOps_Marks","Throw","Put","Binocular"};
		respawnWeapons[] = {"SLA_SpecOps_Marks","Throw","Put","Binocular"};
		magazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_zarya2","rhs_mag_zarya2","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
		respawnMagazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_zarya2","rhs_mag_zarya2","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
		linkedItems[] = {"LOP_SLA_VEST_Sniper","LOP_SLA_Beret_SF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_SLA_VEST_Sniper","LOP_SLA_Beret_SF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "B_FieldPack_oli";
	};
	
	class RHS_Mi8mt_Cargo_vvs;
	class RHS_Mi8mt_Cargo_vvsc: RHS_Mi8mt_Cargo_vvs
	{
		class EventHandlers;
	};
	class RHS_Mi8MTV3_FAB_vvs;
	class RHS_Mi8MTV3_FAB_vvsc: RHS_Mi8MTV3_FAB_vvs
	{
		class EventHandlers;
	};
	class RHS_Mi8MTV3_UPK23_vvs;
	class RHS_Mi8MTV3_UPK23_vvsc: RHS_Mi8MTV3_UPK23_vvs
	{
		class EventHandlers;
	};
	class RHS_Mi8AMTSh_FAB_vvs;
	class RHS_Mi8AMTSh_FAB_vvsc: RHS_Mi8AMTSh_FAB_vvs
	{
		class EventHandlers;
	};
	class RHS_Mi8AMTSh_UPK23_vvs;
	class RHS_Mi8AMTSh_UPK23_vvsc: RHS_Mi8AMTSh_UPK23_vvs
	{
		class EventHandlers;
	};
	class RHS_Mi24V_AT_vvs;
	class RHS_Mi24V_AT_vvsc: RHS_Mi24V_AT_vvs
	{
		class EventHandlers;
	};
	class RHS_Mi24V_FAB_vvs;
	class RHS_Mi24V_FAB_vvsc: RHS_Mi24V_FAB_vvs
	{
		class EventHandlers;
	};
	class RHS_Mi24V_UPK23_vvs;
	class RHS_Mi24V_UPK23_vvsc: RHS_Mi24V_UPK23_vvs
	{
		class EventHandlers;
	};
	class LOP_SLA_Mi8MT_Cargo: RHS_Mi8mt_Cargo_vvsc
	{
		_generalMacro = "LOP_SLA_Mi8MT_Cargo";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Air";
		typicalCargo[] = {"LOP_SLA_Infantry_Pilot"};
		crew = "LOP_SLA_Infantry_Pilot";
		hiddenselectionstextures[] = {"\lop_faction_sla\data\mi8_body_olv_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class EventHandlers: EventHandlers
		{
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\lop_faction_sla\scripts\sla_mi8_decals.sqf""";
		};
	};
	class LOP_SLA_Mi8MTV3_FAB: RHS_Mi8MTV3_FAB_vvsc
	{
		_generalMacro = "LOP_SLA_Mi8MTV3_FAB";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Air";
		typicalCargo[] = {"LOP_SLA_Infantry_Pilot"};
		crew = "LOP_SLA_Infantry_Pilot";
		hiddenselectionstextures[] = {"\lop_faction_sla\data\mi8_body_olv_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class EventHandlers: EventHandlers
		{
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\lop_faction_sla\scripts\sla_mi8_decals.sqf""";
		};
	};
	class LOP_SLA_Mi8MTV3_UPK23: RHS_Mi8MTV3_UPK23_vvsc
	{
		_generalMacro = "LOP_SLA_Mi8MTV3_UPK23";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Air";
		typicalCargo[] = {"LOP_SLA_Infantry_Pilot"};
		crew = "LOP_SLA_Infantry_Pilot";
		hiddenselectionstextures[] = {"\lop_faction_sla\data\mi8_body_olv_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class EventHandlers: EventHandlers
		{
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\lop_faction_sla\scripts\sla_mi8_decals.sqf""";
		};
	};
	class B_Kitbag_rgr;
	class rhs_sidor;
	class rhs_rpg_empty;
	class B_FieldPack_khk;
	class LOP_SLA_Kitbag_Med: B_Kitbag_rgr
	{
		_generalMacro = "LOP_SLA_Kitbag_Med";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				count = 15;
				name = "FirstAidKit";
			};
			class _xx_Medikit
			{
				count = 1;
				name = "Medikit";
			};
		};
	};
	class LOP_SLA_AA_Pack: rhs_rpg_empty
	{
		_generalMacro = "LOP_SLA_AA_Pack";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_mag_9k38_rocket
			{
				count = 2;
				magazine = "rhs_mag_9k38_rocket";
			};
		};
	};
	class LOP_SLA_Sidor_SVD: rhs_sidor
	{
		_generalMacro = "LOP_SLA_Sidor_SVD";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_10Rnd_762x54mmR_7N1
			{
				count = 5;
				magazine = "rhs_10Rnd_762x54mmR_7N1";
			};
			class _xx_rhs_mag_rgd5
			{
				count = 2;
				magazine = "rhs_mag_rgd5";
			};
			class _xx_rhs_mag_rdg2_white
			{
				count = 1;
				magazine = "rhs_mag_rdg2_white";
			};
		};
	};
	class LOP_SLA_RPG_Pack: rhs_rpg_empty
	{
		_generalMacro = "LOP_SLA_RPG_Pack";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_rpg7_PG7VR_mag
			{
				count = 2;
				magazine = "rhs_rpg7_PG7VR_mag";
			};
			class _xx_rhs_rpg7_PG7VL_mag
			{
				count = 1;
				magazine = "rhs_rpg7_PG7VL_mag";
			};
		};
	};
	class LOP_SLA_Fieldpack_PKM: B_FieldPack_khk
	{
		_generalMacro = "LOP_SLA_Fieldpack_PKM";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_100Rnd_762x54mmR
			{
				count = 4;
				magazine = "rhs_100Rnd_762x54mmR";
			};
		};
	};
	class Offroad_01_base_F;
	class RHS_UAZ_Base: Offroad_01_base_F
	{
		class EventHandlers;
	};
	class rhs_uaz_open_Base: RHS_UAZ_Base{};
	class RHS_Ural_BaseTurret;
	class RHS_Ural_Base: RHS_Ural_BaseTurret
	{
		class EventHandlers;
	};
	class RHS_BM21_MSV_01: RHS_Ural_BaseTurret
	{
		class EventHandlers;
	};
	class RHS_Ural_MSV_Base;
	class RHS_Ural_Open_MSV_01: RHS_Ural_MSV_Base
	{
		class EventHandlers;
	};
	class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base
	{
		class EventHandlers;
	};
	class RHS_Ural_Fuel_MSV_01: RHS_Ural_Support_MSV_Base_01
	{
		class EventHandlers;
	};
	class O_Truck_02_medical_F;
	class O_Truck_02_covered_F;
	class O_Truck_02_box_F;
	class O_Truck_02_transport_F;
	class O_Truck_02_fuel_F;
	class O_Truck_02_Ammo_F;
	class rhs_bmp2k_msv;
	class rhs_prp3_msv;
	
	class LOP_SLA_BM21: RHS_BM21_MSV_01
	{
		_generalMacro = "LOP_SLA_BM21";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Cars";
		displayName = "BM-21 GRAD";
		typicalCargo[] = {"LOP_SLA_Infantry_Rifleman"};
		crew = "LOP_SLA_Infantry_Rifleman";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class EventHandlers: EventHandlers
		{
			init = "_this call SLX_XEH_EH_Init;";
		};
	};
	class LOP_SLA_Ural: RHS_Ural_Base
	{
		_generalMacro = "LOP_SLA_Ural";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Cars";
		typicalCargo[] = {"LOP_SLA_Infantry_Rifleman"};
		crew = "LOP_SLA_Infantry_Rifleman";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class EventHandlers: EventHandlers
		{
			init = "_this call SLX_XEH_EH_Init;";
		};
	};
	class LOP_SLA_Ural_open: RHS_Ural_Open_MSV_01
	{
		_generalMacro = "LOP_SLA_Ural_open";
		author = "$STR_LOP_FULL_NAME";
		displayName = "$STR_RHS_URAL4320OPEN_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Cars";
		typicalCargo[] = {"LOP_SLA_Infantry_Rifleman"};
		crew = "LOP_SLA_Infantry_Rifleman";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class EventHandlers: EventHandlers
		{
			init = "_this call SLX_XEH_EH_Init;";
		};
	};
	class LOP_SLA_UAZ: RHS_UAZ_Base
	{
		_generalMacro = "LOP_SLA_Uaz";
		author = "$STR_LOP_FULL_NAME";
		accuracy = 0.5;
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Cars";
		typicalCargo[] = {"LOP_SLA_Infantry_Rifleman"};
		crew = "LOP_SLA_Infantry_Rifleman";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class EventHandlers: EventHandlers
		{
			init = "_this call SLX_XEH_EH_Init;";
		};
	};
	class LOP_SLA_UAZ_Open: rhs_uaz_open_Base
	{
		_generalMacro = "LOP_SLA_UAZ_Open";
		author = "$STR_LOP_FULL_NAME";
		accuracy = 0.5;
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Cars";
		typicalCargo[] = {"LOP_SLA_Infantry_Rifleman"};
		crew = "LOP_SLA_Infantry_Rifleman";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class EventHandlers: EventHandlers
		{
			init = "_this call SLX_XEH_EH_Init;";
		};
	};
	class rhs_btr60_vmf;
	class rhs_btr60_msv: rhs_btr60_vmf
	{
		class EventHandlers;
	};
	class rhs_zsutank_base;
	class rhs_zsu234_aa: rhs_zsutank_base
	{
		class EventHandlers;
	};
	class rhs_bmp2_vdv;
	class rhs_bmp2_msv: rhs_bmp2_vdv
	{
		class EventHandlers;
	};
	class rhs_a3t72tank_base;
	class rhs_t72ba_tv: rhs_a3t72tank_base
	{
		class EventHandlers;
	};
	class rhs_t72bb_tv: rhs_a3t72tank_base
	{
		class EventHandlers;
	};
	class LOP_SLA_T72BB: rhs_t72bb_tv
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_SLA_T72BA";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Armored";
		crew = "LOP_SLA_Infantry_Crewman";
		typicalCargo[] = {"LOP_SLA_Infantry_Crewman"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class eventhandlers
		{
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\lop_faction_sla\scripts\sla_t72_decals.sqf""";
		};
	};
	class LOP_SLA_T72BA: rhs_t72ba_tv
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_SLA_T72BA";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Armored";
		crew = "LOP_SLA_Infantry_Crewman";
		typicalCargo[] = {"LOP_SLA_Infantry_Crewman"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class eventhandlers
		{
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\lop_faction_sla\scripts\sla_t72_decals.sqf""";
		};
	};
	class LOP_SLA_BMP2K: rhs_bmp2k_msv
	{
		author = "Esper";
		_generalMacro = "LOP_SLA_BMP2k";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Armored";
		displayName = "BMP-2D";
		crew = "LOP_SLA_Infantry_Crewman";
		typicalCargo[] = {"LOP_SLA_Infantry_Crewman"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class eventhandlers
		{
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\lop_faction_sla\scripts\sla_bmp_decals.sqf""";
		};
		hiddenSelections[] = {"n1","n2","n3","i1","i2","i3","i4","i5","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa"};
	};
	class LOP_SLA_BMP2: rhs_bmp2_msv
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_SLA_BMP2";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Armored";
		displayName = "BMP-2";
		crew = "LOP_SLA_Infantry_Crewman";
		typicalCargo[] = {"LOP_SLA_Infantry_Crewman"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class eventhandlers
		{
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\lop_faction_sla\scripts\sla_bmp_decals.sqf""";
		};
		hiddenSelections[] = {"n1","n2","n3","i1","i2","i3","i4","i5","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa"};
	};
	class LOP_SLA_ZSU234: rhs_zsu234_aa
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_SLA_ZSU234";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Armored";
		displayName = "ZSU-23-4V";
		crew = "LOP_SLA_Infantry_Crewman";
		typicalCargo[] = {"LOP_SLA_Infantry_Crewman"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class eventhandlers
		{
			init = "_this call SLX_XEH_EH_Init;";
		};
	};
	class LOP_SLA_BTR60: rhs_btr60_msv
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_SLA_BTR60";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Armored";
		displayName = "BTR-60";
		crew = "LOP_SLA_Infantry_Crewman";
		typicalCargo[] = {"LOP_SLA_Infantry_Crewman"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class eventhandlers
		{
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\lop_faction_sla\scripts\sla_btr_decals.sqf""";
		};
	};
	class LOP_SLA_URAL_FUEL: RHS_Ural_Fuel_MSV_01
	{
		author = "Esper";
		_generalMacro = "LOP_SLA_URAL_FUEL";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Support";
		displayName = "Ural-4320 (Fuel) [SLA]";
		crew = "LOP_SLA_Infantry_Rifleman";
		typicalCargo[] = {"LOP_SLA_Infantry_Rifleman"};
	};
	class LOP_SLA_KA52 : RHS_Ka52_base
	{
	    author = "Esper";
		_generalMacro = "LOP_SLA_KA52";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		vehicleClass = "Air";
		crew = "LOP_SLA_Infantry_Pilot";
		displayName = "Ka-52";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_sla\data\ka52_01_RU_co.paa","\lop_faction_sla\data\ka52_02_RU_co.paa"};
	};
	class RHS_NSV_TriPod_MSV;
	class RHS_M2StaticMG_D;
	class RHS_M2StaticMG_MiniTripod_D;
	class RHS_MK19_TriPod_D;
	class LOP_SLA_NSV_TriPod: RHS_NSV_TriPod_MSV
	{
		generalMacro = "LOP_SLA_NSV_TriPod";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Infantry_Rifleman";
		typicalCargo[] = {"LOP_SLA_Infantry_Rifleman"};
		vehicleClass = "Static";
	};
};
class CfgGroups
{
	class East
	{
		class LOP_SLA
		{
			name = "SLA";
			class Infantry
			{
				name = "Infantry";
				class LOP_SLA_infantry_chq
				{
					name = "Company HQ";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class LOP_SLA_Infantry_squad
				{
					name = "Squad";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_GL";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Corpsman";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_2mg
				{
					name = "Squad (2x GPMG)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_sniper
				{
					name = "Squad (Marksman)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Corpsman";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_mg_sniper
				{
					name = "Squad (GPMG + Marksman)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_SLA_Infantry_section_mg
				{
					name = "Section MG";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_GL";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_SLA_Infantry_section_marksman
				{
					name = "Section Marksman";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_GL";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_SLA_Infantry_section_AT
				{
					name = "Section AT";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_SLA_Infantry_section_AA
				{
					name = "Section AA";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA_Asst";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_SLA_Infantry_fireteam
				{
					name = "Fireteam";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				class LOP_SLA_Infantry_MANEUVER
				{
					name = "Maneuver team";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				class LOP_SLA_Infantry_Sniper_Team
				{
					name = "Sniper team";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Sniper";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman_Ghillie";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					
				};
			
			};
			class Motorized
			{
			    name = "Motorized Infantry";
			    class LOP_SLA_infantry_chq_motor
				{
					name = "Company HQ";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_UAZ";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_motor
				{
					name = "Squad";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_GL";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Ural";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Corpsman";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_2mg_motor
				{
					name = "Squad (2x GPMG)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Ural";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_sniper_motor
				{
					name = "Squad (Marksman)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Ural";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Corpsman";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_mg_sniper_motor
				{
					name = "Squad (GPMG + Marksman)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Ural";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_SLA_Infantry_section_AA_motor
				{
					name = "Section AA";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Ural";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
					    side = 0;
						vehicle = "LOP_SLA_Infantry_AA_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class LOP_SLA_Infantry_fireteam_motor
				{
					name = "Fireteam (UAZ)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_UAZ";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};

			};
			class Mechanized
			{
				name = "Mechanized Infantry";
				class LOP_SLA_infantry_chq_btr
				{
					name = "(BTR) Company HQ";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_BTR60";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_btr
				{
					name = "(BTR) Squad";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_GL";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_BTR60";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					
				};
				class LOP_SLA_Infantry_squad_2mg_btr
				{
					name = "(BTR) Squad (2x GPMG)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_BTR60";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_sniper_btr
				{
					name = "(BTR) Squad (Marksman)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_BTR60";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Corpsman";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_mg_sniper_btr
				{
					name = "(BTR) Squad (GPMG + Marksman)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_BTR60";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_SLA_Infantry_section_AA_btr
				{
					name = "(BTR) Section AA";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_BTR60";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
					    side = 0;
						vehicle = "LOP_SLA_Infantry_AA_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				
				
				class LOP_SLA_infantry_chq_bmp
				{
					name = "(BMP) Company HQ";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_BMP2D";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_bmp
				{
					name = "(BMP) Squad";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_GL";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_BMP2";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					
				};
				class LOP_SLA_Infantry_squad_2mg_bmp
				{
					name = "(BMP) Squad (2x GPMG)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_BMP2";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_sniper_bmp
				{
					name = "(BMP) Squad (Marksman)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_BMP2";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Corpsman";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_SLA_Infantry_squad_mg_sniper_bmp
				{
					name = "(BMP) Squad (GPMG + Marksman)";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_BMP2";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_SLA_Infantry_section_AA_bmp
				{
					name = "(BMP) Section AA";
					faction = "LOP_SLA";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_SLA_Infantry_AA";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_SLA_BMP2";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
					    side = 0;
						vehicle = "LOP_SLA_Infantry_AA_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				
			};
			class Armored
			{
				name = "Tank Groups";
				class LOP_SLA_T72BA_Platoon
				{
					name = "T-72 g.1984 Platoon";
					faction = "LOP_SLA";
					side = 0;
					aliveCategory = "Armored";
					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_T72BA";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_T72BA";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_T72BA";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				class LOP_SLA_T72BB_Platoon
				{
					name = "T-72 g.1984 (ERA) Platoon";
					faction = "LOP_SLA";
					side = 0;
					aliveCategory = "Armored";
					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_T72BB";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_T72BB";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_T72BB";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				class LOP_SLA_T72_Combined_Platoon
				{
					name = "T-72 Combined Platoon";
					faction = "LOP_SLA";
					side = 0;
					aliveCategory = "Armored";
					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_T72BB";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_T72BA";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_T72BA";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				class LOP_SLA_ZSU234_Platoon
				{
					name = "ZSU-23-4V Platoon";
					faction = "LOP_SLA";
					side = 0;
					aliveCategory = "Armored";
					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_ZSU234";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_ZSU234";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_ZSU234";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				class LOP_SLA_BTR_Combined_Platoon
				{
					name = "BTR Combined Platoon";
					faction = "LOP_SLA";
					side = 0;
					aliveCategory = "Armored";
					class Unit0
					{
						side = 0;
						vehicle = "LOP_SLA_BTR70";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_SLA_BTR70";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_SLA_BTR60";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
		};
	};
};
class cfgMods
{
	author = "Leight";
	timepacked = "1434485818";
};
//};
