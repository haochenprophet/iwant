#ifndef _ERROR_H
#define _ERROR_H

#include "object/object.h"

namespace n__error {
	class C_error :public Object
	{
	public:
		C_error();
		int my_init(void *p=nullptr);
	};
}

using namespace n__error;

#endif
