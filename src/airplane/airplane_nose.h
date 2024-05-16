#ifndef AIRPLANE_NOSE_H
#define AIRPLANE_NOSE_H

#include "object/object.h"

namespace n_airplane_nose {
	class Cairplane_nose :public Object
	{
	public:
		Cairplane_nose();
		~Cairplane_nose();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_nose); }
	};
}

using namespace n_airplane_nose;

#endif
