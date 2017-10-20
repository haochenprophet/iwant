#ifndef MOVUPD_H
#define MOVUPD_H

#include "object.h"

namespace n_MOVUPD {
	class CMOVUPD :public Object
	{
	public:
		CMOVUPD();
		~CMOVUPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVUPD;

#endif
