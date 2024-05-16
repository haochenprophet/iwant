#ifndef AIRPLANE_UNDER_CARRIAGE_H
#define AIRPLANE_UNDER_CARRIAGE_H

#include "object/object.h"

namespace n_airplane_under_carriage {
	class Cairplane_under_carriage :public Object
	{
	public:
		Cairplane_under_carriage();
		~Cairplane_under_carriage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_under_carriage); }
	};
}

using namespace n_airplane_under_carriage;

#endif
