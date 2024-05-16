#ifndef EXTERN_H
#define EXTERN_H

#include "object/object.h"

namespace n_extern {
	class Cextern :public Object
	{
	public:
		Cextern();
		int my_init(void *p=nullptr);
	};
}

using namespace n_extern;

#endif
