#ifndef ROCKET_HIGH_H
#define ROCKET_HIGH_H

#include "object/object.h"

namespace n_rocket_high {
	class Crocket_high :public Object
	{
	public:
		Crocket_high();
		~Crocket_high();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_high); }
	};
}

using namespace n_rocket_high;

#endif
