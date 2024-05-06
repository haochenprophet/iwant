#include "security_distance.h"
int Csecurity_distance::my_init(void *p)
{
	this->name = "Csecurity_distance";
	this->alias = "security_distance";
	return 0;
}

Csecurity_distance::Csecurity_distance()
{
	this->my_init();
}

Csecurity_distance::~Csecurity_distance()
{

}

#ifndef SECURITY_DISTANCE_TEST
#define SECURITY_DISTANCE_TEST 0//1
#endif

#if SECURITY_DISTANCE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
