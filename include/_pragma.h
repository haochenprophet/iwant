#ifndef _PRAGMA_H
#define _PRAGMA_H

#include "../object.h"

namespace n__pragma {
	class C_pragma :public Object
	{
	public:
		C_pragma();
		int my_init(void *p=nullptr);
	};
}

using namespace n__pragma;

#endif
