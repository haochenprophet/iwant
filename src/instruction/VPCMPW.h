#ifndef VPCMPW_H
#define VPCMPW_H

#include "object/object.h"

namespace n_VPCMPW {
	class CVPCMPW :public Object
	{
	public:
		CVPCMPW();
		~CVPCMPW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPCMPW;

#endif
