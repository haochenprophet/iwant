#ifndef STRCHR_H
#define STRCHR_H

#include "object/object.h"

namespace n_strchr {
	class Cstrchr :public Object
	{
	public:
		Cstrchr();
		~Cstrchr();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strchr;

#endif
