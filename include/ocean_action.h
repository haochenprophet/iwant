#ifndef OCEAN_ACTION_H
#define OCEAN_ACTION_H

#include "../object.h"

namespace n_ocean_action {
	class Cocean_action :public Object
	{
	public:
		Cocean_action();
		~Cocean_action();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_action); }
	};
}

using namespace n_ocean_action;

#endif
