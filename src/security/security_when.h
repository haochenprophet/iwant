#ifndef SECURITY_WHEN_H
#define SECURITY_WHEN_H

#include "object/object.h"

namespace n_security_when {
	class Csecurity_when :public Object
	{
	public:
		Csecurity_when();
		~Csecurity_when();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_when); }
	};
}

using namespace n_security_when;

#endif
