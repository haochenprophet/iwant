#ifndef FABS_H
#define FABS_H

#include "object/object.h"

namespace n_FABS {
	class CFABS :public Object
	{
	public:
		CFABS();
		~CFABS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FABS;

#endif
