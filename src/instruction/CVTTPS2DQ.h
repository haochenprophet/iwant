#ifndef CVTTPS2DQ_H
#define CVTTPS2DQ_H

#include "object.h"

namespace n_CVTTPS2DQ {
	class CCVTTPS2DQ :public Object
	{
	public:
		CCVTTPS2DQ();
		~CCVTTPS2DQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTTPS2DQ;

#endif
