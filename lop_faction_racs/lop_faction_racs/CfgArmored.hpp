
	class rhs_a3t72tank_base;
	class rhs_t72ba_tv: rhs_a3t72tank_base{	class EventHandlers;};
	class rhsusf_m113tank_base;
	class rhsusf_m109tank_base;
	class I_MBT_03_base_F;
	class rhsusf_m113_usarmy: rhsusf_m113tank_base { class EventHandlers; };
	class rhsusf_m109d_usarmy: rhsusf_m109tank_base { class EventHandlers; };
	class I_MBT_03_cannon_F: I_MBT_03_base_F { class EventHandlers; };
	
	
	
	class LOP_RACS_T72BA : rhs_t72ba_tv {
		author = $STR_LOP_FULL_NAME;
		_generalMacro = "LOP_RACS_T72BA";
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Armored";
		
		crew = "LOP_RACS_Infantry_Crewman";
		typicalCargo[] = {"LOP_RACS_Infantry_Crewman"};

		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class EventHandlers : EventHandlers
		{
			init = "_this call SLX_XEH_EH_Init;";
		};
	};	
	class LOP_RACS_M113 : rhsusf_m113_usarmy {
		author = Esper;
		_generalMacro = "LOP_RACS_M113";
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Armored";
		
		displayName = "M113A3";
		crew = "LOP_RACS_Infantry_Crewman";
		typicalCargo[] = {"LOP_RACS_Infantry_Crewman"};
		hiddenSelectionsTextures[] = {"lop_faction_racs\Data\lop_racs_m113_co.paa"};

		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class EventHandlers : EventHandlers
		{
			init = "_this call SLX_XEH_EH_Init;";
		};
	};	
    class LOP_RACS_M109 : rhsusf_m109d_usarmy {
		author = $STR_LOP_FULL_NAME;
		_generalMacro = "LOP_RACS_M109";
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Armored";
		
		displayName = "M109A6";
		crew = "LOP_RACS_Infantry_Crewman";
		typicalCargo[] = {"LOP_RACS_Infantry_Crewman"};

		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class EventHandlers : EventHandlers
		{
			init = "_this call SLX_XEH_EH_Init;";
		};
	};
    class LOP_RACS_LEO : I_MBT_03_cannon_F {
		author = "Esper";
		_generalMacro = "LOP_RACS_LEO";
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Armored";
		hiddenSelectionsTextures[] = {"lop_faction_racs\Data\LOP_RACS_LEO.paa","lop_faction_racs\Data\LOP_RACS_LEO2.paa","lop_faction_racs\Data\LOP_RACS_LEO3.paa"};
		
		displayName = "Leopard 2A4";
		crew = "LOP_RACS_Infantry_Crewman";
		typicalCargo[] = {"LOP_RACS_Infantry_Crewman"};
		
		armor = 475;
		armorStructural = 220;

			
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class eventhandlers
		{
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\lop_faction_racs\scripts\lop_leopard_propergun.sqf""";
		};
	};	
	