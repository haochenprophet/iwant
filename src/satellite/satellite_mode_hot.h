#ifndef SATELLITE_MODE_HOT_H
#define SATELLITE_MODE_HOT_H

#include "object/object.h"

namespace n_satellite_mode_hot {
	class Csatellite_mode_hot :public Object
	{
	public:
		Csatellite_mode_hot();
		~Csatellite_mode_hot();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_mode_hot); }
	};
}

using namespace n_satellite_mode_hot;

#endif
