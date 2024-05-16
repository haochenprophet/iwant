#ifndef VFNMSUB213PS_H
#define VFNMSUB213PS_H

#include "object/object.h"

namespace n_VFNMSUB213PS {
	class CVFNMSUB213PS :public Object
	{
	public:
		CVFNMSUB213PS();
		~CVFNMSUB213PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMSUB213PS;

#endif
