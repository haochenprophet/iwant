#ifndef ROCKET_HEAD_H
#define ROCKET_HEAD_H

#include "object/object.h"

namespace n_rocket_head {
	class Crocket_head :public Object
	{
	public:
		Crocket_head();
		~Crocket_head();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_head); }
	};
}

using namespace n_rocket_head;

#endif
