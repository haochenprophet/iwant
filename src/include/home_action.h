#ifndef HOME_ACTION_H
#define HOME_ACTION_H

#include "../object.h"

namespace n_home_action {
	class Chome_action :public Object
	{
	public:
		Chome_action();
		~Chome_action();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_action); }
	};
}

using namespace n_home_action;

#endif
