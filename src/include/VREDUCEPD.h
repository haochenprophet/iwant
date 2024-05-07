#ifndef VREDUCEPD_H
#define VREDUCEPD_H

#include "../object.h"

namespace n_VREDUCEPD {
	class CVREDUCEPD :public Object
	{
	public:
		CVREDUCEPD();
		~CVREDUCEPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VREDUCEPD;

#endif
