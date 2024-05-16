#include "security_plan.h"
int Csecurity_plan::my_init(void *p)
{
	this->name = "Csecurity_plan";
	this->alias = "security_plan";
	return 0;
}

Csecurity_plan::Csecurity_plan()
{
	this->my_init();
}

Csecurity_plan::~Csecurity_plan()
{

}

#ifndef SECURITY_PLAN_TEST
#define SECURITY_PLAN_TEST 0//1
#endif

#if SECURITY_PLAN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
