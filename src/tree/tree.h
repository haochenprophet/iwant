#ifndef TREE_H
#define TREE_H

#include "../object.h"
#include "tree_node.h"

namespace n_tree {

	typedef std::list<tree_node *> tree_list;

	class Ctree :public Object
	{
	public:
		tree_list list;
	public:
		Ctree();
		~Ctree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctree); }
	};
}

using namespace n_tree;

#endif
