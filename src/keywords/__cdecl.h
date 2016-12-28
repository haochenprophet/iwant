#ifndef __CDECL_H
#define __CDECL_H

#include "object.h"

namespace n___cdecl {
	class C__cdecl :public Object
	{
	public:
		C__cdecl();
		int my_init(void *p=nullptr);
	};
}

using namespace n___cdecl;

#endif
