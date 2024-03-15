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

int Ctree::traversal(Ctree* tree, Ctree_func* tree_func)
{
	int node_count = 0;//root node =0
	tree_node* node;

	for (tree_list::iterator it = tree->list.begin(); it != tree->list.end(); ++it)
	{
		node = (tree_node*)*it;
		node_count+= node->traversal(node, tree_func);
	}

	return node_count;
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
	std::cout << "Ctree size=" << tree.my_size() << "-Ctree uuid=" <<tree.my_uuid()<< endl;

	tree_node node[5];
	tree_node sub_node[5];
	Ctree_func tree_func;

	for (int n = 0; n < 5; n++)
	{
		node[n] += & sub_node[n];
		tree += & node[n];
	}

	tree.traversal(&tree,&tree_func);

	return 0;
}
#endif
