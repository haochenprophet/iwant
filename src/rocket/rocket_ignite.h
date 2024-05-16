#ifndef ROCKET_IGNITE_H
#define ROCKET_IGNITE_H

#include "object/object.h"

namespace n_rocket_ignite {
	class Crocket_ignite :public Object
	{
	public:
		Crocket_ignite();
		~Crocket_ignite();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_ignite); }
	};
}

using namespace n_rocket_ignite;

#endif
