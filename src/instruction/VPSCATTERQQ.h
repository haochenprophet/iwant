#ifndef VPSCATTERQQ_H
#define VPSCATTERQQ_H

#include "object/object.h"

namespace n_VPSCATTERQQ {
	class CVPSCATTERQQ :public Object
	{
	public:
		CVPSCATTERQQ();
		~CVPSCATTERQQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSCATTERQQ;

#endif
