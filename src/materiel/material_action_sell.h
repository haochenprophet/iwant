#ifndef MATERIAL_ACTION_SELL_H
#define MATERIAL_ACTION_SELL_H

#include "object/object.h"

namespace n_material_action_sell {
	class Cmaterial_action_sell :public Object
	{
	public:
		Cmaterial_action_sell();
		~Cmaterial_action_sell();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_action_sell); }
	};
}

using namespace n_material_action_sell;

#endif
