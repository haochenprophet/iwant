#ifndef RADAR_ID_H
#define RADAR_ID_H

#include "object/object.h"

namespace n_radar_id {
	class Cradar_id :public Object
	{
	public:
		Cradar_id();
		~Cradar_id();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_id); }
	};
}

using namespace n_radar_id;

#endif
