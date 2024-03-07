#ifndef TREE_H
#define TREE_H

#include "../object.h"
#include "tree_node.h"
#include "tree_func.h"

namespace n_tree {

	typedef std::list<tree_node *> tree_list;

	class Ctree :public Object
	{
	public:
		tree_list list;//tree[n] list 
	public:
		Ctree();
		~Ctree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctree); }
	public:
		int traversal(Ctree * tree,Ctree_func* tree_func = nullptr);
		void add(tree_node* tree) { this->list.push_back(tree); }

	public://operator function 
		void operator += (tree_node* tree) { this->add(tree); }
	};
}

using namespace n_tree;

#endif
