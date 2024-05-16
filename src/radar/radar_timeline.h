#ifndef RADAR_TIMELINE_H
#define RADAR_TIMELINE_H

#include "object/object.h"

namespace n_radar_timeline {
	class Cradar_timeline :public Object
	{
	public:
		Cradar_timeline();
		~Cradar_timeline();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_timeline); }
	};
}

using namespace n_radar_timeline;

#endif
