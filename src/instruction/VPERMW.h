#ifndef VPERMW_H
#define VPERMW_H

#include "object/object.h"

namespace n_VPERMW {
	class CVPERMW :public Object
	{
	public:
		CVPERMW();
		~CVPERMW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMW;

#endif
