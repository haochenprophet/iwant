#ifndef EVENT_H
#define EVENT_H

#include "object/object.h"

namespace n_event {
	class Cevent :public Object
	{
	public:
		Cevent();
		int my_init(void *p=nullptr);
	};
}

using namespace n_event;

#endif
