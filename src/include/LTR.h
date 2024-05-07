#ifndef LTR_H
#define LTR_H

#include "../object.h"

namespace n_LTR {
	class CLTR :public Object
	{
	public:
		CLTR();
		~CLTR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LTR;

#endif
