#ifndef MATERIAL_ACTION_H
#define MATERIAL_ACTION_H

#include "object/object.h"

namespace n_material_action {
	class Cmaterial_action :public Object
	{
	public:
		Cmaterial_action();
		~Cmaterial_action();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_action); }
	};
}

using namespace n_material_action;

#endif
