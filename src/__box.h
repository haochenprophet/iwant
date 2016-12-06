#ifndef __BOX_H
#define __BOX_H

#include "object.h"

namespace n___box {
	class C__box :public Object
	{
	public:
		C__box();
		int my_init(void *p=NULL);
	};
}

using namespace n___box;

#endif
