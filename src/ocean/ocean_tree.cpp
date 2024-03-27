#include "ocean_tree.h"
int Cocean_tree::my_init(void *p)
{
	this->name = "Cocean_tree";
	this->alias = "ocean_tree";
	return 0;
}

Cocean_tree::Cocean_tree()
{
	this->my_init();
}

Cocean_tree::~Cocean_tree()
{

}

#ifndef OCEAN_TREE_TEST
#define OCEAN_TREE_TEST 0//1
#endif

#if OCEAN_TREE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
