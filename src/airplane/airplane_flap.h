#ifndef AIRPLANE_FLAP_H
#define AIRPLANE_FLAP_H

#include "object/object.h"

namespace n_airplane_flap {
	class Cairplane_flap :public Object
	{
	public:
		Cairplane_flap();
		~Cairplane_flap();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_flap); }
	};
}

using namespace n_airplane_flap;

#endif
