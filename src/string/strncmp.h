#ifndef STRNCMP_H
#define STRNCMP_H

#include "object/object.h"

namespace n_strncmp {
	class Cstrncmp :public Object
	{
	public:
		Cstrncmp();
		~Cstrncmp();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strncmp;

#endif
