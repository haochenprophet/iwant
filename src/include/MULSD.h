#ifndef MULSD_H
#define MULSD_H

#include "../object.h"

namespace n_MULSD {
	class CMULSD :public Object
	{
	public:
		CMULSD();
		~CMULSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MULSD;

#endif
