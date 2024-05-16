#include "home_tree.h"
int Chome_tree::my_init(void *p)
{
	this->name = "Chome_tree";
	this->alias = "home_tree";
	return 0;
}

Chome_tree::Chome_tree()
{
	this->my_init();
}

Chome_tree::~Chome_tree()
{

}

#ifndef HOME_TREE_TEST
#define HOME_TREE_TEST 0//1
#endif

#if HOME_TREE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
