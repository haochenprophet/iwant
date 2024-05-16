#ifndef RADAR_SIGNAL_H
#define RADAR_SIGNAL_H

#include "object/object.h"

namespace n_radar_signal {
	class Cradar_signal :public Object
	{
	public:
		Cradar_signal();
		~Cradar_signal();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_signal); }
	};
}

using namespace n_radar_signal;

#endif
