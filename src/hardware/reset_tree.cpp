#include "reset_tree.h"
int Creset_tree::my_init(void *p)
{
	this->name = "Creset_tree";
	this->alias = "reset_tree";
	return 0;
}

Creset_tree::Creset_tree()
{
	this->my_init();
}

Creset_tree::~Creset_tree()
{

}

#ifndef RESET_TREE_TEST
#define RESET_TREE_TEST 0//1
#endif

#if RESET_TREE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
