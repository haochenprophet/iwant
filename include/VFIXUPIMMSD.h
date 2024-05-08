#ifndef VFIXUPIMMSD_H
#define VFIXUPIMMSD_H

#include "../object.h"

namespace n_VFIXUPIMMSD {
	class CVFIXUPIMMSD :public Object
	{
	public:
		CVFIXUPIMMSD();
		~CVFIXUPIMMSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFIXUPIMMSD;

#endif
