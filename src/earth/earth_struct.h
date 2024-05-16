#ifndef EARTH_STRUCT_H
#define EARTH_STRUCT_H

#include "object/object.h"

namespace n_earth_struct {
	class Cearth_struct :public Object
	{
	public:
		Cearth_struct();
		~Cearth_struct();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_struct); }
	};
}

using namespace n_earth_struct;

#endif
