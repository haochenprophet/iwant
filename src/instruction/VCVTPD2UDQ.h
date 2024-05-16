#ifndef VCVTPD2UDQ_H
#define VCVTPD2UDQ_H

#include "object/object.h"

namespace n_VCVTPD2UDQ {
	class CVCVTPD2UDQ :public Object
	{
	public:
		CVCVTPD2UDQ();
		~CVCVTPD2UDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTPD2UDQ;

#endif
