#ifndef VPCOMPRESSD_H
#define VPCOMPRESSD_H

#include "object.h"

namespace n_VPCOMPRESSD {
	class CVPCOMPRESSD :public Object
	{
	public:
		CVPCOMPRESSD();
		~CVPCOMPRESSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPCOMPRESSD;

#endif
