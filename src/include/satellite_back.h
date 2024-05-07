#ifndef SATELLITE_BACK_H
#define SATELLITE_BACK_H

#include "../object.h"

namespace n_satellite_back {
	class Csatellite_back :public Object
	{
	public:
		Csatellite_back();
		~Csatellite_back();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_back); }
	};
}

using namespace n_satellite_back;

#endif
