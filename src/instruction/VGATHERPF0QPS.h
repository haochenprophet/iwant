#ifndef VGATHERPF0QPS_H
#define VGATHERPF0QPS_H

#include "object/object.h"

namespace n_VGATHERPF0QPS {
	class CVGATHERPF0QPS :public Object
	{
	public:
		CVGATHERPF0QPS();
		~CVGATHERPF0QPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGATHERPF0QPS;

#endif
