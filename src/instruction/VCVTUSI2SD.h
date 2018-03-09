#ifndef VCVTUSI2SD_H
#define VCVTUSI2SD_H

#include "../object.h"

namespace n_VCVTUSI2SD {
	class CVCVTUSI2SD :public Object
	{
	public:
		CVCVTUSI2SD();
		~CVCVTUSI2SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTUSI2SD;

#endif
