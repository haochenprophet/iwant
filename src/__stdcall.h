#ifndef __STDCALL_H
#define __STDCALL_H

#include "object.h"

namespace n___stdcall {
	class C__stdcall :public Object
	{
	public:
		C__stdcall();
		int my_init(void *p=nullptr);
	};
}

using namespace n___stdcall;

#endif
