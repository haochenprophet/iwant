#ifndef SECURITY_TREE_H
#define SECURITY_TREE_H

#include "../object.h"

namespace n_security_tree {
	class Csecurity_tree :public Object
	{
	public:
		Csecurity_tree();
		~Csecurity_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_tree); }
	};
}

using namespace n_security_tree;

#endif
