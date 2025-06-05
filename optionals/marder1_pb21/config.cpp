#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"gme_ge_army_marder1a2_base","gme_ge_army_marder1a2_pb21_base","gme_ge_army_marder1a2_pb21","gme_ge_army_marder1a2_pb21_a","gme_ge_army_marder1a2_pb21_a1","gme_ge_army_marder1a2_pb21_a2","gme_ge_army_marder1a2_pb21_a3","gme_ge_army_marder1a2_pb21_b","gme_ge_army_marder1a2_pb21_b1","gme_ge_army_marder1a2_pb21_b2","gme_ge_army_marder1a2_pb21_b3","gme_ge_army_marder1a2_pb21_c","gme_ge_army_marder1a2_pb21_c1","gme_ge_army_marder1a2_pb21_c2","gme_ge_army_marder1a2_pb21_c3"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"gme_ammo","gme_marder_ge"};
        author = ECSTRING(main,GMETeam);
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"