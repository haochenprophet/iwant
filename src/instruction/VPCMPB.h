#ifndef VPCMPB_H
#define VPCMPB_H

#include "object.h"

namespace n_VPCMPB {
	class CVPCMPB :public Object
	{
	public:
		CVPCMPB();
		~CVPCMPB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPCMPB;

#endif
