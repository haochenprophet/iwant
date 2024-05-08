#ifndef PMAXSB_H
#define PMAXSB_H

#include "../object.h"

namespace n_PMAXSB {
	class CPMAXSB :public Object
	{
	public:
		CPMAXSB();
		~CPMAXSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMAXSB;

#endif
