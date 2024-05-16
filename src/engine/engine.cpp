#include "engine.h"
int Cengine::my_init(void *p)
{
	this->name = "Cengine";
	this->alias = "engine";
	return 0;
}

Cengine::Cengine()
{
	this->my_init();
}

Cengine::~Cengine()
{

}

#ifndef ENGINE_TEST
#define ENGINE_TEST 0//1
#endif

#if ENGINE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
