#ifndef CVTPD2PI_H
#define CVTPD2PI_H

#include "object/object.h"

namespace n_CVTPD2PI {
	class CCVTPD2PI :public Object
	{
	public:
		CCVTPD2PI();
		~CCVTPD2PI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTPD2PI;

#endif
