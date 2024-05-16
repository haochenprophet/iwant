#ifndef OCEAN_ANIMAL_H
#define OCEAN_ANIMAL_H

#include "object/object.h"

namespace n_ocean_animal {
	class Cocean_animal :public Object
	{
	public:
		Cocean_animal();
		~Cocean_animal();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_animal); }
	};
}

using namespace n_ocean_animal;

#endif
