#ifndef HOME_LOCATION_H
#define HOME_LOCATION_H

#include "../object.h"

namespace n_home_location {
	class Chome_location :public Object
	{
	public:
		Chome_location();
		~Chome_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_location); }
	};
}

using namespace n_home_location;

#endif
