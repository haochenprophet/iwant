#ifndef __W64_H
#define __W64_H

#include "object.h"

namespace n___w64 {
	class C__w64 :public Object
	{
	public:
		C__w64();
		int my_init(void *p=NULL);
	};
}

using namespace n___w64;

#endif
