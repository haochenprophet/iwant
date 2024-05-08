#ifndef WARSHIP_RADAR_H
#define WARSHIP_RADAR_H

#include "../object.h"

namespace n_warship_radar {
	class Cwarship_radar :public Object
	{
	public:
		Cwarship_radar();
		~Cwarship_radar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_radar); }
	};
}

using namespace n_warship_radar;

#endif
