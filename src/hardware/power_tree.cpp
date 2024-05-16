#include "power_tree.h"
int Cpower_tree::my_init(void *p)
{
	this->name = "Cpower_tree";
	this->alias = "power_tree";
	return 0;
}

Cpower_tree::Cpower_tree()
{
	this->my_init();
}

Cpower_tree::~Cpower_tree()
{

}

#ifndef POWER_TREE_TEST
#define POWER_TREE_TEST 0//1
#endif

#if POWER_TREE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
