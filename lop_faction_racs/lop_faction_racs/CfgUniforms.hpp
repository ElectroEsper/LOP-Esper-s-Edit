	class ItemCore;	// External class reference
	class UniformItem;	// External class reference
	
	class Uniform_Base : ItemCore {
		class ItemInfo;	// External class reference
	};
	class LOP_U_RACS_Fatigue_01 : Uniform_Base {
		_generalMacro = "LOP_U_RACS_Fatigue_01";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "RACS fatigue 01";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "LOP_RACS_Infantry_TL";
			containerClass = "Supply40";
			mass = 40;
		};
	};	
	class LOP_U_RACS_Fatigue_01_slv : Uniform_Base {
		_generalMacro = "LOP_U_RACS_Fatigue_01_slv";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "RACS fatigue 01 slv";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "LOP_RACS_Infantry_SL";
			containerClass = "Supply40";
			mass = 40;
		};
	};