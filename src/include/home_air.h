#ifndef HOME_AIR_H
#define HOME_AIR_H

#include "../object.h"

namespace n_home_air {
	class Chome_air :public Object
	{
	public:
		Chome_air();
		~Chome_air();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_air); }
	};
}

using namespace n_home_air;

#endif
