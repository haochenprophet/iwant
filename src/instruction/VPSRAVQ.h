#ifndef VPSRAVQ_H
#define VPSRAVQ_H

#include "../object.h"

namespace n_VPSRAVQ {
	class CVPSRAVQ :public Object
	{
	public:
		CVPSRAVQ();
		~CVPSRAVQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSRAVQ;

#endif
