#ifndef TREE_H
#define TREE_H

#include "../object.h"

namespace n_tree {
	class Ctree :public Object
	{
	public:
		Ctree();
		~Ctree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctree); }
	};
}

using namespace n_tree;

#endif
