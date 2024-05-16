#include "radar_type.h"
int Cradar_type::my_init(void *p)
{
	this->name = "Cradar_type";
	this->alias = "radar_type";
	return 0;
}

Cradar_type::Cradar_type()
{
	this->my_init();
}

Cradar_type::~Cradar_type()
{

}

#ifndef RADAR_TYPE_TEST
#define RADAR_TYPE_TEST 0//1
#endif

#if RADAR_TYPE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
