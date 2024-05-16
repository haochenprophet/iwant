#ifndef SATELLITE_GO_H
#define SATELLITE_GO_H

#include "object/object.h"

namespace n_satellite_go {
	class Csatellite_go :public Object
	{
	public:
		Csatellite_go();
		~Csatellite_go();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_go); }
	};
}

using namespace n_satellite_go;

#endif
