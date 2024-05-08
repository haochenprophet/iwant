#ifndef RADAR_SIZE_H
#define RADAR_SIZE_H

#include "../object.h"

namespace n_radar_size {
	class Cradar_size :public Object
	{
	public:
		Cradar_size();
		~Cradar_size();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_size); }
	};
}

using namespace n_radar_size;

#endif
