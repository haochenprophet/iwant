#ifndef ROCKET_H
#define ROCKET_H

#include "../object.h"

namespace n_rocket {
	class Crocket :public Object
	{
	public:
		Crocket();
		~Crocket();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket); }
	};
}

using namespace n_rocket;

#endif
