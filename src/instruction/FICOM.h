#ifndef FICOM_H
#define FICOM_H

#include "../object.h"

namespace n_FICOM {
	class CFICOM :public Object
	{
	public:
		CFICOM();
		~CFICOM();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FICOM;

#endif
