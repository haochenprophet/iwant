#ifndef VPSCATTERDQ_H
#define VPSCATTERDQ_H

#include "object/object.h"

namespace n_VPSCATTERDQ {
	class CVPSCATTERDQ :public Object
	{
	public:
		CVPSCATTERDQ();
		~CVPSCATTERDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSCATTERDQ;

#endif
