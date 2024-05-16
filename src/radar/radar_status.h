#ifndef RADAR_STATUS_H
#define RADAR_STATUS_H

#include "object/object.h"

namespace n_radar_status {
	class Cradar_status :public Object
	{
	public:
		Cradar_status();
		~Cradar_status();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_status); }
	};
}

using namespace n_radar_status;

#endif
