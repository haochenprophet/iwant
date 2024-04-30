#include "spaceport_clothes.h"
int Cspaceport_clothes::my_init(void *p)
{
	this->name = "Cspaceport_clothes";
	this->alias = "spaceport_clothes";
	return 0;
}

Cspaceport_clothes::Cspaceport_clothes()
{
	this->my_init();
}

Cspaceport_clothes::~Cspaceport_clothes()
{

}

#ifndef SPACEPORT_CLOTHES_TEST
#define SPACEPORT_CLOTHES_TEST 0//1
#endif

#if SPACEPORT_CLOTHES_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
