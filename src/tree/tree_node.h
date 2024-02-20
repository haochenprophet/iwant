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
		int node_id;
		tree_sub_node sub_node;
		tree_data data;
	public:
		tree_node();
	public:
		size_t sub_node_count() { return this->sub_node.size(); }
		void add_sub_node(tree_node* node) { this->sub_node.push_back((void *)node); }
	};

	class Ctree_node :public Object
	{
	public:
		tree_node node;
	public:
		Ctree_node();
		~Ctree_node();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctree_node); }
	};
}

using namespace n_tree_node;

#endif
