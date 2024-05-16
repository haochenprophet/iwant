#ifndef PADDUSW_H
#define PADDUSW_H

#include "object/object.h"

namespace n_PADDUSW {
	class CPADDUSW :public Object
	{
	public:
		CPADDUSW();
		~CPADDUSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PADDUSW;

#endif
