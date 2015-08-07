#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class lop_faction_racs {
		units[] = {
			"LOP_RACS_Infantry_Officer",
			"LOP_RACS_Infantry_TL",
			"LOP_RACS_Infantry_SL",
			"LOP_RACS_Infantry_Corpsman",
			"LOP_RACS_Infantry_Rifleman",
			"LOP_RACS_Infantry_AT",
			"LOP_RACS_Infantry_HAT",
			"LOP_RACS_Infantry_HAT_Asst",
			"LOP_RACS_Infantry_AA",
			"LOP_RACS_Infantry_AA_Asst",
			"LOP_RACS_Infantry_MG_Asst",
			"LOP_RACS_Infantry_MG",
			"LOP_RACS_Infantry_Engineer",
			"LOP_RACS_Infantry_Marksman",
			"LOP_RACS_Infantry_GL",
			"LOP_RACS_Infantry_Crewman",
			"LOP_RACS_Infantry_Pilot",
			
			"LOP_RACS_Truck",
			"LOP_RACS_Offroad",
			"LOP_RACS_Offroad_M2",
			"LOP_RACS_Landrover",
			"LOP_RACS_Landrover_M2",
			
			"LOP_RACS_M113",
			"LOP_RACS_T72BA",
			"LOP_RACS_LEO",
			"LOP_RACS_M109",
			
			
			"LOP_RACS_Static_M2",
			"LOP_RACS_Static_M2_MiniTripod",
			"LOP_RACS_Static_Mk19_TriPod"
		};
		weapons[] = {
			"LOP_H_6B27M_RACS",
			"LOP_H_6B27M_ess_RACS",
			"LOP_H_Booniehat_RACS",
			"LOP_H_Beret_blue"
		};
		requiredVersion = 1.32;
		requiredAddons[] = {
			A3_Soft_F,
			A3_Characters_F,
			rhs_c_bmp,
			rhs_c_bmd,
			rhs_c_t72,
			rhs_c_troops,
			rhs_c_btr,
			rhs_c_weapons,
			rhs_c_a2port_air,
			rhs_c_a2port_car,
			rhs_c_a2port_armor,
			rhs_cti_insurgents,
			rhs_c_heavyweapons,
			rhsusf_c_troops,
			rhsusf_c_weapons,
			rhsusf_c_m1a1,
			rhsusf_c_m113,
			RHS_US_A2_AirImport,
			rhsusf_c_hmmwv
		};
		author[] = {"Leight"};
		authorUrl = "http://www.armacoopcorps.pl/";
	};
};

class WeaponCloudsMGun;	// External class reference

class cfgWeapons {
	#include "CfgUniforms.hpp"
	#include "CfgHeadgear.hpp"
};
class CfgVehicles {
	#include "CfgInfantry.hpp"
	#include "CfgBackpacks.hpp"
	#include "CfgWheeled.hpp"
	#include "CfgAir.hpp"
	#include "CfgArmored.hpp"
	#include "CfgStatic.hpp"
};
#include "CfgGroups.hpp"
