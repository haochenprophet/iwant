#ifndef PEXTRW_H
#define PEXTRW_H

#include "../object.h"

namespace n_PEXTRW {
	class CPEXTRW :public Object
	{
	public:
		CPEXTRW();
		~CPEXTRW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PEXTRW;

#endif
