#ifndef OCEAN_WAVE_H
#define OCEAN_WAVE_H

#include "object/object.h"

namespace n_ocean_wave {
	class Cocean_wave :public Object
	{
	public:
		Cocean_wave();
		~Cocean_wave();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_wave); }
	};
}

using namespace n_ocean_wave;

#endif
