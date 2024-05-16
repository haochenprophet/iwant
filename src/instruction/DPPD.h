#ifndef DPPD_H
#define DPPD_H

#include "object/object.h"

namespace n_DPPD {
	class CDPPD :public Object
	{
	public:
		CDPPD();
		~CDPPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_DPPD;

#endif
