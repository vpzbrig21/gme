class CfgVehicles {
    class gm_helicopter_base;
    class gm_ch53_base: gm_helicopter_base {
        fuelCapacity = "400 * 0.165";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{0.6, -5.2, -0.8},{-0.6, -5.2, -0.8}};
        ace_fastroping_onCut = QFUNC(onCut);
        ace_fastroping_onPrepare = QFUNC(onPrepare);
        ace_refuel_fuelCapacity = 2384;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 8;
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
    class gm_ch53g_base: gm_ch53_base {};
    class gm_ch53gs_base: gm_ch53g_base {
        fuelCapacity = "650 * 0.165";
        ace_refuel_fuelCapacity = 7304;
    };
};
