#include "spaceport_tree.h"
int Cspaceport_tree::my_init(void *p)
{
	this->name = "Cspaceport_tree";
	this->alias = "spaceport_tree";
	return 0;
}

Cspaceport_tree::Cspaceport_tree()
{
	this->my_init();
}

Cspaceport_tree::~Cspaceport_tree()
{

}

#ifndef SPACEPORT_TREE_TEST
#define SPACEPORT_TREE_TEST 0//1
#endif

#if SPACEPORT_TREE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
