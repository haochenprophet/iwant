#include "security_delete.h"
int Csecurity_delete::my_init(void *p)
{
	this->name = "Csecurity_delete";
	this->alias = "security_delete";
	return 0;
}

Csecurity_delete::Csecurity_delete()
{
	this->my_init();
}

Csecurity_delete::~Csecurity_delete()
{

}

#ifndef SECURITY_DELETE_TEST
#define SECURITY_DELETE_TEST 0//1
#endif

#if SECURITY_DELETE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
