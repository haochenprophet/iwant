#ifndef STRSTR_H
#define STRSTR_H

#include "object/object.h"

namespace n_strstr {
	class Cstrstr :public Object
	{
	public:
		Cstrstr();
		~Cstrstr();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strstr;

#endif
