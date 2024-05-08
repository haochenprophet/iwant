#ifndef VCVTQQ2PD_H
#define VCVTQQ2PD_H

#include "../object.h"

namespace n_VCVTQQ2PD {
	class CVCVTQQ2PD :public Object
	{
	public:
		CVCVTQQ2PD();
		~CVCVTQQ2PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTQQ2PD;

#endif
