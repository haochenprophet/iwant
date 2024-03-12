#include "airplane_cabin.h"
int Cairplane_cabin::my_init(void *p)
{
	this->name = "Cairplane_cabin";
	this->alias = "airplane_cabin";
	return 0;
}

Cairplane_cabin::Cairplane_cabin()
{
	this->my_init();
}

Cairplane_cabin::~Cairplane_cabin()
{

}

#ifndef AIRPLANE_CABIN_TEST
#define AIRPLANE_CABIN_TEST 0//1
#endif

#if AIRPLANE_CABIN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
