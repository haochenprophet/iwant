#include "rocket_guide.h"
int Crocket_guide::my_init(void *p)
{
	this->name = "Crocket_guide";
	this->alias = "rocket_guide";
	return 0;
}

Crocket_guide::Crocket_guide()
{
	this->my_init();
}

Crocket_guide::~Crocket_guide()
{

}

#ifndef ROCKET_GUIDE_TEST
#define ROCKET_GUIDE_TEST 0//1
#endif

#if ROCKET_GUIDE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
