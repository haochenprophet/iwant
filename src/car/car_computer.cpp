#include "car_computer.h"
int Ccar_computer::my_init(void *p)
{
	this->name = "Ccar_computer";
	this->alias = "car_computer";
	return 0;
}

Ccar_computer::Ccar_computer()
{
	this->my_init();
}

Ccar_computer::~Ccar_computer()
{

}

#ifndef CAR_COMPUTER_TEST
#define CAR_COMPUTER_TEST 0//1
#endif

#if CAR_COMPUTER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
