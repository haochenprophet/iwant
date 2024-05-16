#ifndef __ASSUME_H
#define __ASSUME_H

#include "object/object.h"

namespace n___assume {
	class C__assume :public Object
	{
	public:
		C__assume();
		int my_init(void *p=nullptr);
	};
}

using namespace n___assume;

#endif
