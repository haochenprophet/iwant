#ifndef SPACEPORT_MESSAGE_H
#define SPACEPORT_MESSAGE_H

#include "object/object.h"

namespace n_spaceport_message {
	class Cspaceport_message :public Object
	{
	public:
		Cspaceport_message();
		~Cspaceport_message();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_message); }
	};
}

using namespace n_spaceport_message;

#endif
