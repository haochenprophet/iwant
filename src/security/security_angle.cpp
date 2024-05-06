#include "security_angle.h"
int Csecurity_angle::my_init(void *p)
{
	this->name = "Csecurity_angle";
	this->alias = "security_angle";
	return 0;
}

Csecurity_angle::Csecurity_angle()
{
	this->my_init();
}

Csecurity_angle::~Csecurity_angle()
{

}

#ifndef SECURITY_ANGLE_TEST
#define SECURITY_ANGLE_TEST 0//1
#endif

#if SECURITY_ANGLE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
