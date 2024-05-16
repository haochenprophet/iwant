#ifndef CAR_TREE_H
#define CAR_TREE_H

#include "object/object.h"

namespace n_car_tree {
	class Ccar_tree :public Object
	{
	public:
		Ccar_tree();
		~Ccar_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_tree); }
	};
}

using namespace n_car_tree;

#endif
