#ifndef STRCSPN_H
#define STRCSPN_H

#include "object/object.h"

namespace n_strcspn {
	class Cstrcspn :public Object
	{
	public:
		Cstrcspn();
		~Cstrcspn();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strcspn;

#endif
