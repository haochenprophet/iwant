#ifndef MOVQ_H
#define MOVQ_H

#include "object/object.h"

namespace n_MOVQ {
	class CMOVQ :public Object
	{
	public:
		CMOVQ();
		~CMOVQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVQ;

#endif
