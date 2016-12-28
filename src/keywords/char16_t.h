#ifndef CHAR16_T_H
#define CHAR16_T_H

#include "object.h"

namespace n_char16_t {
	class Cchar16_t :public Object
	{
	public:
		Cchar16_t();
		int my_init(void *p=nullptr);
	};
}

using namespace n_char16_t;

#endif
