#ifndef VSCALEFPD_H
#define VSCALEFPD_H

#include "object.h"

namespace n_VSCALEFPD {
	class CVSCALEFPD :public Object
	{
	public:
		CVSCALEFPD();
		~CVSCALEFPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCALEFPD;

#endif
