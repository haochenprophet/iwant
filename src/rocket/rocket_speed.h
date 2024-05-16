#ifndef ROCKET_SPEED_H
#define ROCKET_SPEED_H

#include "object/object.h"

namespace n_rocket_speed {
	class Crocket_speed :public Object
	{
	public:
		Crocket_speed();
		~Crocket_speed();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_speed); }
	};
}

using namespace n_rocket_speed;

#endif
