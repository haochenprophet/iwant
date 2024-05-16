#include "clock_tree.h"
int Cclock_tree::my_init(void *p)
{
	this->name = "Cclock_tree";
	this->alias = "clock_tree";
	return 0;
}

Cclock_tree::Cclock_tree()
{
	this->my_init();
}

Cclock_tree::~Cclock_tree()
{

}

#ifndef CLOCK_TREE_TEST
#define CLOCK_TREE_TEST 0//1
#endif

#if CLOCK_TREE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
