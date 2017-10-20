#ifndef BZHI_H
#define BZHI_H

#include "object.h"

namespace n_BZHI {
	class CBZHI :public Object
	{
	public:
		CBZHI();
		~CBZHI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BZHI;

#endif
