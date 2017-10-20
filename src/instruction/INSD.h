#ifndef INSD_H
#define INSD_H

#include "object.h"

namespace n_INSD {
	class CINSD :public Object
	{
	public:
		CINSD();
		~CINSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_INSD;

#endif
