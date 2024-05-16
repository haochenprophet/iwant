#ifndef AAD_H
#define AAD_H

#include "object/object.h"

namespace n_AAD {
	class CAAD :public Object
	{
	public:
		CAAD();
		~CAAD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_AAD;

#endif
