#include "node.h"
int Cnode::my_init(void *p)
{
	this->name = "Cnode";
	this->alias = "node";
	return 0;
}

Cnode::Cnode()
{
	this->my_init();
}

#ifndef NODE_TEST
#define NODE_TEST 0//1
#endif

#if NODE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NODE_TEST\n\n";
	return 0;
}
#endif 