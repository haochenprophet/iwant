#ifndef RADAR_REPAIR_H
#define RADAR_REPAIR_H

#include "object/object.h"

namespace n_radar_repair {
	class Cradar_repair :public Object
	{
	public:
		Cradar_repair();
		~Cradar_repair();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_repair); }
	};
}

using namespace n_radar_repair;

#endif
