#ifndef MOVS_H
#define MOVS_H

#include "object/object.h"

namespace n_MOVS {
	class CMOVS :public Object
	{
	public:
		CMOVS();
		~CMOVS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVS;

#endif
