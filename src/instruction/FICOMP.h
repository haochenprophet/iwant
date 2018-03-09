#ifndef FICOMP_H
#define FICOMP_H

#include "../object.h"

namespace n_FICOMP {
	class CFICOMP :public Object
	{
	public:
		CFICOMP();
		~CFICOMP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FICOMP;

#endif
