#ifndef SATELLITE_VECTOR_H
#define SATELLITE_VECTOR_H

#include "object/object.h"

namespace n_satellite_vector {
	class Csatellite_vector :public Object
	{
	public:
		Csatellite_vector();
		~Csatellite_vector();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_vector); }
	};
}

using namespace n_satellite_vector;

#endif
