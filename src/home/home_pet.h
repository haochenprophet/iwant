#ifndef HOME_PET_H
#define HOME_PET_H

#include "../object.h"

namespace n_home_pet {
	class Chome_pet :public Object
	{
	public:
		Chome_pet();
		~Chome_pet();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_pet); }
	};
}

using namespace n_home_pet;

#endif
