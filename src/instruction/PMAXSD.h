#ifndef PMAXSD_H
#define PMAXSD_H

#include "object/object.h"

namespace n_PMAXSD {
	class CPMAXSD :public Object
	{
	public:
		CPMAXSD();
		~CPMAXSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMAXSD;

#endif
