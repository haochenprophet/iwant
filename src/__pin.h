#ifndef __PIN_H
#define __PIN_H

#include "object.h"

namespace n___pin {
	class C__pin :public Object
	{
	public:
		C__pin();
		int my_init(void *p=NULL);
	};
}

using namespace n___pin;

#endif
