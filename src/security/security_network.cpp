#include "security_network.h"
int Csecurity_network::my_init(void *p)
{
	this->name = "Csecurity_network";
	this->alias = "security_network";
	return 0;
}

Csecurity_network::Csecurity_network()
{
	this->my_init();
}

Csecurity_network::~Csecurity_network()
{

}

#ifndef SECURITY_NETWORK_TEST
#define SECURITY_NETWORK_TEST 0//1
#endif

#if SECURITY_NETWORK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
