#ifndef VPSRLVD_H
#define VPSRLVD_H

#include "object/object.h"

namespace n_VPSRLVD {
	class CVPSRLVD :public Object
	{
	public:
		CVPSRLVD();
		~CVPSRLVD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSRLVD;

#endif
