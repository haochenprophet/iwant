#include "security_hypoxia.h"
int Csecurity_hypoxia::my_init(void *p)
{
	this->name = "Csecurity_hypoxia";
	this->alias = "security_hypoxia";
	return 0;
}

Csecurity_hypoxia::Csecurity_hypoxia()
{
	this->my_init();
}

Csecurity_hypoxia::~Csecurity_hypoxia()
{

}

#ifndef SECURITY_HYPOXIA_TEST
#define SECURITY_HYPOXIA_TEST 0//1
#endif

#if SECURITY_HYPOXIA_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
