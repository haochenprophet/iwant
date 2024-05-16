#ifndef VEXP2PS_H
#define VEXP2PS_H

#include "object/object.h"

namespace n_VEXP2PS {
	class CVEXP2PS :public Object
	{
	public:
		CVEXP2PS();
		~CVEXP2PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXP2PS;

#endif
