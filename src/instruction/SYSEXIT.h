#ifndef SYSEXIT_H
#define SYSEXIT_H

#include "object/object.h"

namespace n_SYSEXIT {
	class CSYSEXIT :public Object
	{
	public:
		CSYSEXIT();
		~CSYSEXIT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SYSEXIT;

#endif
