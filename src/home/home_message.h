#ifndef HOME_MESSAGE_H
#define HOME_MESSAGE_H

#include "object/object.h"

namespace n_home_message {
	class Chome_message :public Object
	{
	public:
		Chome_message();
		~Chome_message();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_message); }
	};
}

using namespace n_home_message;

#endif
