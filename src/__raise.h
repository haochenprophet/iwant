#ifndef __RAISE_H
#define __RAISE_H

#include "object.h"

namespace n___raise {
	class C__raise :public Object
	{
	public:
		C__raise();
		int my_init(void *p=NULL);
	};
}

using namespace n___raise;

#endif
