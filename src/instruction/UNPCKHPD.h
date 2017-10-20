#ifndef UNPCKHPD_H
#define UNPCKHPD_H

#include "object.h"

namespace n_UNPCKHPD {
	class CUNPCKHPD :public Object
	{
	public:
		CUNPCKHPD();
		~CUNPCKHPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_UNPCKHPD;

#endif
