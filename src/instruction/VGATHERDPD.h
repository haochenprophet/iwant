#ifndef VGATHERDPD_H
#define VGATHERDPD_H

#include "object/object.h"

namespace n_VGATHERDPD {
	class CVGATHERDPD :public Object
	{
	public:
		CVGATHERDPD();
		~CVGATHERDPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGATHERDPD;

#endif
