#include "security_record.h"
int Csecurity_record::my_init(void *p)
{
	this->name = "Csecurity_record";
	this->alias = "security_record";
	return 0;
}

Csecurity_record::Csecurity_record()
{
	this->my_init();
}

Csecurity_record::~Csecurity_record()
{

}

#ifndef SECURITY_RECORD_TEST
#define SECURITY_RECORD_TEST 0//1
#endif

#if SECURITY_RECORD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
