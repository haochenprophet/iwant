#ifndef RADAR_EMISSION_H
#define RADAR_EMISSION_H

#include "object/object.h"

namespace n_radar_emission {
	class Cradar_emission :public Object
	{
	public:
		Cradar_emission();
		~Cradar_emission();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_emission); }
	};
}

using namespace n_radar_emission;

#endif
