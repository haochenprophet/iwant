#include "security_direction.h"
int Csecurity_direction::my_init(void *p)
{
	this->name = "Csecurity_direction";
	this->alias = "security_direction";
	return 0;
}

Csecurity_direction::Csecurity_direction()
{
	this->my_init();
}

Csecurity_direction::~Csecurity_direction()
{

}

#ifndef SECURITY_DIRECTION_TEST
#define SECURITY_DIRECTION_TEST 0//1
#endif

#if SECURITY_DIRECTION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
