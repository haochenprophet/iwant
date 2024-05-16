#ifndef RADAR_FREQUENCY_H
#define RADAR_FREQUENCY_H

#include "object/object.h"

namespace n_radar_frequency {
	class Cradar_frequency :public Object
	{
	public:
		Cradar_frequency();
		~Cradar_frequency();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_frequency); }
	};
}

using namespace n_radar_frequency;

#endif
