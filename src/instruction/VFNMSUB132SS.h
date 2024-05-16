#ifndef VFNMSUB132SS_H
#define VFNMSUB132SS_H

#include "object/object.h"

namespace n_VFNMSUB132SS {
	class CVFNMSUB132SS :public Object
	{
	public:
		CVFNMSUB132SS();
		~CVFNMSUB132SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMSUB132SS;

#endif
