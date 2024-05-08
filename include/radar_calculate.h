#ifndef RADAR_CALCULATE_H
#define RADAR_CALCULATE_H

#include "../object.h"

namespace n_radar_calculate {
	class Cradar_calculate :public Object
	{
	public:
		Cradar_calculate();
		~Cradar_calculate();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_calculate); }
	};
}

using namespace n_radar_calculate;

#endif
