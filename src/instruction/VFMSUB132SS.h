#ifndef VFMSUB132SS_H
#define VFMSUB132SS_H

#include "object.h"

namespace n_VFMSUB132SS {
	class CVFMSUB132SS :public Object
	{
	public:
		CVFMSUB132SS();
		~CVFMSUB132SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUB132SS;

#endif
