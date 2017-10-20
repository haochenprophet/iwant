#ifndef VFPCLASSPS_H
#define VFPCLASSPS_H

#include "object.h"

namespace n_VFPCLASSPS {
	class CVFPCLASSPS :public Object
	{
	public:
		CVFPCLASSPS();
		~CVFPCLASSPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFPCLASSPS;

#endif
