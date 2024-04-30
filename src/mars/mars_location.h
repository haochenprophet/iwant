#ifndef MARS_LOCATION_H
#define MARS_LOCATION_H

#include "../object.h"

namespace n_mars_location {
	class Cmars_location :public Object
	{
	public:
		Cmars_location();
		~Cmars_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_location); }
	};
}

using namespace n_mars_location;

#endif
