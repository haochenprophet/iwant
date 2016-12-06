#ifndef _ERROR_H
#define _ERROR_H

#include "object.h"

namespace n__error {
	class C_error :public Object
	{
	public:
		C_error();
		int my_init(void *p=NULL);
	};
}

using namespace n__error;

#endif
