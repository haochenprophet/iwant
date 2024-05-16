#include "car_language.h"
int Ccar_language::my_init(void *p)
{
	this->name = "Ccar_language";
	this->alias = "car_language";
	return 0;
}

Ccar_language::Ccar_language()
{
	this->my_init();
}

Ccar_language::~Ccar_language()
{

}

#ifndef CAR_LANGUAGE_TEST
#define CAR_LANGUAGE_TEST 0//1
#endif

#if CAR_LANGUAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
