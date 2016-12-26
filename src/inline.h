#ifndef INLINE_H
#define INLINE_H

#include "object.h"

namespace n_inline {
	class Cinline :public Object
	{
	public:
		Cinline();
		int my_init(void *p=nullptr);
	};
}

using namespace n_inline;

#endif
