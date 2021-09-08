acre_hasInfantryPhone = 1;
acre_infantryPhoneDisableRinging = 1;
acre_infantryPhoneCustomRinging[] = {};
acre_infantryPhoneIntercom[] = {"all"};
acre_infantryPhoneControlActions[] = {"all"};
acre_eventInfantryPhone = QFUNC(noApiFunction);
acre_infantryPhonePosition[] = {-1.175, -3.45, -1.1};
class AcreIntercoms {
	class Intercom_1 {
		displayName = "Crew intercom";
		shortName = "Crew";
		allowedPositions[] = {"driver","gunner","commander"}; //{"turret", [2]} wurde entfernt
		disabledPositions[] = {};
		limitedPositions[] = {{"cargo", "all"}, {"turret", "all"}, {"ffv", "all"}};
		numLimitedPositions = 2;
		masterPositions[] = {"commander"};
		connectedByDefault = 1;
	};
	class Intercom_2: Intercom_1 {
		displayName = "Passenger intercom";
		shortName = "Pax";
		allowedPositions[] = {"crew", {"cargo", "all"}, {"turret", "all"}, {"ffv", "all"}};
		limitedPositions[] = {};
		numLimitedPositions = 0;
		connectedByDefault = 0;
	}; 
};
class AcreRacks {
	class Rack_1 {
		displayName = "Rack 1";
		shortName = "R1";
		componentName = "ACRE_SEM90";
		allowedPositions[] = {"driver","gunner","commander"};
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
		allowedPositions[] = {"driver","gunner","commander"};
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
		allowedPositions[] = {"driver","gunner","commander"};
		disabledPositions[] = {};
		defaultComponents[] = {};
		mountedRadio = "ACRE_SEM70";
		isRadioRemovable = 0;
		intercom[] = {"Intercom_1"};
	};
};