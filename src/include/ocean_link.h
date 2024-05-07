#ifndef OCEAN_LINK_H
#define OCEAN_LINK_H

#include "../object.h"

namespace n_ocean_link {
	class Cocean_link :public Object
	{
	public:
		Cocean_link();
		~Cocean_link();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_link); }
	};
}

using namespace n_ocean_link;

#endif
