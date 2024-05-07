#ifndef FSUBR_H
#define FSUBR_H

#include "../object.h"

namespace n_FSUBR {
	class CFSUBR :public Object
	{
	public:
		CFSUBR();
		~CFSUBR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSUBR;

#endif
