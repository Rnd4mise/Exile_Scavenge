class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
	
	////////////////////////////////////
	//	Exile Server Overrides
	///////////////////////////////////
	// Custom onPlayerConnected eventhandler
	ExileServer_system_network_setupEventHandlers = "Exile_Server_Overrides\ExileServer_system_network_setupEventHandlers.sqf";
	ExileServer_system_network_event_onPlayerConnected = "Exile_Server_Overrides\ExileServer_system_network_event_onPlayerConnected.sqf";
	
	////////////////////////////////////
	//	Exile Client Overrides
	///////////////////////////////////
	// Custom player client init
	ExileClient_object_player_initialize = "Exile_Client_Overrides\ExileClient_object_player_initialize.sqf";
};