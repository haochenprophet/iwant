#ifndef HOME_SLEEP_H
#define HOME_SLEEP_H

#include "object/object.h"

namespace n_home_sleep {
	class Chome_sleep :public Object
	{
	public:
		Chome_sleep();
		~Chome_sleep();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_sleep); }
	};
}

using namespace n_home_sleep;

#endif
