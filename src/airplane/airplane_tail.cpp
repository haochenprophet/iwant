#include "airplane_tail.h"
int Cairplane_tail::my_init(void *p)
{
	this->name = "Cairplane_tail";
	this->alias = "airplane_tail";
	return 0;
}

Cairplane_tail::Cairplane_tail()
{
	this->my_init();
}

Cairplane_tail::~Cairplane_tail()
{

}

#ifndef AIRPLANE_TAIL_TEST
#define AIRPLANE_TAIL_TEST 0//1
#endif

#if AIRPLANE_TAIL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
