#ifndef VCVTTPD2QQ_H
#define VCVTTPD2QQ_H

#include "../object.h"

namespace n_VCVTTPD2QQ {
	class CVCVTTPD2QQ :public Object
	{
	public:
		CVCVTTPD2QQ();
		~CVCVTTPD2QQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTTPD2QQ;

#endif
