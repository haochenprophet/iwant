#include "security_tree.h"
int Csecurity_tree::my_init(void *p)
{
	this->name = "Csecurity_tree";
	this->alias = "security_tree";
	return 0;
}

Csecurity_tree::Csecurity_tree()
{
	this->my_init();
}

Csecurity_tree::~Csecurity_tree()
{

}

#ifndef SECURITY_TREE_TEST
#define SECURITY_TREE_TEST 0//1
#endif

#if SECURITY_TREE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
