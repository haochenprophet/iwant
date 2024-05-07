#ifndef __INT64_H
#define __INT64_H

#include "../object.h"

namespace n___int64 {
	class C__int64 :public Object
	{
	public:
		C__int64();
		int my_init(void *p=nullptr);
	};
}

using namespace n___int64;

#endif
