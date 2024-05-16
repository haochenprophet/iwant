#ifndef VPBLENDD_H
#define VPBLENDD_H

#include "object/object.h"

namespace n_VPBLENDD {
	class CVPBLENDD :public Object
	{
	public:
		CVPBLENDD();
		~CVPBLENDD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPBLENDD;

#endif
