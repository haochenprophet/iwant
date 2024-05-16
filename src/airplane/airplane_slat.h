#ifndef AIRPLANE_SLAT_H
#define AIRPLANE_SLAT_H

#include "object/object.h"

namespace n_airplane_slat {
	class Cairplane_slat :public Object
	{
	public:
		Cairplane_slat();
		~Cairplane_slat();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_slat); }
	};
}

using namespace n_airplane_slat;

#endif
