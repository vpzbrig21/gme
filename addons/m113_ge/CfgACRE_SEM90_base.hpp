class AcreIntercoms {
	class Intercom_1 {
		displayName = "Crew intercom";
		shortName = "Crew";
		allowedPositions[] = {"crew"};
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
		componentName = "ACRE_SEM90";
		allowedPositions[] = {"crew"};
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
		allowedPositions[] = {"crew"};
		disabledPositions[] = {};
		defaultComponents[] = {};
		mountedRadio = "ACRE_SEM70";
		isRadioRemovable = 0;
		intercom[] = {"Intercom_1"};
	};
};