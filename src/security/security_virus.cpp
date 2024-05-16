#include "security_virus.h"
int Csecurity_virus::my_init(void *p)
{
	this->name = "Csecurity_virus";
	this->alias = "security_virus";
	return 0;
}

Csecurity_virus::Csecurity_virus()
{
	this->my_init();
}

Csecurity_virus::~Csecurity_virus()
{

}

#ifndef SECURITY_VIRUS_TEST
#define SECURITY_VIRUS_TEST 0//1
#endif

#if SECURITY_VIRUS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
