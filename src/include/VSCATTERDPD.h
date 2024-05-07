#ifndef VSCATTERDPD_H
#define VSCATTERDPD_H

#include "../object.h"

namespace n_VSCATTERDPD {
	class CVSCATTERDPD :public Object
	{
	public:
		CVSCATTERDPD();
		~CVSCATTERDPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCATTERDPD;

#endif
