#include "satellite_financial.h"
int Csatellite_financial::my_init(void *p)
{
	this->name = "Csatellite_financial";
	this->alias = "satellite_financial";
	return 0;
}

Csatellite_financial::Csatellite_financial()
{
	this->my_init();
}

Csatellite_financial::~Csatellite_financial()
{

}

#ifndef SATELLITE_FINANCIAL_TEST
#define SATELLITE_FINANCIAL_TEST 0//1
#endif

#if SATELLITE_FINANCIAL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
