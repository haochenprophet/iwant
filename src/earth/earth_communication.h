#ifndef EARTH_COMMUNICATION_H
#define EARTH_COMMUNICATION_H

#include "../object.h"

namespace n_earth_communication {
	class Cearth_communication :public Object
	{
	public:
		Cearth_communication();
		~Cearth_communication();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_communication); }
	};
}

using namespace n_earth_communication;

#endif
