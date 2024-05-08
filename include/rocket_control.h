#ifndef ROCKET_CONTROL_H
#define ROCKET_CONTROL_H

#include "../object.h"

namespace n_rocket_control {
	class Crocket_control :public Object
	{
	public:
		Crocket_control();
		~Crocket_control();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_control); }
	};
}

using namespace n_rocket_control;

#endif
