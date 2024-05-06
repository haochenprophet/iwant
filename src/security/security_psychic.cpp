#include "security_psychic.h"
int Csecurity_psychic::my_init(void *p)
{
	this->name = "Csecurity_psychic";
	this->alias = "security_psychic";
	return 0;
}

Csecurity_psychic::Csecurity_psychic()
{
	this->my_init();
}

Csecurity_psychic::~Csecurity_psychic()
{

}

#ifndef SECURITY_PSYCHIC_TEST
#define SECURITY_PSYCHIC_TEST 0//1
#endif

#if SECURITY_PSYCHIC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
