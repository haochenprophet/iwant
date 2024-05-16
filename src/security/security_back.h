#ifndef SECURITY_BACK_H
#define SECURITY_BACK_H

#include "object/object.h"

namespace n_security_back {
	class Csecurity_back :public Object
	{
	public:
		Csecurity_back();
		~Csecurity_back();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_back); }
	};
}

using namespace n_security_back;

#endif
