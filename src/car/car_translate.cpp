#include "car_translate.h"
int Ccar_translate::my_init(void *p)
{
	this->name = "Ccar_translate";
	this->alias = "car_translate";
	return 0;
}

Ccar_translate::Ccar_translate()
{
	this->my_init();
}

Ccar_translate::~Ccar_translate()
{

}

#ifndef CAR_TRANSLATE_TEST
#define CAR_TRANSLATE_TEST 0//1
#endif

#if CAR_TRANSLATE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
