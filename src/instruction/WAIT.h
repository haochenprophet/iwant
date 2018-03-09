#ifndef WAIT_H
#define WAIT_H

#include "../object.h"

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
