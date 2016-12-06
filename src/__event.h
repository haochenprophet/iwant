#ifndef __EVENT_H
#define __EVENT_H

#include "object.h"

namespace n___event {
	class C__event :public Object
	{
	public:
		C__event();
		int my_init(void *p=NULL);
	};
}

using namespace n___event;

#endif
