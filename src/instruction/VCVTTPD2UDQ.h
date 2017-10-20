#ifndef VCVTTPD2UDQ_H
#define VCVTTPD2UDQ_H

#include "object.h"

namespace n_VCVTTPD2UDQ {
	class CVCVTTPD2UDQ :public Object
	{
	public:
		CVCVTTPD2UDQ();
		~CVCVTTPD2UDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTTPD2UDQ;

#endif
