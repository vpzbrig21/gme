acre_hasInfantryPhone = 0;
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
		componentName = "ACRE_VRC103";
		allowedPositions[] = {"crew"};
		disabledPositions[] = {};
		defaultComponents[] = {};
		mountedRadio = "ACRE_PRC117F";
		isRadioRemovable = 0;
		intercom[] = {"Intercom_1"};
	};
};