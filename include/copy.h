#ifndef COPY_H
#define COPY_H

#include "object.h"

namespace n_copy {
	class Ccopy :public Object
	{
	public:
		Ccopy();
		~Ccopy();
		int my_init(void *p=nullptr);
	};
}

using namespace n_copy;

#endif
