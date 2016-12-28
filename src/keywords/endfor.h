#ifndef ENDFOR_H
#define ENDFOR_H

#include "object.h"

namespace n_endfor {
	class Cendfor :public Object
	{
	public:
		Cendfor();
		int my_init(void *p=nullptr);
	};
}

using namespace n_endfor;

#endif
