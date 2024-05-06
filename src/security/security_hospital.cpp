#include "security_hospital.h"
int Csecurity_hospital::my_init(void *p)
{
	this->name = "Csecurity_hospital";
	this->alias = "security_hospital";
	return 0;
}

Csecurity_hospital::Csecurity_hospital()
{
	this->my_init();
}

Csecurity_hospital::~Csecurity_hospital()
{

}

#ifndef SECURITY_HOSPITAL_TEST
#define SECURITY_HOSPITAL_TEST 0//1
#endif

#if SECURITY_HOSPITAL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
