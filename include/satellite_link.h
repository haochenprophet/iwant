#ifndef SATELLITE_LINK_H
#define SATELLITE_LINK_H

#include "../object.h"

namespace n_satellite_link {
	class Csatellite_link :public Object
	{
	public:
		Csatellite_link();
		~Csatellite_link();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_link); }
	};
}

using namespace n_satellite_link;

#endif
