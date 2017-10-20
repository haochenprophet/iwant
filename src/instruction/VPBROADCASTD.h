#ifndef VPBROADCASTD_H
#define VPBROADCASTD_H

#include "object.h"

namespace n_VPBROADCASTD {
	class CVPBROADCASTD :public Object
	{
	public:
		CVPBROADCASTD();
		~CVPBROADCASTD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPBROADCASTD;

#endif
