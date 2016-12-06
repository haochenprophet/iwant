#ifndef COMPL_H
#define COMPL_H

#include "object.h"

namespace n_compl {
	class Ccompl :public Object
	{
	public:
		Ccompl();
		int my_init(void *p=NULL);
	};
}

using namespace n_compl;

#endif
