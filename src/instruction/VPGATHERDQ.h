#ifndef VPGATHERDQ_H
#define VPGATHERDQ_H

#include "object.h"

namespace n_VPGATHERDQ {
	class CVPGATHERDQ :public Object
	{
	public:
		CVPGATHERDQ();
		~CVPGATHERDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPGATHERDQ;

#endif
