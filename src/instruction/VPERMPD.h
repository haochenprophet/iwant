#ifndef VPERMPD_H
#define VPERMPD_H

#include "object.h"

namespace n_VPERMPD {
	class CVPERMPD :public Object
	{
	public:
		CVPERMPD();
		~CVPERMPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMPD;

#endif
