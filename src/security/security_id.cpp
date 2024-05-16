#include "security_id.h"
int Csecurity_id::my_init(void *p)
{
	this->name = "Csecurity_id";
	this->alias = "security_id";
	return 0;
}

Csecurity_id::Csecurity_id()
{
	this->my_init();
}

Csecurity_id::~Csecurity_id()
{

}

#ifndef SECURITY_ID_TEST
#define SECURITY_ID_TEST 0//1
#endif

#if SECURITY_ID_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
