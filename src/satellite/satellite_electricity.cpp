#include "satellite_electricity.h"
int Csatellite_electricity::my_init(void *p)
{
	this->name = "Csatellite_electricity";
	this->alias = "satellite_electricity";
	return 0;
}

Csatellite_electricity::Csatellite_electricity()
{
	this->my_init();
}

Csatellite_electricity::~Csatellite_electricity()
{

}
