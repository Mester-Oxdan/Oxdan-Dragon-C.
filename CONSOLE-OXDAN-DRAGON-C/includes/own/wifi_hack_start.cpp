#include <windows.h>
#include <iostream>
#include <shlobj_core.h>
#include <time.h>
#include "all_diclarations.h"

using namespace std;

void wifi_hack_start()
{
	string cmd_2 = "/includes/own/test_python_py_wifi_hack.py";
	string cmd_22 = "start " + oxdan_dragon_c + cmd_2;
	system(cmd_22.c_str());
}