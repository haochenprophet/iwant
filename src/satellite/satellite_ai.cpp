#include "satellite_ai.h"
int Csatellite_ai::my_init(void *p)
{
	this->name = "Csatellite_ai";
	this->alias = "satellite_ai";
	return 0;
}

Csatellite_ai::Csatellite_ai()
{
	this->my_init();
}

Csatellite_ai::~Csatellite_ai()
{

}

#ifndef SATELLITE_AI_TEST
#define SATELLITE_AI_TEST 0//1
#endif

#if SATELLITE_AI_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
