class CfgVehicles {
    class Helicopter;
    class Helicopter_Base_F: Helicopter {
        class Turrets;
    };
    class Helicopter_Base_H: Helicopter_Base_F {
        class Turrets: Turrets {
            class MainTurret;
            class CopilotTurret;
        };
    };
    class gm_helicopter_base: Helicopter_Base_H {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                allowTabLock = 0;
                canUseScanners = 0;
            };
            class CopilotTurret: CopilotTurret {
                allowTabLock = 0;
                canUseScanners = 0;
            };
        };
    };
	class gm_mi2_base: gm_helicopter_base {
		fuelCapacity = "790 * 0.165";
        ace_refuel_fuelCapacity = 838;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 2;
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
        };
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
};