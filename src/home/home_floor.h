#ifndef HOME_FLOOR_H
#define HOME_FLOOR_H

#include "object/object.h"

namespace n_home_floor {
	class Chome_floor :public Object
	{
	public:
		Chome_floor();
		~Chome_floor();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_floor); }
	};
}

using namespace n_home_floor;

#endif
