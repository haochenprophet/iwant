#ifndef VPTERNLOGD_H
#define VPTERNLOGD_H

#include "object.h"

namespace n_VPTERNLOGD {
	class CVPTERNLOGD :public Object
	{
	public:
		CVPTERNLOGD();
		~CVPTERNLOGD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPTERNLOGD;

#endif
