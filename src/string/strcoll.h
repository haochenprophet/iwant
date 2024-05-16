#ifndef STRCOLL_H
#define STRCOLL_H

#include "object/object.h"

namespace n_strcoll {
	class Cstrcoll :public Object
	{
	public:
		Cstrcoll();
		~Cstrcoll();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strcoll;

#endif
