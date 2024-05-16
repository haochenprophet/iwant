#ifndef AIRPLANE_LANDS_H
#define AIRPLANE_LANDS_H

#include "object/object.h"

namespace n_airplane_lands {
	class Cairplane_lands :public Object
	{
	public:
		Cairplane_lands();
		~Cairplane_lands();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_lands); }
	};
}

using namespace n_airplane_lands;

#endif
