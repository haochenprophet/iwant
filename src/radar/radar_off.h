#ifndef RADAR_OFF_H
#define RADAR_OFF_H

#include "object/object.h"

namespace n_radar_off {
	class Cradar_off :public Object
	{
	public:
		Cradar_off();
		~Cradar_off();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_off); }
	};
}

using namespace n_radar_off;

#endif
