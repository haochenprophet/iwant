#ifndef RADAR_WIDTH_H
#define RADAR_WIDTH_H

#include "../object.h"

namespace n_radar_width {
	class Cradar_width :public Object
	{
	public:
		Cradar_width();
		~Cradar_width();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_width); }
	};
}

using namespace n_radar_width;

#endif
