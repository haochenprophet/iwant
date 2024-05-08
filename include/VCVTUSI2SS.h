#ifndef VCVTUSI2SS_H
#define VCVTUSI2SS_H

#include "../object.h"

namespace n_VCVTUSI2SS {
	class CVCVTUSI2SS :public Object
	{
	public:
		CVCVTUSI2SS();
		~CVCVTUSI2SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTUSI2SS;

#endif
