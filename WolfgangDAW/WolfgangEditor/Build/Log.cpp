/*
* Author:Keith Williams
* Creation Date: 03/13/21
* Last Updated: 03/13/21
* Description:
* A class containing the defintion of the Log function and its associated functions.
*/

#include "Log.h"

void LogInit()
{
	Log("Initializing Console Log...");
};

void Log(const char* message)
{
	std::cout << message << std::endl;
};
