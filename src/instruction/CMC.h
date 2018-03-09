#ifndef CMC_H
#define CMC_H

#include "../object.h"

namespace n_CMC {
	class CCMC :public Object
	{
	public:
		CCMC();
		~CCMC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMC;

#endif
