#ifndef AIRPLANE_ELEVATOR_H
#define AIRPLANE_ELEVATOR_H

#include "object/object.h"

namespace n_airplane_elevator {
	class Cairplane_elevator :public Object
	{
	public:
		Cairplane_elevator();
		~Cairplane_elevator();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_elevator); }
	};
}

using namespace n_airplane_elevator;

#endif
