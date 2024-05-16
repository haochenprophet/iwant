#include "security_manage.h"
int Csecurity_manage::my_init(void *p)
{
	this->name = "Csecurity_manage";
	this->alias = "security_manage";
	return 0;
}

Csecurity_manage::Csecurity_manage()
{
	this->my_init();
}

Csecurity_manage::~Csecurity_manage()
{

}

#ifndef SECURITY_MANAGE_TEST
#define SECURITY_MANAGE_TEST 0//1
#endif

#if SECURITY_MANAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
