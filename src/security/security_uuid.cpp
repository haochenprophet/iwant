#include "security_uuid.h"
int Csecurity_uuid::my_init(void *p)
{
	this->name = "Csecurity_uuid";
	this->alias = "security_uuid";
	return 0;
}

Csecurity_uuid::Csecurity_uuid()
{
	this->my_init();
}

Csecurity_uuid::~Csecurity_uuid()
{

}

#ifndef SECURITY_UUID_TEST
#define SECURITY_UUID_TEST 0//1
#endif

#if SECURITY_UUID_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
