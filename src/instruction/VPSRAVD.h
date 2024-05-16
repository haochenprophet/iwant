#ifndef VPSRAVD_H
#define VPSRAVD_H

#include "object/object.h"

namespace n_VPSRAVD {
	class CVPSRAVD :public Object
	{
	public:
		CVPSRAVD();
		~CVPSRAVD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSRAVD;

#endif
