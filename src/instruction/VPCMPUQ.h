#ifndef VPCMPUQ_H
#define VPCMPUQ_H

#include "../object.h"

namespace n_VPCMPUQ {
	class CVPCMPUQ :public Object
	{
	public:
		CVPCMPUQ();
		~CVPCMPUQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPCMPUQ;

#endif
