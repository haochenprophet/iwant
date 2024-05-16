#ifndef RADAR_SYNCHRONISM_H
#define RADAR_SYNCHRONISM_H

#include "object/object.h"

namespace n_radar_synchronism {
	class Cradar_synchronism :public Object
	{
	public:
		Cradar_synchronism();
		~Cradar_synchronism();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_synchronism); }
	};
}

using namespace n_radar_synchronism;

#endif
