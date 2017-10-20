#ifndef CVTPD2PS_H
#define CVTPD2PS_H

#include "object.h"

namespace n_CVTPD2PS {
	class CCVTPD2PS :public Object
	{
	public:
		CCVTPD2PS();
		~CCVTPD2PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTPD2PS;

#endif
