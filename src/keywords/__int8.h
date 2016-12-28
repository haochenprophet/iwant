#ifndef __INT8_H
#define __INT8_H

#include "object.h"

namespace n___int8 {
	class C__int8 :public Object
	{
	public:
		C__int8();
		int my_init(void *p=nullptr);
	};
}

using namespace n___int8;

#endif
