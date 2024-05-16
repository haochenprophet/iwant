#include "car_link.h"
int Ccar_link::my_init(void *p)
{
	this->name = "Ccar_link";
	this->alias = "car_link";
	return 0;
}

Ccar_link::Ccar_link()
{
	this->my_init();
}

Ccar_link::~Ccar_link()
{

}

#ifndef CAR_LINK_TEST
#define CAR_LINK_TEST 0//1
#endif

#if CAR_LINK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
