#ifndef STRCAT_H
#define STRCAT_H

#include "object/object.h"

namespace n_strcat {
	class Cstrcat :public Object
	{
	public:
		Cstrcat();
		~Cstrcat();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strcat;

#endif
