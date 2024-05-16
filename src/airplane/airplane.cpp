#include "airplane.h"
int Cairplane::my_init(void *p)
{
	this->name = "Cairplane";
	this->alias = "airplane";
	return 0;
}

Cairplane::Cairplane()
{
	this->my_init();
}

Cairplane::~Cairplane()
{

}

#ifndef AIRPLANE_TEST
#define AIRPLANE_TEST 0//1
#endif

#if AIRPLANE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
