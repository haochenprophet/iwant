#ifndef TREE_NODE_H
#define TREE_NODE_H

#include "../object.h"
#include "tree_node.h"

namespace n_tree_node {

	typedef std::list<void*> tree_sub_node;
	typedef Udata tree_data;

	class tree_node 
	{
	public:
		tree_sub_node sub_node;
		tree_data data;
	};

	class Ctree_node :public Object
	{
	public:
		Ctree_node();
		~Ctree_node();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctree_node); }
	};
}

using namespace n_tree_node;

#endif
