#ifndef ROCKET_TAIL_H
#define ROCKET_TAIL_H

#include "object/object.h"

namespace n_rocket_tail {
	class Crocket_tail :public Object
	{
	public:
		Crocket_tail();
		~Crocket_tail();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_tail); }
	};
}

using namespace n_rocket_tail;

#endif
