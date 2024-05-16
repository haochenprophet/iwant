#ifndef RADAR_PROCESS_H
#define RADAR_PROCESS_H

#include "object/object.h"

namespace n_radar_process {
	class Cradar_process :public Object
	{
	public:
		Cradar_process();
		~Cradar_process();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_process); }
	};
}

using namespace n_radar_process;

#endif
