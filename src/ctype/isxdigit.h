#ifndef ISXDIGIT_H
#define ISXDIGIT_H

#include "object/object.h"

namespace n_isxdigit {
	class Cisxdigit :public Object
	{
	public:
		Cisxdigit();
		~Cisxdigit();
		int my_init(void *p=nullptr);
	};
}

using namespace n_isxdigit;

#endif
