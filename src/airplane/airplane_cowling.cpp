#include "airplane_cowling.h"
int Cairplane_cowling::my_init(void *p)
{
	this->name = "Cairplane_cowling";
	this->alias = "airplane_cowling";
	return 0;
}

Cairplane_cowling::Cairplane_cowling()
{
	this->my_init();
}

Cairplane_cowling::~Cairplane_cowling()
{

}

#ifndef AIRPLANE_COWLING_TEST
#define AIRPLANE_COWLING_TEST 0//1
#endif

#if AIRPLANE_COWLING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
