#ifndef VCOMPRESSPS_H
#define VCOMPRESSPS_H

#include "object/object.h"

namespace n_VCOMPRESSPS {
	class CVCOMPRESSPS :public Object
	{
	public:
		CVCOMPRESSPS();
		~CVCOMPRESSPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCOMPRESSPS;

#endif
