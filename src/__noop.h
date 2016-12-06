#ifndef __NOOP_H
#define __NOOP_H

#include "object.h"

namespace n___noop {
	class C__noop :public Object
	{
	public:
		C__noop();
		int my_init(void *p=NULL);
	};
}

using namespace n___noop;

#endif
