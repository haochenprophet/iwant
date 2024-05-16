#ifndef AIRPLANE_TAIL_H
#define AIRPLANE_TAIL_H

#include "object/object.h"

namespace n_airplane_tail {
	class Cairplane_tail :public Object
	{
	public:
		Cairplane_tail();
		~Cairplane_tail();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_tail); }
	};
}

using namespace n_airplane_tail;

#endif
