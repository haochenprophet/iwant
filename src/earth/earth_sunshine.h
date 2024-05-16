#ifndef EARTH_SUNSHINE_H
#define EARTH_SUNSHINE_H

#include "object/object.h"

namespace n_earth_sunshine {
	class Cearth_sunshine :public Object
	{
	public:
		Cearth_sunshine();
		~Cearth_sunshine();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_sunshine); }
	};
}

using namespace n_earth_sunshine;

#endif
