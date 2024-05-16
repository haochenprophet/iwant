#ifndef OCEAN_TREE_H
#define OCEAN_TREE_H

#include "object/object.h"

namespace n_ocean_tree {
	class Cocean_tree :public Object
	{
	public:
		Cocean_tree();
		~Cocean_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_tree); }
	};
}

using namespace n_ocean_tree;

#endif
