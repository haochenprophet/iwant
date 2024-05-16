#ifndef RADAR_CONTROL_H
#define RADAR_CONTROL_H

#include "object/object.h"

namespace n_radar_control {
	class Cradar_control :public Object
	{
	public:
		Cradar_control();
		~Cradar_control();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_control); }
	};
}

using namespace n_radar_control;

#endif
