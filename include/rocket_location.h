#ifndef ROCKET_LOCATION_H
#define ROCKET_LOCATION_H

#include "../object.h"

namespace n_rocket_location {
	class Crocket_location :public Object
	{
	public:
		Crocket_location();
		~Crocket_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_location); }
	};
}

using namespace n_rocket_location;

#endif
