#ifndef STRING_H
#define STRING_H

#include "object.h"

namespace n_string {
	class Cstring :public Object
	{
	public:
		Cstring();
		~Cstring();
		int my_init(void *p=nullptr);
	};
}

using namespace n_string;

#endif
