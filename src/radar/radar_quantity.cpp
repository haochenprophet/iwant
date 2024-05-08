#include "radar_quantity.h"
int Cradar_quantity::my_init(void *p)
{
	this->name = "Cradar_quantity";
	this->alias = "radar_quantity";
	return 0;
}

Cradar_quantity::Cradar_quantity()
{
	this->my_init();
}

Cradar_quantity::~Cradar_quantity()
{

}

#ifndef RADAR_QUANTITY_TEST
#define RADAR_QUANTITY_TEST 0//1
#endif

#if RADAR_QUANTITY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
