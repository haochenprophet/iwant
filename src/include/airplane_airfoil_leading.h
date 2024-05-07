#ifndef AIRPLANE_AIRFOIL_LEADING_H
#define AIRPLANE_AIRFOIL_LEADING_H

#include "../object.h"

namespace n_airplane_airfoil_leading {
	class Cairplane_airfoil_leading :public Object
	{
	public:
		Cairplane_airfoil_leading();
		~Cairplane_airfoil_leading();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_airfoil_leading); }
	};
}

using namespace n_airplane_airfoil_leading;

#endif
