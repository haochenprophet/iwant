#ifndef __FINALLY_H
#define __FINALLY_H

#include "object.h"

namespace n___finally {
	class C__finally :public Object
	{
	public:
		C__finally();
		int my_init(void *p=NULL);
	};
}

using namespace n___finally;

#endif
