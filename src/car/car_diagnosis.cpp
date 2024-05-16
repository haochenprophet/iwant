#include "car_diagnosis.h"
int Ccar_diagnosis::my_init(void *p)
{
	this->name = "Ccar_diagnosis";
	this->alias = "car_diagnosis";
	return 0;
}

Ccar_diagnosis::Ccar_diagnosis()
{
	this->my_init();
}

Ccar_diagnosis::~Ccar_diagnosis()
{

}

#ifndef CAR_DIAGNOSIS_TEST
#define CAR_DIAGNOSIS_TEST 0//1
#endif

#if CAR_DIAGNOSIS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
