#include "tree_node.h"

int total_node_id = 0;

tree_node::tree_node()
{
	this->node_id = ++ total_node_id;
}

int Ctree_node::my_init(void *p)
{
	this->name = "Ctree_node";
	this->alias = "tree_node";
	return 0;
}

Ctree_node::Ctree_node()
{
	this->my_init();
}

Ctree_node::~Ctree_node()
{

}

#ifndef TREE_NODE_TEST
#define TREE_NODE_TEST 0//1
#endif

#if TREE_NODE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
