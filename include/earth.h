#ifndef EARTH_H
#define EARTH_H

#include "../object.h"

namespace n_earth {
	class Cearth :public Object
	{
	public:
		Cearth();
		~Cearth();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth); }
	};
}

using namespace n_earth;

#endif
