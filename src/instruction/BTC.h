#ifndef BTC_H
#define BTC_H

#include "object.h"

namespace n_BTC {
	class CBTC :public Object
	{
	public:
		CBTC();
		~CBTC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BTC;

#endif
