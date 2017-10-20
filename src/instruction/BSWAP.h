#ifndef BSWAP_H
#define BSWAP_H

#include "object.h"

namespace n_BSWAP {
	class CBSWAP :public Object
	{
	public:
		CBSWAP();
		~CBSWAP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BSWAP;

#endif
