#ifndef RADAR_TYPE_H
#define RADAR_TYPE_H

#include "../object.h"

namespace n_radar_type {
	class Cradar_type :public Object
	{
	public:
		Cradar_type();
		~Cradar_type();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_type); }
	};
}

using namespace n_radar_type;

#endif
