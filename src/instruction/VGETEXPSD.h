#ifndef VGETEXPSD_H
#define VGETEXPSD_H

#include "object/object.h"

namespace n_VGETEXPSD {
	class CVGETEXPSD :public Object
	{
	public:
		CVGETEXPSD();
		~CVGETEXPSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGETEXPSD;

#endif
