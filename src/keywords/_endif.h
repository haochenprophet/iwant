#ifndef _ENDIF_H
#define _ENDIF_H

#include "../object.h"

namespace n__endif {
	class C_endif :public Object
	{
	public:
		C_endif();
		int my_init(void *p=nullptr);
	};
}

using namespace n__endif;

#endif
