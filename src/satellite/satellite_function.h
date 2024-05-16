#ifndef SATELLITE_FUNCTION_H
#define SATELLITE_FUNCTION_H

#include "object/object.h"

namespace n_satellite_function {
	class Csatellite_function :public Object
	{
	public:
		Csatellite_function();
		~Csatellite_function();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_function); }
	};
}

using namespace n_satellite_function;

#endif
