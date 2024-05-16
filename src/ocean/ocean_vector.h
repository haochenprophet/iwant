#ifndef OCEAN_VECTOR_H
#define OCEAN_VECTOR_H

#include "object/object.h"

namespace n_ocean_vector {
	class Cocean_vector :public Object
	{
	public:
		Cocean_vector();
		~Cocean_vector();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_vector); }
	};
}

using namespace n_ocean_vector;

#endif
