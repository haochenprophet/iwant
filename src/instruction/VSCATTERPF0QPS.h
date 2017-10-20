#ifndef VSCATTERPF0QPS_H
#define VSCATTERPF0QPS_H

#include "object.h"

namespace n_VSCATTERPF0QPS {
	class CVSCATTERPF0QPS :public Object
	{
	public:
		CVSCATTERPF0QPS();
		~CVSCATTERPF0QPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCATTERPF0QPS;

#endif
