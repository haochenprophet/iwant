#ifndef MULX_H
#define MULX_H

#include "../object.h"

namespace n_MULX {
	class CMULX :public Object
	{
	public:
		CMULX();
		~CMULX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MULX;

#endif
