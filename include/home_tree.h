#ifndef HOME_TREE_H
#define HOME_TREE_H

#include "../object.h"

namespace n_home_tree {
	class Chome_tree :public Object
	{
	public:
		Chome_tree();
		~Chome_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_tree); }
	};
}

using namespace n_home_tree;

#endif
