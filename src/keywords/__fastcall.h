#ifndef __FASTCALL_H
#define __FASTCALL_H

#include "object/object.h"

namespace n___fastcall {
	class C__fastcall :public Object
	{
	public:
		C__fastcall();
		int my_init(void *p=nullptr);
	};
}

using namespace n___fastcall;

#endif
