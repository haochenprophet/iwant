#ifndef RADAR_METEOROLOGY_H
#define RADAR_METEOROLOGY_H

#include "../object.h"

namespace n_radar_meteorology {
	class Cradar_meteorology :public Object
	{
	public:
		Cradar_meteorology();
		~Cradar_meteorology();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_meteorology); }
	};
}

using namespace n_radar_meteorology;

#endif
