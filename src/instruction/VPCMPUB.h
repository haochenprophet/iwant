#ifndef VPCMPUB_H
#define VPCMPUB_H

#include "../object.h"

namespace n_VPCMPUB {
	class CVPCMPUB :public Object
	{
	public:
		CVPCMPUB();
		~CVPCMPUB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPCMPUB;

#endif
