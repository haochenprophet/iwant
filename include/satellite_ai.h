#ifndef SATELLITE_AI_H
#define SATELLITE_AI_H

#include "../object.h"

namespace n_satellite_ai {
	class Csatellite_ai :public Object
	{
	public:
		Csatellite_ai();
		~Csatellite_ai();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_ai); }
	};
}

using namespace n_satellite_ai;

#endif
