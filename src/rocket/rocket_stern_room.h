#ifndef ROCKET_STERN_ROOM_H
#define ROCKET_STERN_ROOM_H

#include "object/object.h"

namespace n_rocket_stern_room {
	class Crocket_stern_room :public Object
	{
	public:
		Crocket_stern_room();
		~Crocket_stern_room();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_stern_room); }
	};
}

using namespace n_rocket_stern_room;

#endif
