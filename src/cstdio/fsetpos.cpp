#include "fsetpos.h"
int Cfsetpos::my_init(void *p)
{
	this->name = "Cfsetpos";
	this->alias = "fsetpos";
	return 0;
}

Cfsetpos::Cfsetpos()
{
	this->my_init();
}

Cfsetpos::~Cfsetpos()
{

}

#ifndef FSETPOS_TEST
#define FSETPOS_TEST 0//1
#endif

#if FSETPOS_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FSETPOS_TEST\n\n";

	return 0;
}
#endif 