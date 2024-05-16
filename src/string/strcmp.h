#ifndef STRCMP_H
#define STRCMP_H

#include "object/object.h"

namespace n_strcmp {
	class Cstrcmp :public Object
	{
	public:
		Cstrcmp();
		~Cstrcmp();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strcmp;

#endif
