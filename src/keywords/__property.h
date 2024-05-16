#ifndef __PROPERTY_H
#define __PROPERTY_H

#include "object/object.h"

namespace n___property {
	class C__property :public Object
	{
	public:
		C__property();
		int my_init(void *p=nullptr);
	};
}

using namespace n___property;

#endif
