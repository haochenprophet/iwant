#include "network.h"
int Cnetwork::my_init(void *p)
{
	this->name = "Cnetwork";
	this->alias = "network";
	return 0;
}

Cnetwork::Cnetwork()
{
	this->my_init();
}

Cnetwork::~Cnetwork()
{

}

#ifndef NETWORK_TEST
#define NETWORK_TEST 0//1
#endif

#if NETWORK_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NETWORK_TEST\n\n";

	return 0;
}
#endif 