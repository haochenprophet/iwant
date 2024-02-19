#include "tree.h"
int Ctree::my_init(void *p)
{
	this->name = "Ctree";
	this->alias = "tree";
	return 0;
}

Ctree::Ctree()
{
	this->my_init();
}

Ctree::~Ctree()
{

}

#ifndef TREE_TEST
#define TREE_TEST 0//1
#endif

#if TREE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;
	Ctree tree;
	std::cout << "Ctree size=" << tree.my_size() << endl;

	return 0;
}
#endif
