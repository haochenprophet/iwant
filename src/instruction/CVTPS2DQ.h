#ifndef CVTPS2DQ_H
#define CVTPS2DQ_H

#include "object/object.h"

namespace n_CVTPS2DQ {
	class CCVTPS2DQ :public Object
	{
	public:
		CCVTPS2DQ();
		~CCVTPS2DQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTPS2DQ;

#endif
