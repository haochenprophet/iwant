#ifndef OCEAN_LOGO_H
#define OCEAN_LOGO_H

#include "../object.h"

namespace n_ocean_logo {
	class Cocean_logo :public Object
	{
	public:
		Cocean_logo();
		~Cocean_logo();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_logo); }
	};
}

using namespace n_ocean_logo;

#endif
