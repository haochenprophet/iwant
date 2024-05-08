#ifndef VFNMSUB132PS_H
#define VFNMSUB132PS_H

#include "../object.h"

namespace n_VFNMSUB132PS {
	class CVFNMSUB132PS :public Object
	{
	public:
		CVFNMSUB132PS();
		~CVFNMSUB132PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMSUB132PS;

#endif
