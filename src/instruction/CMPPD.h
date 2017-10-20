#ifndef CMPPD_H
#define CMPPD_H

#include "object.h"

namespace n_CMPPD {
	class CCMPPD :public Object
	{
	public:
		CCMPPD();
		~CCMPPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMPPD;

#endif
