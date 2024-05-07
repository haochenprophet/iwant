#ifndef FXCH_H
#define FXCH_H

#include "../object.h"

namespace n_FXCH {
	class CFXCH :public Object
	{
	public:
		CFXCH();
		~CFXCH();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FXCH;

#endif
