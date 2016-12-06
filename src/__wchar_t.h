#ifndef __WCHAR_T_H
#define __WCHAR_T_H

#include "object.h"

namespace n___wchar_t {
	class C__wchar_t :public Object
	{
	public:
		C__wchar_t();
		int my_init(void *p=NULL);
	};
}

using namespace n___wchar_t;

#endif
