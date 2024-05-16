#ifndef FSTP_H
#define FSTP_H

#include "object/object.h"

namespace n_FSTP {
	class CFSTP :public Object
	{
	public:
		CFSTP();
		~CFSTP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSTP;

#endif
