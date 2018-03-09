#ifndef CALL_H
#define CALL_H

#include "../object.h"

namespace n_CALL {
	class CCALL :public Object
	{
	public:
		CCALL();
		~CCALL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CALL;

#endif
