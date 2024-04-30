#ifndef EARTH_TIMEZONE_H
#define EARTH_TIMEZONE_H

#include "../object.h"

namespace n_earth_timezone {
	class Cearth_timezone :public Object
	{
	public:
		Cearth_timezone();
		~Cearth_timezone();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_timezone); }
	};
}

using namespace n_earth_timezone;

#endif
