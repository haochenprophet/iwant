#ifndef VPROLVQ_H
#define VPROLVQ_H

#include "object.h"

namespace n_VPROLVQ {
	class CVPROLVQ :public Object
	{
	public:
		CVPROLVQ();
		~CVPROLVQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPROLVQ;

#endif
