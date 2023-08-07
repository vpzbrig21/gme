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

	// Alfa Zug
	class gme_ge_army_marder1a2_pb21_a: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - I/2./212 A";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-205450";
		gm_TacticalNumbersDefaultNumber = "210";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_A_yel";
	};
	class gme_ge_army_marder1a2_pb21_a1: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - I/2./212 A1";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-219938";
		gm_TacticalNumbersDefaultNumber = "211";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_A1_yel";
	};
	class gme_ge_army_marder1a2_pb21_a2: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - I/2./212 A2";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-222592";
		gm_TacticalNumbersDefaultNumber = "212";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_A2_yel";
	};
	class gme_ge_army_marder1a2_pb21_a3: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - I/2./212 A3";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-227205";
		gm_TacticalNumbersDefaultNumber = "213";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_A3_yel";
	};

	// Bravo Zug
	class gme_ge_army_marder1a2_pb21_b: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - II/2./212 B";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-268725";
		gm_TacticalNumbersDefaultNumber = "220";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_B_yel";
	};
	class gme_ge_army_marder1a2_pb21_b1: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - II/2./212 B1";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-273472";
		gm_TacticalNumbersDefaultNumber = "221";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_B1_yel";
	};
	class gme_ge_army_marder1a2_pb21_b2: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - II/2./212 B2";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-210108";
		gm_TacticalNumbersDefaultNumber = "222";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_B2_yel";
	};
	class gme_ge_army_marder1a2_pb21_b3: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - II/2./212 B3";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-243220";
		gm_TacticalNumbersDefaultNumber = "223";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_B3_yel";
	};

	// Charlie Zug
	class gme_ge_army_marder1a2_pb21_c: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - III/2./212 C";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-247174";
		gm_TacticalNumbersDefaultNumber = "230";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_C_yel";
	};
	class gme_ge_army_marder1a2_pb21_c1: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - III/2./212 C1";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-268582";
		gm_TacticalNumbersDefaultNumber = "231";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_C1_yel";
	};
	class gme_ge_army_marder1a2_pb21_c2: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - III/2./212 C2";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-285399";
		gm_TacticalNumbersDefaultNumber = "232";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_C2_yel";
	};
	class gme_ge_army_marder1a2_pb21_c3: gme_ge_army_marder1a2_pb21_base {
		displayName = "SPz Marder 1A2 - III/2./212 C3";
		scope = 2;
        scopeCurator = 2;
		gm_LicensePlateDefaultDigits = "Y-286880";
		gm_TacticalNumbersDefaultNumber = "233";
		gm_InsigniasDefaultFormation = "gm_insignia_formation_C3_yel";
	};
};