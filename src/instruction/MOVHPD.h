#ifndef MOVHPD_H
#define MOVHPD_H

#include "object/object.h"

namespace n_MOVHPD {
	class CMOVHPD :public Object
	{
	public:
		CMOVHPD();
		~CMOVHPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVHPD;

#endif
