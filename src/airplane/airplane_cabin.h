#ifndef AIRPLANE_CABIN_H
#define AIRPLANE_CABIN_H

#include "object/object.h"

namespace n_airplane_cabin {
	class Cairplane_cabin :public Object
	{
	public:
		Cairplane_cabin();
		~Cairplane_cabin();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_cabin); }
	};
}

using namespace n_airplane_cabin;

#endif
