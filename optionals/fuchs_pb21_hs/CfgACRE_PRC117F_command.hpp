class AcreIntercoms {
    class Intercom_1 {
        displayName = "Crew intercom";
        shortName = "Crew";
        allowedPositions[] = {"driver","cargo_0","cargo_1","commander","turret_[1]","turret_[2]","turret_[3]"};
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
        allowedPositions[] = {"crew", "turret_[3]", {"cargo", "all"}};
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
        allowedPositions[] = {"crew", "turret_[3]", {"cargo", "all"}};
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
        allowedPositions[] = {"crew", "turret_[3]", {"cargo", "all"}};
        disabledPositions[] = {};
        defaultComponents[] = {};
        mountedRadio = "ACRE_PRC117F";
        isRadioRemovable = 0;
        intercom[] = {"Intercom_1"};
    };
};