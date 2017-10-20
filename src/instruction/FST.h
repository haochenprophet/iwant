#ifndef FST_H
#define FST_H

#include "object.h"

namespace n_FST {
	class CFST :public Object
	{
	public:
		CFST();
		~CFST();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FST;

#endif
