#ifndef VEXPANDPS_H
#define VEXPANDPS_H

#include "object.h"

namespace n_VEXPANDPS {
	class CVEXPANDPS :public Object
	{
	public:
		CVEXPANDPS();
		~CVEXPANDPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXPANDPS;

#endif
