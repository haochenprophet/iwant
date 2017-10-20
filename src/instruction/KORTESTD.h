#ifndef KORTESTD_H
#define KORTESTD_H

#include "object.h"

namespace n_KORTESTD {
	class CKORTESTD :public Object
	{
	public:
		CKORTESTD();
		~CKORTESTD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KORTESTD;

#endif
