#ifndef OCEAN_BIONT_H
#define OCEAN_BIONT_H

#include "../object.h"

namespace n_ocean_biont {
	class Cocean_biont :public Object
	{
	public:
		Cocean_biont();
		~Cocean_biont();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_biont); }
	};
}

using namespace n_ocean_biont;

#endif
