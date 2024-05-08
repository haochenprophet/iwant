#ifndef RESET_TREE_H
#define RESET_TREE_H

#include "../object.h"

namespace n_reset_tree {
	class Creset_tree :public Object
	{
	public:
		Creset_tree();
		~Creset_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Creset_tree); }
	};
}

using namespace n_reset_tree;

#endif
