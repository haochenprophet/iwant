#ifndef RORX_H
#define RORX_H

#include "object.h"

namespace n_RORX {
	class CRORX :public Object
	{
	public:
		CRORX();
		~CRORX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RORX;

#endif
