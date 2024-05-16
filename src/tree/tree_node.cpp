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

int tree_node::traversal(tree_node* node, Ctree_func* tree_func)
{//	WHERE_I;
	int node_count = 0;//root node =0

	if (tree_func != nullptr) tree_func->runme((void*)node);

	for (tree_sub_node::iterator it = node->sub_node.begin(); it != node->sub_node.end(); ++it)
	{
		if (tree_func != nullptr) tree_func->runme(*it);
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
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
