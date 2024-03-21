#include "satellite_engine.h"
int Csatellite_engine::my_init(void *p)
{
	this->name = "Csatellite_engine";
	this->alias = "satellite_engine";
	return 0;
}

Csatellite_engine::Csatellite_engine()
{
	this->my_init();
}

Csatellite_engine::~Csatellite_engine()
{

}

#ifndef SATELLITE_ENGINE_TEST
#define SATELLITE_ENGINE_TEST 0//1
#endif

#if SATELLITE_ENGINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
