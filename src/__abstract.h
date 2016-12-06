#ifndef __ABSTRACT_H
#define __ABSTRACT_H

#include "object.h"

namespace n___abstract {
	class C__abstract :public Object
	{
	public:
		C__abstract();
		int my_init(void *p=NULL);
	};
}

using namespace n___abstract;

#endif
