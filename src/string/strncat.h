#ifndef STRNCAT_H
#define STRNCAT_H

#include "object/object.h"

namespace n_strncat {
	class Cstrncat :public Object
	{
	public:
		Cstrncat();
		~Cstrncat();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strncat;

#endif
