#include "iswgraph.h"
int Ciswgraph::my_init(void *p)
{
	this->name = "Ciswgraph";
	this->alias = "iswgraph";
	return 0;
}

Ciswgraph::Ciswgraph()
{
	this->my_init();
}

Ciswgraph::~Ciswgraph()
{

}

#ifndef ISWGRAPH_TEST
#define ISWGRAPH_TEST 0//1
#endif

#if ISWGRAPH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWGRAPH_TEST\n\n";

	return 0;
}
#endif 