#ifndef LIFE_EAT_H
#define LIFE_EAT_H

#include "object/object.h"

namespace n_life_eat {
	class Clife_eat :public Object
	{
	public:
		Clife_eat();
		~Clife_eat();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_eat); }
	};
}

using namespace n_life_eat;

#endif
