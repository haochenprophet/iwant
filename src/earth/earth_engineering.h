#ifndef EARTH_ENGINEERING_H
#define EARTH_ENGINEERING_H

#include "object/object.h"

namespace n_earth_engineering {
	class Cearth_engineering :public Object
	{
	public:
		Cearth_engineering();
		~Cearth_engineering();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_engineering); }
	};
}

using namespace n_earth_engineering;

#endif
