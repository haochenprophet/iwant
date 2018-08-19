#ifndef FLOOR_H
#define FLOOR_H

#include "../object.h"

namespace n_floor {
	class Cfloor :public Object
	{
	public:
		Cfloor();
		~Cfloor();
		int my_init(void *p=nullptr);
	};
}

using namespace n_floor;

#endif
