#ifndef SATELLITE_STACK_H
#define SATELLITE_STACK_H

#include "../object.h"

namespace n_satellite_stack {
	class Csatellite_stack :public Object
	{
	public:
		Csatellite_stack();
		~Csatellite_stack();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_stack); }
	};
}

using namespace n_satellite_stack;

#endif
