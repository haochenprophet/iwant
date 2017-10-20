#ifndef PMOVSX_H
#define PMOVSX_H

#include "object.h"

namespace n_PMOVSX {
	class CPMOVSX :public Object
	{
	public:
		CPMOVSX();
		~CPMOVSX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMOVSX;

#endif
