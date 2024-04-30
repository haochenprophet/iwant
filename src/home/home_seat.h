#ifndef HOME_SEAT_H
#define HOME_SEAT_H

#include "../object.h"

namespace n_home_seat {
	class Chome_seat :public Object
	{
	public:
		Chome_seat();
		~Chome_seat();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_seat); }
	};
}

using namespace n_home_seat;

#endif
