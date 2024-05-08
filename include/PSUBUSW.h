#ifndef PSUBUSW_H
#define PSUBUSW_H

#include "../object.h"

namespace n_PSUBUSW {
	class CPSUBUSW :public Object
	{
	public:
		CPSUBUSW();
		~CPSUBUSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSUBUSW;

#endif
