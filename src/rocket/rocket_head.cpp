#include "rocket_head.h"
int Crocket_head::my_init(void *p)
{
	this->name = "Crocket_head";
	this->alias = "rocket_head";
	return 0;
}

Crocket_head::Crocket_head()
{
	this->my_init();
}

Crocket_head::~Crocket_head()
{

}

#ifndef ROCKET_HEAD_TEST
#define ROCKET_HEAD_TEST 0//1
#endif

#if ROCKET_HEAD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
