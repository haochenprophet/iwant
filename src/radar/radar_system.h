#ifndef RADAR_SYSTEM_H
#define RADAR_SYSTEM_H

#include "object/object.h"

namespace n_radar_system {
	class Cradar_system :public Object
	{
	public:
		Cradar_system();
		~Cradar_system();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_system); }
	};
}

using namespace n_radar_system;

#endif
