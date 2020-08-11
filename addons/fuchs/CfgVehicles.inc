class CfgVehicles {
    class gm_wheeled_APC_base;
    class gm_fuchs_base: gm_wheeled_APC_base {
        fuelCapacity = "800 * 0.165"
        ace_refuel_fuelCapacity = 390;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 1;
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
    class gm_fuchsa0_base;
    class gm_fuchsa0_command_base: gm_fuchsa0_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "Rack 1";
                shortName = "R1";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"crew"};
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
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"Intercom_1"};
            };
            class Rack_3 {
                displayName = "Rack 3";
                shortName = "R3";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"Intercom_1"};
            };
        };
    };
    class gm_fuchsa0_reconnaissance_base: gm_fuchsa0_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "Rack 1";
                shortName = "R1";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"crew"};
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
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"Intercom_1"};
            };
        };
    };
    class gm_fuchsa0_engineer_base: gm_fuchsa0_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "Rack 1";
                shortName = "R1";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"Intercom_1"};
            };
        };
    };
};
