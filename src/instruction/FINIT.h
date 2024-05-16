#ifndef FINIT_H
#define FINIT_H

#include "object/object.h"

namespace n_FINIT {
	class CFINIT :public Object
	{
	public:
		CFINIT();
		~CFINIT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FINIT;

#endif
