#ifndef __THISCALL_H
#define __THISCALL_H

#include "object.h"

namespace n___thiscall {
	class C__thiscall :public Object
	{
	public:
		C__thiscall();
		int my_init(void *p=NULL);
	};
}

using namespace n___thiscall;

#endif
