#ifndef OCEAN_MOVE_H
#define OCEAN_MOVE_H

#include "../object.h"

namespace n_ocean_move {
	class Cocean_move :public Object
	{
	public:
		Cocean_move();
		~Cocean_move();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_move); }
	};
}

using namespace n_ocean_move;

#endif
