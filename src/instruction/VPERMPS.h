#ifndef VPERMPS_H
#define VPERMPS_H

#include "object/object.h"

namespace n_VPERMPS {
	class CVPERMPS :public Object
	{
	public:
		CVPERMPS();
		~CVPERMPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMPS;

#endif
