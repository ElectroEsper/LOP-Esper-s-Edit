	class rhsusf_m1025_w_m2;
	class rhsusf_m1025_d_mk19;
	class rhsusf_m1025_d;
	class rhsusf_m998_d_4dr;
	class B_G_Offroad_01_armed_F;
	class B_G_Offroad_01_F;
	class B_G_Van_01_transport_F;
	
	class LandVehicle;	// External class reference
	class Car : LandVehicle {
		class NewTurret;	// External class reference
	};
	
	class Car_F : Car {
		class AnimationSources;	// External class reference
		
		class Turrets {
			class MainTurret : NewTurret {
				class ViewOptics;	// External class reference
			};
		};
		
		class HitPoints {
			class HitLFWheel;	// External class reference
			class HitLF2Wheel;	// External class reference
			class HitRFWheel;	// External class reference
			class HitRF2Wheel;	// External class reference
			class HitGlass1;	// External class reference
			class HitGlass2;	// External class reference
			class HitGlass3;	// External class reference
			class HitGlass4;	// External class reference
			class HitGlass5;	// External class reference
			class HitGlass6;	// External class reference
		};
	};
	
	class LOP_RACS_Truck : B_G_Van_01_transport_F {
		author = $STR_LOP_FULL_NAME;
		_generalMacro = "LOP_RACS_Offroad_M2";
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Wheeled";
		
		displayName = "Truck (cargo)";
		crew = "LOP_RACS_Infantry_Rifleman";
		typicalCargo[] = {"LOP_RACS_Infantry_Rifleman"};

		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
	};	
	class LOP_RACS_Offroad : B_G_Offroad_01_F {
		author = $STR_LOP_FULL_NAME;
		_generalMacro = "LOP_RACS_Offroad";
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Wheeled";
		
		displayName = "Technical";
		crew = "LOP_RACS_Infantry_Rifleman";
		typicalCargo[] = {"LOP_RACS_Infantry_Rifleman"};

		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
	};				
	class LOP_RACS_Offroad_M2 : B_G_Offroad_01_armed_F {
		author = $STR_LOP_FULL_NAME;
		_generalMacro = "LOP_RACS_Offroad_M2";
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Wheeled";
		
		displayName = "Technical .50cal";
		crew = "LOP_RACS_Infantry_Rifleman";
		typicalCargo[] = {"LOP_RACS_Infantry_Rifleman"};

		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
	};		
	class LOP_LandRover_base : Car_F {
		author = $STR_LOP_FULL_NAME;
		_generalMacro = "LOP_LandRover_base";
		
		scope = 0;
		side = 2;
		faction = "LOP_RACS";
		displayname = "Land Rover";
		
		class Library {
			libTextDesc = "Land Rover";
		};
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_racs\data\lr_base_baf_co", "lop_faction_racs\data\lr_special_baf_co"};
		model = "lop_faction_racs\lr_covered.p3d";
		crew = "LOP_RACS_Infantry_Rifleman";
		typicalCargo[] = {"LOP_RACS_Infantry_Rifleman", "LOP_RACS_Infantry_Rifleman", "LOP_RACS_Infantry_Rifleman", "LOP_RACS_Infantry_Rifleman", "LOP_RACS_Infantry_Rifleman", "LOP_RACS_Infantry_Rifleman", "LOP_RACS_Infantry_Rifleman"};
		picture = "\lop_faction_racs\data\ui\Picture_lr_CA.paa";
		Icon = "\lop_faction_racs\data\ui\Icon_lr_transport_CA.paa";
		mapSize = 4;
		accuracy = 0.25;
		driverAction = "Driver_High01";
		threat[] = {0.5, 0.5, 0.1};
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		antiRollbarForceCoef = 12;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;
		crewVulnerable = 1;
		crewCrashProtection = 0.15;
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		armor = 50;
		damageResistance = 0.00562;
		turnCoef = 2.5;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		brakeDistance = 1;
		terrainCoef = 1.5;
		wheelDamageThreshold = 0.7;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.95;
		wheelDestroyRadiusCoef = 0.45;
		wheelCircumference = 2.51;
		cost = 200000;
		precision = 15;
		armorGlass = 0.5;
		soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
		soundEnviron[] = {"", 0.562341, 1};
		transportMaxBackpacks = 5;
		transportSoldier = 7;
		cargoProxcargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7};
		cargoIsCoDriver[] = {1, 0};
		cargoCompartments[] = {"Compartment1", "Compartment2"};
		cargoAction[] = {"passenger_generic01_foldhands", "passenger_apc_narrow_generic01", "passenger_apc_narrow_generic02", "passenger_apc_narrow_generic01", "passenger_apc_narrow_generic03"};
		transportAmmo = 0;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4"};
		maxSpeed = 150;
		armorWheels = 0.12;
		soundGear[] = {"", 0.000562341, 1};
		idleRpm = 800;
		redRpm = 4500;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 60;
		
		class complexGearbox {
			GearboxRatios[] = {"R1", -2.475, "N", 0, "D1", 2.367, "D2", 1.67, "D3", 1.238, "D4", 0.99, "D5", 0.802, "D6", 0.601};
			TransmissionRatios[] = {"High", 6};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 3;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20;
		enginePower = 100;
		maxOmega = 471;
		peakTorque = 300;
		dampingRateFullThrottle = 0.2;
		dampingRateZeroThrottleClutchEngaged = 2;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0, 0.15}, {0.25, 0.65}, {0.35, 0.75}, {0.461, 1}, {0.6, 0.95}, {0.7, 0.85}, {0.8, 0.75}, {1, 0.5}};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95};
		switchTime = 0.31;
		latency = 1;
		class CargoTurret;	// External class reference
		class Turrets : Turrets {
			class CargoTurret_01 : CargoTurret {
				gunnerAction = "passenger_inside_1";
				gunnerName = $STR_A3_TURRETS_CARGOTURRET_L;
				gunnerCompartments = "Compartment2";
				proxyIndex = 6;
				maxElev = 10;
				minElev = -30;
				maxTurn = -20;
				minTurn = -105;
				isPersonTurret = 1;
			};
			
			class CargoTurret_02 : CargoTurret_01 {
				gunnerName = $STR_A3_TURRETS_CARGOTURRET_R;
				proxyIndex = 7;
				maxTurn = 95;
				minTurn = 20;
			};
		};
		
		class Wheels {
			class LF {
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = 0.126;
				mass = 25;
				MOI = 12.8;
				dampingRate = 1;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.05;
				mMaxDroop = 0.1;
				sprungMass = 650;
				springStrength = 56000;
				springDamperRate = 12000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
			};
			
			class LR : LF {
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				springStrength = 74000;
				sprungMass = 650;
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3500;
			};
			
			class RF : LF {
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			
			class RR : LR {
				boneName = "wheel_2_2_damper";
				side = "right";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
		};
		
		class HitPoints : HitPoints {
			class HitEngine {
				armor = 2;
				material = -1;
				name = "motor";
				passThrough = 0;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0;
			};
			
			class HitLFWheel : HitLFWheel {
				armor = 0.5;
			};
			
			class HitLBWheel : HitLF2Wheel {
				armor = 0.5;
			};
			
			class HitRFWheel : HitRFWheel {
				armor = 0.5;
			};
			
			class HitRBWheel : HitRF2Wheel {
				armor = 0.5;
			};
		};
		
		class Reflectors {
			class Left {
				color[] = {1900, 1300, 950};
				ambient[] = {5, 5, 5};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				
				class Attenuation {
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			
			class Right : Left {
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			
			class Right2 : Right {
				useFlare = 1;
				position = "P svetlo";
			};
			
			class Left2 : Left {
				useFlare = 1;
				position = "L svetlo";
			};
		};
		attenuationEffectType = "OpenCarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01-int-openclose", 0.446684, 1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01-int-openclose", 0.446684, 1, 40};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_start", 0.316228, 1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_start", 0.398107, 1, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_stop", 0.316228, 1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_stop", 0.398107, 1, 200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01", 1, 1, 150};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02", 1, 1, 150};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03", 1, 1, 150};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04", 1, 1, 150};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01", 1, 1, 100};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02", 1, 1, 100};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03", 1, 1, 100};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04", 1, 1, 100};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05", 1, 1, 100};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06", 1, 1, 100};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01", 1, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02", 1, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03", 1, 1, 200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04", 1, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		
		class Sounds {
			class Idle_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_idle", 0.316228, 1, 100};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			
			class Engine {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm1", 0.316228, 1, 200};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			
			class Engine1_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm2", 0.354813, 1, 225};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			
			class Engine2_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm3", 0.354813, 1, 250};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			
			class Engine3_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm4", 0.398107, 1, 275};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			
			class Engine4_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm5", 0.446684, 1, 300};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			
			class Engine5_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm6", 0.501187, 1, 300};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			
			class Engine6_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm7", 0.562341, 1, 300};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*camPos*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			
			class IdleThrust {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_idle", 0.501187, 1, 200};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			
			class EngineThrust {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm1", 0.562341, 1, 250};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			
			class Engine1_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm2", 0.630957, 1, 275};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			
			class Engine2_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm3", 0.707946, 1, 300};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			
			class Engine3_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm4", 0.794328, 1, 325};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			
			class Engine4_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm5", 0.891251, 1, 350};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			
			class Engine5_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm6", 1, 1, 375};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			
			class Engine6_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm7", 1.12202, 1, 400};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			
			class Idle_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_idle", 0.223872, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			
			class Engine_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm1", 0.251189, 1};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			
			class Engine1_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm2", 0.177828, 1};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			
			class Engine2_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm3", 0.316228, 1};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			
			class Engine3_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm4", 0.354813, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			
			class Engine4_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm5", 0.398107, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			
			class Engine5_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm6", 0.398107, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			
			class Engine6_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm7", 0.446684, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			
			class IdleThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_idle", 0.316228, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			
			class EngineThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm1", 0.354813, 1};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			
			class Engine1_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm2", 0.398107, 1};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			
			class Engine2_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm3", 0.446684, 1};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			
			class Engine3_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm4", 0.501187, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			
			class Engine4_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm5", 0.562341, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			
			class Engine5_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm6", 0.630957, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			
			class Engine6_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm7", 0.707946, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			
			class TiresRockOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", 0.707946, 1, 60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			
			class TiresSandOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", 0.707946, 1, 60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", 0.707946, 1, 60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			
			class TiresMudOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", 0.707946, 1, 60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", 0.707946, 1, 60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", 0.707946, 1, 60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", 0.562341, 1, 90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			
			class TiresRockIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", 0.707946, 1};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			
			class TiresSandIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", 0.707946, 1};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", 0.707946, 1};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			
			class TiresMudIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", 0.707946, 1};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", 0.707946, 1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", 0.707946, 1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 0.158489, 1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			
			class breaking_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", 0.707946, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			
			class acceleration_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.707946, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			
			class turn_left_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.707946, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			
			class turn_right_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.707946, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			
			class breaking_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking", 0.707946, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			
			class acceleration_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration", 0.707946, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			
			class turn_left_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", 0.707946, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			
			class turn_right_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", 0.707946, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			
			class breaking_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 0.316228, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			
			class acceleration_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.316228, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			
			class turn_left_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.316228, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			
			class turn_right_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.316228, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			
			class breaking_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", 0.316228, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			
			class acceleration_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int", 0.316228, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			
			class turn_left_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", 0.316228, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			
			class turn_right_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", 0.316228, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
		};
		
		class Exhausts {
			class Exhaust {
				effect = "ExhaustEffectOffroad";
				position = "exhaust_pos";
				direction = "exhaust_dir";
			};
		};
		
		class Damage {
			tex[] = {};
			mat[] = {"lop_faction_racs\data\LR_base_baf.rvmat", "lop_faction_racs\data\LR_base_baf_damage.rvmat", "lop_faction_racs\data\LR_base_baf_destruct.rvmat", "lop_faction_racs\data\LR_glass_baf.rvmat", "lop_faction_racs\data\LR_glass_baf_damage.rvmat", "lop_faction_racs\data\LR_glass_baf_destruct.rvmat", "lop_faction_racs\data\LR_Special_baf.rvmat", "lop_faction_racs\data\LR_Special_baf_damage.rvmat", "lop_faction_racs\data\LR_Special_baf_destruct.rvmat"};
		};
		
		class RenderTargets {
			class LeftMirror {
				renderTarget = "rendertarget0";
				
				class CameraView1 {
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			
			class RightMirror {
				renderTarget = "rendertarget1";
				
				class CameraView1 {
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			
			class FrontCam {
				renderTarget = "rendertarget2";
				
				class CameraView1 {
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		supplyRadius = 5;
		transportMaxMagazines = 90;
		
		class AnimationSources : AnimationSources {
			class Left_Door {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class Right_Door : Left_Door {};
			
			class Rear_Door : Left_Door {
				animPeriod = 4;
			};
			
			class Hide_Tent : Left_Door {
				animPeriod = 0.01;
			};
		};
		
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		};
	};
	class LOP_LandRover_base_02 : LOP_LandRover_base {
		transportSoldier = 5;
		cargoProxyIndexes[] = {1, 2, 3, 4, 5};
		class CargoTurret;	// External class reference
		
		class Turrets {
			class CargoTurret_01 : CargoTurret {
				gunnerAction = "passenger_inside_1";
				gunnerName = $STR_A3_TURRETS_CARGOTURRET_L;
				gunnerCompartments = "Compartment2";
				proxyIndex = 6;
				maxElev = 10;
				minElev = -30;
				maxTurn = -20;
				minTurn = -105;
				isPersonTurret = 1;
			};
			
			class CargoTurret_02 : CargoTurret_01 {
				gunnerName = $STR_A3_TURRETS_CARGOTURRET_R;
				proxyIndex = 7;
				maxTurn = 95;
				minTurn = 20;
			};
		};
	};
	class LOP_LandRover_mg_base : LOP_LandRover_base {
		model = "lop_faction_racs\lr_mg";
		displayname = "Land Rover .50cal";
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"lop_faction_racs\data\lr_base_baf_co", "lop_faction_racs\data\lr_special_baf_co", "lop_faction_racs\data\lr_mg-spg9_ind_co"};
		Picture = "lop_faction_racs\data\ui\Picture_lr_mg_CA.paa";
		Icon = "lop_faction_racs\data\ui\Icon_lr_mg_CA.paa";
		transportSoldier = 1;
		cargoAction[] = {"passenger_generic01_foldhands"};
		threat[] = {1, 0.1, 0.3};
		fuelCapacity = 70;
		
		class Damage {
			tex[] = {};
			mat[] = {"lop_faction_racs\data\LR_base_baf.rvmat", "lop_faction_racs\data\LR_base_baf_damage.rvmat", "lop_faction_racs\data\LR_base_baf_destruct.rvmat", "lop_faction_racs\data\LR_glass_baf.rvmat", "lop_faction_racs\data\LR_glass_baf_damage.rvmat", "lop_faction_racs\data\LR_glass_baf_destruct.rvmat", "lop_faction_racs\data\LR_Special_baf.rvmat", "lop_faction_racs\data\LR_Special_baf_damage.rvmat", "lop_faction_racs\data\LR_Special_baf_destruct.rvmat", "lop_faction_racs\data\LR_MG-SPG9.rvmat", "lop_faction_racs\data\LR_MG-SPG9_damage.rvmat", "lop_faction_racs\data\LR_MG-SPG9_destruct.rvmat", "a3\data_f\default.rvmat", "a3\data_f\default.rvmat", "a3\data_f\default_destruct.rvmat"};
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				body = "mainTurret";
				gun = "mainGun";
				gunnerLeftHandAnimName = "handle_L";
				gunnerRightHandAnimName = "handle_R";
				hasGunner = 1;
				weapons[] = {HMG_M2};
				minElev = -15;
				maxElev = 45;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 800, 1000, 1200, 1500};
				discreteDistanceInitIndex = 2;
				magazines[] = {"100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red"};
				gunnerAction = "gunner_standup01";
				ejectDeadGunner = "true";
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				
				class ViewOptics : ViewOptics {
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				
				class ViewGunner : ViewOptics {};
			};
		};
		
		class AnimationSources : AnimationSources {
			class ReloadAnim {
				source = "reload";
				weapon = HMG_M2;
			};
			
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = HMG_M2;
			};
			
			class Revolving {
				source = "revolving";
				weapon = HMG_M2;
			};
			
			class Gun_Muzzle_ROT {
				source = "ammoRandom";
				weapon = HMG_M2;
			};
		};
		
		class Library {
			libTextDesc = "Land Rover M2HB HMG";
		};
	};
	
	class LOP_RACS_Landrover : LOP_LandRover_base_02 {
		_generalMacro = "LOP_RACS_Landrover";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		displayname = "Land Rover";
		crew = "LOP_RACS_Infantry_Rifleman";
		typicalCargo[] = {"LOP_RACS_Infantry_Rifleman"};
		hiddenSelectionsTextures[] = {"lop_faction_racs\data\lr_base_racs_co.paa", "lop_faction_racs\data\lr_special_baf_co.paa"};
		vehicleClass = "LOP_Wheeled";
		faction = "LOP_RACS";
	};	
	class LOP_RACS_Landrover_M2 : LOP_LandRover_mg_base {
		_generalMacro = "LOP_RACS_Landrover_M2";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		displayname = "Land Rover .50cal";
		crew = "LOP_RACS_Infantry_Rifleman";
		typicalCargo[] = {"LOP_RACS_Infantry_Rifleman"};
		hiddenSelectionsTextures[] = {"lop_faction_racs\data\lr_base_racs_co.paa", "lop_faction_racs\data\lr_special_baf_co.paa", "lop_faction_racs\data\lr_mg-spg9_baf_co.paa"};
		vehicleClass = "LOP_Wheeled";
		faction = "LOP_RACS";
	};