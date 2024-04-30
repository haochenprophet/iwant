#ifndef HOME_COOK_H
#define HOME_COOK_H

#include "../object.h"

namespace n_home_cook {
	class Chome_cook :public Object
	{
	public:
		Chome_cook();
		~Chome_cook();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_cook); }
	};
}

using namespace n_home_cook;

#endif
