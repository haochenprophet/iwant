#ifndef XORPD_H
#define XORPD_H

#include "object.h"

namespace n_XORPD {
	class CXORPD :public Object
	{
	public:
		CXORPD();
		~CXORPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XORPD;

#endif
