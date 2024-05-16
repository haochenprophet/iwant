#ifndef OCEAN_LIST_H
#define OCEAN_LIST_H

#include "object/object.h"

namespace n_ocean_list {
	class Cocean_list :public Object
	{
	public:
		Cocean_list();
		~Cocean_list();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_list); }
	};
}

using namespace n_ocean_list;

#endif
