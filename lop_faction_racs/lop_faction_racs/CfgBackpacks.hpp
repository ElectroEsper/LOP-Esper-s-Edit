	class B_Kitbag_rgr;
	class rhsusf_falconii;
	class rhs_rpg_empty;
	class B_FieldPack_khk;
	class LOP_AA_Kitbag_Med : B_Kitbag_rgr {
		_generalMacro = "LOP_AA_Kitbag_Med";
		author = $STR_LOP_FULL_NAME;
		
		scope = 1;
		class TransportItems {
			class _xx_FirstAidKit {
				count = 15;
				name = "FirstAidKit";
			};
			
			class _xx_Medikit {
				count = 1;
				name = "Medikit";
			};
		};
	};	
	class LOP_AA_FalconII_SVD : rhsusf_falconii {
		_generalMacro = "LOP_AA_FalconII_SVD";
		author = $STR_LOP_FULL_NAME;
		
		scope = 1;
		class TransportMagazines {
			class _xx_rhs_10Rnd_762x54mmR_7N1 {
				count = 5;
				magazine = "rhs_10Rnd_762x54mmR_7N1";
			};
			
			class _xx_rhs_mag_rgd5 {
				count = 2;
				magazine = "HandGrenade";
			};
			
			class _xx_rhs_mag_rdg2_white {
				count = 1;
				magazine = "rhs_mag_rdg2_white";
			};
		};
	};	
	class LOP_AA_RPG_Pack : rhs_rpg_empty {
		_generalMacro = "LOP_AA_RPG_Pack";
		author = $STR_LOP_FULL_NAME;
		
		scope = 1;
		class TransportMagazines {
			class _xx_rhs_rpg7_PG7VR_mag {
				count = 2;
				magazine = "rhs_rpg7_PG7VR_mag";
			};			
			class _xx_rhs_rpg7_PG7VL_mag {
				count = 1;
				magazine = "rhs_rpg7_PG7VL_mag";
			};
		};
	};	
	class LOP_AA_Fieldpack_PKM : B_FieldPack_khk {
		_generalMacro = "LOP_AA_Fieldpack_PKM";
		author = $STR_LOP_FULL_NAME;
		
		scope = 1;
		class TransportMagazines {
			class _xx_rhs_100Rnd_762x54mmR {
				count = 4;
				magazine = "rhs_100Rnd_762x54mmR";
			};
		};
	};