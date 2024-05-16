#ifndef VFMSUB213PS_H
#define VFMSUB213PS_H

#include "object/object.h"

namespace n_VFMSUB213PS {
	class CVFMSUB213PS :public Object
	{
	public:
		CVFMSUB213PS();
		~CVFMSUB213PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUB213PS;

#endif
