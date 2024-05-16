#ifndef RADAR_ACTION_H
#define RADAR_ACTION_H

#include "object/object.h"

namespace n_radar_action {
	class Cradar_action :public Object
	{
	public:
		Cradar_action();
		~Cradar_action();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_action); }
	};
}

using namespace n_radar_action;

#endif
