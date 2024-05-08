#ifndef CLOCK_TREE_H
#define CLOCK_TREE_H

#include "../object.h"

namespace n_clock_tree {
	class Cclock_tree :public Object
	{
	public:
		Cclock_tree();
		~Cclock_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cclock_tree); }
	};
}

using namespace n_clock_tree;

#endif
