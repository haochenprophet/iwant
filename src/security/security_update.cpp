#include "security_update.h"
int Csecurity_update::my_init(void *p)
{
	this->name = "Csecurity_update";
	this->alias = "security_update";
	return 0;
}

Csecurity_update::Csecurity_update()
{
	this->my_init();
}

Csecurity_update::~Csecurity_update()
{

}

#ifndef SECURITY_UPDATE_TEST
#define SECURITY_UPDATE_TEST 0//1
#endif

#if SECURITY_UPDATE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
