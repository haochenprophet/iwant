#ifndef RADAR_HEIGHT_H
#define RADAR_HEIGHT_H

#include "object/object.h"

namespace n_radar_height {
	class Cradar_height :public Object
	{
	public:
		Cradar_height();
		~Cradar_height();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_height); }
	};
}

using namespace n_radar_height;

#endif
