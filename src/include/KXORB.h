#ifndef KXORB_H
#define KXORB_H

#include "../object.h"

namespace n_KXORB {
	class CKXORB :public Object
	{
	public:
		CKXORB();
		~CKXORB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KXORB;

#endif
