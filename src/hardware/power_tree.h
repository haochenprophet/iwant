#ifndef POWER_TREE_H
#define POWER_TREE_H

#include "object/object.h"

namespace n_power_tree {
	class Cpower_tree :public Object
	{
	public:
		Cpower_tree();
		~Cpower_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cpower_tree); }
	};
}

using namespace n_power_tree;

#endif
