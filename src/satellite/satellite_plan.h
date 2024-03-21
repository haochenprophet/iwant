#ifndef SATELLITE_PLAN_H
#define SATELLITE_PLAN_H

#include "../object.h"

namespace n_satellite_plan {
	class Csatellite_plan :public Object
	{
	public:
		Csatellite_plan();
		~Csatellite_plan();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_plan); }
	};
}

using namespace n_satellite_plan;

#endif
