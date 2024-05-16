#ifndef VCVTPD2QQ_H
#define VCVTPD2QQ_H

#include "object/object.h"

namespace n_VCVTPD2QQ {
	class CVCVTPD2QQ :public Object
	{
	public:
		CVCVTPD2QQ();
		~CVCVTPD2QQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTPD2QQ;

#endif
