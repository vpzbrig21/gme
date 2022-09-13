class CfgVehicles {
	class gm_marder1a0_base;
	class gm_marder1a1_base: gm_marder1a0_base {
		class Turrets;
	};
	class gm_marder1a2_base: gm_marder1a1_base {
		class Turrets: Turrets {
			class MainTurret;
			class SquadLeaderTurret;
			class CargoTurret_01;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
		};
	};
	class gm_ge_army_marder1a2_base: gm_marder1a2_base {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets;
			};
			class SquadLeaderTurret: SquadLeaderTurret {};
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_03: CargoTurret_03 {};
			class CargoTurret_04: CargoTurret_04 {};
			class CargoTurret_05: CargoTurret_05 {};
		};
	};
	class gme_ge_army_marder1a2_base: gm_ge_army_marder1a2_base {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets: Turrets {
					class CommanderTurret;
					class MilanTurret_01;
				};
			};
			class SquadLeaderTurret: SquadLeaderTurret {};
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_03: CargoTurret_03 {};
			class CargoTurret_04: CargoTurret_04 {};
			class CargoTurret_05: CargoTurret_05 {};
		};
	};
	class gme_ge_army_marder1a2_pb21_base: gme_ge_army_marder1a2_base {
		maximumLoad = 18000;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"gme_400Rnd_20x139mm_hei_t_dm81","gme_400Rnd_20x139mm_hei_t_dm81","gme_100Rnd_20x139mm_apds_t_dm63","gme_100Rnd_20x139mm_apds_t_dm63","gme_100Rnd_20x139mm_apds_t_dm63","gme_100Rnd_20x139mm_apds_t_dm63","gm_500Rnd_762x51mm_b_t_DM21_mg3","gm_500Rnd_762x51mm_b_t_DM21_mg3","gm_500Rnd_762x51mm_b_t_DM21_mg3","gm_500Rnd_762x51mm_b_t_DM21_mg3"};
				discreteDistanceInitIndex = 7;
				class Turrets: Turrets {
					class CommanderTurret: CommanderTurret {};
					class MilanTurret_01: MilanTurret_01 {};
				};
			};
			class SquadLeaderTurret: SquadLeaderTurret {};
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_03: CargoTurret_03 {};
			class CargoTurret_04: CargoTurret_04 {};
			class CargoTurret_05: CargoTurret_05 {};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
		gm_InsigniasDefaultUnit = "gme_units_ge_pzgrenbtl212_col";
		gm_TacticalSignsDefaultPostIcon = "212";
		gm_TacticalSignsDefaultPreIcon = "2";
		#include "CfgACRE_SEM90_base.inc"
	};
	class gme_ge_army_marder1a2_pb21: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - PzBrig21";
		scope = 2;
        scopeCurator = 2;
	};
	class gme_ge_army_marder1a2_pb21_c: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - III/2./212 C";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-284225";
		gm_TacticalNumbersDefaultNumber = "230";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_C_yel";
	};
	class gme_ge_army_marder1a2_pb21_c1: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - III/2./212 C1";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-268319";
		gm_TacticalNumbersDefaultNumber = "231";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_C1_yel";
	};
	class gme_ge_army_marder1a2_pb21_c2: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - III/2./212 C2";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-283378";
		gm_TacticalNumbersDefaultNumber = "232";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_C2_yel";
	};
	class gme_ge_army_marder1a2_pb21_c3: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - III/2./212 C3";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-274127";
		gm_TacticalNumbersDefaultNumber = "233";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_C3_yel";
	};
};