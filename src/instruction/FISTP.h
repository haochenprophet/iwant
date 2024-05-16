#ifndef FISTP_H
#define FISTP_H

#include "object/object.h"

namespace n_FISTP {
	class CFISTP :public Object
	{
	public:
		CFISTP();
		~CFISTP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FISTP;

#endif
