#ifndef VFNMSUB213SS_H
#define VFNMSUB213SS_H

#include "object.h"

namespace n_VFNMSUB213SS {
	class CVFNMSUB213SS :public Object
	{
	public:
		CVFNMSUB213SS();
		~CVFNMSUB213SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMSUB213SS;

#endif
