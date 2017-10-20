#ifndef LODSD_H
#define LODSD_H

#include "object.h"

namespace n_LODSD {
	class CLODSD :public Object
	{
	public:
		CLODSD();
		~CLODSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LODSD;

#endif
