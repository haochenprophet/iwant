#ifndef VBLENDMPS_H
#define VBLENDMPS_H

#include "../object.h"

namespace n_VBLENDMPS {
	class CVBLENDMPS :public Object
	{
	public:
		CVBLENDMPS();
		~CVBLENDMPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VBLENDMPS;

#endif
