#ifndef VCOMPRESSPD_H
#define VCOMPRESSPD_H

#include "object.h"

namespace n_VCOMPRESSPD {
	class CVCOMPRESSPD :public Object
	{
	public:
		CVCOMPRESSPD();
		~CVCOMPRESSPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCOMPRESSPD;

#endif
