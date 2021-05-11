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
    class Rack_3 {
        displayName = "Rack 3";
        shortName = "R3";
        componentName = "ACRE_VRC103";
        allowedPositions[] = {"crew", {"cargo", "all"}};
        disabledPositions[] = {};
        defaultComponents[] = {};
        mountedRadio = "ACRE_PRC117F";
        isRadioRemovable = 0;
        intercom[] = {"Intercom_1"};
    };
};