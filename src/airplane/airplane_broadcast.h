#ifndef AIRPLANE_BROADCAST_H
#define AIRPLANE_BROADCAST_H

#include "object/object.h"

namespace n_airplane_broadcast {
	class Cairplane_broadcast :public Object
	{
	public:
		Cairplane_broadcast();
		~Cairplane_broadcast();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_broadcast); }
	};
}

using namespace n_airplane_broadcast;

#endif
