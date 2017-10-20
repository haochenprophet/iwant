#ifndef VFIXUPIMMSS_H
#define VFIXUPIMMSS_H

#include "object.h"

namespace n_VFIXUPIMMSS {
	class CVFIXUPIMMSS :public Object
	{
	public:
		CVFIXUPIMMSS();
		~CVFIXUPIMMSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFIXUPIMMSS;

#endif
