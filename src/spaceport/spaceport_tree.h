#ifndef SPACEPORT_TREE_H
#define SPACEPORT_TREE_H

#include "object/object.h"

namespace n_spaceport_tree {
	class Cspaceport_tree :public Object
	{
	public:
		Cspaceport_tree();
		~Cspaceport_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_tree); }
	};
}

using namespace n_spaceport_tree;

#endif
