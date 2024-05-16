#ifndef __VALUE_H
#define __VALUE_H

#include "object/object.h"

namespace n___value {
	class C__value :public Object
	{
	public:
		C__value();
		int my_init(void *p=nullptr);
	};
}

using namespace n___value;

#endif
