#ifndef RADAR_NAME_H
#define RADAR_NAME_H

#include "../object.h"

namespace n_radar_name {
	class Cradar_name :public Object
	{
	public:
		Cradar_name();
		~Cradar_name();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_name); }
	};
}

using namespace n_radar_name;

#endif
