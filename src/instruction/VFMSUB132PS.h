#ifndef VFMSUB132PS_H
#define VFMSUB132PS_H

#include "object/object.h"

namespace n_VFMSUB132PS {
	class CVFMSUB132PS :public Object
	{
	public:
		CVFMSUB132PS();
		~CVFMSUB132PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUB132PS;

#endif
