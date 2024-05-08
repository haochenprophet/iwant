#ifndef FIMUL_H
#define FIMUL_H

#include "../object.h"

namespace n_FIMUL {
	class CFIMUL :public Object
	{
	public:
		CFIMUL();
		~CFIMUL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FIMUL;

#endif
