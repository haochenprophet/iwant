#ifndef OCEAN_ABOUT_H
#define OCEAN_ABOUT_H

#include "object/object.h"

namespace n_ocean_about {
	class Cocean_about :public Object
	{
	public:
		Cocean_about();
		~Cocean_about();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_about); }
	};
}

using namespace n_ocean_about;

#endif
