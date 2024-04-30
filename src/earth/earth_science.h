#ifndef EARTH_SCIENCE_H
#define EARTH_SCIENCE_H

#include "../object.h"

namespace n_earth_science {
	class Cearth_science :public Object
	{
	public:
		Cearth_science();
		~Cearth_science();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_science); }
	};
}

using namespace n_earth_science;

#endif
