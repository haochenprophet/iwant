#include "security_flood.h"
int Csecurity_flood::my_init(void *p)
{
	this->name = "Csecurity_flood";
	this->alias = "security_flood";
	return 0;
}

Csecurity_flood::Csecurity_flood()
{
	this->my_init();
}

Csecurity_flood::~Csecurity_flood()
{

}

#ifndef SECURITY_FLOOD_TEST
#define SECURITY_FLOOD_TEST 0//1
#endif

#if SECURITY_FLOOD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
