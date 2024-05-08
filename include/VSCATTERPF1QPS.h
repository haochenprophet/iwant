#ifndef VSCATTERPF1QPS_H
#define VSCATTERPF1QPS_H

#include "../object.h"

namespace n_VSCATTERPF1QPS {
	class CVSCATTERPF1QPS :public Object
	{
	public:
		CVSCATTERPF1QPS();
		~CVSCATTERPF1QPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCATTERPF1QPS;

#endif
