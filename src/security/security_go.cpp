#include "security_go.h"
int Csecurity_go::my_init(void *p)
{
	this->name = "Csecurity_go";
	this->alias = "security_go";
	return 0;
}

Csecurity_go::Csecurity_go()
{
	this->my_init();
}

Csecurity_go::~Csecurity_go()
{

}

#ifndef SECURITY_GO_TEST
#define SECURITY_GO_TEST 0//1
#endif

#if SECURITY_GO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
