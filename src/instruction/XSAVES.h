#ifndef XSAVES_H
#define XSAVES_H

#include "../object.h"

namespace n_XSAVES {
	class CXSAVES :public Object
	{
	public:
		CXSAVES();
		~CXSAVES();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XSAVES;

#endif
