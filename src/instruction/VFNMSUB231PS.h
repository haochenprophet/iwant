#ifndef VFNMSUB231PS_H
#define VFNMSUB231PS_H

#include "object/object.h"

namespace n_VFNMSUB231PS {
	class CVFNMSUB231PS :public Object
	{
	public:
		CVFNMSUB231PS();
		~CVFNMSUB231PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMSUB231PS;

#endif
