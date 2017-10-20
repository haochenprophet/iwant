#ifndef VGATHERDPS_H
#define VGATHERDPS_H

#include "object.h"

namespace n_VGATHERDPS {
	class CVGATHERDPS :public Object
	{
	public:
		CVGATHERDPS();
		~CVGATHERDPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGATHERDPS;

#endif
