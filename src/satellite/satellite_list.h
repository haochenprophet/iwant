#ifndef SATELLITE_LIST_H
#define SATELLITE_LIST_H

#include "object/object.h"

namespace n_satellite_list {
	class Csatellite_list :public Object
	{
	public:
		Csatellite_list();
		~Csatellite_list();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_list); }
	};
}

using namespace n_satellite_list;

#endif
