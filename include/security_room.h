#ifndef SECURITY_ROOM_H
#define SECURITY_ROOM_H

#include "../object.h"

namespace n_security_room {
	class Csecurity_room :public Object
	{
	public:
		Csecurity_room();
		~Csecurity_room();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_room); }
	};
}

using namespace n_security_room;

#endif
