#ifndef WAIT_I_H
#define WAIT_I_H

#include "object/object.h"

namespace n_WAIT {
	class CWAIT :public Object
	{
	public:
		CWAIT();
		~CWAIT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_WAIT;

#endif
