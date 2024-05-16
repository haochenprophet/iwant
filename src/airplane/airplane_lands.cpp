#include "airplane_lands.h"
int Cairplane_lands::my_init(void *p)
{
	this->name = "Cairplane_lands";
	this->alias = "airplane_lands";
	return 0;
}

Cairplane_lands::Cairplane_lands()
{
	this->my_init();
}

Cairplane_lands::~Cairplane_lands()
{

}

#ifndef AIRPLANE_LANDS_TEST
#define AIRPLANE_LANDS_TEST 0//1
#endif

#if AIRPLANE_LANDS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
