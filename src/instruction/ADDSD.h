#ifndef ADDSD_H
#define ADDSD_H

#include "object/object.h"

namespace n_ADDSD {
	class CADDSD :public Object
	{
	public:
		CADDSD();
		~CADDSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ADDSD;

#endif
