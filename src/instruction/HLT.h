#ifndef HLT_H
#define HLT_H

#include "object.h"

namespace n_HLT {
	class CHLT :public Object
	{
	public:
		CHLT();
		~CHLT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_HLT;

#endif
