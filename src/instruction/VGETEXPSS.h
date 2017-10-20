#ifndef VGETEXPSS_H
#define VGETEXPSS_H

#include "object.h"

namespace n_VGETEXPSS {
	class CVGETEXPSS :public Object
	{
	public:
		CVGETEXPSS();
		~CVGETEXPSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGETEXPSS;

#endif
