class CfgVehicles {
	class gm_wheeled_base;
	class gm_wheeled_bicycle_base;
	class gm_wheeled_car_base;
	class gm_wheeled_motorcycle_base;
	class gm_wheeled_truck_base;
	class gm_wheeled_apc_base;
	
	class gm_tracked_base;
	class gm_tracked_apc_base;
	class gm_tracked_tank_base;
	class gm_tracked_aa_base;
	class gm_tracked_artillery_base;

	class gm_helicopter_base;
	class gm_plane_base;

	/* West Base */
	class gm_leopard1_base: gm_tracked_tank_base {
		ace_refuel_fuelCapacity = 955;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 4;
		fuelCapacity = "600 * 0.165";
		class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
        };
		class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard Upper";
                shortName = "D.Up";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
            class Rack_2 {
                displayName = "Dashboard Lower";
                shortName = "D.Low";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
		};
	};
	class gm_gepard_base: gm_leopard1_base {
		ace_refuel_fuelCapacity = 985;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 4;
		fuelCapacity = "600 * 0.165";
		class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
        };
		class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard Upper";
                shortName = "D.Up";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
            class Rack_2 {
                displayName = "Dashboard Lower";
                shortName = "D.Low";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
		};
	};
	class gm_bpz2_base: gm_leopard1_base {
		ace_refuel_fuelCapacity = 1550;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 4;
		ace_repair_canRepair = 1;
		fuelCapacity = "850 * 0.165";
		transportFuel = 0;
		class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
		};
		class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard Upper";
                shortName = "D.Up";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
            class Rack_2 {
                displayName = "Dashboard Lower";
                shortName = "D.Low";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
		};
	};
	class gm_m113_base: gm_tracked_apc_base {
		ace_refuel_fuelCapacity = 360;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 4;
		fuelCapacity = "480 * 0.165";
		class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
            class Intercom_2: Intercom_1 {
                displayName = "Pax intercom";
                shortName = "Pax";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                connectedByDefault = 0;
            };
        };
		class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard Upper";
                shortName = "D.Up";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
            class Rack_2 {
                displayName = "Dashboard Lower";
                shortName = "D.Low";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
		};
	};
	class gm_fuchs_base: gm_wheeled_apc_base {
		ace_refuel_fuelCapacity = 390;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 4;
		fuelCapacity = "800 * 0.165";
		class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
            class Intercom_2: Intercom_1 {
                displayName = "Pax intercom";
                shortName = "Pax";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                connectedByDefault = 0;
            };
        };
		class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard Upper";
                shortName = "D.Up";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
            class Rack_2 {
                displayName = "Dashboard Lower";
                shortName = "D.Low";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
		};
	};
	class gm_luchs_base: gm_wheeled_apc_base {
		ace_refuel_fuelCapacity = 390;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 4;
		fuelCapacity = "800 * 0.165";
		class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
        };
		class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard Upper";
                shortName = "D.Up";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
            class Rack_2 {
                displayName = "Dashboard Lower";
                shortName = "D.Low";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
		};
	};
	class gm_iltis_base: gm_wheeled_car_base {
		ace_refuel_fuelCapacity = 85;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 2;
		fuelCapacity = "500 * 0.165";
		class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard Upper";
                shortName = "D.Up";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {};
            };
            class Rack_2 {
                displayName = "Dashboard Lower";
                shortName = "D.Low";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {};
            };
		};
	};
	class gm_u1300l_base: gm_wheeled_truck_base {};
	class gm_kat1_base: gm_wheeled_truck_base {};
	class gm_kat1_451_base: gm_kat1_base {
		ace_refuel_fuelCapacity = 1500;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 4;
		fuelCapacity = "600 * 0.165";
	};
	class gm_kat1_454_base: gm_kat1_base {
		ace_refuel_fuelCapacity = 1500;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 4;
		fuelCapacity = "600 * 0.165";
	};
	class gm_bo105_base: gm_helicopter_base {
		ace_refuel_fuelCapacity = 570;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 2;
		fuelCapacity = "555 * 0.165";
		class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
            class Intercom_2: Intercom_1 {
                displayName = "Pax intercom";
                shortName = "Pax";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                connectedByDefault = 0;
            };
        };
		class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard Upper";
                shortName = "D.Up";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
            class Rack_2 {
                displayName = "Dashboard Lower";
                shortName = "D.Low";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
		};
	};
	class gm_ch53_base: gm_helicopter_base {
		class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
            class Intercom_2: Intercom_1 {
                displayName = "Pax intercom";
                shortName = "Pax";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                connectedByDefault = 0;
            };
        };
		class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard Upper";
                shortName = "D.Up";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
            class Rack_2 {
                displayName = "Dashboard Lower";
                shortName = "D.Low";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
		};
	};
	class gm_do28d2_base: gm_plane_base {};
	
	/* West Special *//
	class gm_m113a1g_base: gm_m113_base {};
	class gm_m113a1g_command_base: gm_m113a1g_base {
		class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
            class Intercom_2: Intercom_1 {
                displayName = "Pax intercom";
                shortName = "Pax";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                connectedByDefault = 0;
            };
        };
	};

	class gm_fuchsa0_base: gm_fuchs_base {};
	class gm_fuchsa0_command_base: gm_fuchsa0_base {
		class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
            class Intercom_2: Intercom_1 {
                displayName = "Pax intercom";
                shortName = "Pax";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                connectedByDefault = 0;
            };
        };
		class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard Upper";
                shortName = "D.Up";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
            class Rack_2 {
                displayName = "Dashboard Lower";
                shortName = "D.Low";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner", "turret"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 1;
                intercom[] = {"Intercom_1"};
            };
		};
	};

	class gm_u1300l_repair_base: gm_u1300l_base {
		ace_repair_canRepair = 1;
	};

	class gm_kat1_451_refuel_base: gm_kat1_451_base {
		ace_refuel_fuelCargo = 4600;
		ace_refuel_hooks[] = {{-0.60,-3.44,-0.919689},{0.60,-3.44,-0.919689}};
		ace_refuel_canReceive = 1;
		transportFuel = 0;
	};
	class gm_kat1_451_reammo_base: gm_kat1_451_base {
		ace_rearm_defaultSupply = 1200;
		transportAmmo = 0;
	};
};