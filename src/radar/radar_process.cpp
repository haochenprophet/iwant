#include "radar_process.h"
int Cradar_process::my_init(void *p)
{
	this->name = "Cradar_process";
	this->alias = "radar_process";
	return 0;
}

Cradar_process::Cradar_process()
{
	this->my_init();
}

Cradar_process::~Cradar_process()
{

}

#ifndef RADAR_PROCESS_TEST
#define RADAR_PROCESS_TEST 0//1
#endif

#if RADAR_PROCESS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
