#include "iscntrl.h"
int Ciscntrl::my_init(void *p)
{
	this->name = "Ciscntrl";
	this->alias = "iscntrl";
	return 0;
}

Ciscntrl::Ciscntrl()
{
	this->my_init();
}

Ciscntrl::~Ciscntrl()
{

}

#ifndef ISCNTRL_TEST
#define ISCNTRL_TEST 0//1
#endif

#if ISCNTRL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISCNTRL_TEST\n\n";

	return 0;
}
#endif 