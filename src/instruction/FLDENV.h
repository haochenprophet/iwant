#ifndef FLDENV_H
#define FLDENV_H

#include "object/object.h"

namespace n_FLDENV {
	class CFLDENV :public Object
	{
	public:
		CFLDENV();
		~CFLDENV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FLDENV;

#endif
