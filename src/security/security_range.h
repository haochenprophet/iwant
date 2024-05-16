#ifndef SECURITY_RANGE_H
#define SECURITY_RANGE_H

#include "object/object.h"

namespace n_security_range {
	class Csecurity_range :public Object
	{
	public:
		Csecurity_range();
		~Csecurity_range();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_range); }
	};
}

using namespace n_security_range;

#endif
