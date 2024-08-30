class CfgVehicles {
    /* Leopard 1a3 */
    class gm_ge_army_leopard1a3a3_base;
    class gme_ge_army_leopard1a3a3_pb21_base: gm_ge_army_leopard1a3a3_base {
        displayName = "KPz Leopard 1A3A3 - PzBrig21";
        editorCategory = "pb21_EdCategory";
        gm_InsigniasDefaultUnit = "gme_units_ge_pzgrenbtl212_col";
		gm_TacticalSignsDefaultPostIcon = "203";
		gm_TacticalSignsDefaultPreIcon = "2";
        #include "CfgACRE_PRC117F_base.hpp"

        //Empty
        maximumLoad = 10000;
        class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
    };

    /* Leopard 1a5 */
    class gm_ge_army_leopard1a5a1_base;
    class gme_ge_army_leopard1a5a1_pb21_base: gm_ge_army_leopard1a5a1_base {
        displayName = "KPz Leopard 1A5A1 - PzBrig21";
        editorCategory = "pb21_EdCategory";
        gm_InsigniasDefaultUnit = "gme_units_ge_pzbtl203_col";
		gm_TacticalSignsDefaultPostIcon = "203";
		gm_TacticalSignsDefaultPreIcon = "2";
        #include "CfgACRE_PRC117F_base.hpp"

        //Empty
        maximumLoad = 10000;
        class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
    };
};
