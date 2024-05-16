#ifndef STR_H
#define STR_H

#include "object/object.h"

namespace n_STR {
	class CSTR :public Object
	{
	public:
		CSTR();
		~CSTR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_STR;

#endif
