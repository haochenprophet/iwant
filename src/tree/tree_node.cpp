#include "tree_node.h"

int total_node_id = 0;

tree_node::tree_node()
{
	this->node_id = ++ total_node_id;
	this->type = 0;
	this->property = 0;
}

int tree_node::get_id(bool display)
{
	if (display)
	{
		std::cout << "node_id=" << this->node_id << endl;
	}
	return this->node_id;
}

int tree_node::traversal(tree_node* node)
{//	WHERE_I;
	int node_count = 0;//root node =0
	tree_node * sub_node;

	node->get_id();

	for (tree_sub_node::iterator it = node->sub_node.begin(); it != node->sub_node.end(); ++it)
	{
		sub_node =(tree_node*) *it;
		sub_node->get_id();
	}

	return node_count;
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
