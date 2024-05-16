#ifndef VFIXUPIMMPS_H
#define VFIXUPIMMPS_H

#include "object/object.h"

namespace n_VFIXUPIMMPS {
	class CVFIXUPIMMPS :public Object
	{
	public:
		CVFIXUPIMMPS();
		~CVFIXUPIMMPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFIXUPIMMPS;

#endif
