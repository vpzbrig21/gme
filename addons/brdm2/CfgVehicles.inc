class CfgVehicles.inc {
	class gm_wheeled_APC_base;
	class gm_brdm2_base: gm_wheeled_APC_base {
		fuelCapacity = "750 * 0.165";
        ace_refuel_fuelCapacity = 290;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 1;
		class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
                disabledPositions[] = {};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
		};
		class AcreRacks {
            class Rack_1 {
                displayName = "Rack 1";
                shortName = "R1";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"Intercom_1"};
            };
		};
	};
	class gm_brdm2um_base: gm_brdm2_base {
		class AcreRacks {
            class Rack_1 {
                displayName = "Rack 1";
                shortName = "R1";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"Intercom_1"};
            };
            class Rack_2 {
                displayName = "Rack 2";
                shortName = "R2";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"Intercom_1"};
            };
        };
	};
}