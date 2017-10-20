#ifndef WRFSBASE_H
#define WRFSBASE_H

#include "object.h"

namespace n_WRFSBASE {
	class CWRFSBASE :public Object
	{
	public:
		CWRFSBASE();
		~CWRFSBASE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_WRFSBASE;

#endif
