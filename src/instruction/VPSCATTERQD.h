#ifndef VPSCATTERQD_H
#define VPSCATTERQD_H

#include "object/object.h"

namespace n_VPSCATTERQD {
	class CVPSCATTERQD :public Object
	{
	public:
		CVPSCATTERQD();
		~CVPSCATTERQD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSCATTERQD;

#endif
