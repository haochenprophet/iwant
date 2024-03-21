#ifndef SATELLITE_TASK_H
#define SATELLITE_TASK_H

#include "../object.h"

namespace n_satellite_task {
	class Csatellite_task :public Object
	{
	public:
		Csatellite_task();
		~Csatellite_task();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_task); }
	};
}

using namespace n_satellite_task;

#endif
