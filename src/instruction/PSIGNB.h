#ifndef PSIGNB_H
#define PSIGNB_H

#include "object.h"

namespace n_PSIGNB {
	class CPSIGNB :public Object
	{
	public:
		CPSIGNB();
		~CPSIGNB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSIGNB;

#endif
