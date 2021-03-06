class CfgVehicles {
	class gm_tracked_Tank_base;
	class gm_pt76_base: gm_tracked_Tank_base {
		fuelCapacity = "340 * 0.165";
        ace_refuel_fuelCapacity = 250;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 1;
		class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {};
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
    class gm_pt76b_base: gm_pt76_base {
        fuelCapacity = "480 * 0.165";
        ace_refuel_fuelCapacity = 310;
    };
};