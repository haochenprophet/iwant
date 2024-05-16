#include "memmove.h"
int Cmemmove::my_init(void *p)
{
	this->name = "Cmemmove";
	this->alias = "memmove";
	return 0;
}

Cmemmove::Cmemmove()
{
	this->my_init();
}

Cmemmove::~Cmemmove()
{

}

#ifndef MEMMOVE_TEST
#define MEMMOVE_TEST 0//1
#endif

#if MEMMOVE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MEMMOVE_TEST\n\n";

	return 0;
}
#endif 