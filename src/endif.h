#ifndef ENDIF_H
#define ENDIF_H

#include "object.h"

namespace n_endif {
	class Cendif :public Object
	{
	public:
		Cendif();
		int my_init(void *p=nullptr);
	};
}

using namespace n_endif;

#endif
