#ifndef RADAR_RADII_H
#define RADAR_RADII_H

#include "../object.h"

namespace n_radar_radii {
	class Cradar_radii :public Object
	{
	public:
		Cradar_radii();
		~Cradar_radii();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_radii); }
	};
}

using namespace n_radar_radii;

#endif
