#ifndef SECURITY_KEY_H
#define SECURITY_KEY_H

#include "object/object.h"

namespace n_security_key {
	class Csecurity_key :public Object
	{
	public:
		Csecurity_key();
		~Csecurity_key();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_key); }
	};
}

using namespace n_security_key;

#endif
