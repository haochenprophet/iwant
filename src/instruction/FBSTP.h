#ifndef FBSTP_H
#define FBSTP_H

#include "object/object.h"

namespace n_FBSTP {
	class CFBSTP :public Object
	{
	public:
		CFBSTP();
		~CFBSTP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FBSTP;

#endif
