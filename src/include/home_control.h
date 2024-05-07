#ifndef HOME_CONTROL_H
#define HOME_CONTROL_H

#include "../object.h"

namespace n_home_control {
	class Chome_control :public Object
	{
	public:
		Chome_control();
		~Chome_control();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_control); }
	};
}

using namespace n_home_control;

#endif
