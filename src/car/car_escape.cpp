#include "car_escape.h"
int Ccar_escape::my_init(void *p)
{
	this->name = "Ccar_escape";
	this->alias = "car_escape";
	return 0;
}

Ccar_escape::Ccar_escape()
{
	this->my_init();
}

Ccar_escape::~Ccar_escape()
{

}

#ifndef CAR_ESCAPE_TEST
#define CAR_ESCAPE_TEST 0//1
#endif

#if CAR_ESCAPE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
