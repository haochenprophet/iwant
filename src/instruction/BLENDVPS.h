#ifndef BLENDVPS_H
#define BLENDVPS_H

#include "object/object.h"

namespace n_BLENDVPS {
	class CBLENDVPS :public Object
	{
	public:
		CBLENDVPS();
		~CBLENDVPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BLENDVPS;

#endif
