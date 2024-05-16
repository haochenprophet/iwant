#ifndef AIRPLANE_HOLD_H
#define AIRPLANE_HOLD_H

#include "object/object.h"

namespace n_airplane_hold {
	class Cairplane_hold :public Object
	{
	public:
		Cairplane_hold();
		~Cairplane_hold();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_hold); }
	};
}

using namespace n_airplane_hold;

#endif
