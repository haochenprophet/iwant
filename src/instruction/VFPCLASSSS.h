#ifndef VFPCLASSSS_H
#define VFPCLASSSS_H

#include "object/object.h"

namespace n_VFPCLASSSS {
	class CVFPCLASSSS :public Object
	{
	public:
		CVFPCLASSSS();
		~CVFPCLASSSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFPCLASSSS;

#endif
