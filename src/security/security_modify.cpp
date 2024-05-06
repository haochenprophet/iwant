#include "security_modify.h"
int Csecurity_modify::my_init(void *p)
{
	this->name = "Csecurity_modify";
	this->alias = "security_modify";
	return 0;
}

Csecurity_modify::Csecurity_modify()
{
	this->my_init();
}

Csecurity_modify::~Csecurity_modify()
{

}

#ifndef SECURITY_MODIFY_TEST
#define SECURITY_MODIFY_TEST 0//1
#endif

#if SECURITY_MODIFY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
