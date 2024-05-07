#ifndef EARTH_BIOLOGY_H
#define EARTH_BIOLOGY_H

#include "../object.h"

namespace n_earth_biology {
	class Cearth_biology :public Object
	{
	public:
		Cearth_biology();
		~Cearth_biology();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_biology); }
	};
}

using namespace n_earth_biology;

#endif
