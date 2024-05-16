#include "security.h"
int Csecurity::my_init(void *p)
{
	this->name = "Csecurity";
	this->alias = "security";
	return 0;
}

Csecurity::Csecurity()
{
	this->my_init();
}

Csecurity::~Csecurity()
{

}

#ifndef SECURITY_TEST
#define SECURITY_TEST 0//1
#endif

#if SECURITY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
