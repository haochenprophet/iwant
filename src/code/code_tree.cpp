#include "code_tree.h"
int Ccode_tree::my_init(void *p)
{
	this->name = "Ccode_tree";
	this->alias = "code_tree";
	return 0;
}

Ccode_tree::Ccode_tree()
{
	this->my_init();
}

Ccode_tree::~Ccode_tree()
{

}

#ifndef CODE_TREE_TEST
#define CODE_TREE_TEST 0//1
#endif

#if CODE_TREE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
