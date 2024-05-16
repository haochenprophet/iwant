#ifndef FLDCW_H
#define FLDCW_H

#include "object/object.h"

namespace n_FLDCW {
	class CFLDCW :public Object
	{
	public:
		CFLDCW();
		~CFLDCW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FLDCW;

#endif
