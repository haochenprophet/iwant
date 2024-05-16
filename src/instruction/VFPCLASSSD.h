#ifndef VFPCLASSSD_H
#define VFPCLASSSD_H

#include "object/object.h"

namespace n_VFPCLASSSD {
	class CVFPCLASSSD :public Object
	{
	public:
		CVFPCLASSSD();
		~CVFPCLASSSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFPCLASSSD;

#endif
