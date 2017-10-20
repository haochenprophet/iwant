#ifndef VBLENDMPD_H
#define VBLENDMPD_H

#include "object.h"

namespace n_VBLENDMPD {
	class CVBLENDMPD :public Object
	{
	public:
		CVBLENDMPD();
		~CVBLENDMPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VBLENDMPD;

#endif
