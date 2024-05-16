#ifndef RADAR_HARDWARE_H
#define RADAR_HARDWARE_H

#include "object/object.h"

namespace n_radar_hardware {
	class Cradar_hardware :public Object
	{
	public:
		Cradar_hardware();
		~Cradar_hardware();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_hardware); }
	};
}

using namespace n_radar_hardware;

#endif
