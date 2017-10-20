#ifndef RDPMC_H
#define RDPMC_H

#include "object.h"

namespace n_RDPMC {
	class CRDPMC :public Object
	{
	public:
		CRDPMC();
		~CRDPMC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RDPMC;

#endif
