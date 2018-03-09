#ifndef CVTSS2SD_H
#define CVTSS2SD_H

#include "../object.h"

namespace n_CVTSS2SD {
	class CCVTSS2SD :public Object
	{
	public:
		CCVTSS2SD();
		~CCVTSS2SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTSS2SD;

#endif
