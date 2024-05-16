#ifndef VPGATHERQQ_H
#define VPGATHERQQ_H

#include "object/object.h"

namespace n_VPGATHERQQ {
	class CVPGATHERQQ :public Object
	{
	public:
		CVPGATHERQQ();
		~CVPGATHERQQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPGATHERQQ;

#endif
