#ifndef SATELLITE_COMPUTER_H
#define SATELLITE_COMPUTER_H

#include "object/object.h"

namespace n_satellite_computer {
	class Csatellite_computer :public Object
	{
	public:
		Csatellite_computer();
		~Csatellite_computer();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_computer); }
	};
}

using namespace n_satellite_computer;

#endif
