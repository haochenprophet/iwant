#ifndef HOME_WALL_H
#define HOME_WALL_H

#include "object/object.h"

namespace n_home_wall {
	class Chome_wall :public Object
	{
	public:
		Chome_wall();
		~Chome_wall();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_wall); }
	};
}

using namespace n_home_wall;

#endif
