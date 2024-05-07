#ifndef VPERMILPS_H
#define VPERMILPS_H

#include "../object.h"

namespace n_VPERMILPS {
	class CVPERMILPS :public Object
	{
	public:
		CVPERMILPS();
		~CVPERMILPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMILPS;

#endif
