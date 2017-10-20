#ifndef SLDT_H
#define SLDT_H

#include "object.h"

namespace n_SLDT {
	class CSLDT :public Object
	{
	public:
		CSLDT();
		~CSLDT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SLDT;

#endif
