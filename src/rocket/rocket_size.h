#ifndef ROCKET_SIZE_H
#define ROCKET_SIZE_H

#include "object/object.h"

namespace n_rocket_size {
	class Crocket_size :public Object
	{
	public:
		Crocket_size();
		~Crocket_size();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_size); }
	};
}

using namespace n_rocket_size;

#endif
