#ifndef MOVQ2DQ_H
#define MOVQ2DQ_H

#include "object/object.h"

namespace n_MOVQ2DQ {
	class CMOVQ2DQ :public Object
	{
	public:
		CMOVQ2DQ();
		~CMOVQ2DQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVQ2DQ;

#endif
