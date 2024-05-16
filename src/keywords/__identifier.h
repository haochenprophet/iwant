#ifndef __IDENTIFIER_H
#define __IDENTIFIER_H

#include "object/object.h"

namespace n___identifier {
	class C__identifier :public Object
	{
	public:
		C__identifier();
		int my_init(void *p=nullptr);
	};
}

using namespace n___identifier;

#endif
