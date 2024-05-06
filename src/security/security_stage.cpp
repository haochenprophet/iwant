#include "security_stage.h"
int Csecurity_stage::my_init(void *p)
{
	this->name = "Csecurity_stage";
	this->alias = "security_stage";
	return 0;
}

Csecurity_stage::Csecurity_stage()
{
	this->my_init();
}

Csecurity_stage::~Csecurity_stage()
{

}

#ifndef SECURITY_STAGE_TEST
#define SECURITY_STAGE_TEST 0//1
#endif

#if SECURITY_STAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
