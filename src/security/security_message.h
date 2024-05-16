#ifndef SECURITY_MESSAGE_H
#define SECURITY_MESSAGE_H

#include "object/object.h"

namespace n_security_message {
	class Csecurity_message :public Object
	{
	public:
		Csecurity_message();
		~Csecurity_message();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_message); }
	};
}

using namespace n_security_message;

#endif
