#ifndef AESDEC_H
#define AESDEC_H

#include "object.h"

namespace n_AESDEC {
	class CAESDEC :public Object
	{
	public:
		CAESDEC();
		~CAESDEC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_AESDEC;

#endif
