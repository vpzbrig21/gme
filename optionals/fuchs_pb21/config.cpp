#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"gm_ge_army_fuchsa0_command_pb21_base","gm_ge_army_fuchsa0_command_pb21","gm_ge_army_fuchsa0_reconnaissance_pb21_base","gm_ge_army_fuchsa0_reconnaissance_pb21","gm_ge_army_fuchsa0_engineer_pb21_base","gm_ge_army_fuchsa0_engineer_pb21","gm_ge_army_fuchsa0_engineer_pb21_tardis"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"gme_fuchs_ge"};
        author = ECSTRING(main,GMETeam);
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
