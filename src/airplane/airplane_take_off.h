#ifndef AIRPLANE_TAKE_OFF_H
#define AIRPLANE_TAKE_OFF_H

#include "object/object.h"

namespace n_airplane_take_off {
	class Cairplane_take_off :public Object
	{
	public:
		Cairplane_take_off();
		~Cairplane_take_off();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_take_off); }
	};
}

using namespace n_airplane_take_off;

#endif
