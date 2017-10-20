#ifndef JMP_H
#define JMP_H

#include "object.h"

namespace n_JMP {
	class CJMP :public Object
	{
	public:
		CJMP();
		~CJMP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_JMP;

#endif
