#ifndef PSRAQ_H
#define PSRAQ_H

#include "object.h"

namespace n_PSRAQ {
	class CPSRAQ :public Object
	{
	public:
		CPSRAQ();
		~CPSRAQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSRAQ;

#endif
