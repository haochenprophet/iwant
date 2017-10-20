#ifndef VGATHERQPS_H
#define VGATHERQPS_H

#include "object.h"

namespace n_VGATHERQPS {
	class CVGATHERQPS :public Object
	{
	public:
		CVGATHERQPS();
		~CVGATHERQPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGATHERQPS;

#endif
