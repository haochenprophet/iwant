#ifndef __EXCEPT_H
#define __EXCEPT_H

#include "object.h"

namespace n___except {
	class C__except :public Object
	{
	public:
		C__except();
		int my_init(void *p=nullptr);
	};
}

using namespace n___except;

#endif
