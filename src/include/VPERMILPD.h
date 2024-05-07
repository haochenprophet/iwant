#ifndef VPERMILPD_H
#define VPERMILPD_H

#include "../object.h"

namespace n_VPERMILPD {
	class CVPERMILPD :public Object
	{
	public:
		CVPERMILPD();
		~CVPERMILPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMILPD;

#endif
