#ifndef CVTTPD2PI_H
#define CVTTPD2PI_H

#include "object/object.h"

namespace n_CVTTPD2PI {
	class CCVTTPD2PI :public Object
	{
	public:
		CCVTTPD2PI();
		~CCVTTPD2PI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTTPD2PI;

#endif
