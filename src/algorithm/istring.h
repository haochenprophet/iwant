#ifndef ISTRING_H
#define ISTRING_H

#include "object/object.h"

namespace n_istring {
	class Cistring :public Object
	{
	public:
		Cistring();
		~Cistring();
		int my_init(void *p=nullptr);
	};
}

using namespace n_istring;

#endif
