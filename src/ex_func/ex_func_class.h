#ifndef EX_FUNC_CLASS_H
#define EX_FUNC_CLASS_H

#include "object/object.h"

namespace n_ex_func {
	class Cex_func :public Object
	{
	public:
		Cex_func();
		int my_init(void *p=nullptr);
	};
}
using namespace n_ex_func;

#endif