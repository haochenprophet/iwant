#ifndef MATERIAL_TREE_H
#define MATERIAL_TREE_H

#include "object/object.h"

namespace n_material_tree {
	class Cmaterial_tree :public Object
	{
	public:
		Cmaterial_tree();
		~Cmaterial_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_tree); }
	};
}

using namespace n_material_tree;

#endif
