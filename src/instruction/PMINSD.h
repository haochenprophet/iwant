#ifndef PMINSD_H
#define PMINSD_H

#include "../object.h"

namespace n_PMINSD {
	class CPMINSD :public Object
	{
	public:
		CPMINSD();
		~CPMINSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMINSD;

#endif
