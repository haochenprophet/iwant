#ifndef VGETEXPPS_H
#define VGETEXPPS_H

#include "object/object.h"

namespace n_VGETEXPPS {
	class CVGETEXPPS :public Object
	{
	public:
		CVGETEXPPS();
		~CVGETEXPPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGETEXPPS;

#endif
