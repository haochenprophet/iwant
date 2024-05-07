#ifndef PXOR_H
#define PXOR_H

#include "../object.h"

namespace n_PXOR {
	class CPXOR :public Object
	{
	public:
		CPXOR();
		~CPXOR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PXOR;

#endif
