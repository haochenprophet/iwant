#ifndef EARTH_ANIMAL_H
#define EARTH_ANIMAL_H

#include "object/object.h"

namespace n_earth_animal {
	class Cearth_animal :public Object
	{
	public:
		Cearth_animal();
		~Cearth_animal();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_animal); }
	};
}

using namespace n_earth_animal;

#endif
