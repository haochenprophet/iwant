#ifndef IMUL_H
#define IMUL_H

#include "../object.h"

namespace n_IMUL {
	class CIMUL :public Object
	{
	public:
		CIMUL();
		~CIMUL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_IMUL;

#endif
