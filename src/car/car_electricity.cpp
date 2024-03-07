#include "car_electricity.h"
int Ccar_electricity::my_init(void *p)
{
	this->name = "Ccar_electricity";
	this->alias = "car_electricity";
	return 0;
}

Ccar_electricity::Ccar_electricity()
{
	this->my_init();
}

Ccar_electricity::~Ccar_electricity()
{

}
