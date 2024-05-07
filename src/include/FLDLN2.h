#ifndef FLDLN2_H
#define FLDLN2_H

#include "../object.h"

namespace n_FLDLN2 {
	class CFLDLN2 :public Object
	{
	public:
		CFLDLN2();
		~CFLDLN2();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FLDLN2;

#endif
