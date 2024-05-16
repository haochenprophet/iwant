#include "security_where.h"
int Csecurity_where::my_init(void *p)
{
	this->name = "Csecurity_where";
	this->alias = "security_where";
	return 0;
}

Csecurity_where::Csecurity_where()
{
	this->my_init();
}

Csecurity_where::~Csecurity_where()
{

}

#ifndef SECURITY_WHERE_TEST
#define SECURITY_WHERE_TEST 0//1
#endif

#if SECURITY_WHERE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
