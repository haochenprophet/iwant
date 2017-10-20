#ifndef VEXPANDPD_H
#define VEXPANDPD_H

#include "object.h"

namespace n_VEXPANDPD {
	class CVEXPANDPD :public Object
	{
	public:
		CVEXPANDPD();
		~CVEXPANDPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXPANDPD;

#endif
