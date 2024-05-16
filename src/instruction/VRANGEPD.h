#ifndef VRANGEPD_H
#define VRANGEPD_H

#include "object/object.h"

namespace n_VRANGEPD {
	class CVRANGEPD :public Object
	{
	public:
		CVRANGEPD();
		~CVRANGEPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRANGEPD;

#endif
