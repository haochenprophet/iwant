#ifndef VFMSUB213SS_H
#define VFMSUB213SS_H

#include "object.h"

namespace n_VFMSUB213SS {
	class CVFMSUB213SS :public Object
	{
	public:
		CVFMSUB213SS();
		~CVFMSUB213SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUB213SS;

#endif
