#ifndef PMOVMSKB_H
#define PMOVMSKB_H

#include "object/object.h"

namespace n_PMOVMSKB {
	class CPMOVMSKB :public Object
	{
	public:
		CPMOVMSKB();
		~CPMOVMSKB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMOVMSKB;

#endif
