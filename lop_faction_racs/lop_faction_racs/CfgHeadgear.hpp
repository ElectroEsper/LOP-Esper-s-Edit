	class rhs_6b27m;
	class rhs_6b27m_digi_ess;
	class HeadgearItem;
	class LOP_H_6B27M_RACS : rhs_6b27m {
		_generalMacro = "LOP_H_6B27M_RACS";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6B27M RACS";
	
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"lop_faction_racs\data\6b27_racs_co.paa"};
	};	
	class LOP_H_6B27M_ess_RACS : rhs_6b27m_digi_ess {
		_generalMacro = "LOP_H_6B27M_ess_RACS";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6B27M RACS (ESS)";
	
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"lop_faction_racs\data\6b27_racs_co.paa"};
	};	
	class LOP_H_Booniehat_RACS : ItemCore {
		scope = 2;
		displayName = "Booniehat (RACS camo)";
		picture = "\A3\Characters_F\data\ui\icon_H_booniehat_mcamo_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\lop_faction_racs\data\booniehat_racs.paa"};
		author = $STR_LOP_FULL_NAME;
		
		class ItemInfo : HeadgearItem {
			mass = 2;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {6};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
	class LOP_H_Beret_blue: ItemCore {
		_generalMacro = "LOP_H_Beret_blue";
		author = "Esper";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (RACS)";
		picture = "\lop_main\data\ui\icon_h_lop_helmet_plain_ca.paa";
		model = "\lop_faction_chdkz\Ins_Beret";
		hiddenSelectionsTextures[] = {"\lop_faction_racs\data\headgear_beret_blue_co.paa"};
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