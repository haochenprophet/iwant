#include "car_nitrogen.h"
int Ccar_nitrogen::my_init(void *p)
{
	this->name = "Ccar_nitrogen";
	this->alias = "car_nitrogen";
	return 0;
}

Ccar_nitrogen::Ccar_nitrogen()
{
	this->my_init();
}

Ccar_nitrogen::~Ccar_nitrogen()
{

}

#ifndef CAR_NITROGEN_TEST
#define CAR_NITROGEN_TEST 0//1
#endif

#if CAR_NITROGEN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
