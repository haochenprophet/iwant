#ifndef XRSTORS_H
#define XRSTORS_H

#include "../object.h"

namespace n_XRSTORS {
	class CXRSTORS :public Object
	{
	public:
		CXRSTORS();
		~CXRSTORS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XRSTORS;

#endif
