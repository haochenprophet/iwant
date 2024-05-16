#ifndef __BASED_H
#define __BASED_H

#include "object/object.h"

namespace n___based {
	class C__based :public Object
	{
	public:
		C__based();
		int my_init(void *p=nullptr);
	};
}

using namespace n___based;

#endif
