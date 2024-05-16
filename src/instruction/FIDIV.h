#ifndef FIDIV_H
#define FIDIV_H

#include "object/object.h"

namespace n_FIDIV {
	class CFIDIV :public Object
	{
	public:
		CFIDIV();
		~CFIDIV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FIDIV;

#endif
