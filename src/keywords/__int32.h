#ifndef __INT32_H
#define __INT32_H

#include "../object.h"

namespace n___int32 {
	class C__int32 :public Object
	{
	public:
		C__int32();
		int my_init(void *p=nullptr);
	};
}

using namespace n___int32;

#endif
