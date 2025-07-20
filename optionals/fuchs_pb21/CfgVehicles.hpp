class CfgVehicles {
	class gm_ge_army_fuchsa0_command_base;
	class gm_ge_army_fuchsa0_reconnaissance_base;
	class gm_ge_army_fuchsa0_engineer_base;
	class gm_ge_army_fuchsa0_medic_base;

	class gm_ge_army_fuchsa0_command_pb21_base: gm_ge_army_fuchsa0_command_base {
		maximumLoad = 18000;
		editorCategory = "gme_EdCat_PB21";
		gm_InsigniasDefaultUnit = "gme_units_ge_jgbtl1_col";
		gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_infantry";
		gm_TacticalSignsDefaultPostIcon = "1";
		gm_TacticalSignsDefaultPreIcon = "2";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class gm_ge_army_fuchsa0_command_pb21: gm_ge_army_fuchsa0_command_pb21_base {
		displayName = "TPz Fuchs A0 - HQ PzBrig21";
		scope = 2;
        scopeCurator = 2;
	};

	class gm_ge_army_fuchsa0_reconnaissance_pb21_base: gm_ge_army_fuchsa0_reconnaissance_base {
		maximumLoad = 18000;
		editorCategory = "gme_EdCat_PB21";
		gm_InsigniasDefaultUnit = "gme_units_ge_aufklbtl7_col";
		gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_recon";
		gm_TacticalSignsDefaultPostIcon = "7";
		gm_TacticalSignsDefaultPreIcon = "3";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class gm_ge_army_fuchsa0_reconnaissance_pb21: gm_ge_army_fuchsa0_reconnaissance_pb21_base {
		displayName = "TPz Fuchs A0 - Recce PzBrig21";
		scope = 2;
        scopeCurator = 2;
	};
	
	class gm_ge_army_fuchsa0_engineer_pb21_base: gm_ge_army_fuchsa0_engineer_base {
		maximumLoad = 18000;
		editorCategory = "gme_EdCat_PB21";
		gm_InsigniasDefaultUnit = "gme_units_ge_versbtl7_col";
		gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_supply";
		gm_TacticalSignsDefaultPostIcon = "7";
		gm_TacticalSignsDefaultPreIcon = "2";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class gm_ge_army_fuchsa0_engineer_pb21: gm_ge_army_fuchsa0_engineer_pb21_base {
		displayName = "TPz Fuchs A0 (VersBtl) - PzBrig21";
		scope = 2;
        scopeCurator = 2;
	};
	class gm_ge_army_fuchsa0_engineer_pb21_tardis: gm_ge_army_fuchsa0_engineer_pb21_base {
		attendant = 1;
		maximumLoad = 360000;
		displayName = "TPz Fuchs A0 (VersBtl Tardis)";
		scope = 2;
        scopeCurator = 2;
		ace_cargo_hasCargo = 1;
        ace_cargo_space = 256;
		ace_rearm_defaultSupply = 900000;
		ace_repair_canRepair = 1;
		ace_refuel_fuelCargo = 900000;
		ace_refuel_hooks[] = {{-1.29302,0.739394,-1.39691},{1.20282,0.749521,-1.39192}};
        transportRepair = 0;
		transportAmmo = 0;
	};
	class gm_ge_army_fuchsa0_engineer_pb21_jg: gm_ge_army_fuchsa0_engineer_pb21_base {
		displayName = "TPz Fuchs A0 (JgBtl 1) - PzBrig21";
		scope = 2;
        scopeCurator = 2;
		ace_repair_canRepair = 0;
        transportRepair = 0;
		gm_InsigniasDefaultUnit = "gme_units_ge_jgbtl1_col";
		gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_infantry";
		gm_TacticalSignsDefaultPostIcon = "1";
		gm_TacticalSignsDefaultPreIcon = "2";
	};
	class gm_ge_army_fuchsa0_medic_pb21_base: gm_ge_army_fuchsa0_medic_base {
		attendant = 1;
		maximumLoad = 18000;
		editorCategory = "gme_EdCat_PB21";
		gm_InsigniasDefaultUnit = "gme_units_ge_sanbtl5_col";
		gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_medic";
		gm_TacticalSignsDefaultPostIcon = "5";
		gm_TacticalSignsDefaultPreIcon = "2";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class gm_ge_army_fuchsa0_medic_pb21: gm_ge_army_fuchsa0_medic_pb21_base {
		displayName = "TPz Fuchs A0 SanBtl 5 (Rennerod)";
		scope = 2;
		scopeCurator = 2;
	};
};