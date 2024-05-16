#ifndef RADAR_CIRCLE_H
#define RADAR_CIRCLE_H

#include "object/object.h"

namespace n_radar_circle {
	class Cradar_circle :public Object
	{
	public:
		Cradar_circle();
		~Cradar_circle();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_circle); }
	};
}

using namespace n_radar_circle;

#endif
