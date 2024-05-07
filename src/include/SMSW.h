#ifndef SMSW_H
#define SMSW_H

#include "../object.h"

namespace n_SMSW {
	class CSMSW :public Object
	{
	public:
		CSMSW();
		~CSMSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SMSW;

#endif
