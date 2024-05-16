#ifndef AIRPLANE_AIRFOIL_TRAILING_H
#define AIRPLANE_AIRFOIL_TRAILING_H

#include "object/object.h"

namespace n_airplane_airfoil_trailing {
	class Cairplane_airfoil_trailing :public Object
	{
	public:
		Cairplane_airfoil_trailing();
		~Cairplane_airfoil_trailing();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_airfoil_trailing); }
	};
}

using namespace n_airplane_airfoil_trailing;

#endif
