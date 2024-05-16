#ifndef AIRPLANE_AIRFOIL_H
#define AIRPLANE_AIRFOIL_H

#include "object/object.h"

namespace n_airplane_airfoil {
	class Cairplane_airfoil :public Object
	{
	public:
		Cairplane_airfoil();
		~Cairplane_airfoil();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_airfoil); }
	};
}

using namespace n_airplane_airfoil;

#endif
