#ifndef CVTTPD2DQ_H
#define CVTTPD2DQ_H

#include "object.h"

namespace n_CVTTPD2DQ {
	class CCVTTPD2DQ :public Object
	{
	public:
		CCVTTPD2DQ();
		~CCVTTPD2DQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTTPD2DQ;

#endif
