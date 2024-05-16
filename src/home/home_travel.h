#ifndef HOME_TRAVEL_H
#define HOME_TRAVEL_H

#include "object/object.h"

namespace n_home_travel {
	class Chome_travel :public Object
	{
	public:
		Chome_travel();
		~Chome_travel();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_travel); }
	};
}

using namespace n_home_travel;

#endif
