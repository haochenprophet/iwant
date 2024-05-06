#include "security_ladder.h"
int Csecurity_ladder::my_init(void *p)
{
	this->name = "Csecurity_ladder";
	this->alias = "security_ladder";
	return 0;
}

Csecurity_ladder::Csecurity_ladder()
{
	this->my_init();
}

Csecurity_ladder::~Csecurity_ladder()
{

}

#ifndef SECURITY_LADDER_TEST
#define SECURITY_LADDER_TEST 0//1
#endif

#if SECURITY_LADDER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
