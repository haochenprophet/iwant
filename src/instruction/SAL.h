#ifndef SAL_H
#define SAL_H

#include "object/object.h"

namespace n_SAL {
	class CSAL :public Object
	{
	public:
		CSAL();
		~CSAL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SAL;

#endif
