#ifndef _IFDEF_H
#define _IFDEF_H

#include "object.h"

namespace n__ifdef {
	class C_ifdef :public Object
	{
	public:
		C_ifdef();
		int my_init(void *p=NULL);
	};
}

using namespace n__ifdef;

#endif
