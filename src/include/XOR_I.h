#ifndef XOR_H
#define XOR_H

#include "../object.h"

namespace n_XOR {
	class CXOR :public Object
	{
	public:
		CXOR();
		~CXOR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XOR;

#endif
