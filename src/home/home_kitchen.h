#ifndef HOME_KITCHEN_H
#define HOME_KITCHEN_H

#include "object/object.h"

namespace n_home_kitchen {
	class Chome_kitchen :public Object
	{
	public:
		Chome_kitchen();
		~Chome_kitchen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_kitchen); }
	};
}

using namespace n_home_kitchen;

#endif
