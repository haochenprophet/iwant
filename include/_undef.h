#ifndef _UNDEF_H
#define _UNDEF_H

#include "../object.h"

namespace n__undef {
	class C_undef :public Object
	{
	public:
		C_undef();
		int my_init(void *p=nullptr);
	};
}

using namespace n__undef;

#endif
