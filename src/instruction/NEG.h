#ifndef NEG_H
#define NEG_H

#include "object.h"

namespace n_NEG {
	class CNEG :public Object
	{
	public:
		CNEG();
		~CNEG();
		int my_init(void *p=nullptr);
	};
}

using namespace n_NEG;

#endif
