#ifndef SECURITY_SIZE_H
#define SECURITY_SIZE_H

#include "object/object.h"

namespace n_security_size {
	class Csecurity_size :public Object
	{
	public:
		Csecurity_size();
		~Csecurity_size();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_size); }
	};
}

using namespace n_security_size;

#endif
