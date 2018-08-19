#include "isgraph.h"
int Cisgraph::my_init(void *p)
{
	this->name = "Cisgraph";
	this->alias = "isgraph";
	return 0;
}

Cisgraph::Cisgraph()
{
	this->my_init();
}

Cisgraph::~Cisgraph()
{

}

#ifndef ISGRAPH_TEST
#define ISGRAPH_TEST 0//1
#endif

#if ISGRAPH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISGRAPH_TEST\n\n";

	return 0;
}
#endif 