#ifndef OCEAN_MESSAGE_H
#define OCEAN_MESSAGE_H

#include "object/object.h"

namespace n_ocean_message {
	class Cocean_message :public Object
	{
	public:
		Cocean_message();
		~Cocean_message();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_message); }
	};
}

using namespace n_ocean_message;

#endif
