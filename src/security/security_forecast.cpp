#include "security_forecast.h"
int Csecurity_forecast::my_init(void *p)
{
	this->name = "Csecurity_forecast";
	this->alias = "security_forecast";
	return 0;
}

Csecurity_forecast::Csecurity_forecast()
{
	this->my_init();
}

Csecurity_forecast::~Csecurity_forecast()
{

}

#ifndef SECURITY_FORECAST_TEST
#define SECURITY_FORECAST_TEST 0//1
#endif

#if SECURITY_FORECAST_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
