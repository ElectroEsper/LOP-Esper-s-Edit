class CfgGroups
{
	class Indep
	{
		class LOP_RACS
		{
			name = "RACS";
			class Infantry
			{
				name = "Infantry";
                class LOP_RACS_infantry_chq
				{
					name = "Company HQ";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class LOP_RACS_Infantry_squad
				{
					name = "Squad";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_GL";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Corpsman";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class LOP_RACS_Infantry_squad_2mg
				{
					name = "Squad (2x GPMG)";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_RACS_Infantry_squad_sniper
				{
					name = "Squad (Marksman)";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Corpsman";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_RACS_Infantry_squad_mg_sniper
				{
					name = "Squad (GPMG + Marksman)";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_RACS_Infantry_section_mg
				{
					name = "Section MG";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_GL";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_RACS_Infantry_section_marksman
				{
					name = "Section Marksman";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_GL";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_RACS_Infantry_section_AT
				{
					name = "Section AT";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_HAT";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_HAT";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_RACS_Infantry_section_AA
				{
					name = "Section AA";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AA";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AA";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AA";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AA_Asst";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_RACS_Infantry_fireteam
				{
					name = "Fireteam";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				class LOP_RACS_Infantry_MANEUVER
				{
					name = "Maneuver team";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};			
			class Motorized
			{
			    name = "Motorized Infantry";
				class LOP_RACS_infantry_chq
				{
					name = "Company HQ";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Landrover";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class LOP_RACS_Infantry_section_mg
				{
					name = "Section MG";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_GL";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Landrover";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_RACS_Infantry_section_marksman
				{
					name = "Section Marksman";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Landrover";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_GL";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_RACS_Infantry_section_AT
				{
					name = "Section AT";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_HAT";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_HAT";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Landrover";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_RACS_Infantry_section_AA
				{
					name = "Section AA";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AA";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AA";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AA_Asst";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Landrover";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_RACS_Infantry_fireteam
				{
					name = "Fireteam";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Landrover";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_RACS_Infantry_MANEUVER
				{
					name = "Maneuver team";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Landrover";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class LOP_RACS_Infantry_MANEUVER_M2
				{
					name = "Maneuver team (M2)";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Landrover_M2";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
				};

			};
			class Mechanized
			{
			    name = "Mechanized Infantry";
				class LOP_RACS_infantry_chq_m113
				{
					name = "(M113) Company HQ";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_M113";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class LOP_RACS_Infantry_squad_m113
				{
					name = "(M113) Squad";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_GL";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_M113";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Corpsman";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class LOP_RACS_Infantry_squad_2mg_m113
				{
					name = "(M113) Squad (2x GPMG)";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_M113";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_RACS_Infantry_squad_sniper_m113
				{
					name = "(M113) Squad (Marksman)";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_M113";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Corpsman";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_RACS_Infantry_squad_mg_sniper_m113
				{
					name = "(M113) Squad (GPMG + Marksman)";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_TL";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_M113";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_Marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_MG_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class LOP_RACS_Infantry_section_AA_m113
				{
					name = "(M113) Section AA";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AA";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AA";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AA";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_M113";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
					    side = 2;
						vehicle = "LOP_RACS_Infantry_AA_Asst";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class LOP_RACS_Infantry_section_AT_m113
				{
					name = "(M113) Section AT";
					faction = "LOP_RACS";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_SL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_HAT";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_HAT";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_Infantry_AT_Asst";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "LOP_RACS_M113";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
			};
			class Armored
			{
				name = "Armored";
				class LOP_RACS_T72_Platoon
				{
					name = "Leopard Platoon";
					faction = "LOP_RACS";
					side = 2;
					aliveCategory = "Armored";
					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_LEO";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_LEO";
						rank = "SERGEANT";
						position[] = {40,-30,3};
					};
				};
                class LOP_RACS_T72_Section
				{
					name = "Leopard Section";
					faction = "LOP_RACS";
					side = 2;
					aliveCategory = "Armored";
					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_LEO";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};					
				class LOP_RACS_M109A6_Platoon
				{
					name = "M109a6 Platoon";
					faction = "LOP_RACS";
					side = 2;
					aliveCategory = "Armored";
					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_M109A6";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_M109A6";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 2;
						vehicle = "LOP_RACS_M109A6";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit3
					{
						side = 2;
						vehicle = "LOP_RACS_M109A6";
						rank = "SERGEANT";
						position[] = {40,-30,3};
					};
				};
				class LOP_RACS_M109A6_Section
				{	
					Name = "M109a6 Section";
					faction = "LOP_RACS";
					side = 2;
					aliveCategory = "Armored";
					class Unit0
					{
						side = 2;
						vehicle = "LOP_RACS_M109A6";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "LOP_RACS_M109A6";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				
				};
			};
		};
	};
};