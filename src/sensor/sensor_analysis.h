#ifndef SENSOR_ANALYSIS_H
#define SENSOR_ANALYSIS_H

#include "object.h"

namespace n_sensor_analysis {
	class Csensor_analysis :public Object
	{
	public:
		Csensor_analysis();
		~Csensor_analysis();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_analysis); }
	};
}

using namespace n_sensor_analysis;

#endif
