#ifndef VPCOMPRESSQ_H
#define VPCOMPRESSQ_H

#include "object.h"

namespace n_VPCOMPRESSQ {
	class CVPCOMPRESSQ :public Object
	{
	public:
		CVPCOMPRESSQ();
		~CVPCOMPRESSQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPCOMPRESSQ;

#endif
