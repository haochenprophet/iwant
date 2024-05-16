#ifndef CLAC_H
#define CLAC_H

#include "object/object.h"

namespace n_CLAC {
	class CCLAC :public Object
	{
	public:
		CCLAC();
		~CCLAC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CLAC;

#endif
