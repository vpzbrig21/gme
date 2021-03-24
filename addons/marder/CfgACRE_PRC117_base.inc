class AcreIntercoms {
	class Intercom_1 {
		displayName = "Crew intercom";
		shortName = "Crew";
		allowedPositions[] = {"crew"};
		disabledPositions[] = {};
		limitedPositions[] = {};
		numLimitedPositions = 0;
		masterPositions[] = {"commander"};
		connectedByDefault = 1;
	};
	class Intercom_2: Intercom_1 {
		displayName = "Passenger intercom";
		shortName = "Pax";
		allowedPositions[] = {"crew", {"cargo", all}};
		disabledPositions[] = {};
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
	class Rack_3 {
		displayName = "Rack 3";
		shortName = "R3";
		componentName = "ACRE_VRC103";
		allowedPositions[] = {"crew"};
		disabledPositions[] = {};
		defaultComponents[] = {};
		mountedRadio = "ACRE_PRC117F";
		isRadioRemovable = 0;
		intercom[] = {"Intercom_1"};
	};
};