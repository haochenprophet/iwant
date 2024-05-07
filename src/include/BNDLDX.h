#ifndef BNDLDX_H
#define BNDLDX_H

#include "../object.h"

namespace n_BNDLDX {
	class CBNDLDX :public Object
	{
	public:
		CBNDLDX();
		~CBNDLDX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BNDLDX;

#endif
