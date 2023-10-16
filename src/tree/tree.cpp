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
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
