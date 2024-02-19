#ifndef TREE_NODE_H
#define TREE_NODE_H

#include "../object.h"

namespace n_tree_node {
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
