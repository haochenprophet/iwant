#ifndef SPACEPORT_ROOM_H
#define SPACEPORT_ROOM_H

#include "../object.h"

namespace n_spaceport_room {
	class Cspaceport_room :public Object
	{
	public:
		Cspaceport_room();
		~Cspaceport_room();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_room); }
	};
}

using namespace n_spaceport_room;

#endif
