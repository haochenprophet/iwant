#include "rocket_engine.h"
int Crocket_engine::my_init(void *p)
{
	this->name = "Crocket_engine";
	this->alias = "rocket_engine";
	return 0;
}

Crocket_engine::Crocket_engine()
{
	this->my_init();
}

Crocket_engine::~Crocket_engine()
{

}

#ifndef ROCKET_ENGINE_TEST
#define ROCKET_ENGINE_TEST 0//1
#endif

#if ROCKET_ENGINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
