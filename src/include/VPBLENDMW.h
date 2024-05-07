#ifndef VPBLENDMW_H
#define VPBLENDMW_H

#include "../object.h"

namespace n_VPBLENDMW {
	class CVPBLENDMW :public Object
	{
	public:
		CVPBLENDMW();
		~CVPBLENDMW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPBLENDMW;

#endif
