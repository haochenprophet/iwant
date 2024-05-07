#ifndef VPERMQ_H
#define VPERMQ_H

#include "../object.h"

namespace n_VPERMQ {
	class CVPERMQ :public Object
	{
	public:
		CVPERMQ();
		~CVPERMQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMQ;

#endif
