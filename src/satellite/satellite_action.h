#ifndef SATELLITE_ACTION_H
#define SATELLITE_ACTION_H

#include "object/object.h"

namespace n_satellite_action {
	class Csatellite_action :public Object
	{
	public:
		Csatellite_action();
		~Csatellite_action();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_action); }
	};
}

using namespace n_satellite_action;

#endif
