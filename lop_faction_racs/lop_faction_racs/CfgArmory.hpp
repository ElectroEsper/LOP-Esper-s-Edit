	class LinkedItems;	// External class reference
	class LinkedItemsOptics;
	class LinkedItemsMuzzle;
	class LinkedItemsAcc;
	class rhs_weap_m240B;
	class rhs_weap_sr25;
	
	class RACS_M240 : rhs_weap_m240B {
		_generalMacro = "RACS_M240";
		author = "Esper";
		
		scope = 2;
		displayName = "M240 RACS";
		class LinkedItems
		{
		 class LinkedItemsOptics
		 {
		 slot = "CowsSlot";
         item = "rhsusf_acc_ELCAN";
		 }; 
		};
		
	};
    class RACS_SR25 : rhs_weap_sr25 {
		_generalMacro = "RACS_SR25";
		author = "Esper";
		
		scope = 2;
		displayName = "SR-25 RACS";
		class LinkedItems
		{
		 class LinkedItemsOptics
		 {
		 slot = "CowsSlot";
         item = "optic_LRPS";
		 }; 
		};
		
	};		
	