#ifndef MOVLPD_H
#define MOVLPD_H

#include "object/object.h"

namespace n_MOVLPD {
	class CMOVLPD :public Object
	{
	public:
		CMOVLPD();
		~CMOVLPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVLPD;

#endif
