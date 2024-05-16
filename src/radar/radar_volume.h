#ifndef RADAR_VOLUME_H
#define RADAR_VOLUME_H

#include "object/object.h"

namespace n_radar_volume {
	class Cradar_volume :public Object
	{
	public:
		Cradar_volume();
		~Cradar_volume();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_volume); }
	};
}

using namespace n_radar_volume;

#endif
