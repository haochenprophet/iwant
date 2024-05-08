#ifndef LLDT_H
#define LLDT_H

#include "../object.h"

namespace n_LLDT {
	class CLLDT :public Object
	{
	public:
		CLLDT();
		~CLLDT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LLDT;

#endif
