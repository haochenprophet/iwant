#ifndef CODE_TREE_H
#define CODE_TREE_H

#include "../object.h"

namespace n_code_tree {
	class Ccode_tree :public Object
	{
	public:
		Ccode_tree();
		~Ccode_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_tree); }
	};
}

using namespace n_code_tree;

#endif
