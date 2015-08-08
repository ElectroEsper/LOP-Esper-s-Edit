	
	class rhsusf_iotv_ocp_base;
	class rhsusf_iotv_ocp_Grenadier;
	class rhsusf_iotv_ocp_Medic;
	class rhsusf_iotv_ocp_Repair;
	class rhsusf_iotv_ocp_Rifleman;
	class rhsusf_iotv_ocp_Saw;
	class rhsusf_iotv_ocp_SquadLeader;
	class rhsusf_iotv_ocp_TeamLeader;
	class rhsusf_spc;
	
	

	class LOP_RACS_Vest_Base : rhsusf_iotv_ocp_base {
		_generalMacro = "LOP_RACS_Vest_Base";
		author = "Esper";
		
		scope = 2;
		displayName = "IOTV RASC";
		picture = "\rhsusf\addons\rhsusf_infantry\gear\vests\ui\iotv_ca.paa";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv";
		
		hiddenSelections[] = {"camo", "camob","camo1","camo2"};
	    hiddenSelectionsTextures[] =
	    {
		"lop_faction_racs\data\rhs_iotv_ocp_01_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv1_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv2_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv3_co.paa"
	    };
	};	
	class LOP_RACS_Vest_Grenadier : rhsusf_iotv_ocp_Grenadier {
		_generalMacro = "LOP_RACS_Vest_Grenadier";
		author = "Esper";
		
		scope = 2;
		displayName = "IOTV RACS (Grenadier)";
		
        hiddenSelections[] = {"camo", "camob","camo1","camo2"};
	    hiddenSelectionsTextures[] =
	    {
		"lop_faction_racs\data\rhs_iotv_ocp_01_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv1_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv2_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv3_co.paa"
	    };
	};
	class LOP_RACS_Vest_Medic : rhsusf_iotv_ocp_Medic {
		_generalMacro = "LOP_RACS_Vest_Medic";
		author = "Esper";
		
		scope = 2;
		displayName = "IOTV RACS (Medic)";
		
        hiddenSelections[] = {"camo", "camob","camo1","camo2"};
	    hiddenSelectionsTextures[] =
	    {
		"lop_faction_racs\data\rhs_iotv_ocp_01_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv1_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv2_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv3_co.paa"
	    };
	};
	class LOP_RACS_Vest_Repair : rhsusf_iotv_ocp_Repair {
		_generalMacro = "LOP_RACS_Vest_Repair";
		author = "Esper";
		
		scope = 2;
		displayName = "IOTV RACS (Repair)";
		
        hiddenSelections[] = {"camo", "camob","camo1","camo2"};
	    hiddenSelectionsTextures[] =
	    {
		"lop_faction_racs\data\rhs_iotv_ocp_01_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv1_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv2_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv3_co.paa"
	    };
	};
	class LOP_RACS_Vest_Rifleman : rhsusf_iotv_ocp_Rifleman {
		_generalMacro = "LOP_RACS_Vest_Rifleman";
		author = "Esper";
		
		scope = 2;
		displayName = "IOTV RACS (Rifleman)";
		
        hiddenSelections[] = {"camo", "camob","camo1","camo2"};
	    hiddenSelectionsTextures[] =
	    {
		"lop_faction_racs\data\rhs_iotv_ocp_01_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv1_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv2_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv3_co.paa"
	    };
	};
	class LOP_RACS_Vest_Saw : rhsusf_iotv_ocp_Saw {
		_generalMacro = "LOP_RACS_Vest_Saw";
		author = "Esper";
		
		scope = 2;
		displayName = "IOTV RACS (SAW)";
		
        hiddenSelections[] = {"camo", "camob","camo1","camo2"};
	    hiddenSelectionsTextures[] =
	    {
		"lop_faction_racs\data\rhs_iotv_ocp_01_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv1_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv2_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv3_co.paa"
	    };
	};
	class LOP_RACS_Vest_SquadLeader : rhsusf_iotv_ocp_SquadLeader {
		_generalMacro = "LOP_RACS_Vest_SquadLeader";
		author = "Esper";
		
		scope = 2;
		displayName = "IOTV RACS (Squad Leader)";
		
        hiddenSelections[] = {"camo", "camob","camo1","camo2"};
	    hiddenSelectionsTextures[] =
	    {
		"lop_faction_racs\data\rhs_iotv_ocp_01_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv1_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv2_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv3_co.paa"
	    };
	};
	class LOP_RACS_Vest_TeamLeader : rhsusf_iotv_ocp_TeamLeader {
		_generalMacro = "LOP_RACS_Vest_TeamLeader";
		author = "Esper";
		
		scope = 2;
		displayName = "IOTV RACS (Team Leader)";
		
        hiddenSelections[] = {"camo", "camob","camo1","camo2"};
	    hiddenSelectionsTextures[] =
	    {
		"lop_faction_racs\data\rhs_iotv_ocp_01_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv1_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv2_co.paa",
		"lop_faction_racs\data\rhs_vest_iotv3_co.paa"
	    };
	};