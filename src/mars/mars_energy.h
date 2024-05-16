#ifndef MARS_ENERGY_H
#define MARS_ENERGY_H

#include "object/object.h"

namespace n_mars_energy {
	class Cmars_energy :public Object
	{
	public:
		Cmars_energy();
		~Cmars_energy();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_energy); }
	};
}

using namespace n_mars_energy;

#endif
