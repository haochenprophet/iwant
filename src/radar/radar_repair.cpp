#include "radar_repair.h"
int Cradar_repair::my_init(void *p)
{
	this->name = "Cradar_repair";
	this->alias = "radar_repair";
	return 0;
}

Cradar_repair::Cradar_repair()
{
	this->my_init();
}

Cradar_repair::~Cradar_repair()
{

}

#ifndef RADAR_REPAIR_TEST
#define RADAR_REPAIR_TEST 0//1
#endif

#if RADAR_REPAIR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
