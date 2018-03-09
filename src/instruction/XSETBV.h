#ifndef XSETBV_H
#define XSETBV_H

#include "../object.h"

namespace n_XSETBV {
	class CXSETBV :public Object
	{
	public:
		CXSETBV();
		~CXSETBV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XSETBV;

#endif
