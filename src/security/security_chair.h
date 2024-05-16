#ifndef SECURITY_CHAIR_H
#define SECURITY_CHAIR_H

#include "object/object.h"

namespace n_security_chair {
	class Csecurity_chair :public Object
	{
	public:
		Csecurity_chair();
		~Csecurity_chair();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_chair); }
	};
}

using namespace n_security_chair;

#endif
