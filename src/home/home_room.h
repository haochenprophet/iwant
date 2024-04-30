#ifndef HOME_ROOM_H
#define HOME_ROOM_H

#include "../object.h"

namespace n_home_room {
	class Chome_room :public Object
	{
	public:
		Chome_room();
		~Chome_room();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_room); }
	};
}

using namespace n_home_room;

#endif
