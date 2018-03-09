#ifndef FLDZ_H
#define FLDZ_H

#include "../object.h"

namespace n_FLDZ {
	class CFLDZ :public Object
	{
	public:
		CFLDZ();
		~CFLDZ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FLDZ;

#endif
