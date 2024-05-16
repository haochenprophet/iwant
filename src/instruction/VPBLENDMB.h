#ifndef VPBLENDMB_H
#define VPBLENDMB_H

#include "object/object.h"

namespace n_VPBLENDMB {
	class CVPBLENDMB :public Object
	{
	public:
		CVPBLENDMB();
		~CVPBLENDMB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPBLENDMB;

#endif
