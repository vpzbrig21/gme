class CfgVehicles {
	class gm_tracked_Tank_base;
	class gm_t55_base: gm_tracked_Tank_base {
		fuelCapacity = "650 * 0.165";
        ace_refuel_fuelCapacity = 1360;
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
    class gm_t55a_base: gm_t55_base {
        fuelCapacity = "650 * 0.165";
        ace_refuel_fuelCapacity = 1360;
    };
    class gm_t55am1_base: gm_t55a_base {
        fuelCapacity = "650 * 0.165";
        ace_refuel_fuelCapacity = 1360;
    };
    class gm_t55am2_base: gm_t55am1_base {
        fuelCapacity = "545 * 0.165";
        ace_refuel_fuelCapacity = 1360;
    };
    class gm_t55am2b_base: gm_t55am2_base {
        fuelCapacity = "545 * 0.165";
        ace_refuel_fuelCapacity = 1360;
    };
};