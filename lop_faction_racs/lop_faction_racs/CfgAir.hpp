	class B_Heli_Light_01_F;
	class B_Heli_Light_01_armed_F;
	class RHS_UH60M;
	class LOP_RACS_MH9 : B_Heli_Light_01_F {
		author = $STR_LOP_FULL_NAME;
		_generalMacro = "LOP_RACS_MH9";
		scope = 2;
		accuracy = 1;
		side = 2;
		faction = LOP_RACS;
		crew = "LOP_RACS_Infantry_Pilot";
		vehicleClass = "LOP_Aircraft";
		hiddenSelectionsTextures[] = {"lop_faction_racs\Data\heli_light_01_ext_racs_co.paa"};
	};	
	class LOP_RACS_MH9_armed : B_Heli_Light_01_armed_F {
		author = $STR_LOP_FULL_NAME;
		_generalMacro = "LOP_RACS_MH9_armed";
		scope = 2;
		accuracy = 1;
		side = 2;
		faction = LOP_RACS;
		crew = "LOP_RACS_Infantry_Pilot";
		vehicleClass = "LOP_Aircraft";
		hiddenSelectionsTextures[] = {"lop_faction_racs\Data\Heli_Light_01_ext_racs_CO.paa"};
	};
	class LOP_RACS_UH60M : RHS_UH60M {
		_generalMacro = "LOP_RACS_M113_D";
		scope = 2;
		author = $STR_LOP_FULL_NAME;
		side = 2;
		faction = "LOP_RACS";
		crew = "LOP_RACS_Infantry_Pilot";
		typicalCargo[] = {"LOP_RACS_Infantry_Pilot"};
		vehicleClass = "LOP_Aircraft";
		
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"lop_faction_racs\data\uh60m_fuselage_racs_co.paa",
			"lop_faction_racs\data\uh60m_engine_racs_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa"
		};
	};	