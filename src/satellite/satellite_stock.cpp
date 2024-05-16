#include "satellite_stock.h"
int Csatellite_stock::my_init(void *p)
{
	this->name = "Csatellite_stock";
	this->alias = "satellite_stock";
	return 0;
}

Csatellite_stock::Csatellite_stock()
{
	this->my_init();
}

Csatellite_stock::~Csatellite_stock()
{

}

#ifndef SATELLITE_STOCK_TEST
#define SATELLITE_STOCK_TEST 0//1
#endif

#if SATELLITE_STOCK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
