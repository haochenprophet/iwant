#ifndef HOME_WASTE_H
#define HOME_WASTE_H

#include "../object.h"

namespace n_home_waste {
	class Chome_waste :public Object
	{
	public:
		Chome_waste();
		~Chome_waste();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_waste); }
	};
}

using namespace n_home_waste;

#endif
