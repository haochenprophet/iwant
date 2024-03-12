#include "airplane_nose.h"
int Cairplane_nose::my_init(void *p)
{
	this->name = "Cairplane_nose";
	this->alias = "airplane_nose";
	return 0;
}

Cairplane_nose::Cairplane_nose()
{
	this->my_init();
}

Cairplane_nose::~Cairplane_nose()
{

}

#ifndef AIRPLANE_NOSE_TEST
#define AIRPLANE_NOSE_TEST 0//1
#endif

#if AIRPLANE_NOSE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
