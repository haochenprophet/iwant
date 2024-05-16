#ifndef MOVSD_H
#define MOVSD_H

#include "object/object.h"

namespace n_MOVSD {
	class CMOVSD :public Object
	{
	public:
		CMOVSD();
		~CMOVSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVSD;

#endif
