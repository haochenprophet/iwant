#ifndef DEFINE_H
#define DEFINE_H

#include "object.h"

namespace n_define {
	class Cdefine :public Object
	{
	public:
		Cdefine();
		int my_init(void *p=NULL);
	};
}

using namespace n_define;

#endif
