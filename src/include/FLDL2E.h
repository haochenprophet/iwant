#ifndef FLDL2E_H
#define FLDL2E_H

#include "../object.h"

namespace n_FLDL2E {
	class CFLDL2E :public Object
	{
	public:
		CFLDL2E();
		~CFLDL2E();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FLDL2E;

#endif
