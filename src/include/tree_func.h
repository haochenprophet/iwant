#ifndef TREE_FUNC_H
#define TREE_FUNC_H

#include "../object.h"

namespace n_tree_func {
	class Ctree_func :public Object
	{
	public:
		Ctree_func();
		~Ctree_func();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctree_func); }
	public:
		virtual int runme(void * node);
	};
}

using namespace n_tree_func;

#endif
