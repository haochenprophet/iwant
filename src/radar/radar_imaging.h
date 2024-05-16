#ifndef RADAR_IMAGING_H
#define RADAR_IMAGING_H

#include "object/object.h"

namespace n_radar_imaging {
	class Cradar_imaging :public Object
	{
	public:
		Cradar_imaging();
		~Cradar_imaging();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_imaging); }
	};
}

using namespace n_radar_imaging;

#endif
