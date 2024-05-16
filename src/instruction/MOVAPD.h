#ifndef MOVAPD_H
#define MOVAPD_H

#include "object/object.h"

namespace n_MOVAPD {
	class CMOVAPD :public Object
	{
	public:
		CMOVAPD();
		~CMOVAPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVAPD;

#endif
