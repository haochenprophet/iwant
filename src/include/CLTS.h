#ifndef CLTS_H
#define CLTS_H

#include "../object.h"

namespace n_CLTS {
	class CCLTS :public Object
	{
	public:
		CCLTS();
		~CCLTS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CLTS;

#endif
