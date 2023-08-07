acre_hasInfantryPhone = 0;
class AcreIntercoms {
	class Intercom_1 {
		displayName = "Crew intercom";
		shortName = "Crew";
		allowedPositions[] = {"crew", {"turret", {2}}};
		disabledPositions[] = {};
		limitedPositions[] = {};
		numLimitedPositions = 0;
		masterPositions[] = {"commander"};
		connectedByDefault = 1;
	};
	class Intercom_2: Intercom_1 {
		displayName = "Passenger intercom";
		shortName = "Pax";
		allowedPositions[] = {"crew", {"cargo", "all"}, {"turret", "all"}, {"ffv", "all"}};
		disabledPositions[] = {};
		connectedByDefault = 0;
	}; 
};
class AcreRacks {
	class Rack_1 {
		displayName = "Rack 1";
		shortName = "R1";
		componentName = "ACRE_SEM90";
		allowedPositions[] = {"crew", {"turret", {2}}};
		disabledPositions[] = {};
		defaultComponents[] = {};
		mountedRadio = "ACRE_SEM70";
		isRadioRemovable = 0;
		intercom[] = {"Intercom_1"};
	};
	class Rack_2 {
		displayName = "Rack 2";
		shortName = "R2";
		componentName = "ACRE_SEM90";
		allowedPositions[] = {"crew", {"turret", {2}}};
		disabledPositions[] = {};
		defaultComponents[] = {};
		mountedRadio = "ACRE_SEM70";
		isRadioRemovable = 0;
		intercom[] = {"Intercom_1"};
	};
	class Rack_3 {
		displayName = "Rack 3";
		shortName = "R3";
		componentName = "ACRE_SEM90";
		allowedPositions[] = {"crew", {"turret", {2}}};
		disabledPositions[] = {};
		defaultComponents[] = {};
		mountedRadio = "ACRE_SEM70";
		isRadioRemovable = 0;
		intercom[] = {"Intercom_1"};
	};
};