#ifndef RADAR_WEIGHT_H
#define RADAR_WEIGHT_H

#include "object/object.h"

namespace n_radar_weight {
	class Cradar_weight :public Object
	{
	public:
		Cradar_weight();
		~Cradar_weight();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_weight); }
	};
}

using namespace n_radar_weight;

#endif
