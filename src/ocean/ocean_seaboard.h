#ifndef OCEAN_SEABOARD_H
#define OCEAN_SEABOARD_H

#include "../object.h"

namespace n_ocean_seaboard {
	class Cocean_seaboard :public Object
	{
	public:
		Cocean_seaboard();
		~Cocean_seaboard();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_seaboard); }
	};
}

using namespace n_ocean_seaboard;

#endif
