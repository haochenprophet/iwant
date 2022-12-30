#include "floor.h"
int Cfloor::my_init(void *p)
{
	this->name = "Cfloor";
	this->alias = "floor";
	return 0;
}

Cfloor::Cfloor()
{
	this->my_init();
}

Cfloor::~Cfloor()
{

}
double Cfloor::floor_c(double x)
{
	return floor(x);
}
#ifndef FLOOR_TEST
#define FLOOR_TEST 0//1
#endif

#if FLOOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FLOOR_TEST\n\n";

	return 0;
}
#endif 