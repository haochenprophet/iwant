#ifndef AIRPLANE_RADAR_H
#define AIRPLANE_RADAR_H

#include "../object.h"

namespace n_airplane_radar {
	class Cairplane_radar :public Object
	{
	public:
		Cairplane_radar();
		~Cairplane_radar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_radar); }
	};
}

using namespace n_airplane_radar;

#endif
