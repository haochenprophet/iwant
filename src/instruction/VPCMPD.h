#ifndef VPCMPD_H
#define VPCMPD_H

#include "object.h"

namespace n_VPCMPD {
	class CVPCMPD :public Object
	{
	public:
		CVPCMPD();
		~CVPCMPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPCMPD;

#endif
