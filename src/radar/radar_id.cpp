#include "radar_id.h"
int Cradar_id::my_init(void *p)
{
	this->name = "Cradar_id";
	this->alias = "radar_id";
	return 0;
}

Cradar_id::Cradar_id()
{
	this->my_init();
}

Cradar_id::~Cradar_id()
{

}

#ifndef RADAR_ID_TEST
#define RADAR_ID_TEST 0//1
#endif

#if RADAR_ID_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
