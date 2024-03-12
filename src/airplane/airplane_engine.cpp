#include "airplane_engine.h"
int Cairplane_engine::my_init(void *p)
{
	this->name = "Cairplane_engine";
	this->alias = "airplane_engine";
	return 0;
}

Cairplane_engine::Cairplane_engine()
{
	this->my_init();
}

Cairplane_engine::~Cairplane_engine()
{

}

#ifndef AIRPLANE_ENGINE_TEST
#define AIRPLANE_ENGINE_TEST 0//1
#endif

#if AIRPLANE_ENGINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
