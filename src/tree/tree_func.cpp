#include "tree_func.h"
#include "tree_node.h"

int Ctree_func::my_init(void *p)
{
	this->name = "Ctree_func";
	this->alias = "tree_func";
	return 0;
}

Ctree_func::Ctree_func()
{
	this->my_init();
}

Ctree_func::~Ctree_func()
{

}

int Ctree_func::runme(void* node)
{
	WHERE_I;
	return ((tree_node *)node)->get_id();
}

#ifndef TREE_FUNC_TEST
#define TREE_FUNC_TEST 0//1
#endif

#if TREE_FUNC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
