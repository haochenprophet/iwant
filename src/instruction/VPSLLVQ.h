#ifndef VPSLLVQ_H
#define VPSLLVQ_H

#include "object.h"

namespace n_VPSLLVQ {
	class CVPSLLVQ :public Object
	{
	public:
		CVPSLLVQ();
		~CVPSLLVQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSLLVQ;

#endif
