#ifndef CVTPD2DQ_H
#define CVTPD2DQ_H

#include "../object.h"

namespace n_CVTPD2DQ {
	class CCVTPD2DQ :public Object
	{
	public:
		CCVTPD2DQ();
		~CCVTPD2DQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTPD2DQ;

#endif
