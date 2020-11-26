class CfgVehicles {
    class gm_wheeled_car_base;
    class gm_iltis_base: gm_wheeled_car_base {
        fuelCapacity = "600 * 0.165";
        ace_refuel_fuelCapacity = 84;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
    };
    class gm_iltis_cargo_base;
    class gm_ge_army_iltis_cargo_base: gm_iltis_cargo_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "Rack 1";
                shortName = "R1";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {};
            };
            class Rack_2 {
                displayName = "Rack 2";
                shortName = "R2";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};

                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {};
            };
        };
    };
};
