#ifndef OCEAN_ESCAPE_H
#define OCEAN_ESCAPE_H

#include "../object.h"

namespace n_ocean_escape {
	class Cocean_escape :public Object
	{
	public:
		Cocean_escape();
		~Cocean_escape();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_escape); }
	};
}

using namespace n_ocean_escape;

#endif
