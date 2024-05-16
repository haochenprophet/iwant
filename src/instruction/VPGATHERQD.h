#ifndef VPGATHERQD_H
#define VPGATHERQD_H

#include "object/object.h"

namespace n_VPGATHERQD {
	class CVPGATHERQD :public Object
	{
	public:
		CVPGATHERQD();
		~CVPGATHERQD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPGATHERQD;

#endif
