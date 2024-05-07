#ifndef BNDSTX_H
#define BNDSTX_H

#include "../object.h"

namespace n_BNDSTX {
	class CBNDSTX :public Object
	{
	public:
		CBNDSTX();
		~CBNDSTX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BNDSTX;

#endif
