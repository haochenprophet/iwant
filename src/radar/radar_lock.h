#ifndef RADAR_LOCK_H
#define RADAR_LOCK_H

#include "../object.h"

namespace n_radar_lock {
	class Cradar_lock :public Object
	{
	public:
		Cradar_lock();
		~Cradar_lock();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_lock); }
	};
}

using namespace n_radar_lock;

#endif
