#ifndef KANDW_H
#define KANDW_H

#include "object.h"

namespace n_KANDW {
	class CKANDW :public Object
	{
	public:
		CKANDW();
		~CKANDW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KANDW;

#endif
