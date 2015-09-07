class CfgPatches {
	class custom_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client", "exile_server_config", "exile_server"};
	};
};

class CfgFunctions {
	class custom_code {
		class helicrash {
			file = "custom_code";
			class init {
				postInit = 1;
			};
		};
	};
};