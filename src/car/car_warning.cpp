#include "car_warning.h"
int Ccar_warning::my_init(void *p)
{
	this->name = "Ccar_warning";
	this->alias = "car_warning";
	return 0;
}

Ccar_warning::Ccar_warning()
{
	this->my_init();
}

Ccar_warning::~Ccar_warning()
{

}

#ifndef CAR_WARNING_TEST
#define CAR_WARNING_TEST 0//1
#endif

#if CAR_WARNING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
