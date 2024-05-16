#ifndef AIRPLANE_CRUISE_H
#define AIRPLANE_CRUISE_H

#include "object/object.h"

namespace n_airplane_cruise {
	class Cairplane_cruise :public Object
	{
	public:
		Cairplane_cruise();
		~Cairplane_cruise();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_cruise); }
	};
}

using namespace n_airplane_cruise;

#endif
