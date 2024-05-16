#ifndef OCEAN_TIMELINE_H
#define OCEAN_TIMELINE_H

#include "object/object.h"

namespace n_ocean_timeline {
	class Cocean_timeline :public Object
	{
	public:
		Cocean_timeline();
		~Cocean_timeline();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_timeline); }
	};
}

using namespace n_ocean_timeline;

#endif
