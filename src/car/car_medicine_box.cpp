#include "car_medicine_box.h"
int Ccar_medicine_box::my_init(void *p)
{
	this->name = "Ccar_medicine_box";
	this->alias = "car_medicine_box";
	return 0;
}

Ccar_medicine_box::Ccar_medicine_box()
{
	this->my_init();
}

Ccar_medicine_box::~Ccar_medicine_box()
{

}

#ifndef CAR_MEDICINE_BOX_TEST
#define CAR_MEDICINE_BOX_TEST 0//1
#endif

#if CAR_MEDICINE_BOX_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
