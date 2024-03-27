#ifndef OCEAN_H
#define OCEAN_H

#include "../object.h"

namespace n_ocean {
	class Cocean :public Object
	{
	public:
		Cocean();
		~Cocean();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean); }
	};
}

using namespace n_ocean;

#endif
