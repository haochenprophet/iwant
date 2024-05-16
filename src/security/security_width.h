#ifndef SECURITY_WIDTH_H
#define SECURITY_WIDTH_H

#include "object/object.h"

namespace n_security_width {
	class Csecurity_width :public Object
	{
	public:
		Csecurity_width();
		~Csecurity_width();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_width); }
	};
}

using namespace n_security_width;

#endif
