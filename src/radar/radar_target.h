#ifndef RADAR_TARGET_H
#define RADAR_TARGET_H

#include "object/object.h"

namespace n_radar_target {
	class Cradar_target :public Object
	{
	public:
		Cradar_target();
		~Cradar_target();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_target); }
	};
}

using namespace n_radar_target;

#endif
