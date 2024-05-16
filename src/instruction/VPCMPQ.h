#ifndef VPCMPQ_H
#define VPCMPQ_H

#include "object/object.h"

namespace n_VPCMPQ {
	class CVPCMPQ :public Object
	{
	public:
		CVPCMPQ();
		~CVPCMPQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPCMPQ;

#endif
