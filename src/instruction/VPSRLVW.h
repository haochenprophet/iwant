#ifndef VPSRLVW_H
#define VPSRLVW_H

#include "object.h"

namespace n_VPSRLVW {
	class CVPSRLVW :public Object
	{
	public:
		CVPSRLVW();
		~CVPSRLVW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSRLVW;

#endif
