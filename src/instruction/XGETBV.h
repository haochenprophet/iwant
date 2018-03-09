#ifndef XGETBV_H
#define XGETBV_H

#include "../object.h"

namespace n_XGETBV {
	class CXGETBV :public Object
	{
	public:
		CXGETBV();
		~CXGETBV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XGETBV;

#endif
