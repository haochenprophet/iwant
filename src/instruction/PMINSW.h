#ifndef PMINSW_H
#define PMINSW_H

#include "object.h"

namespace n_PMINSW {
	class CPMINSW :public Object
	{
	public:
		CPMINSW();
		~CPMINSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMINSW;

#endif
