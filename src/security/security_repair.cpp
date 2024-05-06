#include "security_repair.h"
int Csecurity_repair::my_init(void *p)
{
	this->name = "Csecurity_repair";
	this->alias = "security_repair";
	return 0;
}

Csecurity_repair::Csecurity_repair()
{
	this->my_init();
}

Csecurity_repair::~Csecurity_repair()
{

}

#ifndef SECURITY_REPAIR_TEST
#define SECURITY_REPAIR_TEST 0//1
#endif

#if SECURITY_REPAIR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
