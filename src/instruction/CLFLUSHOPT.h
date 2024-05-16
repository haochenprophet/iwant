#ifndef CLFLUSHOPT_H
#define CLFLUSHOPT_H

#include "object/object.h"

namespace n_CLFLUSHOPT {
	class CCLFLUSHOPT :public Object
	{
	public:
		CCLFLUSHOPT();
		~CCLFLUSHOPT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CLFLUSHOPT;

#endif
