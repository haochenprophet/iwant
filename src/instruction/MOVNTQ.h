#ifndef MOVNTQ_H
#define MOVNTQ_H

#include "object/object.h"

namespace n_MOVNTQ {
	class CMOVNTQ :public Object
	{
	public:
		CMOVNTQ();
		~CMOVNTQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVNTQ;

#endif
