#include "car_displayer.h"
int Ccar_displayer::my_init(void *p)
{
	this->name = "Ccar_displayer";
	this->alias = "car_displayer";
	return 0;
}

Ccar_displayer::Ccar_displayer()
{
	this->my_init();
}

Ccar_displayer::~Ccar_displayer()
{

}

#ifndef CAR_DISPLAYER_TEST
#define CAR_DISPLAYER_TEST 0//1
#endif

#if CAR_DISPLAYER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
