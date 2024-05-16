#ifndef LIFE_WALK_H
#define LIFE_WALK_H

#include "object/object.h"

namespace n_life_walk {
	class Clife_walk :public Object
	{
	public:
		Clife_walk();
		~Clife_walk();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_walk); }
	};
}

using namespace n_life_walk;

#endif
