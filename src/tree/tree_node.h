#ifndef TREE_NODE_H
#define TREE_NODE_H

#include "../object.h"
#include "tree_func.h"

namespace n_tree_node {

	typedef std::list<void *> tree_sub_node; //void* point to tree_node class 
	typedef Udata tree_data;

	class tree_node 
	{
	public:
		int node_id;
		int type; //node type
		int property ;
		tree_data data;
		tree_sub_node sub_node;
	public:
		tree_node();
	public:
		size_t sub_node_count() { return this->sub_node.size(); }
		void add_sub_node(tree_node* node) { this->sub_node.push_back((void *)node); }
		int get_id(bool display = true);
		int traversal(tree_node * node , Ctree_func * tree_func =nullptr);

	public://operator function 
		void operator += (tree_node * node) { this->add_sub_node(node); }
		void operator += (void * node) { this->sub_node.push_back(node); }
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
