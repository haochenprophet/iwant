#ifndef VGATHERPF1QPS_H
#define VGATHERPF1QPS_H

#include "object/object.h"

namespace n_VGATHERPF1QPS {
	class CVGATHERPF1QPS :public Object
	{
	public:
		CVGATHERPF1QPS();
		~CVGATHERPF1QPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGATHERPF1QPS;

#endif
