#ifndef CHAR32_T_H
#define CHAR32_T_H

#include "object.h"

namespace n_char32_t {
	class Cchar32_t :public Object
	{
	public:
		Cchar32_t();
		int my_init(void *p=nullptr);
	};
}

using namespace n_char32_t;

#endif
