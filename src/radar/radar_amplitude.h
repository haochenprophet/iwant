#ifndef RADAR_AMPLITUDE_H
#define RADAR_AMPLITUDE_H

#include "object/object.h"

namespace n_radar_amplitude {
	class Cradar_amplitude :public Object
	{
	public:
		Cradar_amplitude();
		~Cradar_amplitude();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_amplitude); }
	};
}

using namespace n_radar_amplitude;

#endif
