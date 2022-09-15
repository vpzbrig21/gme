class CfgVehicles {
    class gm_helicopter_base;
    class gm_bo105_base: gm_helicopter_base {
        ace_fastroping_enabled = 0;
        fuelCapacity = "670 * 0.165";
        ace_refuel_fuelCapacity = 570;
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
            class Intercom_2: Intercom_1 {
                displayName = "Pax intercom";
                shortName = "Pax";
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
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
    class gm_bo105p1m_vbh_base;
    class gm_bo105p1m_vbh_swooper_base: gm_bo105p1m_vbh_base {
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{-1.34,0.695,-0.0757732},{1.34,0.695,-0.0973468}};
        ace_fastroping_onCut = QFUNC(onCut);
        ace_fastroping_onCutRopes = QFUNC(onCutRopes);
        ace_fastroping_onDeployRopes = QFUNC(onDeployRopes);
        ace_fastroping_onPrepare = QFUNC(onPrepare);
    };
};
