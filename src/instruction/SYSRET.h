#ifndef SYSRET_H
#define SYSRET_H

#include "object/object.h"

namespace n_SYSRET {
	class CSYSRET :public Object
	{
	public:
		CSYSRET();
		~CSYSRET();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SYSRET;

#endif
