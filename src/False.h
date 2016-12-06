#ifndef FALSE_H
#define FALSE_H

#include "object.h"

namespace n_False {
	class CFalse :public Object
	{
	public:
		CFalse();
		int my_init(void *p=NULL);
	};
}

using namespace n_False;

#endif
