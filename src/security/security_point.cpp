#include "security_point.h"
int Csecurity_point::my_init(void *p)
{
	this->name = "Csecurity_point";
	this->alias = "security_point";
	return 0;
}

Csecurity_point::Csecurity_point()
{
	this->my_init();
}

Csecurity_point::~Csecurity_point()
{

}

#ifndef SECURITY_POINT_TEST
#define SECURITY_POINT_TEST 0//1
#endif

#if SECURITY_POINT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
