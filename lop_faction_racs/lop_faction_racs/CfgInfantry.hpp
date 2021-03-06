	class I_Soldier_SL_F;
	class I_Soldier_TL_F;
	class I_medic_F;
	class I_Soldier_AR_F;
	class I_Soldier_LAT_F;
	class I_Soldier_GL_F;
	class I_Soldier_AT_F;
	class I_Soldier_F;
	class I_Sniper_F;
	class I_Soldier_A_F;
	class I_crew_F;
	class I_officer_F;
	class I_helipilot_F;
	class I_engineer_F;
	class I_Soldier_AA_F;
	
	class LOP_RACS_Infantry_TL : I_Soldier_TL_F {
		_generalMacro = "LOP_RACS_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Team Leader";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_racs\data\u_fatigue_01_co.paa"};
		
		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	class LOP_RACS_Infantry_SL : I_Soldier_SL_F {
		_generalMacro = "LOP_RACS_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Section Leader";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_racs\data\u_fatigue_01_co.paa"};
		
		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierRig_TAN", "LOP_H_6B27M_ess_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_TAN", "LOP_H_6B27M_ess_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_RACS_Infantry_Corpsman : I_Medic_F {
		_generalMacro = "LOP_RACS_Infantry_Corpsman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Corpsman";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_6B27M_WDL", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_6B27M_WDL", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_RACS_Kitbag_Med";
	};
	class LOP_RACS_Infantry_Rifleman : I_Soldier_F {
		_generalMacro = "LOP_RACS_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Rifleman";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierLite_TAN", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_TAN", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_RACS_Infantry_AT : I_Soldier_AT_F {
		_generalMacro = "LOP_RACS_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Rifleman (M136)";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "rhs_weap_M136", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "rhs_weap_M136", "Throw", "Put"};
		
		magazines[] = {"rhs_m136_mag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_m136_mag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_WDL", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_WDL", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_RACS_Infantry_HAT_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_RACS_Infantry_HAT_Asst";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "AT Assistant";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		
		magazines[] = {"rhs_fgm148_magazine_AT","rhs_fgm148_magazine_AT","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_fgm148_magazine_AT","rhs_fgm148_magazine_AT","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "B_Carryall_cbr";
	};	
	class LOP_RACS_Infantry_MG_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_RACS_Infantry_MG_Asst";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Machinegunner assistant";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_6B27M_WDL", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_6B27M_WDL", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_RACS_Fieldpack_PKM";
	};
	class LOP_RACS_Infantry_MG : I_Soldier_AR_F {
		_generalMacro = "LOP_RACS_Infantry_MG";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Machinegunner";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_RACS_Fieldpack_PKM";
	};	
	class LOP_RACS_Infantry_Engineer : I_engineer_F {
		_generalMacro = "LOP_RACS_Infantry_Engineer";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Engineer";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	class LOP_RACS_Infantry_Marksman : I_Soldier_F {
		_generalMacro = "LOP_RACS_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Marksman";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"RACS_SR25", "Throw", "Put"};
		respawnWeapons[] = {"RACS_SR25", "Throw", "Put"};
		
		magazines[] = {"rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierRig_TAN", "LOP_H_Booniehat_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_TAN", "LOP_H_Booniehat_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_RACS_FalconII_SVD";
	};	
	class LOP_RACS_Infantry_GL : I_Soldier_F {
		_generalMacro = "LOP_RACS_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Grenadier";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
	
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "rhs_6b27m_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "rhs_6b27m_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_RACS_Infantry_Crewman : I_Crew_F {
		_generalMacro = "LOP_RACS_Infantry_Crewman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Crewman";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_Carrier_OLV", "rhs_tsh4", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "rhs_tsh4", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_RACS_Infantry_Pilot : I_Crew_F {
		_generalMacro = "LOP_RACS_Infantry_Pilot";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Crewman";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_Carrier_TAN", "rhs_zsh7a_mike", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_TAN", "rhs_zsh7a_mike", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	class LOP_RACS_Infantry_Officer : I_officer_F {
		_generalMacro = "LOP_RACS_Infantry_Officer";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Officer";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","SmokeShell","SmokeShellRed","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","SmokeShell","SmokeShellRed","HandGrenade","HandGrenade"};
		
		linkedItems[] = {"rhs_vest_commander","LOP_H_Beret_blue","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_vest_commander","LOP_H_Beret_blue","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		
		backpack = "";
		
	};
	class LOP_RACS_Infantry_AA : I_Soldier_AA_F {
		_generalMacro = "LOP_RACS_Infantry_AA";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "AA Specialist (Stinger)";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "rhs_weap_fim92", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "rhs_weap_fim92", "Throw", "Put"};
		
		magazines[] = {"rhs_fim92_mag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_fim92_mag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_WDL", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_WDL", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "B_Carryall_cbr";
	};
    class LOP_RACS_Infantry_HAT : I_Soldier_AT_F {
		_generalMacro = "LOP_RACS_Infantry_HAT";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "AT Specialist (Javelin)";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "rhs_weap_fgm148", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "rhs_weap_fgm148", "Throw", "Put"};
		
		magazines[] = {"rhs_fgm148_magazine_AT","rhs_fgm148_magazine_AT", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_fgm148_magazine_AT","rhs_fgm148_magazine_AT", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_WDL", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_WDL", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "B_Carryall_cbr";
	};	
    class LOP_RACS_Infantry_AA_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_RACS_Infantry_AA_Asst";
		author = "Esper";
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "AA Assistant";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		
		magazines[] = {"rhs_fim92_mag","rhs_fim92_mag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_fim92_mag","rhs_fim92_mag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "B_Carryall_cbr";
	};	