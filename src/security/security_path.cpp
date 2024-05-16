#include "security_path.h"
int Csecurity_path::my_init(void *p)
{
	this->name = "Csecurity_path";
	this->alias = "security_path";
	return 0;
}

Csecurity_path::Csecurity_path()
{
	this->my_init();
}

Csecurity_path::~Csecurity_path()
{

}

#ifndef SECURITY_PATH_TEST
#define SECURITY_PATH_TEST 0//1
#endif

#if SECURITY_PATH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
