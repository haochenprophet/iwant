#ifndef MATERIAL_ACTION_BUY_H
#define MATERIAL_ACTION_BUY_H

#include "object/object.h"

namespace n_material_action_buy {
	class Cmaterial_action_buy :public Object
	{
	public:
		Cmaterial_action_buy();
		~Cmaterial_action_buy();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_action_buy); }
	};
}

using namespace n_material_action_buy;

#endif
