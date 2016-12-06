#ifndef __ALIGNOF_H
#define __ALIGNOF_H

#include "object.h"

namespace n___alignof {
	class C__alignof :public Object
	{
	public:
		C__alignof();
		int my_init(void *p=NULL);
	};
}

using namespace n___alignof;

#endif
