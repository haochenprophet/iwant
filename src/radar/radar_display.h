#ifndef RADAR_DISPLAY_H
#define RADAR_DISPLAY_H

#include "object/object.h"

namespace n_radar_display {
	class Cradar_display :public Object
	{
	public:
		Cradar_display();
		~Cradar_display();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_display); }
	};
}

using namespace n_radar_display;

#endif
