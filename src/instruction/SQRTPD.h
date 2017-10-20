#ifndef SQRTPD_H
#define SQRTPD_H

#include "object.h"

namespace n_SQRTPD {
	class CSQRTPD :public Object
	{
	public:
		CSQRTPD();
		~CSQRTPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SQRTPD;

#endif
